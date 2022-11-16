//
//  Enums.swift
//  Falcon
//
//  Created by Josef Zoller on 25.10.20.
//

import cImGui

public enum ImGuiColor: Int32 {
    case text
    case textDisabled
    case windowBg
    case childBg
    case popupBg
    case border
    case borderShadow
    case frameBg
    case frameBgHovered
    case frameBgActive
    case titleBg
    case titleBgActive
    case titleBgCollapsed
    case menuBarBg
    case scrollbarBg
    case scrollbarGrab
    case scrollbarGrabHovered
    case scrollbarGrabActive
    case checkMark
    case sliderGrab
    case sliderGrabActive
    case button
    case buttonHovered
    case buttonActive
    case header
    case headerHovered
    case headerActive
    case separator
    case separatorHovered
    case separatorActive
    case resizeGrip
    case resizeGripHovered
    case resizeGripActive
    case tab
    case tabHovered
    case tabActive
    case tabUnfocused
    case tabUnfocusedActive
    case dockingPreview
    case dockingEmptyBg
    case plotLines
    case plotLinesHovered
    case plotHistogram
    case plotHistogramHovered
    case tableHeaderBg
    case tableBorderStrong
    case tableBorderLight
    case tableRowBg
    case tableRowBgAlt
    case textSelectedBg
    case dragDropTarget
    case navHighlight
    case navWindowingHighlight
    case navWindowingDimBg
    case modalWindowDimBg
    case COUNT
}

public enum ImGuiCondition: Int32 {
    case none = 0
    case always = 1
    case once = 2
    case firstUseEver = 4
    case appearing = 8
}

public enum ImGuiDirection: Int32 {
    case none = -1
    case left = 0
    case right = 1
    case up = 2
    case down = 3
    case COUNT
}

public enum ImGuiKey: Int32 {
    case none = 0
    case tab = 512
    case leftArrow
    case rightArrow
    case upArrow
    case downArrow
    case pageUp
    case pageDown
    case home
    case end
    case insert
    case delete
    case backspace
    case space
    case enter
    case escape
    case leftCtrl, leftShift, leftAlt, leftSuper
    case rightCtrl, rightShift, rightAlt, rightSuper
    case menu
    case _0, _1, _2, _3, _4, _5, _6, _7, _8, _9
    case a, b, c, d, e, f, g, h, i, j
    case k, l, m, n, o, p, q, r, s, t
    case u, v, w, x, y, z
    case f1, f2, f3, f4, f5, f6
    case f7, f8, f9, f10, f11, f12
    case apostrophe
    case comma
    case minus
    case period
    case slash
    case semicolon
    case equal
    case leftBracket
    case backslash
    case rightBracket
    case graveAccent
    case capsLock
    case scrollLock
    case numLock
    case printScreen
    case pause
    case keypad0, keypad1, keypad2, keypad3, keypad4
    case keypad5, keypad6, keypad7, keypad8, keypad9
    case keypadDecimal
    case keypadDivide
    case keypadMultiply
    case keypadSubtract
    case keypadAdd
    case keypadEnter
    case keypadEqual
    case gamepadStart
    case gamepadBack
    case gamepadFaceLeft
    case gamepadFaceRight
    case gamepadFaceUp
    case gamepadFaceDown
    case gamepadDpadLeft
    case gamepadDpadRight
    case gamepadDpadUp
    case gamepadDpadDown
    case gamepadL1
    case gamepadR1
    case gamepadL2
    case gamepadR2
    case gamepadL3
    case gamepadR3
    case gamepadLStickLeft
    case gamepadLStickRight
    case gamepadLStickUp
    case gamepadLStickDown
    case gamepadRStickLeft
    case gamepadRStickRight
    case gamepadRStickUp
    case gamepadRStickDown

    case mouseLeft, mouseRight, mouseMiddle, mouseX1, mouseX2, mouseWheelX, mouseWheelY

    case reservedForModCtrl, reservedForModShift, reservedForModAlt, reservedForModSuper
    case COUNT
}

public enum ImGuiMouseButton: Int32 {
    case left = 0
    case right = 1
    case middle = 2
    case COUNT = 5
}

public enum ImGuiMouseCursor: Int32 {
    case none = -1
    case arrow = 0
    case textInput
    case resizeAll
    case resizeNS
    case resizeEW
    case resizeNESW
    case resizeNWSE
    case hand
    case notAllowed
    case COUNT
}

public enum ImGuiSortDirection: Int32 {
    case none = 0
    case ascending = 1
    case descending = 2
}

public enum ImGuiStyleVar: Int32 {
    case alpha
    case disabledAlpha
    case windowPadding
    case windowRounding
    case windowBorderSize
    case windowMinSize
    case windowTitleAlign
    case childRounding
    case childBorderSize
    case popupRounding
    case popupBorderSize
    case framePadding
    case frameRounding
    case frameBorderSize
    case itemSpacing
    case itemInnerSpacing
    case indentSpacing
    case cellPadding
    case scrollbarSize
    case scrollbarRounding
    case grabMinSize
    case grabRounding
    case tabRounding
    case buttonTextAlign
    case selectableTextAlign
    case COUNT
}

public enum ImGuiTableBackgroundTarget: Int32 {
    case none = 0
    case rowBackground0 = 1
    case rowBackground1 = 2
    case cellBackground = 3
}
