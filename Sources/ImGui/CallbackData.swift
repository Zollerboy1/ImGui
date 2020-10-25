//
//  CallbackData.swift
//  ImGui
//
//  Created by Josef Zoller on 23.10.20.
//

import cImGui

public struct ImGuiSizeCallbackData {
    /// Read-only. Window position, for reference.
    public let position: CImVec2

    /// Read-only. Current window size.
    public let currentSize: CImVec2

    private let _desiredSize: UnsafeMutablePointer<CImVec2>

    /// Read-write. Desired size, based on user's mouse position. Write to this field to restrain resizing.
    public var desiredSize: CImVec2 {
        get {
            self._desiredSize.pointee
        }
        set {
            self._desiredSize.pointee = newValue
        }
    }

    internal init(position: CImVec2, currentSize: CImVec2, _desiredSize: UnsafeMutablePointer<CImVec2>) {
        self.position = position
        self.currentSize = currentSize
        self._desiredSize = _desiredSize
    }
}


public struct ImGuiInputTextCallbackData {
    /// Read-only. One ImGuiInputTextFlags_Callback*
    public let eventFlag: ImGuiInputTextFlags

    /// Read-only. What user passed to InputText()
    public let flags: ImGuiInputTextFlags

    private let _eventChar: UnsafeMutablePointer<CImWchar>

    /// Read-write. Character input
    /// [CharFilter] Replace character with another one, or set to zero to drop. return 1 is equivalent to setting EventChar=0;
    public var eventChar: Character {
        get {
            .init(Unicode.Scalar(self._eventChar.pointee)!)
        }
        set {
            self._eventChar.pointee = CImWchar(newValue.unicodeScalars.first!.value)
        }
    }

    /// Read-only. Key pressed (Up/Down/TAB)
    /// [Completion,History]
    public let eventKey: CImGuiKey

    internal let _buf: UnsafeMutablePointer<UnsafeMutablePointer<Int8>>
    internal let _bufTextLength: UnsafeMutablePointer<Int32>

    internal let _bufSize: Int32

    internal let _bufDirty: UnsafeMutablePointer<Bool>

    /// Read-write. Text buffer
    /// - [Resize] Can replace pointer
    /// - [Completion,History,Always] Only write to pointed data, don't replace the actual pointer!
    public var buffer: Substring {
        get {
            let substring = Substring(cString: self._buf.pointee)
            assert(substring.utf8.count == self._bufTextLength.pointee)

            return substring
        }
        set {
            let count = newValue.utf8.count

            assert(count < self._bufSize)

            newValue.withCString { pointer in
                self._buf.pointee.assign(from: pointer, count: count)
            }

            self._bufTextLength.pointee = Int32(count)
            self._bufDirty.pointee = true
        }
    }

    internal let _cursorPos: UnsafeMutablePointer<Int32>

    /// Read-write
    /// [Completion,History,Always]
    public var cursorPosition: Int {
        get {
            Int(self._cursorPos.pointee)
        }
        set {
            self._cursorPos.pointee = Int32(newValue)
        }
    }

    internal let _selectionStart: UnsafeMutablePointer<Int32>
    internal let _selectionEnd: UnsafeMutablePointer<Int32>

    /// Read-write
    /// [Completion,History,Always] selection.count == 0 when no selection
    public var selection: Range<Int> {
        get {
            Int(self._selectionStart.pointee)..<Int(self._selectionEnd.pointee)
        }
        set {
            self._selectionStart.pointee = Int32(newValue.lowerBound)
            self._selectionEnd.pointee = Int32(newValue.upperBound)
        }
    }

    public func selectAll() {
        self._selectionStart.pointee = 0
        self._selectionEnd.pointee = self._bufTextLength.pointee
    }

    public func clearSelection() {
        self._selectionStart.pointee = self._bufTextLength.pointee
        self._selectionEnd.pointee = self._bufTextLength.pointee
    }

    public func hasSelection() -> Bool {
        self._selectionStart.pointee == self._selectionEnd.pointee
    }

    internal init(eventFlag: ImGuiInputTextFlags, flags: ImGuiInputTextFlags, _eventChar: UnsafeMutablePointer<CImWchar>, eventKey: CImGuiKey, _buf: UnsafeMutablePointer<UnsafeMutablePointer<Int8>>, _bufTextLength: UnsafeMutablePointer<Int32>, _bufSize: Int32, _bufDirty: UnsafeMutablePointer<Bool>, _cursorPos: UnsafeMutablePointer<Int32>, _selectionStart: UnsafeMutablePointer<Int32>, _selectionEnd: UnsafeMutablePointer<Int32>) {
        self.eventFlag = eventFlag
        self.flags = flags
        self._eventChar = _eventChar
        self.eventKey = eventKey
        self._buf = _buf
        self._bufTextLength = _bufTextLength
        self._bufSize = _bufSize
        self._bufDirty = _bufDirty
        self._cursorPos = _cursorPos
        self._selectionStart = _selectionStart
        self._selectionEnd = _selectionEnd
    }
}
