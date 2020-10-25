//
//  ImVector+MemberFunctions.swift
//  Falcon
//
//  Created by Josef Zoller on 01.10.20.
//

import cImGui

public protocol ImVectorProtocol {
    associatedtype Element

    var Size: Int32 { get set }
    var Capacity: Int32 { get set }
    var Data: UnsafeMutablePointer<Element>! { get set }
}

public extension ImVectorProtocol {
    var isEmpty: Bool { Size == 0 }

    var size: Int {
        get { Int(Size) }
        set { Size = Int32(newValue) }
    }
    var sizeInBytes: Int { Int(Size) * MemoryLayout<Element>.size }
    var maxSize: Int { 0x7FFFFFFF / MemoryLayout<Element>.size }

    var capacity: Int {
        get { Int(Capacity) }
        set { Capacity = Int32(newValue) }
    }
    subscript(i: Int) -> Element {
        get {
            precondition(i < Size)
            return Data[i]
        } set {
            precondition(i < Size)
            Data[i] = newValue
        }
    }

    mutating func clear() {
        if Data != nil {
            Size = 0
            Capacity = 0
            igMemFree(Data)
            Data = nil
        }
    }

    var begin: UnsafeMutablePointer<Element> { Data }
    var end: UnsafeMutablePointer<Element> { Data + size }

    var front: Element { precondition(Size > 0); return Data[0] }
    var back: Element { precondition(Size > 0); return Data[size - 1] }

    mutating func swap(with rhs: inout Self) {
        Swift.swap(&Size, &rhs.Size)
        Swift.swap(&Capacity, &rhs.Capacity)
        Swift.swap(&Data, &rhs.Data)
    }

    nonmutating private func growCapacity(forSize size: Int) -> Int {
        let newCapacity = Capacity > 0 ? (capacity + capacity / 2) : 8
        return newCapacity > size ? newCapacity : size
    }

    mutating func resize(to newSize: Int) {
        if newSize > Capacity {
            reserve(capacity: growCapacity(forSize: newSize))
        }

        size = newSize
    }

    mutating func resize(to newSize: Int, withDefault value: Element) {
        if newSize > Capacity {
            reserve(capacity: growCapacity(forSize: newSize))
        }

        if newSize > Size {
            for i in size..<newSize {
                Data[i] = value
            }
        }

        size = newSize
    }

    mutating func shrink(to newSize: Int) {
        precondition(newSize <= Size)
        size = newSize
    }

    mutating func reserve(capacity newCapacity: Int) {
        guard newCapacity > Capacity else { return }

        let newData = igMemAlloc(newCapacity * MemoryLayout<Element>.size)!.assumingMemoryBound(to: Element.self)

        if Data != nil {
            newData.initialize(from: Data, count: size * MemoryLayout<Element>.size)
            igMemFree(Data)
        }
        Data = newData
        capacity = newCapacity
    }

    // NB: It is illegal to call push_back/push_front/insert with a reference pointing inside the ImVector data itself! e.g. v.push_back(v[10]) is forbidden.
    mutating func pushBack(_ value: Element) {
        if Size == Capacity {
            reserve(capacity: growCapacity(forSize: size + 1))
        }
        Data[size] = value
        Size += 1
    }

    mutating func popBack() {
        precondition(Size > 0)
        Size -= 1
    }

    mutating func pushFront(_ value: Element) {
        if Size == 0 {
            pushBack(value)
        } else {
            insert(value, at: Data)
        }
    }

    @discardableResult
    mutating func erase(at it: UnsafeMutablePointer<Element>) -> UnsafeMutablePointer<Element> {
        precondition(it >= Data && it < Data + size)

        let offset = it - Data
        Data.advanced(by: offset).moveInitialize(from: Data.advanced(by: offset + 1), count: size - offset - 1)
        Size -= 1

        return Data + offset
    }

    @discardableResult
    mutating func erase(at it: UnsafePointer<Element>) -> UnsafeMutablePointer<Element> {
        precondition(it >= UnsafePointer(Data) && it < UnsafePointer(Data) + size)

        let offset = it - UnsafePointer(Data)
        Data.advanced(by: offset).moveInitialize(from: Data.advanced(by: offset + 1), count: size - offset - 1)
        Size -= 1

        return Data + offset
    }

    @discardableResult
    mutating func erase(from it: UnsafeMutablePointer<Element>, to itLast: UnsafeMutablePointer<Element>) -> UnsafeMutablePointer<Element> {
        precondition(it >= Data && it < Data + size && itLast > it && itLast <= Data + size)

        let count = itLast - it
        let offset = it - Data
        Data.advanced(by: offset).moveInitialize(from: Data.advanced(by: offset + count), count: size - offset - count)
        size -= count

        return Data + offset
    }

    @discardableResult
    mutating func erase(from it: UnsafePointer<Element>, to itLast: UnsafePointer<Element>) -> UnsafeMutablePointer<Element> {
        precondition(it >= UnsafePointer(Data) && it < UnsafePointer(Data) + size && itLast > it && itLast <= UnsafePointer(Data) + size)

        let count = itLast - it
        let offset = it - UnsafePointer(Data)
        Data.advanced(by: offset).moveInitialize(from: Data.advanced(by: offset + count), count: size - offset - count)
        size -= count

        return Data + offset
    }

    @discardableResult
    mutating func eraseUnsorted(at it: UnsafeMutablePointer<Element>) -> UnsafeMutablePointer<Element> {
        precondition(it >= Data && it < Data + size)

        let offset = it - Data

        if it < Data + size - 1 {
            Data.advanced(by: offset).moveInitialize(from: Data.advanced(by: size - 1), count: 1)
        }
        Size -= 1

        return Data + offset
    }

    @discardableResult
    mutating func eraseUnsorted(at it: UnsafePointer<Element>) -> UnsafeMutablePointer<Element> {
        precondition(it >= UnsafePointer(Data) && it < UnsafePointer(Data) + size)

        let offset = it - UnsafePointer(Data)

        if it < UnsafePointer(Data) + size - 1 {
            Data.advanced(by: offset).moveInitialize(from: Data.advanced(by: size - 1), count: 1)
        }
        Size -= 1

        return Data + offset
    }

    @discardableResult
    mutating func insert(_ value: Element, at it: UnsafeMutablePointer<Element>) -> UnsafeMutablePointer<Element> {
        precondition(it >= Data && it < Data + size)

        let offset = it - Data

        if Size == Capacity {
            reserve(capacity: growCapacity(forSize: size + 1))
        }

        if offset < size {
            Data.advanced(by: offset + 1).moveInitialize(from: Data.advanced(by: offset), count: size - offset)
        }

        Data[offset] = value
        Size += 1

        return Data + offset
    }

    @discardableResult
    mutating func insert(_ value: Element, at it: UnsafePointer<Element>) -> UnsafeMutablePointer<Element> {
        precondition(it >= UnsafePointer(Data) && it < UnsafePointer(Data) + size)

        let offset = it - UnsafePointer(Data)

        if Size == Capacity {
            reserve(capacity: growCapacity(forSize: size + 1))
        }

        if offset < size {
            Data.advanced(by: offset + 1).moveInitialize(from: Data.advanced(by: offset), count: size - offset)
        }

        Data[offset] = value
        Size += 1

        return Data + offset
    }

    nonmutating func contains(where predicate: (Element) -> Bool) -> Bool {
        if isEmpty {
            return false
        }

        var data = Data!

        while data < end {
            if predicate(data.pointee) {
                return true
            }

            data += 1
        }

        return false
    }

    mutating func find(where predicate: (Element) -> Bool) -> UnsafeMutablePointer<Element> {
        if isEmpty {
            return end
        }

        var data = Data!

        while data < end {
            if predicate(data.pointee) {
                break
            }

            data += 1
        }

        return data
    }

    @discardableResult
    mutating func erase(where predicate: (Element) -> Bool) -> Bool {
        let it = find(where: predicate)

        if it < Data + size {
            erase(at: it)
            return true
        }

        return false
    }

    @discardableResult
    mutating func eraseUnsorted(where predicate: (Element) -> Bool) -> Bool {
        let it = find(where: predicate)

        if it < Data + size {
            eraseUnsorted(at: it)
            return true
        }

        return false
    }

    nonmutating func index(from it: UnsafeMutablePointer<Element>) -> Int {
        precondition(it >= Data && it < Data + size)

        return it - Data
    }

    nonmutating func index(from it: UnsafePointer<Element>) -> Int {
        precondition(it >= UnsafePointer(Data) && it < UnsafePointer(Data) + size)

        return it - UnsafePointer(Data)
    }
}

extension ImVectorProtocol where Element: Equatable {
    nonmutating func contains(_ value: Element) -> Bool {
        if isEmpty {
            return false
        }

        var data = Data!

        while data < end {
            if data.pointee == value {
                return true
            }

            data += 1
        }

        return false
    }

    mutating func find(_ value: Element) -> UnsafeMutablePointer<Element> {
        if isEmpty {
            return end
        }

        var data = Data!

        while data < end {
            if data.pointee == value {
                break
            }

            data += 1
        }

        return data
    }

    @discardableResult
    mutating func erase(_ value: Element) -> Bool {
        let it = find(value)

        if it < Data + size {
            erase(at: it)
            return true
        }

        return false
    }

    @discardableResult
    mutating func eraseUnsorted(_ value: Element) -> Bool {
        let it = find(value)

        if it < Data + size {
            eraseUnsorted(at: it)
            return true
        }

        return false
    }
}


extension CImVector_CImDrawChannel: ImVectorProtocol {}
extension CImVector_CImDrawCmd: ImVectorProtocol {}
extension CImVector_CImDrawIdx: ImVectorProtocol {}
extension CImVector_CImDrawVert: ImVectorProtocol {}
extension CImVector_CImFontPtr: ImVectorProtocol {}
extension CImVector_CImFontAtlasCustomRect: ImVectorProtocol {}
extension CImVector_CImFontConfig: ImVectorProtocol {}
extension CImVector_CImFontGlyph: ImVectorProtocol {}
extension CImVector_CImGuiPlatformMonitor: ImVectorProtocol {}
extension CImVector_CImGuiViewportPtr: ImVectorProtocol {}
extension CImVector_CImTextureID: ImVectorProtocol {}
extension CImVector_CImU32: ImVectorProtocol {}
extension CImVector_CImVec2: ImVectorProtocol {}
extension CImVector_CImVec4: ImVectorProtocol {}
extension CImVector_CImWchar: ImVectorProtocol {}
extension CImVector_char: ImVectorProtocol {}
extension CImVector_float: ImVectorProtocol {}
