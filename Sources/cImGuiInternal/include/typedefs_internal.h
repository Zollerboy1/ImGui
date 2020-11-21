//
//  typedefs_internal.h
//  
//
//  Created by Josef Zoller on 17.11.20.
//

#ifndef typedefs_internal_h
#define typedefs_internal_h

#include <stdio.h>
#include <stdint.h>

#ifndef __cplusplus
    #include <stdarg.h>
    #include <stdbool.h>
#endif

#include "typedefs.h"

typedef struct CImStbUndoRecord CImStbUndoRecord;
typedef struct CImStbUndoState CImStbUndoState;
typedef struct CImStbTexteditState CImStbTexteditState;
typedef struct CImStbTexteditRow CImStbTexteditRow;

typedef struct CImVec1 CImVec1;
typedef struct CImVec2ih CImVec2ih;
typedef struct CImRect CImRect;
typedef struct CImBitVector CImBitVector;
typedef struct CImPool_CImGuiTabBar CImPool_CImGuiTabBar;
typedef struct CImChunkStream_CImGuiWindowSettings CImChunkStream_CImGuiWindowSettings;
typedef struct CImDrawDataBuilder CImDrawDataBuilder;
typedef struct CImGuiDataTypeTempStorage CImGuiDataTypeTempStorage;
typedef struct CImGuiDataTypeInfo CImGuiDataTypeInfo;
typedef struct CImGuiColorMod CImGuiColorMod;
typedef struct CImGuiStyleMod CImGuiStyleMod;
typedef struct CImGuiGroupData CImGuiGroupData;
typedef struct CImGuiMenuColumns CImGuiMenuColumns;
typedef struct CImGuiInputTextState CImGuiInputTextState;
typedef struct CImGuiPopupData CImGuiPopupData;
typedef struct CImGuiNavMoveResult CImGuiNavMoveResult;
typedef struct CImGuiNextWindowData CImGuiNextWindowData;
typedef struct CImGuiNextItemData CImGuiNextItemData;
typedef struct CImGuiShrinkWidthItem CImGuiShrinkWidthItem;
typedef struct CImGuiPtrOrIndex CImGuiPtrOrIndex;
typedef struct CImGuiColumnData CImGuiColumnData;
typedef struct CImGuiColumns CImGuiColumns;
typedef struct CImGuiDockNode CImGuiDockNode;
typedef struct CImGuiDockContext CImGuiDockContext;
typedef struct CImGuiViewportP CImGuiViewportP;
typedef struct CImGuiWindowSettings CImGuiWindowSettings;
typedef struct CImGuiSettingsHandler CImGuiSettingsHandler;
typedef struct CImGuiConcreteContext CImGuiConcreteContext;
typedef struct CImGuiWindowTempData CImGuiWindowTempData;
typedef struct CImGuiWindow CImGuiWindow;
typedef struct CImGuiLastItemDataBackup CImGuiLastItemDataBackup;
typedef struct CImGuiTabItem CImGuiTabItem;
typedef struct CImGuiTabBar CImGuiTabBar;

typedef FILE * CImFileHandle;
typedef int CImGuiButtonFlags;
typedef int CImGuiColumnsFlags;
typedef int CImGuiDataAuthority;
typedef int CImGuiItemFlags;
typedef int CImGuiItemStatusFlags;
typedef int CImGuiLayoutType;
typedef int CImGuiNavHighlightFlags;
typedef int CImGuiNavDirSourceFlags;
typedef int CImGuiNavMoveFlags;
typedef int CImGuiNextItemDataFlags;
typedef int CImGuiNextWindowDataFlags;
typedef int CImGuiSeparatorFlags;
typedef int CImGuiTextFlags;
typedef int CImGuiTooltipFlags;
typedef int CImPoolIdx;


//Opaque
typedef struct ImGuiDockRequest CImGuiDockRequest;
typedef struct ImGuiDockNodeSettings CImGuiDockNodeSettings;

//For callbacks
typedef struct ImGuiContext ImGuiContext;
typedef struct ImGuiSettingsHandler ImGuiSettingsHandler;
typedef struct ImGuiTextBuffer ImGuiTextBuffer;


typedef struct CImVector_const_charPtr CImVector_const_charPtr;
typedef CImVector_CImU32 CImVector_CImGuiID;
typedef struct CImVector_CImGuiTabBar CImVector_CImGuiTabBar;
typedef struct CImVector_CImDrawListPtr CImVector_CImDrawListPtr;
typedef struct CImVector_CImGuiWindowPtr CImVector_CImGuiWindowPtr;
typedef struct CImVector_CImGuiColumnData CImVector_CImGuiColumnData;
typedef struct CImVector_CImGuiDockRequest CImVector_CImGuiDockRequest;
typedef struct CImVector_CImGuiDockNodeSettings CImVector_CImGuiDockNodeSettings;
typedef struct CImVector_CImGuiColorMod CImVector_CImGuiColorMod;
typedef struct CImVector_CImGuiStyleMod CImVector_CImGuiStyleMod;
typedef struct CImVector_CImGuiPopupData CImVector_CImGuiPopupData;
typedef struct CImVector_CImGuiViewportPPtr CImVector_CImGuiViewportPPtr;
typedef struct CImVector_unsigned_char CImVector_unsigned_char;
typedef struct CImVector_CImGuiPtrOrIndex CImVector_CImGuiPtrOrIndex;
typedef struct CImVector_CImGuiShrinkWidthItem CImVector_CImGuiShrinkWidthItem;
typedef struct CImVector_CImGuiSettingsHandler CImVector_CImGuiSettingsHandler;
typedef struct CImVector_CImGuiItemFlags CImVector_CImGuiItemFlags;
typedef struct CImVector_CImGuiGroupData CImVector_CImGuiGroupData;
typedef struct CImVector_CImGuiColumns CImVector_CImGuiColumns;
typedef struct CImVector_CImGuiTabItem CImVector_CImGuiTabItem;


typedef enum CImGuiAxis {
    CImGuiAxis_None = -1,
    CImGuiAxis_X = 0,
    CImGuiAxis_Y = 1
} CImGuiAxis;

typedef enum CImGuiDockNodeState {
    CImGuiDockNodeState_Unknown,
    CImGuiDockNodeState_HostWindowHiddenBecauseSingleWindow,
    CImGuiDockNodeState_HostWindowHiddenBecauseWindowsAreResizing,
    CImGuiDockNodeState_HostWindowVisible
} CImGuiDockNodeState;

typedef enum CImGuiInputSource {
    CImGuiInputSource_None = 0,
    CImGuiInputSource_Mouse,
    CImGuiInputSource_Nav,
    CImGuiInputSource_NavKeyboard,
    CImGuiInputSource_NavGamepad,
    CImGuiInputSource_COUNT
} CImGuiInputSource;

typedef enum CImGuiInputReadMode {
    CImGuiInputReadMode_Down,
    CImGuiInputReadMode_Pressed,
    CImGuiInputReadMode_Released,
    CImGuiInputReadMode_Repeat,
    CImGuiInputReadMode_RepeatSlow,
    CImGuiInputReadMode_RepeatFast
} CImGuiInputReadMode;

typedef enum CImGuiLogType {
    CImGuiLogType_None = 0,
    CImGuiLogType_TTY,
    CImGuiLogType_File,
    CImGuiLogType_Buffer,
    CImGuiLogType_Clipboard
} CImGuiLogType;

typedef enum CImGuiNavForward {
    CImGuiNavForward_None,
    CImGuiNavForward_ForwardQueued,
    CImGuiNavForward_ForwardActive
} CImGuiNavForward;

typedef enum CImGuiNavLayer {
    CImGuiNavLayer_Main = 0,
    CImGuiNavLayer_Menu = 1,
    CImGuiNavLayer_COUNT
} CImGuiNavLayer;

typedef enum CImGuiPlotType {
    CImGuiPlotType_Lines,
    CImGuiPlotType_Histogram
} CImGuiPlotType;

typedef enum CImGuiPopupPositionPolicy {
    CImGuiPopupPositionPolicy_Default,
    CImGuiPopupPositionPolicy_ComboBox,
    CImGuiPopupPositionPolicy_Tooltip
} CImGuiPopupPositionPolicy;

#endif /* typedefs_internal_h */
