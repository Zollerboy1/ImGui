//
//  asserts_internal.h
//  
//
//  Created by Josef Zoller on 17.11.20.
//

#ifndef asserts_internal_h
#define asserts_internal_h

#include "typedefs_internal.h"
#include "cimgui_internal.h"

#include <cppimgui.hpp>

static_assert(sizeof(CImStbUndoRecord) == sizeof(ImStb::StbUndoRecord), "CImStbUndoRecord and ImStb::StbUndoRecord are not compatible!");
static_assert(sizeof(CImStbUndoState) == sizeof(ImStb::StbUndoState), "CImStbUndoState and ImStb::StbUndoState are not compatible!");
static_assert(sizeof(CImStbTexteditState) == sizeof(ImStb::STB_TexteditState), "CImStbTexteditState and ImStb::STB_TexteditState are not compatible!");
static_assert(sizeof(CImStbTexteditRow) == sizeof(ImStb::StbTexteditRow), "CImStbTexteditRow and ImStb::StbTexteditRow are not compatible!");

static_assert(sizeof(CImVec1) == sizeof(ImVec1), "CImVec1 and ImVec1 are not compatible!");
static_assert(sizeof(CImVec2ih) == sizeof(ImVec2ih), "CImVec2ih and ImVec2ih are not compatible!");
static_assert(sizeof(CImRect) == sizeof(ImRect), "CImRect and ImRect are not compatible!");
static_assert(sizeof(CImBitVector) == sizeof(ImBitVector), "CImBitVector and ImBitVector are not compatible!");
static_assert(sizeof(CImPool_CImGuiTabBar) == sizeof(ImPool<ImGuiTabBar>), "CImPool_CImGuiTabBar and ImPool<ImGuiTabBar> are not compatible!");
static_assert(sizeof(CImChunkStream_CImGuiWindowSettings) == sizeof(ImChunkStream<ImGuiWindowSettings>), "CImChunkStream_CImGuiWindowSettings and ImChunkStream<ImGuiWindowSettings> are not compatible!");
static_assert(sizeof(CImDrawDataBuilder) == sizeof(ImDrawDataBuilder), "CImDrawDataBuilder and ImDrawDataBuilder are not compatible!");
static_assert(sizeof(CImGuiDataTypeTempStorage) == sizeof(ImGuiDataTypeTempStorage), "CImGuiDataTypeTempStorage and ImGuiDataTypeTempStorage are not compatible!");
static_assert(sizeof(CImGuiDataTypeInfo) == sizeof(ImGuiDataTypeInfo), "CImGuiDataTypeInfo and ImGuiDataTypeInfo are not compatible!");
static_assert(sizeof(CImGuiColorMod) == sizeof(ImGuiColorMod), "CImGuiColorMod and ImGuiColorMod are not compatible!");
static_assert(sizeof(CImGuiStyleMod) == sizeof(ImGuiStyleMod), "CImGuiStyleMod and ImGuiStyleMod are not compatible!");
static_assert(sizeof(CImGuiGroupData) == sizeof(ImGuiGroupData), "CImGuiGroupData and ImGuiGroupData are not compatible!");
static_assert(sizeof(CImGuiMenuColumns) == sizeof(ImGuiMenuColumns), "CImGuiMenuColumns and ImGuiMenuColumns are not compatible!");
static_assert(sizeof(CImGuiInputTextState) == sizeof(ImGuiInputTextState), "CImGuiInputTextState and ImGuiInputTextState are not compatible!");
static_assert(sizeof(CImGuiPopupData) == sizeof(ImGuiPopupData), "CImGuiPopupData and ImGuiPopupData are not compatible!");
static_assert(sizeof(CImGuiNavMoveResult) == sizeof(ImGuiNavMoveResult), "CImGuiNavMoveResult and ImGuiNavMoveResult are not compatible!");
static_assert(sizeof(CImGuiNextWindowData) == sizeof(ImGuiNextWindowData), "CImGuiNextWindowData and ImGuiNextWindowData are not compatible!");
static_assert(sizeof(CImGuiNextItemData) == sizeof(ImGuiNextItemData), "CImGuiNextItemData and ImGuiNextItemData are not compatible!");
static_assert(sizeof(CImGuiShrinkWidthItem) == sizeof(ImGuiShrinkWidthItem), "CImGuiShrinkWidthItem and ImGuiShrinkWidthItem are not compatible!");
static_assert(sizeof(CImGuiPtrOrIndex) == sizeof(ImGuiPtrOrIndex), "CImGuiPtrOrIndex and ImGuiPtrOrIndex are not compatible!");
static_assert(sizeof(CImGuiColumnData) == sizeof(ImGuiColumnData), "CImGuiColumnData and ImGuiColumnData are not compatible!");
static_assert(sizeof(CImGuiColumns) == sizeof(ImGuiColumns), "CImGuiColumns and ImGuiColumns are not compatible!");
static_assert(sizeof(CImGuiDockNode) == sizeof(ImGuiDockNode), "CImGuiDockNode and ImGuiDockNode are not compatible!");
static_assert(sizeof(CImGuiDockContext) == sizeof(ImGuiDockContext), "CImGuiDockContext and ImGuiDockContext are not compatible!");
static_assert(sizeof(CImGuiViewportP) == sizeof(ImGuiViewportP), "CImGuiViewportP and ImGuiViewportP are not compatible!");
static_assert(sizeof(CImGuiWindowSettings) == sizeof(ImGuiWindowSettings), "CImGuiWindowSettings and ImGuiWindowSettings are not compatible!");
static_assert(sizeof(CImGuiSettingsHandler) == sizeof(ImGuiSettingsHandler), "CImGuiSettingsHandler and ImGuiSettingsHandler are not compatible!");
static_assert(sizeof(CImGuiConcreteContext) == sizeof(ImGuiContext), "CImGuiConcreteContext and ImGuiContext are not compatible!");
static_assert(sizeof(CImGuiWindowTempData) == sizeof(ImGuiWindowTempData), "CImGuiWindowTempData and ImGuiWindowTempData are not compatible!");
static_assert(sizeof(CImGuiWindow) == sizeof(ImGuiWindow), "CImGuiWindow and ImGuiWindow are not compatible!");
static_assert(sizeof(CImGuiLastItemDataBackup) == sizeof(ImGuiLastItemDataBackup), "CImGuiLastItemDataBackup and ImGuiLastItemDataBackup are not compatible!");
static_assert(sizeof(CImGuiTabItem) == sizeof(ImGuiTabItem), "CImGuiTabItem and ImGuiTabItem are not compatible!");
static_assert(sizeof(CImGuiTabBar) == sizeof(ImGuiTabBar), "CImGuiTabBar and ImGuiTabBar are not compatible!");

static_assert(sizeof(CImVector_const_charPtr) == sizeof(ImVector<const char *>), "CImVector_const_charPtr and ImVector<const char *> are not compatible!");
static_assert(sizeof(CImVector_CImGuiTabBar) == sizeof(ImVector<ImGuiTabBar>), "CImVector_CImGuiTabBar and ImVector<ImGuiTabBar> are not compatible!");
static_assert(sizeof(CImVector_CImDrawListPtr) == sizeof(ImVector<ImDrawList *>), "CImVector_CImDrawListPtr and ImVector<ImDrawList *> are not compatible!");
static_assert(sizeof(CImVector_CImGuiWindowPtr) == sizeof(ImVector<ImGuiWindow *>), "CImVector_CImGuiWindowPtr and ImVector<ImGuiWindow *> are not compatible!");
static_assert(sizeof(CImVector_CImGuiColumnData) == sizeof(ImVector<ImGuiColumnData>), "CImVector_CImGuiColumnData and ImVector<ImGuiColumnData> are not compatible!");
static_assert(sizeof(CImVector_CImGuiDockRequest) == sizeof(ImVector<ImGuiDockRequest>), "CImVector_CImGuiDockRequest and ImVector<ImGuiDockRequest> are not compatible!");
static_assert(sizeof(CImVector_CImGuiDockNodeSettings) == sizeof(ImVector<ImGuiDockNodeSettings>), "CImVector_CImGuiDockNodeSettings and ImVector<ImGuiDockNodeSettings> are not compatible!");
static_assert(sizeof(CImVector_CImGuiColorMod) == sizeof(ImVector<ImGuiColorMod>), "CImVector_CImGuiColorMod and ImVector<ImGuiColorMod> are not compatible!");
static_assert(sizeof(CImVector_CImGuiStyleMod) == sizeof(ImVector<ImGuiStyleMod>), "CImVector_CImGuiStyleMod and ImVector<ImGuiStyleMod> are not compatible!");
static_assert(sizeof(CImVector_CImGuiPopupData) == sizeof(ImVector<ImGuiPopupData>), "CImVector_CImGuiPopupData and ImVector<ImGuiPopupData> are not compatible!");
static_assert(sizeof(CImVector_CImGuiViewportPPtr) == sizeof(ImVector<ImGuiViewportP *>), "CImVector_CImGuiViewportPPtr and ImVector<ImGuiViewportP *> are not compatible!");
static_assert(sizeof(CImVector_unsigned_char) == sizeof(ImVector<unsigned char>), "CImVector_unsigned_char and ImVector<unsigned char> are not compatible!");
static_assert(sizeof(CImVector_CImGuiPtrOrIndex) == sizeof(ImVector<ImGuiPtrOrIndex>), "CImVector_CImGuiPtrOrIndex and ImVector<ImGuiPtrOrIndex> are not compatible!");
static_assert(sizeof(CImVector_CImGuiShrinkWidthItem) == sizeof(ImVector<ImGuiShrinkWidthItem>), "CImVector_CImGuiShrinkWidthItem and ImVector<ImGuiShrinkWidthItem> are not compatible!");
static_assert(sizeof(CImVector_CImGuiSettingsHandler) == sizeof(ImVector<ImGuiSettingsHandler>), "CImVector_CImGuiSettingsHandler and ImVector<ImGuiSettingsHandler> are not compatible!");
static_assert(sizeof(CImVector_CImGuiItemFlags) == sizeof(ImVector<ImGuiItemFlags>), "CImVector_CImGuiItemFlags and ImVector<ImGuiItemFlags> are not compatible!");
static_assert(sizeof(CImVector_CImGuiGroupData) == sizeof(ImVector<ImGuiGroupData>), "CImVector_CImGuiGroupData and ImVector<ImGuiGroupData> are not compatible!");
static_assert(sizeof(CImVector_CImGuiColumns) == sizeof(ImVector<ImGuiColumns>), "CImVector_CImGuiColumns and ImVector<ImGuiColumns> are not compatible!");
static_assert(sizeof(CImVector_CImGuiTabItem) == sizeof(ImVector<ImGuiTabItem>), "CImVector_CImGuiTabItem and ImVector<ImGuiTabItem> are not compatible!");

#endif /* asserts_internal_h */
