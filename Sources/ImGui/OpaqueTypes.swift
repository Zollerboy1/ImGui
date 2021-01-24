//
//  OpaqueTypes.swift
//  
//
//  Created by Josef Zoller on 22.10.20.
//

public struct ImGuiContext {
    public let pointer: OpaquePointer

    public init(pointer: OpaquePointer) {
        self.pointer = pointer
    }
}

public struct ImGuiStoragePair {
    public let pointer: OpaquePointer

    public init(pointer: OpaquePointer) {
        self.pointer = pointer
    }
}

public struct ImGuiTextRange {
    public let pointer: OpaquePointer

    public init(pointer: OpaquePointer) {
        self.pointer = pointer
    }
}
