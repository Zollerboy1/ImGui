//
//  PointerConversionHelpers.swift
//  Falcon
//
//  Created by Josef Zoller on 20.02.20.
//

extension UnsafePointer {
    subscript<T>(_ keyPath: KeyPath<Pointee, T>) -> UnsafePointer<T> {
        let raw = UnsafeRawPointer(self)
        // If a key path is not directly-addressable I consider it programmer error
        let offset = MemoryLayout<Pointee>.offset(of: keyPath)!
        return raw.advanced(by: offset).assumingMemoryBound(to: T.self)
    }
}

extension UnsafeMutablePointer {
    subscript<T>(_ keyPath: KeyPath<Pointee, T>) -> UnsafeMutablePointer<T> {
        let raw = UnsafeMutableRawPointer(self)
        // If a key path is not directly-addressable I consider it programmer error
        let offset = MemoryLayout<Pointee>.offset(of: keyPath)!
        return raw.advanced(by: offset).assumingMemoryBound(to: T.self)
    }
}



func scan<S : Sequence, U>(_ seq: S, _ initial: U, _ combine: (U, S.Iterator.Element) -> U) -> [U] {
  var result: [U] = []
  result.reserveCapacity(seq.underestimatedCount)
  var runningResult = initial
  for element in seq {
    runningResult = combine(runningResult, element)
    result.append(runningResult)
  }
  return result
}

public func withArrayOfCStrings<R>(_ args: [String], _ body: ([UnsafePointer<Int8>?]) throws -> R) rethrows -> R {
    let argsCounts = Array(args.map { $0.utf8.count + 1 })
    let argsOffsets = [ 0 ] + scan(argsCounts, 0, +)
    let argsBufferSize = argsOffsets.last!

    var argsBuffer: [UInt8] = []
    argsBuffer.reserveCapacity(argsBufferSize)
    for arg in args {
        argsBuffer.append(contentsOf: arg.utf8)
        argsBuffer.append(0)
    }

    return try argsBuffer.withUnsafeBufferPointer { argsBuffer in
        let ptr = UnsafeRawPointer(argsBuffer.baseAddress!).bindMemory(to: Int8.self, capacity: argsBuffer.count)
        var cStrings: [UnsafePointer<Int8>?] = argsOffsets.map { ptr + $0 }
        cStrings[cStrings.count - 1] = nil
        return  try body(cStrings)
    }
}

public func withArrayOfMutableCStrings<R>(_ args: [String], _ body: ([UnsafeMutablePointer<Int8>?]) throws -> R) rethrows -> R {
    let argsCounts = Array(args.map { $0.utf8.count + 1 })
    let argsOffsets = [ 0 ] + scan(argsCounts, 0, +)
    let argsBufferSize = argsOffsets.last!

    var argsBuffer: [UInt8] = []
    argsBuffer.reserveCapacity(argsBufferSize)
    for arg in args {
        argsBuffer.append(contentsOf: arg.utf8)
        argsBuffer.append(0)
    }

    return try argsBuffer.withUnsafeMutableBufferPointer { argsBuffer in
        let ptr = UnsafeMutableRawPointer(argsBuffer.baseAddress!).bindMemory(to: Int8.self, capacity: argsBuffer.count)
        var cStrings: [UnsafeMutablePointer<Int8>?] = argsOffsets.map { ptr + $0 }
        cStrings[cStrings.count - 1] = nil
        return  try body(cStrings)
    }
}


public protocol PointerProvider {
    associatedtype Value

    var valueCount: Int { get }

    func withUnsafePointer<R>(_ body: (UnsafePointer<Value>) throws -> R) rethrows -> R
}

public protocol MutablePointerProvider: PointerProvider {
    mutating func withUnsafeMutablePointer<R>(_ body: (UnsafeMutablePointer<Value>) throws -> R) rethrows -> R
}

extension Array: MutablePointerProvider {
    public var valueCount: Int { self.count }

    public func withUnsafePointer<R>(_ body: (UnsafePointer<Element>) throws -> R) rethrows -> R {
        try self.withUnsafeBufferPointer {
            try body($0.baseAddress!)
        }
    }

    public mutating func withUnsafeMutablePointer<R>(_ body: (UnsafeMutablePointer<Element>) throws -> R) rethrows -> R {
        try self.withUnsafeMutableBufferPointer {
            try body($0.baseAddress!)
        }
    }
}
