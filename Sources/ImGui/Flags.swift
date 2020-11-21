//
//  Flags.swift
//  Falcon
//
//  Created by Josef Zoller on 25.10.20.
//

public struct ImDrawCornerFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let topLeft = ImDrawCornerFlags(rawValue: 1 << 0)
    public static let topRight = ImDrawCornerFlags(rawValue: 1 << 1)
    public static let botLeft = ImDrawCornerFlags(rawValue: 1 << 2)
    public static let botRight = ImDrawCornerFlags(rawValue: 1 << 3)

    public static let top: Self = [.topLeft, .topRight]
    public static let bot: Self = [.botLeft, .botRight]
    public static let left: Self = [.topLeft, .botLeft]
    public static let right: Self = [.topRight, .botRight]

    public static let all = ImDrawCornerFlags(rawValue: 0xF)
}

public struct ImDrawListFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let antiAliasedLines = ImDrawListFlags(rawValue: 1 << 0)
    public static let antiAliasedLinesUseTex = ImDrawListFlags(rawValue: 1 << 1)
    public static let antiAliasedFill = ImDrawListFlags(rawValue: 1 << 2)
    public static let allowVtxOffset = ImDrawListFlags(rawValue: 1 << 3)
}

public struct ImFontAtlasFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let noPowerOfTwoHeight = ImFontAtlasFlags(rawValue: 1 << 0)
    public static let noMouseCursors = ImFontAtlasFlags(rawValue: 1 << 1)
    public static let noBakedLines = ImFontAtlasFlags(rawValue: 1 << 2)
}

public struct ImGuiBackendFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let hasGamepad = ImGuiBackendFlags(rawValue: 1 << 0)
    public static let hasMouseCursors = ImGuiBackendFlags(rawValue: 1 << 1)
    public static let hasSetMousePos = ImGuiBackendFlags(rawValue: 1 << 2)
    public static let rendererHasVtxOffset = ImGuiBackendFlags(rawValue: 1 << 3)
    public static let platformHasViewports = ImGuiBackendFlags(rawValue: 1 << 10)
    public static let hasMouseHoveredViewport = ImGuiBackendFlags(rawValue: 1 << 11)
    public static let rendererHasViewports = ImGuiBackendFlags(rawValue: 1 << 12)
}

public struct ImGuiButtonFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let mouseButtonLeft = ImGuiButtonFlags(rawValue: 1 << 0)
    public static let mouseButtonRight = ImGuiButtonFlags(rawValue: 1 << 1)
    public static let mouseButtonMiddle = ImGuiButtonFlags(rawValue: 1 << 2)
}

public struct ImGuiColorEditFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let noAlpha = ImGuiColorEditFlags(rawValue: 1 << 1)
    public static let noPicker = ImGuiColorEditFlags(rawValue: 1 << 2)
    public static let noOptions = ImGuiColorEditFlags(rawValue: 1 << 3)
    public static let noSmallPreview = ImGuiColorEditFlags(rawValue: 1 << 4)
    public static let noInputs = ImGuiColorEditFlags(rawValue: 1 << 5)
    public static let noTooltip = ImGuiColorEditFlags(rawValue: 1 << 6)
    public static let noLabel = ImGuiColorEditFlags(rawValue: 1 << 7)
    public static let noSidePreview = ImGuiColorEditFlags(rawValue: 1 << 8)
    public static let noDragDrop = ImGuiColorEditFlags(rawValue: 1 << 9)
    public static let noBorder = ImGuiColorEditFlags(rawValue: 1 << 10)
    public static let alphaBar = ImGuiColorEditFlags(rawValue: 1 << 16)
    public static let alphaPreview = ImGuiColorEditFlags(rawValue: 1 << 17)
    public static let alphaPreviewHalf = ImGuiColorEditFlags(rawValue: 1 << 18)
    public static let hDR = ImGuiColorEditFlags(rawValue: 1 << 19)
    public static let displayRGB = ImGuiColorEditFlags(rawValue: 1 << 20)
    public static let displayHSV = ImGuiColorEditFlags(rawValue: 1 << 21)
    public static let displayHex = ImGuiColorEditFlags(rawValue: 1 << 22)
    public static let uint8 = ImGuiColorEditFlags(rawValue: 1 << 23)
    public static let float = ImGuiColorEditFlags(rawValue: 1 << 24)
    public static let pickerHueBar = ImGuiColorEditFlags(rawValue: 1 << 25)
    public static let pickerHueWheel = ImGuiColorEditFlags(rawValue: 1 << 26)
    public static let inputRGB = ImGuiColorEditFlags(rawValue: 1 << 27)
    public static let inputHSV = ImGuiColorEditFlags(rawValue: 1 << 28)
}

public struct ImGuiConfigFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let navEnableKeyboard = ImGuiConfigFlags(rawValue: 1 << 0)
    public static let navEnableGamepad = ImGuiConfigFlags(rawValue: 1 << 1)
    public static let navEnableSetMousePos = ImGuiConfigFlags(rawValue: 1 << 2)
    public static let navNoCaptureKeyboard = ImGuiConfigFlags(rawValue: 1 << 3)
    public static let noMouse = ImGuiConfigFlags(rawValue: 1 << 4)
    public static let noMouseCursorChange = ImGuiConfigFlags(rawValue: 1 << 5)
    public static let dockingEnable = ImGuiConfigFlags(rawValue: 1 << 6)
    public static let viewportsEnable = ImGuiConfigFlags(rawValue: 1 << 10)
    public static let dpiEnableScaleViewports = ImGuiConfigFlags(rawValue: 1 << 14)
    public static let dpiEnableScaleFonts = ImGuiConfigFlags(rawValue: 1 << 15)
    public static let isSRGB = ImGuiConfigFlags(rawValue: 1 << 20)
    public static let isTouchScreen = ImGuiConfigFlags(rawValue: 1 << 21)
}

public struct ImGuiComboFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let popupAlignLeft = ImGuiComboFlags(rawValue: 1 << 0)
    public static let heightSmall = ImGuiComboFlags(rawValue: 1 << 1)
    public static let heightRegular = ImGuiComboFlags(rawValue: 1 << 2)
    public static let heightLarge = ImGuiComboFlags(rawValue: 1 << 3)
    public static let heightLargest = ImGuiComboFlags(rawValue: 1 << 4)
    public static let noArrowButton = ImGuiComboFlags(rawValue: 1 << 5)
    public static let noPreview = ImGuiComboFlags(rawValue: 1 << 6)

    public static let heightMask: Self = [.heightSmall, .heightRegular, .heightLarge, heightLargest]
}

public struct ImGuiDockNodeFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let keepAliveOnly = ImGuiDockNodeFlags(rawValue: 1 << 0)
    public static let noDockingInCentralNode = ImGuiDockNodeFlags(rawValue: 1 << 2)
    public static let passthruCentralNode = ImGuiDockNodeFlags(rawValue: 1 << 3)
    public static let noSplit = ImGuiDockNodeFlags(rawValue: 1 << 4)
    public static let noResize = ImGuiDockNodeFlags(rawValue: 1 << 5)
    public static let autoHideTabBar = ImGuiDockNodeFlags(rawValue: 1 << 6)
}

public struct ImGuiDragDropFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let sourceNoPreviewTooltip = ImGuiDragDropFlags(rawValue: 1 << 0)
    public static let sourceNoDisableHover = ImGuiDragDropFlags(rawValue: 1 << 1)
    public static let sourceNoHoldToOpenOthers = ImGuiDragDropFlags(rawValue: 1 << 2)
    public static let sourceAllowNullID = ImGuiDragDropFlags(rawValue: 1 << 3)
    public static let sourceExtern = ImGuiDragDropFlags(rawValue: 1 << 4)
    public static let sourceAutoExpirePayload = ImGuiDragDropFlags(rawValue: 1 << 5)
    public static let acceptBeforeDelivery = ImGuiDragDropFlags(rawValue: 1 << 10)
    public static let acceptNoDrawDefaultRect = ImGuiDragDropFlags(rawValue: 1 << 11)
    public static let acceptNoPreviewTooltip = ImGuiDragDropFlags(rawValue: 1 << 12)

    public static let acceptPeekOnly: Self = [.acceptBeforeDelivery, .acceptNoDrawDefaultRect]
}

public struct ImGuiFocusedFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let childWindows = ImGuiFocusedFlags(rawValue: 1 << 0)
    public static let rootWindow = ImGuiFocusedFlags(rawValue: 1 << 1)
    public static let anyWindow = ImGuiFocusedFlags(rawValue: 1 << 2)

    public static let rootAndChildWindows: Self = [.rootWindow, .childWindows]
}

public struct ImGuiHoveredFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let childWindows = ImGuiHoveredFlags(rawValue: 1 << 0)
    public static let rootWindow = ImGuiHoveredFlags(rawValue: 1 << 1)
    public static let anyWindow = ImGuiHoveredFlags(rawValue: 1 << 2)
    public static let allowWhenBlockedByPopup = ImGuiHoveredFlags(rawValue: 1 << 3)
    //public static let allowWhenBlockedByModal = ImGuiHoveredFlags(rawValue: 1 << 4)
    public static let allowWhenBlockedByActiveItem = ImGuiHoveredFlags(rawValue: 1 << 5)
    public static let allowWhenOverlapped = ImGuiHoveredFlags(rawValue: 1 << 6)
    public static let allowWhenDisabled = ImGuiHoveredFlags(rawValue: 1 << 7)

    public static let rectOnly: Self = [.allowWhenBlockedByPopup, .allowWhenBlockedByActiveItem, .allowWhenOverlapped]
    public static let rootAndChildWindows: Self = [.rootWindow, .childWindows]
}

public struct ImGuiInputTextFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let charsDecimal = ImGuiInputTextFlags(rawValue: 1 << 0)
    public static let charsHexadecimal = ImGuiInputTextFlags(rawValue: 1 << 1)
    public static let charsUppercase = ImGuiInputTextFlags(rawValue: 1 << 2)
    public static let charsNoBlank = ImGuiInputTextFlags(rawValue: 1 << 3)
    public static let autoSelectAll = ImGuiInputTextFlags(rawValue: 1 << 4)
    public static let enterReturnsTrue = ImGuiInputTextFlags(rawValue: 1 << 5)
    public static let callbackCompletion = ImGuiInputTextFlags(rawValue: 1 << 6)
    public static let callbackHistory = ImGuiInputTextFlags(rawValue: 1 << 7)
    public static let callbackAlways = ImGuiInputTextFlags(rawValue: 1 << 8)
    public static let callbackCharFilter = ImGuiInputTextFlags(rawValue: 1 << 9)
    public static let allowTabInput = ImGuiInputTextFlags(rawValue: 1 << 10)
    public static let ctrlEnterForNewLine = ImGuiInputTextFlags(rawValue: 1 << 11)
    public static let noHorizontalScroll = ImGuiInputTextFlags(rawValue: 1 << 12)
    public static let alwaysInsertMode = ImGuiInputTextFlags(rawValue: 1 << 13)
    public static let readOnly = ImGuiInputTextFlags(rawValue: 1 << 14)
    public static let password = ImGuiInputTextFlags(rawValue: 1 << 15)
    public static let noUndoRedo = ImGuiInputTextFlags(rawValue: 1 << 16)
    public static let charsScientific = ImGuiInputTextFlags(rawValue: 1 << 17)
    public static let callbackResize = ImGuiInputTextFlags(rawValue: 1 << 18)
    public static let callbackEdit = ImGuiInputTextFlags(rawValue: 1 << 19)
}

public struct ImGuiKeyModFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let ctrl = ImGuiKeyModFlags(rawValue: 1 << 0)
    public static let shift = ImGuiKeyModFlags(rawValue: 1 << 1)
    public static let alt = ImGuiKeyModFlags(rawValue: 1 << 2)
    public static let `super` = ImGuiKeyModFlags(rawValue: 1 << 3)
};

public struct ImGuiPopupFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let mouseButtonLeft: Self = []

    public static let mouseButtonRight = ImGuiPopupFlags(rawValue: 1)
    public static let mouseButtonMiddle = ImGuiPopupFlags(rawValue: 2)
    public static let mouseButtonMask = ImGuiPopupFlags(rawValue: 0x1F)
    public static let mouseButtonDefault = ImGuiPopupFlags(rawValue: 1)
    public static let noOpenOverExistingPopup = ImGuiPopupFlags(rawValue: 1 << 5)
    public static let noOpenOverItems = ImGuiPopupFlags(rawValue: 1 << 6)
    public static let anyPopupId = ImGuiPopupFlags(rawValue: 1 << 7)
    public static let anyPopupLevel = ImGuiPopupFlags(rawValue: 1 << 8)

    public static let anyPopup: Self = [.anyPopupId, .anyPopupLevel]
}

public struct ImGuiSelectableFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let dontClosePopups = ImGuiSelectableFlags(rawValue: 1 << 0)
    public static let spanAllColumns = ImGuiSelectableFlags(rawValue: 1 << 1)
    public static let allowDoubleClick = ImGuiSelectableFlags(rawValue: 1 << 2)
    public static let disabled = ImGuiSelectableFlags(rawValue: 1 << 3)
    public static let allowItemOverlap = ImGuiSelectableFlags(rawValue: 1 << 4)
}

public struct ImGuiSliderFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let alwaysClamp = ImGuiSliderFlags(rawValue: 1 << 4)
    public static let logarithmic = ImGuiSliderFlags(rawValue: 1 << 5)
    public static let noRoundToFormat = ImGuiSliderFlags(rawValue: 1 << 6)
    public static let noInput = ImGuiSliderFlags(rawValue: 1 << 7)

    public static let invalidMask = ImGuiSliderFlags(rawValue: 0x7000000F)
}

public struct ImGuiTabBarFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let reorderable = ImGuiTabBarFlags(rawValue: 1 << 0)
    public static let autoSelectNewTabs = ImGuiTabBarFlags(rawValue: 1 << 1)
    public static let tabListPopupButton = ImGuiTabBarFlags(rawValue: 1 << 2)
    public static let noCloseWithMiddleMouseButton = ImGuiTabBarFlags(rawValue: 1 << 3)
    public static let noTabListScrollingButtons = ImGuiTabBarFlags(rawValue: 1 << 4)
    public static let noTooltip = ImGuiTabBarFlags(rawValue: 1 << 5)
    public static let fittingPolicyResizeDown = ImGuiTabBarFlags(rawValue: 1 << 6)
    public static let fittingPolicyScroll = ImGuiTabBarFlags(rawValue: 1 << 7)

    public static let fittingPolicyMask: Self = [.fittingPolicyResizeDown, .fittingPolicyScroll]

    public static let fittingPolicyDefault = Self.fittingPolicyResizeDown
}

public struct ImGuiTabItemFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let unsavedDocument = ImGuiTabItemFlags(rawValue: 1 << 0)
    public static let setSelected = ImGuiTabItemFlags(rawValue: 1 << 1)
    public static let noCloseWithMiddleMouseButton = ImGuiTabItemFlags(rawValue: 1 << 2)
    public static let noPushId = ImGuiTabItemFlags(rawValue: 1 << 3)
    public static let noTooltip = ImGuiTabItemFlags(rawValue: 1 << 4)
    public static let noReorder = ImGuiTabItemFlags(rawValue: 1 << 5)
    public static let leading = ImGuiTabItemFlags(rawValue: 1 << 6)
    public static let trailing = ImGuiTabItemFlags(rawValue: 1 << 7)
}

public struct ImGuiTreeNodeFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let selected = ImGuiTreeNodeFlags(rawValue: 1 << 0)
    public static let framed = ImGuiTreeNodeFlags(rawValue: 1 << 1)
    public static let allowItemOverlap = ImGuiTreeNodeFlags(rawValue: 1 << 2)
    public static let noTreePushOnOpen = ImGuiTreeNodeFlags(rawValue: 1 << 3)
    public static let noAutoOpenOnLog = ImGuiTreeNodeFlags(rawValue: 1 << 4)
    public static let defaultOpen = ImGuiTreeNodeFlags(rawValue: 1 << 5)
    public static let openOnDoubleClick = ImGuiTreeNodeFlags(rawValue: 1 << 6)
    public static let openOnArrow = ImGuiTreeNodeFlags(rawValue: 1 << 7)
    public static let leaf = ImGuiTreeNodeFlags(rawValue: 1 << 8)
    public static let bullet = ImGuiTreeNodeFlags(rawValue: 1 << 9)
    public static let framePadding = ImGuiTreeNodeFlags(rawValue: 1 << 10)
    public static let spanAvailWidth = ImGuiTreeNodeFlags(rawValue: 1 << 11)
    public static let spanFullWidth = ImGuiTreeNodeFlags(rawValue: 1 << 12)
    public static let navLeftJumpsBackHere = ImGuiTreeNodeFlags(rawValue: 1 << 13)
    //public static let noScrollOnOpen = ImGuiTreeNodeFlags(rawValue: 1 << 14)

    public static let collapsingHeader: Self = [.framed, .noTreePushOnOpen, .noAutoOpenOnLog]
}

public struct ImGuiViewportFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let noDecoration = ImGuiViewportFlags(rawValue: 1 << 0)
    public static let noTaskBarIcon = ImGuiViewportFlags(rawValue: 1 << 1)
    public static let noFocusOnAppearing = ImGuiViewportFlags(rawValue: 1 << 2)
    public static let noFocusOnClick = ImGuiViewportFlags(rawValue: 1 << 3)
    public static let noInputs = ImGuiViewportFlags(rawValue: 1 << 4)
    public static let noRendererClear = ImGuiViewportFlags(rawValue: 1 << 5)
    public static let topMost = ImGuiViewportFlags(rawValue: 1 << 6)
    public static let minimized = ImGuiViewportFlags(rawValue: 1 << 7)
    public static let noAutoMerge = ImGuiViewportFlags(rawValue: 1 << 8)
    public static let canHostOtherWindows = ImGuiViewportFlags(rawValue: 1 << 9)
}

public struct ImGuiWindowFlags: OptionSet {
    public let rawValue: Int32

    public init(rawValue: Int32) {
        self.rawValue = rawValue
    }

    public static let noTitleBar = ImGuiWindowFlags(rawValue: 1 << 0)
    public static let noResize = ImGuiWindowFlags(rawValue: 1 << 1)
    public static let noMove = ImGuiWindowFlags(rawValue: 1 << 2)
    public static let noScrollbar = ImGuiWindowFlags(rawValue: 1 << 3)
    public static let noScrollWithMouse = ImGuiWindowFlags(rawValue: 1 << 4)
    public static let noCollapse = ImGuiWindowFlags(rawValue: 1 << 5)
    public static let alwaysAutoResize = ImGuiWindowFlags(rawValue: 1 << 6)
    public static let noBackground = ImGuiWindowFlags(rawValue: 1 << 7)
    public static let noSavedSettings = ImGuiWindowFlags(rawValue: 1 << 8)
    public static let noMouseInputs = ImGuiWindowFlags(rawValue: 1 << 9)
    public static let menuBar = ImGuiWindowFlags(rawValue: 1 << 10)
    public static let horizontalScrollbar = ImGuiWindowFlags(rawValue: 1 << 11)
    public static let noFocusOnAppearing = ImGuiWindowFlags(rawValue: 1 << 12)
    public static let noBringToFrontOnFocus = ImGuiWindowFlags(rawValue: 1 << 13)
    public static let alwaysVerticalScrollbar = ImGuiWindowFlags(rawValue: 1 << 14)
    public static let alwaysHorizontalScrollbar = ImGuiWindowFlags(rawValue: 1 << 15)
    public static let alwaysUseWindowPadding = ImGuiWindowFlags(rawValue: 1 << 16)
    public static let noNavInputs = ImGuiWindowFlags(rawValue: 1 << 18)
    public static let noNavFocus = ImGuiWindowFlags(rawValue: 1 << 19)
    public static let unsavedDocument = ImGuiWindowFlags(rawValue: 1 << 20)
    public static let noDocking = ImGuiWindowFlags(rawValue: 1 << 21)

    public static let noNav: Self = [.noNavInputs, .noNavFocus]
    public static let noDecoration: Self = [.noTitleBar, .noResize, .noScrollbar, noCollapse]
    public static let noInputs: Self = [.noMouseInputs, .noNavInputs, .noNavFocus]
}
