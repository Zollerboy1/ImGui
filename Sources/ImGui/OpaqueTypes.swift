//
//  File.swift
//  
//
//  Created by Josef Zoller on 22.10.20.
//

public struct ImGuiContext {
    @usableFromInline
    internal let pointer: OpaquePointer

    @usableFromInline
    internal init(pointer: OpaquePointer) {
        self.pointer = pointer
    }
}

public struct ImGuiStoragePair {
    @usableFromInline
    internal let pointer: OpaquePointer

    @usableFromInline
    internal init(pointer: OpaquePointer) {
        self.pointer = pointer
    }
}

public struct ImGuiTextRange {
    @usableFromInline
    internal let pointer: OpaquePointer

    @usableFromInline
    internal init(pointer: OpaquePointer) {
        self.pointer = pointer
    }
}
