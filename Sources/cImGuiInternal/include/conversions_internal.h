//
//  conversions_internal.h
//  
//
//  Created by Josef Zoller on 17.11.20.
//

#ifndef conversions_internal_h
#define conversions_internal_h

#include "cimgui_internal.h"

#include <cppimgui.hpp>

inline CImStbUndoRecord * toCIm(ImStb::StbUndoRecord * im) {
    return im ? reinterpret_cast<CImStbUndoRecord *>(im) : NULL;
}

inline const CImStbUndoRecord * toCIm(const ImStb::StbUndoRecord * im) {
    return im ? reinterpret_cast<const CImStbUndoRecord *>(im) : NULL;
}

inline ImStb::StbUndoRecord * toIm(CImStbUndoRecord * cIm) {
    return cIm ? reinterpret_cast<ImStb::StbUndoRecord *>(cIm) : NULL;
}

inline const ImStb::StbUndoRecord * toIm(const CImStbUndoRecord * cIm) {
    return cIm ? reinterpret_cast<const ImStb::StbUndoRecord *>(cIm) : NULL;
}

inline CImStbUndoState * toCIm(ImStb::StbUndoState * im) {
    return im ? reinterpret_cast<CImStbUndoState *>(im) : NULL;
}

inline const CImStbUndoState * toCIm(const ImStb::StbUndoState * im) {
    return im ? reinterpret_cast<const CImStbUndoState *>(im) : NULL;
}

inline ImStb::StbUndoState * toIm(CImStbUndoState * cIm) {
    return cIm ? reinterpret_cast<ImStb::StbUndoState *>(cIm) : NULL;
}

inline const ImStb::StbUndoState * toIm(const CImStbUndoState * cIm) {
    return cIm ? reinterpret_cast<const ImStb::StbUndoState *>(cIm) : NULL;
}

inline CImStbTexteditState * toCIm(ImStb::STB_TexteditState * im) {
    return im ? reinterpret_cast<CImStbTexteditState *>(im) : NULL;
}

inline const CImStbTexteditState * toCIm(const ImStb::STB_TexteditState * im) {
    return im ? reinterpret_cast<const CImStbTexteditState *>(im) : NULL;
}

inline ImStb::STB_TexteditState * toIm(CImStbTexteditState * cIm) {
    return cIm ? reinterpret_cast<ImStb::STB_TexteditState *>(cIm) : NULL;
}

inline const ImStb::STB_TexteditState * toIm(const CImStbTexteditState * cIm) {
    return cIm ? reinterpret_cast<const ImStb::STB_TexteditState *>(cIm) : NULL;
}

inline CImStbTexteditRow * toCIm(ImStb::StbTexteditRow * im) {
    return im ? reinterpret_cast<CImStbTexteditRow *>(im) : NULL;
}

inline const CImStbTexteditRow * toCIm(const ImStb::StbTexteditRow * im) {
    return im ? reinterpret_cast<const CImStbTexteditRow *>(im) : NULL;
}

inline ImStb::StbTexteditRow * toIm(CImStbTexteditRow * cIm) {
    return cIm ? reinterpret_cast<ImStb::StbTexteditRow *>(cIm) : NULL;
}

inline const ImStb::StbTexteditRow * toIm(const CImStbTexteditRow * cIm) {
    return cIm ? reinterpret_cast<const ImStb::StbTexteditRow *>(cIm) : NULL;
}



inline CImRect * toCIm(ImRect * im) {
    return im ? reinterpret_cast<CImRect *>(im) : NULL;
}

inline const CImRect * toCIm(const ImRect * im) {
    return im ? reinterpret_cast<const CImRect *>(im) : NULL;
}

inline ImRect * toIm(CImRect * cIm) {
    return cIm ? reinterpret_cast<ImRect *>(cIm) : NULL;
}

inline const ImRect * toIm(const CImRect * cIm) {
    return cIm ? reinterpret_cast<const ImRect *>(cIm) : NULL;
}

inline CImBitVector * toCIm(ImBitVector * im) {
    return im ? reinterpret_cast<CImBitVector *>(im) : NULL;
}

inline const CImBitVector * toCIm(const ImBitVector * im) {
    return im ? reinterpret_cast<const CImBitVector *>(im) : NULL;
}

inline ImBitVector * toIm(CImBitVector * cIm) {
    return cIm ? reinterpret_cast<ImBitVector *>(cIm) : NULL;
}

inline const ImBitVector * toIm(const CImBitVector * cIm) {
    return cIm ? reinterpret_cast<const ImBitVector *>(cIm) : NULL;
}

inline CImPool_CImGuiTabBar * toCIm(ImPool<ImGuiTabBar> * im) {
    return im ? reinterpret_cast<CImPool_CImGuiTabBar *>(im) : NULL;
}

inline const CImPool_CImGuiTabBar * toCIm(const ImPool<ImGuiTabBar> * im) {
    return im ? reinterpret_cast<const CImPool_CImGuiTabBar *>(im) : NULL;
}

inline ImPool<ImGuiTabBar> * toIm(CImPool_CImGuiTabBar * cIm) {
    return cIm ? reinterpret_cast<ImPool<ImGuiTabBar> *>(cIm) : NULL;
}

inline const ImPool<ImGuiTabBar> * toIm(const CImPool_CImGuiTabBar * cIm) {
    return cIm ? reinterpret_cast<const ImPool<ImGuiTabBar> *>(cIm) : NULL;
}

inline CImChunkStream_CImGuiWindowSettings * toCIm(ImChunkStream<ImGuiWindowSettings> * im) {
    return im ? reinterpret_cast<CImChunkStream_CImGuiWindowSettings *>(im) : NULL;
}

inline const CImChunkStream_CImGuiWindowSettings * toCIm(const ImChunkStream<ImGuiWindowSettings> * im) {
    return im ? reinterpret_cast<const CImChunkStream_CImGuiWindowSettings *>(im) : NULL;
}

inline ImChunkStream<ImGuiWindowSettings> * toIm(CImChunkStream_CImGuiWindowSettings * cIm) {
    return cIm ? reinterpret_cast<ImChunkStream<ImGuiWindowSettings> *>(cIm) : NULL;
}

inline const ImChunkStream<ImGuiWindowSettings> * toIm(const CImChunkStream_CImGuiWindowSettings * cIm) {
    return cIm ? reinterpret_cast<const ImChunkStream<ImGuiWindowSettings> *>(cIm) : NULL;
}

inline CImDrawDataBuilder * toCIm(ImDrawDataBuilder * im) {
    return im ? reinterpret_cast<CImDrawDataBuilder *>(im) : NULL;
}

inline const CImDrawDataBuilder * toCIm(const ImDrawDataBuilder * im) {
    return im ? reinterpret_cast<const CImDrawDataBuilder *>(im) : NULL;
}

inline ImDrawDataBuilder * toIm(CImDrawDataBuilder * cIm) {
    return cIm ? reinterpret_cast<ImDrawDataBuilder *>(cIm) : NULL;
}

inline const ImDrawDataBuilder * toIm(const CImDrawDataBuilder * cIm) {
    return cIm ? reinterpret_cast<const ImDrawDataBuilder *>(cIm) : NULL;
}

inline CImGuiDataTypeTempStorage * toCIm(ImGuiDataTypeTempStorage * im) {
    return im ? reinterpret_cast<CImGuiDataTypeTempStorage *>(im) : NULL;
}

inline const CImGuiDataTypeTempStorage * toCIm(const ImGuiDataTypeTempStorage * im) {
    return im ? reinterpret_cast<const CImGuiDataTypeTempStorage *>(im) : NULL;
}

inline ImGuiDataTypeTempStorage * toIm(CImGuiDataTypeTempStorage * cIm) {
    return cIm ? reinterpret_cast<ImGuiDataTypeTempStorage *>(cIm) : NULL;
}

inline const ImGuiDataTypeTempStorage * toIm(const CImGuiDataTypeTempStorage * cIm) {
    return cIm ? reinterpret_cast<const ImGuiDataTypeTempStorage *>(cIm) : NULL;
}

inline CImGuiDataTypeInfo * toCIm(ImGuiDataTypeInfo * im) {
    return im ? reinterpret_cast<CImGuiDataTypeInfo *>(im) : NULL;
}

inline const CImGuiDataTypeInfo * toCIm(const ImGuiDataTypeInfo * im) {
    return im ? reinterpret_cast<const CImGuiDataTypeInfo *>(im) : NULL;
}

inline ImGuiDataTypeInfo * toIm(CImGuiDataTypeInfo * cIm) {
    return cIm ? reinterpret_cast<ImGuiDataTypeInfo *>(cIm) : NULL;
}

inline const ImGuiDataTypeInfo * toIm(const CImGuiDataTypeInfo * cIm) {
    return cIm ? reinterpret_cast<const ImGuiDataTypeInfo *>(cIm) : NULL;
}

inline CImGuiColorMod * toCIm(ImGuiColorMod * im) {
    return im ? reinterpret_cast<CImGuiColorMod *>(im) : NULL;
}

inline const CImGuiColorMod * toCIm(const ImGuiColorMod * im) {
    return im ? reinterpret_cast<const CImGuiColorMod *>(im) : NULL;
}

inline ImGuiColorMod * toIm(CImGuiColorMod * cIm) {
    return cIm ? reinterpret_cast<ImGuiColorMod *>(cIm) : NULL;
}

inline const ImGuiColorMod * toIm(const CImGuiColorMod * cIm) {
    return cIm ? reinterpret_cast<const ImGuiColorMod *>(cIm) : NULL;
}

inline CImGuiStyleMod * toCIm(ImGuiStyleMod * im) {
    return im ? reinterpret_cast<CImGuiStyleMod *>(im) : NULL;
}

inline const CImGuiStyleMod * toCIm(const ImGuiStyleMod * im) {
    return im ? reinterpret_cast<const CImGuiStyleMod *>(im) : NULL;
}

inline ImGuiStyleMod * toIm(CImGuiStyleMod * cIm) {
    return cIm ? reinterpret_cast<ImGuiStyleMod *>(cIm) : NULL;
}

inline const ImGuiStyleMod * toIm(const CImGuiStyleMod * cIm) {
    return cIm ? reinterpret_cast<const ImGuiStyleMod *>(cIm) : NULL;
}

inline CImGuiGroupData * toCIm(ImGuiGroupData * im) {
    return im ? reinterpret_cast<CImGuiGroupData *>(im) : NULL;
}

inline const CImGuiGroupData * toCIm(const ImGuiGroupData * im) {
    return im ? reinterpret_cast<const CImGuiGroupData *>(im) : NULL;
}

inline ImGuiGroupData * toIm(CImGuiGroupData * cIm) {
    return cIm ? reinterpret_cast<ImGuiGroupData *>(cIm) : NULL;
}

inline const ImGuiGroupData * toIm(const CImGuiGroupData * cIm) {
    return cIm ? reinterpret_cast<const ImGuiGroupData *>(cIm) : NULL;
}

inline CImGuiMenuColumns * toCIm(ImGuiMenuColumns * im) {
    return im ? reinterpret_cast<CImGuiMenuColumns *>(im) : NULL;
}

inline const CImGuiMenuColumns * toCIm(const ImGuiMenuColumns * im) {
    return im ? reinterpret_cast<const CImGuiMenuColumns *>(im) : NULL;
}

inline ImGuiMenuColumns * toIm(CImGuiMenuColumns * cIm) {
    return cIm ? reinterpret_cast<ImGuiMenuColumns *>(cIm) : NULL;
}

inline const ImGuiMenuColumns * toIm(const CImGuiMenuColumns * cIm) {
    return cIm ? reinterpret_cast<const ImGuiMenuColumns *>(cIm) : NULL;
}

inline CImGuiInputTextState * toCIm(ImGuiInputTextState * im) {
    return im ? reinterpret_cast<CImGuiInputTextState *>(im) : NULL;
}

inline const CImGuiInputTextState * toCIm(const ImGuiInputTextState * im) {
    return im ? reinterpret_cast<const CImGuiInputTextState *>(im) : NULL;
}

inline ImGuiInputTextState * toIm(CImGuiInputTextState * cIm) {
    return cIm ? reinterpret_cast<ImGuiInputTextState *>(cIm) : NULL;
}

inline const ImGuiInputTextState * toIm(const CImGuiInputTextState * cIm) {
    return cIm ? reinterpret_cast<const ImGuiInputTextState *>(cIm) : NULL;
}

inline CImGuiPopupData * toCIm(ImGuiPopupData * im) {
    return im ? reinterpret_cast<CImGuiPopupData *>(im) : NULL;
}

inline const CImGuiPopupData * toCIm(const ImGuiPopupData * im) {
    return im ? reinterpret_cast<const CImGuiPopupData *>(im) : NULL;
}

inline ImGuiPopupData * toIm(CImGuiPopupData * cIm) {
    return cIm ? reinterpret_cast<ImGuiPopupData *>(cIm) : NULL;
}

inline const ImGuiPopupData * toIm(const CImGuiPopupData * cIm) {
    return cIm ? reinterpret_cast<const ImGuiPopupData *>(cIm) : NULL;
}

inline CImGuiNavMoveResult * toCIm(ImGuiNavMoveResult * im) {
    return im ? reinterpret_cast<CImGuiNavMoveResult *>(im) : NULL;
}

inline const CImGuiNavMoveResult * toCIm(const ImGuiNavMoveResult * im) {
    return im ? reinterpret_cast<const CImGuiNavMoveResult *>(im) : NULL;
}

inline ImGuiNavMoveResult * toIm(CImGuiNavMoveResult * cIm) {
    return cIm ? reinterpret_cast<ImGuiNavMoveResult *>(cIm) : NULL;
}

inline const ImGuiNavMoveResult * toIm(const CImGuiNavMoveResult * cIm) {
    return cIm ? reinterpret_cast<const ImGuiNavMoveResult *>(cIm) : NULL;
}

inline CImGuiNextWindowData * toCIm(ImGuiNextWindowData * im) {
    return im ? reinterpret_cast<CImGuiNextWindowData *>(im) : NULL;
}

inline const CImGuiNextWindowData * toCIm(const ImGuiNextWindowData * im) {
    return im ? reinterpret_cast<const CImGuiNextWindowData *>(im) : NULL;
}

inline ImGuiNextWindowData * toIm(CImGuiNextWindowData * cIm) {
    return cIm ? reinterpret_cast<ImGuiNextWindowData *>(cIm) : NULL;
}

inline const ImGuiNextWindowData * toIm(const CImGuiNextWindowData * cIm) {
    return cIm ? reinterpret_cast<const ImGuiNextWindowData *>(cIm) : NULL;
}

inline CImGuiNextItemData * toCIm(ImGuiNextItemData * im) {
    return im ? reinterpret_cast<CImGuiNextItemData *>(im) : NULL;
}

inline const CImGuiNextItemData * toCIm(const ImGuiNextItemData * im) {
    return im ? reinterpret_cast<const CImGuiNextItemData *>(im) : NULL;
}

inline ImGuiNextItemData * toIm(CImGuiNextItemData * cIm) {
    return cIm ? reinterpret_cast<ImGuiNextItemData *>(cIm) : NULL;
}

inline const ImGuiNextItemData * toIm(const CImGuiNextItemData * cIm) {
    return cIm ? reinterpret_cast<const ImGuiNextItemData *>(cIm) : NULL;
}

inline CImGuiShrinkWidthItem * toCIm(ImGuiShrinkWidthItem * im) {
    return im ? reinterpret_cast<CImGuiShrinkWidthItem *>(im) : NULL;
}

inline const CImGuiShrinkWidthItem * toCIm(const ImGuiShrinkWidthItem * im) {
    return im ? reinterpret_cast<const CImGuiShrinkWidthItem *>(im) : NULL;
}

inline ImGuiShrinkWidthItem * toIm(CImGuiShrinkWidthItem * cIm) {
    return cIm ? reinterpret_cast<ImGuiShrinkWidthItem *>(cIm) : NULL;
}

inline const ImGuiShrinkWidthItem * toIm(const CImGuiShrinkWidthItem * cIm) {
    return cIm ? reinterpret_cast<const ImGuiShrinkWidthItem *>(cIm) : NULL;
}

inline CImGuiPtrOrIndex * toCIm(ImGuiPtrOrIndex * im) {
    return im ? reinterpret_cast<CImGuiPtrOrIndex *>(im) : NULL;
}

inline const CImGuiPtrOrIndex * toCIm(const ImGuiPtrOrIndex * im) {
    return im ? reinterpret_cast<const CImGuiPtrOrIndex *>(im) : NULL;
}

inline ImGuiPtrOrIndex * toIm(CImGuiPtrOrIndex * cIm) {
    return cIm ? reinterpret_cast<ImGuiPtrOrIndex *>(cIm) : NULL;
}

inline const ImGuiPtrOrIndex * toIm(const CImGuiPtrOrIndex * cIm) {
    return cIm ? reinterpret_cast<const ImGuiPtrOrIndex *>(cIm) : NULL;
}

inline CImGuiColumnData * toCIm(ImGuiColumnData * im) {
    return im ? reinterpret_cast<CImGuiColumnData *>(im) : NULL;
}

inline const CImGuiColumnData * toCIm(const ImGuiColumnData * im) {
    return im ? reinterpret_cast<const CImGuiColumnData *>(im) : NULL;
}

inline ImGuiColumnData * toIm(CImGuiColumnData * cIm) {
    return cIm ? reinterpret_cast<ImGuiColumnData *>(cIm) : NULL;
}

inline const ImGuiColumnData * toIm(const CImGuiColumnData * cIm) {
    return cIm ? reinterpret_cast<const ImGuiColumnData *>(cIm) : NULL;
}

inline CImGuiColumns * toCIm(ImGuiColumns * im) {
    return im ? reinterpret_cast<CImGuiColumns *>(im) : NULL;
}

inline const CImGuiColumns * toCIm(const ImGuiColumns * im) {
    return im ? reinterpret_cast<const CImGuiColumns *>(im) : NULL;
}

inline ImGuiColumns * toIm(CImGuiColumns * cIm) {
    return cIm ? reinterpret_cast<ImGuiColumns *>(cIm) : NULL;
}

inline const ImGuiColumns * toIm(const CImGuiColumns * cIm) {
    return cIm ? reinterpret_cast<const ImGuiColumns *>(cIm) : NULL;
}

inline CImGuiDockNode * toCIm(ImGuiDockNode * im) {
    return im ? reinterpret_cast<CImGuiDockNode *>(im) : NULL;
}

inline const CImGuiDockNode * toCIm(const ImGuiDockNode * im) {
    return im ? reinterpret_cast<const CImGuiDockNode *>(im) : NULL;
}

inline ImGuiDockNode * toIm(CImGuiDockNode * cIm) {
    return cIm ? reinterpret_cast<ImGuiDockNode *>(cIm) : NULL;
}

inline const ImGuiDockNode * toIm(const CImGuiDockNode * cIm) {
    return cIm ? reinterpret_cast<const ImGuiDockNode *>(cIm) : NULL;
}

inline CImGuiDockContext * toCIm(ImGuiDockContext * im) {
    return im ? reinterpret_cast<CImGuiDockContext *>(im) : NULL;
}

inline const CImGuiDockContext * toCIm(const ImGuiDockContext * im) {
    return im ? reinterpret_cast<const CImGuiDockContext *>(im) : NULL;
}

inline ImGuiDockContext * toIm(CImGuiDockContext * cIm) {
    return cIm ? reinterpret_cast<ImGuiDockContext *>(cIm) : NULL;
}

inline const ImGuiDockContext * toIm(const CImGuiDockContext * cIm) {
    return cIm ? reinterpret_cast<const ImGuiDockContext *>(cIm) : NULL;
}

inline CImGuiViewportP * toCIm(ImGuiViewportP * im) {
    return im ? reinterpret_cast<CImGuiViewportP *>(im) : NULL;
}

inline const CImGuiViewportP * toCIm(const ImGuiViewportP * im) {
    return im ? reinterpret_cast<const CImGuiViewportP *>(im) : NULL;
}

inline CImGuiViewportP ** toCIm(ImGuiViewportP ** im) {
    return im ? reinterpret_cast<CImGuiViewportP **>(im) : NULL;
}

inline CImGuiViewportP * const * toCIm(ImGuiViewportP * const * im) {
    return im ? reinterpret_cast<CImGuiViewportP * const *>(im) : NULL;
}

inline ImGuiViewportP * toIm(CImGuiViewportP * cIm) {
    return cIm ? reinterpret_cast<ImGuiViewportP *>(cIm) : NULL;
}

inline const ImGuiViewportP * toIm(const CImGuiViewportP * cIm) {
    return cIm ? reinterpret_cast<const ImGuiViewportP *>(cIm) : NULL;
}

inline ImGuiViewportP ** toIm(CImGuiViewportP ** cIm) {
    return cIm ? reinterpret_cast<ImGuiViewportP **>(cIm) : NULL;
}

inline ImGuiViewportP * const * toIm(CImGuiViewportP * const * cIm) {
    return cIm ? reinterpret_cast<ImGuiViewportP * const *>(cIm) : NULL;
}

inline CImGuiWindowSettings * toCIm(ImGuiWindowSettings * im) {
    return im ? reinterpret_cast<CImGuiWindowSettings *>(im) : NULL;
}

inline const CImGuiWindowSettings * toCIm(const ImGuiWindowSettings * im) {
    return im ? reinterpret_cast<const CImGuiWindowSettings *>(im) : NULL;
}

inline ImGuiWindowSettings * toIm(CImGuiWindowSettings * cIm) {
    return cIm ? reinterpret_cast<ImGuiWindowSettings *>(cIm) : NULL;
}

inline const ImGuiWindowSettings * toIm(const CImGuiWindowSettings * cIm) {
    return cIm ? reinterpret_cast<const ImGuiWindowSettings *>(cIm) : NULL;
}

inline CImGuiSettingsHandler * toCIm(ImGuiSettingsHandler * im) {
    return im ? reinterpret_cast<CImGuiSettingsHandler *>(im) : NULL;
}

inline const CImGuiSettingsHandler * toCIm(const ImGuiSettingsHandler * im) {
    return im ? reinterpret_cast<const CImGuiSettingsHandler *>(im) : NULL;
}

inline ImGuiSettingsHandler * toIm(CImGuiSettingsHandler * cIm) {
    return cIm ? reinterpret_cast<ImGuiSettingsHandler *>(cIm) : NULL;
}

inline const ImGuiSettingsHandler * toIm(const CImGuiSettingsHandler * cIm) {
    return cIm ? reinterpret_cast<const ImGuiSettingsHandler *>(cIm) : NULL;
}

inline CImGuiConcreteContext * toCIm(ImGuiContext * im) {
    return im ? reinterpret_cast<CImGuiConcreteContext *>(im) : NULL;
}

inline const CImGuiConcreteContext * toCIm(const ImGuiContext * im) {
    return im ? reinterpret_cast<const CImGuiConcreteContext *>(im) : NULL;
}

inline ImGuiContext * toIm(CImGuiConcreteContext * cIm) {
    return cIm ? reinterpret_cast<ImGuiContext *>(cIm) : NULL;
}

inline const ImGuiContext * toIm(const CImGuiConcreteContext * cIm) {
    return cIm ? reinterpret_cast<const ImGuiContext *>(cIm) : NULL;
}

inline CImGuiWindowTempData * toCIm(ImGuiWindowTempData * im) {
    return im ? reinterpret_cast<CImGuiWindowTempData *>(im) : NULL;
}

inline const CImGuiWindowTempData * toCIm(const ImGuiWindowTempData * im) {
    return im ? reinterpret_cast<const CImGuiWindowTempData *>(im) : NULL;
}

inline ImGuiWindowTempData * toIm(CImGuiWindowTempData * cIm) {
    return cIm ? reinterpret_cast<ImGuiWindowTempData *>(cIm) : NULL;
}

inline const ImGuiWindowTempData * toIm(const CImGuiWindowTempData * cIm) {
    return cIm ? reinterpret_cast<const ImGuiWindowTempData *>(cIm) : NULL;
}

inline CImGuiWindow * toCIm(ImGuiWindow * im) {
    return im ? reinterpret_cast<CImGuiWindow *>(im) : NULL;
}

inline const CImGuiWindow * toCIm(const ImGuiWindow * im) {
    return im ? reinterpret_cast<const CImGuiWindow *>(im) : NULL;
}

inline CImGuiWindow ** toCIm(ImGuiWindow ** im) {
    return im ? reinterpret_cast<CImGuiWindow **>(im) : NULL;
}

inline CImGuiWindow * const * toCIm(ImGuiWindow * const * im) {
    return im ? reinterpret_cast<CImGuiWindow * const *>(im) : NULL;
}

inline ImGuiWindow * toIm(CImGuiWindow * cIm) {
    return cIm ? reinterpret_cast<ImGuiWindow *>(cIm) : NULL;
}

inline const ImGuiWindow * toIm(const CImGuiWindow * cIm) {
    return cIm ? reinterpret_cast<const ImGuiWindow *>(cIm) : NULL;
}

inline ImGuiWindow ** toIm(CImGuiWindow ** cIm) {
    return cIm ? reinterpret_cast<ImGuiWindow **>(cIm) : NULL;
}

inline ImGuiWindow * const * toIm(CImGuiWindow * const * cIm) {
    return cIm ? reinterpret_cast<ImGuiWindow * const *>(cIm) : NULL;
}

inline CImGuiLastItemDataBackup * toCIm(ImGuiLastItemDataBackup * im) {
    return im ? reinterpret_cast<CImGuiLastItemDataBackup *>(im) : NULL;
}

inline const CImGuiLastItemDataBackup * toCIm(const ImGuiLastItemDataBackup * im) {
    return im ? reinterpret_cast<const CImGuiLastItemDataBackup *>(im) : NULL;
}

inline ImGuiLastItemDataBackup * toIm(CImGuiLastItemDataBackup * cIm) {
    return cIm ? reinterpret_cast<ImGuiLastItemDataBackup *>(cIm) : NULL;
}

inline const ImGuiLastItemDataBackup * toIm(const CImGuiLastItemDataBackup * cIm) {
    return cIm ? reinterpret_cast<const ImGuiLastItemDataBackup *>(cIm) : NULL;
}

inline CImGuiTabItem * toCIm(ImGuiTabItem * im) {
    return im ? reinterpret_cast<CImGuiTabItem *>(im) : NULL;
}

inline const CImGuiTabItem * toCIm(const ImGuiTabItem * im) {
    return im ? reinterpret_cast<const CImGuiTabItem *>(im) : NULL;
}

inline ImGuiTabItem * toIm(CImGuiTabItem * cIm) {
    return cIm ? reinterpret_cast<ImGuiTabItem *>(cIm) : NULL;
}

inline const ImGuiTabItem * toIm(const CImGuiTabItem * cIm) {
    return cIm ? reinterpret_cast<const ImGuiTabItem *>(cIm) : NULL;
}

inline CImGuiTabBar * toCIm(ImGuiTabBar * im) {
    return im ? reinterpret_cast<CImGuiTabBar *>(im) : NULL;
}

inline const CImGuiTabBar * toCIm(const ImGuiTabBar * im) {
    return im ? reinterpret_cast<const CImGuiTabBar *>(im) : NULL;
}

inline ImGuiTabBar * toIm(CImGuiTabBar * cIm) {
    return cIm ? reinterpret_cast<ImGuiTabBar *>(cIm) : NULL;
}

inline const ImGuiTabBar * toIm(const CImGuiTabBar * cIm) {
    return cIm ? reinterpret_cast<const ImGuiTabBar *>(cIm) : NULL;
}



inline CImVec1 toCIm(const ImVec1 & im) {
    return {im.x};
}

inline ImVec1 toIm(const CImVec1 & cIm) {
    return {cIm.x};
}

inline CImVec2ih toCIm(const ImVec2ih & im) {
    return {im.x, im.y};
}

inline ImVec2ih toIm(const CImVec2ih & cIm) {
    return {cIm.x, cIm.y};
}

inline CImRect toCIm(const ImRect & im) {
    return {{im.Min.x, im.Min.y}, {im.Max.x, im.Max.y}};
}

inline ImRect toIm(const CImRect & cIm) {
    return {{cIm.Min.x, cIm.Min.y}, {cIm.Max.x, cIm.Max.y}};
}


inline ImVec1 * toIm(CImVec1 * cIm) {
    return cIm ? reinterpret_cast<ImVec1 *>(cIm) : NULL;
}

inline const ImVec1 * toIm(const CImVec1 * cIm) {
    return cIm ? reinterpret_cast<const ImVec1 *>(cIm) : NULL;
}

inline CImVec1 * toCIm(ImVec1 * im) {
    return im ? reinterpret_cast<CImVec1 *>(im) : NULL;
}

inline const CImVec1 * toCIm(const ImVec1 * im) {
    return im ? reinterpret_cast<const CImVec1 *>(im) : NULL;
}

inline ImVec2ih * toIm(CImVec2ih * cIm) {
    return cIm ? reinterpret_cast<ImVec2ih *>(cIm) : NULL;
}

inline const ImVec2ih * toIm(const CImVec2ih * cIm) {
    return cIm ? reinterpret_cast<const ImVec2ih *>(cIm) : NULL;
}

inline CImVec2ih * toCIm(ImVec2ih * im) {
    return im ? reinterpret_cast<CImVec2ih *>(im) : NULL;
}

inline const CImVec2ih * toCIm(const ImVec2ih * im) {
    return im ? reinterpret_cast<const CImVec2ih *>(im) : NULL;
}



inline CImDrawList ** toCIm(ImDrawList ** im) {
    return im ? reinterpret_cast<CImDrawList **>(im) : NULL;
}

inline CImDrawList * const * toCIm(ImDrawList * const * im) {
    return im ? reinterpret_cast<CImDrawList * const *>(im) : NULL;
}

inline ImDrawList ** toIm(CImDrawList ** cIm) {
    return cIm ? reinterpret_cast<ImDrawList **>(cIm) : NULL;
}

inline ImDrawList * const * toIm(CImDrawList * const * cIm) {
    return cIm ? reinterpret_cast<ImDrawList * const *>(cIm) : NULL;
}



inline CImVector_const_charPtr * toCIm(ImVector<const char *> * im) {
    return im ? reinterpret_cast<CImVector_const_charPtr *>(im) : NULL;
}

inline const CImVector_const_charPtr * toCIm(const ImVector<const char *> * im) {
    return im ? reinterpret_cast<const CImVector_const_charPtr *>(im) : NULL;
}

inline ImVector<const char *> * toIm(CImVector_const_charPtr * cIm) {
    return cIm ? reinterpret_cast<ImVector<const char *> *>(cIm) : NULL;
}

inline const ImVector<const char *> * toIm(const CImVector_const_charPtr * cIm) {
    return cIm ? reinterpret_cast<const ImVector<const char *> *>(cIm) : NULL;
}

inline CImVector_CImGuiTabBar * toCIm(ImVector<ImGuiTabBar> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiTabBar *>(im) : NULL;
}

inline const CImVector_CImGuiTabBar * toCIm(const ImVector<ImGuiTabBar> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiTabBar *>(im) : NULL;
}

inline ImVector<ImGuiTabBar> * toIm(CImVector_CImGuiTabBar * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiTabBar> *>(cIm) : NULL;
}

inline const ImVector<ImGuiTabBar> * toIm(const CImVector_CImGuiTabBar * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiTabBar> *>(cIm) : NULL;
}

inline CImVector_CImDrawListPtr * toCIm(ImVector<ImDrawList *> * im) {
    return im ? reinterpret_cast<CImVector_CImDrawListPtr *>(im) : NULL;
}

inline const CImVector_CImDrawListPtr * toCIm(const ImVector<ImDrawList *> * im) {
    return im ? reinterpret_cast<const CImVector_CImDrawListPtr *>(im) : NULL;
}

inline ImVector<ImDrawList *> * toIm(CImVector_CImDrawListPtr * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImDrawList *> *>(cIm) : NULL;
}

inline const ImVector<ImDrawList *> * toIm(const CImVector_CImDrawListPtr * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImDrawList *> *>(cIm) : NULL;
}

inline CImVector_CImGuiWindowPtr * toCIm(ImVector<ImGuiWindow *> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiWindowPtr *>(im) : NULL;
}

inline const CImVector_CImGuiWindowPtr * toCIm(const ImVector<ImGuiWindow *> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiWindowPtr *>(im) : NULL;
}

inline ImVector<ImGuiWindow *> * toIm(CImVector_CImGuiWindowPtr * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiWindow *> *>(cIm) : NULL;
}

inline const ImVector<ImGuiWindow *> * toIm(const CImVector_CImGuiWindowPtr * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiWindow *> *>(cIm) : NULL;
}

inline CImVector_CImGuiColumnData * toCIm(ImVector<ImGuiColumnData> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiColumnData *>(im) : NULL;
}

inline const CImVector_CImGuiColumnData * toCIm(const ImVector<ImGuiColumnData> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiColumnData *>(im) : NULL;
}

inline ImVector<ImGuiColumnData> * toIm(CImVector_CImGuiColumnData * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiColumnData> *>(cIm) : NULL;
}

inline const ImVector<ImGuiColumnData> * toIm(const CImVector_CImGuiColumnData * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiColumnData> *>(cIm) : NULL;
}

inline CImVector_CImGuiDockRequest * toCIm(ImVector<ImGuiDockRequest> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiDockRequest *>(im) : NULL;
}

inline const CImVector_CImGuiDockRequest * toCIm(const ImVector<ImGuiDockRequest> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiDockRequest *>(im) : NULL;
}

inline ImVector<ImGuiDockRequest> * toIm(CImVector_CImGuiDockRequest * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiDockRequest> *>(cIm) : NULL;
}

inline const ImVector<ImGuiDockRequest> * toIm(const CImVector_CImGuiDockRequest * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiDockRequest> *>(cIm) : NULL;
}

inline CImVector_CImGuiDockNodeSettings * toCIm(ImVector<ImGuiDockNodeSettings> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiDockNodeSettings *>(im) : NULL;
}

inline const CImVector_CImGuiDockNodeSettings * toCIm(const ImVector<ImGuiDockNodeSettings> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiDockNodeSettings *>(im) : NULL;
}

inline ImVector<ImGuiDockNodeSettings> * toIm(CImVector_CImGuiDockNodeSettings * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiDockNodeSettings> *>(cIm) : NULL;
}

inline const ImVector<ImGuiDockNodeSettings> * toIm(const CImVector_CImGuiDockNodeSettings * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiDockNodeSettings> *>(cIm) : NULL;
}

inline CImVector_CImGuiColorMod * toCIm(ImVector<ImGuiColorMod> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiColorMod *>(im) : NULL;
}

inline const CImVector_CImGuiColorMod * toCIm(const ImVector<ImGuiColorMod> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiColorMod *>(im) : NULL;
}

inline ImVector<ImGuiColorMod> * toIm(CImVector_CImGuiColorMod * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiColorMod> *>(cIm) : NULL;
}

inline const ImVector<ImGuiColorMod> * toIm(const CImVector_CImGuiColorMod * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiColorMod> *>(cIm) : NULL;
}

inline CImVector_CImGuiStyleMod * toCIm(ImVector<ImGuiStyleMod> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiStyleMod *>(im) : NULL;
}

inline const CImVector_CImGuiStyleMod * toCIm(const ImVector<ImGuiStyleMod> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiStyleMod *>(im) : NULL;
}

inline ImVector<ImGuiStyleMod> * toIm(CImVector_CImGuiStyleMod * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiStyleMod> *>(cIm) : NULL;
}

inline const ImVector<ImGuiStyleMod> * toIm(const CImVector_CImGuiStyleMod * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiStyleMod> *>(cIm) : NULL;
}

inline CImVector_CImGuiPopupData * toCIm(ImVector<ImGuiPopupData> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiPopupData *>(im) : NULL;
}

inline const CImVector_CImGuiPopupData * toCIm(const ImVector<ImGuiPopupData> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiPopupData *>(im) : NULL;
}

inline ImVector<ImGuiPopupData> * toIm(CImVector_CImGuiPopupData * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiPopupData> *>(cIm) : NULL;
}

inline const ImVector<ImGuiPopupData> * toIm(const CImVector_CImGuiPopupData * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiPopupData> *>(cIm) : NULL;
}

inline CImVector_CImGuiViewportPPtr * toCIm(ImVector<ImGuiViewportP *> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiViewportPPtr *>(im) : NULL;
}

inline const CImVector_CImGuiViewportPPtr * toCIm(const ImVector<ImGuiViewportP *> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiViewportPPtr *>(im) : NULL;
}

inline ImVector<ImGuiViewportP *> * toIm(CImVector_CImGuiViewportPPtr * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiViewportP *> *>(cIm) : NULL;
}

inline const ImVector<ImGuiViewportP *> * toIm(const CImVector_CImGuiViewportPPtr * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiViewportP *> *>(cIm) : NULL;
}

inline CImVector_unsigned_char * toCIm(ImVector<unsigned char> * im) {
    return im ? reinterpret_cast<CImVector_unsigned_char *>(im) : NULL;
}

inline const CImVector_unsigned_char * toCIm(const ImVector<unsigned char> * im) {
    return im ? reinterpret_cast<const CImVector_unsigned_char *>(im) : NULL;
}

inline ImVector<unsigned char> * toIm(CImVector_unsigned_char * cIm) {
    return cIm ? reinterpret_cast<ImVector<unsigned char> *>(cIm) : NULL;
}

inline const ImVector<unsigned char> * toIm(const CImVector_unsigned_char * cIm) {
    return cIm ? reinterpret_cast<const ImVector<unsigned char> *>(cIm) : NULL;
}

inline CImVector_CImGuiPtrOrIndex * toCIm(ImVector<ImGuiPtrOrIndex> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiPtrOrIndex *>(im) : NULL;
}

inline const CImVector_CImGuiPtrOrIndex * toCIm(const ImVector<ImGuiPtrOrIndex> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiPtrOrIndex *>(im) : NULL;
}

inline ImVector<ImGuiPtrOrIndex> * toIm(CImVector_CImGuiPtrOrIndex * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiPtrOrIndex> *>(cIm) : NULL;
}

inline const ImVector<ImGuiPtrOrIndex> * toIm(const CImVector_CImGuiPtrOrIndex * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiPtrOrIndex> *>(cIm) : NULL;
}

inline CImVector_CImGuiShrinkWidthItem * toCIm(ImVector<ImGuiShrinkWidthItem> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiShrinkWidthItem *>(im) : NULL;
}

inline const CImVector_CImGuiShrinkWidthItem * toCIm(const ImVector<ImGuiShrinkWidthItem> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiShrinkWidthItem *>(im) : NULL;
}

inline ImVector<ImGuiShrinkWidthItem> * toIm(CImVector_CImGuiShrinkWidthItem * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiShrinkWidthItem> *>(cIm) : NULL;
}

inline const ImVector<ImGuiShrinkWidthItem> * toIm(const CImVector_CImGuiShrinkWidthItem * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiShrinkWidthItem> *>(cIm) : NULL;
}

inline CImVector_CImGuiSettingsHandler * toCIm(ImVector<ImGuiSettingsHandler> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiSettingsHandler *>(im) : NULL;
}

inline const CImVector_CImGuiSettingsHandler * toCIm(const ImVector<ImGuiSettingsHandler> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiSettingsHandler *>(im) : NULL;
}

inline ImVector<ImGuiSettingsHandler> * toIm(CImVector_CImGuiSettingsHandler * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiSettingsHandler> *>(cIm) : NULL;
}

inline const ImVector<ImGuiSettingsHandler> * toIm(const CImVector_CImGuiSettingsHandler * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiSettingsHandler> *>(cIm) : NULL;
}

inline CImVector_CImGuiItemFlags * toCIm(ImVector<ImGuiItemFlags> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiItemFlags *>(im) : NULL;
}

inline const CImVector_CImGuiItemFlags * toCIm(const ImVector<ImGuiItemFlags> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiItemFlags *>(im) : NULL;
}

inline ImVector<ImGuiItemFlags> * toIm(CImVector_CImGuiItemFlags * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiItemFlags> *>(cIm) : NULL;
}

inline const ImVector<ImGuiItemFlags> * toIm(const CImVector_CImGuiItemFlags * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiItemFlags> *>(cIm) : NULL;
}

inline CImVector_CImGuiGroupData * toCIm(ImVector<ImGuiGroupData> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiGroupData *>(im) : NULL;
}

inline const CImVector_CImGuiGroupData * toCIm(const ImVector<ImGuiGroupData> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiGroupData *>(im) : NULL;
}

inline ImVector<ImGuiGroupData> * toIm(CImVector_CImGuiGroupData * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiGroupData> *>(cIm) : NULL;
}

inline const ImVector<ImGuiGroupData> * toIm(const CImVector_CImGuiGroupData * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiGroupData> *>(cIm) : NULL;
}

inline CImVector_CImGuiColumns * toCIm(ImVector<ImGuiColumns> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiColumns *>(im) : NULL;
}

inline const CImVector_CImGuiColumns * toCIm(const ImVector<ImGuiColumns> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiColumns *>(im) : NULL;
}

inline ImVector<ImGuiColumns> * toIm(CImVector_CImGuiColumns * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiColumns> *>(cIm) : NULL;
}

inline const ImVector<ImGuiColumns> * toIm(const CImVector_CImGuiColumns * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiColumns> *>(cIm) : NULL;
}

inline CImVector_CImGuiTabItem * toCIm(ImVector<ImGuiTabItem> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiTabItem *>(im) : NULL;
}

inline const CImVector_CImGuiTabItem * toCIm(const ImVector<ImGuiTabItem> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiTabItem *>(im) : NULL;
}

inline ImVector<ImGuiTabItem> * toIm(CImVector_CImGuiTabItem * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiTabItem> *>(cIm) : NULL;
}

inline const ImVector<ImGuiTabItem> * toIm(const CImVector_CImGuiTabItem * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiTabItem> *>(cIm) : NULL;
}

#endif /* conversions_internal_h */
