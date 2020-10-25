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
    case textSelectedBg
    case dragDropTarget
    case navHighlight
    case navWindowingHighlight
    case navWindowingDimBg
    case modalWindowDimBg
    case count
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
    case count
}

public enum ImGuiKey: Int32 {
    case tab
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
    case keyPadEnter
    case a
    case c
    case v
    case x
    case y
    case z
    case count
}

public enum ImGuiNavInput: Int32 {
    case activate
    case cancel
    case input
    case menu
    case dpadLeft
    case dpadRight
    case dpadUp
    case dpadDown
    case lStickLeft
    case lStickRight
    case lStickUp
    case lStickDown
    case focusPrev
    case focusNext
    case tweakSlow
    case tweakFast

    //Internal
    case _keyMenu
    case _keyLeft
    case _keyRight
    case _keyUp
    case _keyDown
    case count
}

public enum ImGuiMouseButton: Int32 {
    case left = 0
    case right = 1
    case middle = 2
    case count = 5
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
    case count
}

public enum ImGuiStyleVar: Int32 {
    case alpha
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
    case scrollbarSize
    case scrollbarRounding
    case grabMinSize
    case grabRounding
    case tabRounding
    case buttonTextAlign
    case selectableTextAlign
    case count
}
