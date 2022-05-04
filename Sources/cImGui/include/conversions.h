//
//  conversions.h
//  
//
//  Created by Josef Zoller on 09.03.20.
//

#ifndef conversions_h
#define conversions_h

#include "cimgui.h"

#include <cppimgui.hpp>


inline CImDrawChannel * toCIm(ImDrawChannel * im) {
    return im ? reinterpret_cast<CImDrawChannel *>(im) : NULL;
}

inline const CImDrawChannel * toCIm(const ImDrawChannel * im) {
    return im ? reinterpret_cast<const CImDrawChannel *>(im) : NULL;
}

inline ImDrawChannel * toIm(CImDrawChannel * cIm) {
    return cIm ? reinterpret_cast<ImDrawChannel *>(cIm) : NULL;
}

inline const ImDrawChannel * toIm(const CImDrawChannel * cIm) {
    return cIm ? reinterpret_cast<const ImDrawChannel *>(cIm) : NULL;
}

inline CImDrawCmd * toCIm(ImDrawCmd * im) {
    return im ? reinterpret_cast<CImDrawCmd *>(im) : NULL;
}

inline const CImDrawCmd * toCIm(const ImDrawCmd * im) {
    return im ? reinterpret_cast<const CImDrawCmd *>(im) : NULL;
}

inline ImDrawCmd * toIm(CImDrawCmd * cIm) {
    return cIm ? reinterpret_cast<ImDrawCmd *>(cIm) : NULL;
}

inline const ImDrawCmd * toIm(const CImDrawCmd * cIm) {
    return cIm ? reinterpret_cast<const ImDrawCmd *>(cIm) : NULL;
}

inline CImDrawCmdHeader * toCIm(ImDrawCmdHeader * im) {
    return im ? reinterpret_cast<CImDrawCmdHeader *>(im) : NULL;
}

inline const CImDrawCmdHeader * toCIm(const ImDrawCmdHeader * im) {
    return im ? reinterpret_cast<const CImDrawCmdHeader *>(im) : NULL;
}

inline ImDrawCmdHeader * toIm(CImDrawCmdHeader * cIm) {
    return cIm ? reinterpret_cast<ImDrawCmdHeader *>(cIm) : NULL;
}

inline const ImDrawCmdHeader * toIm(const CImDrawCmdHeader * cIm) {
    return cIm ? reinterpret_cast<const ImDrawCmdHeader *>(cIm) : NULL;
}

inline CImDrawData * toCIm(ImDrawData * im) {
    return im ? reinterpret_cast<CImDrawData *>(im) : NULL;
}

inline const CImDrawData * toCIm(const ImDrawData * im) {
    return im ? reinterpret_cast<const CImDrawData *>(im) : NULL;
}

inline ImDrawData * toIm(CImDrawData * cIm) {
    return cIm ? reinterpret_cast<ImDrawData *>(cIm) : NULL;
}

inline const ImDrawData * toIm(const CImDrawData * cIm) {
    return cIm ? reinterpret_cast<const ImDrawData *>(cIm) : NULL;
}

inline CImDrawListSplitter * toCIm(ImDrawListSplitter * im) {
    return im ? reinterpret_cast<CImDrawListSplitter *>(im) : NULL;
}

inline const CImDrawListSplitter * toCIm(const ImDrawListSplitter * im) {
    return im ? reinterpret_cast<const CImDrawListSplitter *>(im) : NULL;
}

inline ImDrawListSplitter * toIm(CImDrawListSplitter * cIm) {
    return cIm ? reinterpret_cast<ImDrawListSplitter *>(cIm) : NULL;
}

inline const ImDrawListSplitter * toIm(const CImDrawListSplitter * cIm) {
    return cIm ? reinterpret_cast<const ImDrawListSplitter *>(cIm) : NULL;
}

inline CImDrawList * toCIm(ImDrawList * im) {
    return im ? reinterpret_cast<CImDrawList *>(im) : NULL;
}

inline const CImDrawList * toCIm(const ImDrawList * im) {
    return im ? reinterpret_cast<const CImDrawList *>(im) : NULL;
}

inline ImDrawList * toIm(CImDrawList * cIm) {
    return cIm ? reinterpret_cast<ImDrawList *>(cIm) : NULL;
}

inline const ImDrawList * toIm(const CImDrawList * cIm) {
    return cIm ? reinterpret_cast<const ImDrawList *>(cIm) : NULL;
}

inline CImDrawListSharedData * toCIm(ImDrawListSharedData * im) {
    return im ? reinterpret_cast<CImDrawListSharedData *>(im) : NULL;
}

inline const CImDrawListSharedData * toCIm(const ImDrawListSharedData * im) {
    return im ? reinterpret_cast<const CImDrawListSharedData *>(im) : NULL;
}

inline ImDrawListSharedData * toIm(CImDrawListSharedData * cIm) {
    return cIm ? reinterpret_cast<ImDrawListSharedData *>(cIm) : NULL;
}

inline const ImDrawListSharedData * toIm(const CImDrawListSharedData * cIm) {
    return cIm ? reinterpret_cast<const ImDrawListSharedData *>(cIm) : NULL;
}

inline CImDrawVert * toCIm(ImDrawVert * im) {
    return im ? reinterpret_cast<CImDrawVert *>(im) : NULL;
}

inline const CImDrawVert * toCIm(const ImDrawVert * im) {
    return im ? reinterpret_cast<const CImDrawVert *>(im) : NULL;
}

inline ImDrawVert * toIm(CImDrawVert * cIm) {
    return cIm ? reinterpret_cast<ImDrawVert *>(cIm) : NULL;
}

inline const ImDrawVert * toIm(const CImDrawVert * cIm) {
    return cIm ? reinterpret_cast<const ImDrawVert *>(cIm) : NULL;
}

inline CImFont * toCIm(ImFont * im) {
    return im ? reinterpret_cast<CImFont *>(im) : NULL;
}

inline const CImFont * toCIm(const ImFont * im) {
    return im ? reinterpret_cast<const CImFont *>(im) : NULL;
}

inline CImFont ** toCIm(ImFont ** im) {
    return im ? reinterpret_cast<CImFont **>(im) : NULL;
}

inline CImFont * const * toCIm(ImFont * const * im) {
    return im ? reinterpret_cast<CImFont * const *>(im) : NULL;
}

inline ImFont * toIm(CImFont * cIm) {
    return cIm ? reinterpret_cast<ImFont *>(cIm) : NULL;
}

inline const ImFont * toIm(const CImFont * cIm) {
    return cIm ? reinterpret_cast<const ImFont *>(cIm) : NULL;
}

inline ImFont ** toIm(CImFont ** cIm) {
    return cIm ? reinterpret_cast<ImFont **>(cIm) : NULL;
}

inline ImFont * const * toIm(CImFont * const * cIm) {
    return cIm ? reinterpret_cast<ImFont * const *>(cIm) : NULL;
}

inline CImFontAtlas * toCIm(ImFontAtlas * im) {
    return im ? reinterpret_cast<CImFontAtlas *>(im) : NULL;
}

inline const CImFontAtlas * toCIm(const ImFontAtlas * im) {
    return im ? reinterpret_cast<const CImFontAtlas *>(im) : NULL;
}

inline ImFontAtlas * toIm(CImFontAtlas * cIm) {
    return cIm ? reinterpret_cast<ImFontAtlas *>(cIm) : NULL;
}

inline const ImFontAtlas * toIm(const CImFontAtlas * cIm) {
    return cIm ? reinterpret_cast<const ImFontAtlas *>(cIm) : NULL;
}

inline CImFontBuilderIO * toCIm(ImFontBuilderIO * im) {
    return im ? reinterpret_cast<CImFontBuilderIO *>(im) : NULL;
}

inline const CImFontBuilderIO * toCIm(const ImFontBuilderIO * im) {
    return im ? reinterpret_cast<const CImFontBuilderIO *>(im) : NULL;
}

inline ImFontBuilderIO * toIm(CImFontBuilderIO * cIm) {
    return cIm ? reinterpret_cast<ImFontBuilderIO *>(cIm) : NULL;
}

inline const ImFontBuilderIO * toIm(const CImFontBuilderIO * cIm) {
    return cIm ? reinterpret_cast<const ImFontBuilderIO *>(cIm) : NULL;
}

inline CImFontConfig * toCIm(ImFontConfig * im) {
    return im ? reinterpret_cast<CImFontConfig *>(im) : NULL;
}

inline const CImFontConfig * toCIm(const ImFontConfig * im) {
    return im ? reinterpret_cast<const CImFontConfig *>(im) : NULL;
}

inline ImFontConfig * toIm(CImFontConfig * cIm) {
    return cIm ? reinterpret_cast<ImFontConfig *>(cIm) : NULL;
}

inline const ImFontConfig * toIm(const CImFontConfig * cIm) {
    return cIm ? reinterpret_cast<const ImFontConfig *>(cIm) : NULL;
}

inline CImFontGlyph * toCIm(ImFontGlyph * im) {
    return im ? reinterpret_cast<CImFontGlyph *>(im) : NULL;
}

inline const CImFontGlyph * toCIm(const ImFontGlyph * im) {
    return im ? reinterpret_cast<const CImFontGlyph *>(im) : NULL;
}

inline ImFontGlyph * toIm(CImFontGlyph * cIm) {
    return cIm ? reinterpret_cast<ImFontGlyph *>(cIm) : NULL;
}

inline const ImFontGlyph * toIm(const CImFontGlyph * cIm) {
    return cIm ? reinterpret_cast<const ImFontGlyph *>(cIm) : NULL;
}

inline CImFontGlyphRangesBuilder * toCIm(ImFontGlyphRangesBuilder * im) {
    return im ? reinterpret_cast<CImFontGlyphRangesBuilder *>(im) : NULL;
}

inline const CImFontGlyphRangesBuilder * toCIm(const ImFontGlyphRangesBuilder * im) {
    return im ? reinterpret_cast<const CImFontGlyphRangesBuilder *>(im) : NULL;
}

inline ImFontGlyphRangesBuilder * toIm(CImFontGlyphRangesBuilder * cIm) {
    return cIm ? reinterpret_cast<ImFontGlyphRangesBuilder *>(cIm) : NULL;
}

inline const ImFontGlyphRangesBuilder * toIm(const CImFontGlyphRangesBuilder * cIm) {
    return cIm ? reinterpret_cast<const ImFontGlyphRangesBuilder *>(cIm) : NULL;
}

inline CImColor * toCIm(ImColor * im) {
    return im ? reinterpret_cast<CImColor *>(im) : NULL;
}

inline const CImColor * toCIm(const ImColor * im) {
    return im ? reinterpret_cast<const CImColor *>(im) : NULL;
}

inline ImColor * toIm(CImColor * cIm) {
    return cIm ? reinterpret_cast<ImColor *>(cIm) : NULL;
}

inline const ImColor * toIm(const CImColor * cIm) {
    return cIm ? reinterpret_cast<const ImColor *>(cIm) : NULL;
}

inline CImGuiIO * toCIm(ImGuiIO * im) {
    return im ? reinterpret_cast<CImGuiIO *>(im) : NULL;
}

inline const CImGuiIO * toCIm(const ImGuiIO * im) {
    return im ? reinterpret_cast<const CImGuiIO *>(im) : NULL;
}

inline ImGuiIO * toIm(CImGuiIO * cIm) {
    return cIm ? reinterpret_cast<ImGuiIO *>(cIm) : NULL;
}

inline const ImGuiIO * toIm(const CImGuiIO * cIm) {
    return cIm ? reinterpret_cast<const ImGuiIO *>(cIm) : NULL;
}

inline CImGuiInputTextCallbackData * toCIm(ImGuiInputTextCallbackData * im) {
    return im ? reinterpret_cast<CImGuiInputTextCallbackData *>(im) : NULL;
}

inline const CImGuiInputTextCallbackData * toCIm(const ImGuiInputTextCallbackData * im) {
    return im ? reinterpret_cast<const CImGuiInputTextCallbackData *>(im) : NULL;
}

inline ImGuiInputTextCallbackData * toIm(CImGuiInputTextCallbackData * cIm) {
    return cIm ? reinterpret_cast<ImGuiInputTextCallbackData *>(cIm) : NULL;
}

inline const ImGuiInputTextCallbackData * toIm(const CImGuiInputTextCallbackData * cIm) {
    return cIm ? reinterpret_cast<const ImGuiInputTextCallbackData *>(cIm) : NULL;
}

inline CImGuiKeyData * toCIm(ImGuiKeyData * im) {
    return im ? reinterpret_cast<CImGuiKeyData *>(im) : NULL;
}

inline const CImGuiKeyData * toCIm(const ImGuiKeyData * im) {
    return im ? reinterpret_cast<const CImGuiKeyData *>(im) : NULL;
}

inline ImGuiKeyData * toIm(CImGuiKeyData * cIm) {
    return cIm ? reinterpret_cast<ImGuiKeyData *>(cIm) : NULL;
}

inline const ImGuiKeyData * toIm(const CImGuiKeyData * cIm) {
    return cIm ? reinterpret_cast<const ImGuiKeyData *>(cIm) : NULL;
}

inline CImGuiListClipper * toCIm(ImGuiListClipper * im) {
    return im ? reinterpret_cast<CImGuiListClipper *>(im) : NULL;
}

inline const CImGuiListClipper * toCIm(const ImGuiListClipper * im) {
    return im ? reinterpret_cast<const CImGuiListClipper *>(im) : NULL;
}

inline ImGuiListClipper * toIm(CImGuiListClipper * cIm) {
    return cIm ? reinterpret_cast<ImGuiListClipper *>(cIm) : NULL;
}

inline const ImGuiListClipper * toIm(const CImGuiListClipper * cIm) {
    return cIm ? reinterpret_cast<const ImGuiListClipper *>(cIm) : NULL;
}

inline CImGuiOnceUponAFrame * toCIm(ImGuiOnceUponAFrame * im) {
    return im ? reinterpret_cast<CImGuiOnceUponAFrame *>(im) : NULL;
}

inline const CImGuiOnceUponAFrame * toCIm(const ImGuiOnceUponAFrame * im) {
    return im ? reinterpret_cast<const CImGuiOnceUponAFrame *>(im) : NULL;
}

inline ImGuiOnceUponAFrame * toIm(CImGuiOnceUponAFrame * cIm) {
    return cIm ? reinterpret_cast<ImGuiOnceUponAFrame *>(cIm) : NULL;
}

inline const ImGuiOnceUponAFrame * toIm(const CImGuiOnceUponAFrame * cIm) {
    return cIm ? reinterpret_cast<const ImGuiOnceUponAFrame *>(cIm) : NULL;
}

inline CImGuiPayload * toCIm(ImGuiPayload * im) {
    return im ? reinterpret_cast<CImGuiPayload *>(im) : NULL;
}

inline const CImGuiPayload * toCIm(const ImGuiPayload * im) {
    return im ? reinterpret_cast<const CImGuiPayload *>(im) : NULL;
}

inline ImGuiPayload * toIm(CImGuiPayload * cIm) {
    return cIm ? reinterpret_cast<ImGuiPayload *>(cIm) : NULL;
}

inline const ImGuiPayload * toIm(const CImGuiPayload * cIm) {
    return cIm ? reinterpret_cast<const ImGuiPayload *>(cIm) : NULL;
}

inline CImGuiPlatformIO * toCIm(ImGuiPlatformIO * im) {
    return im ? reinterpret_cast<CImGuiPlatformIO *>(im) : NULL;
}

inline const CImGuiPlatformIO * toCIm(const ImGuiPlatformIO * im) {
    return im ? reinterpret_cast<const CImGuiPlatformIO *>(im) : NULL;
}

inline ImGuiPlatformIO * toIm(CImGuiPlatformIO * cIm) {
    return cIm ? reinterpret_cast<ImGuiPlatformIO *>(cIm) : NULL;
}

inline const ImGuiPlatformIO * toIm(const CImGuiPlatformIO * cIm) {
    return cIm ? reinterpret_cast<const ImGuiPlatformIO *>(cIm) : NULL;
}

inline CImGuiPlatformMonitor * toCIm(ImGuiPlatformMonitor * im) {
    return im ? reinterpret_cast<CImGuiPlatformMonitor *>(im) : NULL;
}

inline const CImGuiPlatformMonitor * toCIm(const ImGuiPlatformMonitor * im) {
    return im ? reinterpret_cast<const CImGuiPlatformMonitor *>(im) : NULL;
}

inline CImGuiPlatformMonitor ** toCIm(ImGuiPlatformMonitor ** im) {
    return im ? reinterpret_cast<CImGuiPlatformMonitor **>(im) : NULL;
}

inline CImGuiPlatformMonitor * const * toCIm(ImGuiPlatformMonitor * const * im) {
    return im ? reinterpret_cast<CImGuiPlatformMonitor * const *>(im) : NULL;
}

inline ImGuiPlatformMonitor * toIm(CImGuiPlatformMonitor * cIm) {
    return cIm ? reinterpret_cast<ImGuiPlatformMonitor *>(cIm) : NULL;
}

inline const ImGuiPlatformMonitor * toIm(const CImGuiPlatformMonitor * cIm) {
    return cIm ? reinterpret_cast<const ImGuiPlatformMonitor *>(cIm) : NULL;
}

inline ImGuiPlatformMonitor ** toIm(CImGuiPlatformMonitor ** cIm) {
    return cIm ? reinterpret_cast<ImGuiPlatformMonitor **>(cIm) : NULL;
}

inline ImGuiPlatformMonitor * const * toIm(CImGuiPlatformMonitor * const * cIm) {
    return cIm ? reinterpret_cast<ImGuiPlatformMonitor * const *>(cIm) : NULL;
}

inline CImGuiPlatformImeData * toCIm(ImGuiPlatformImeData * im) {
    return im ? reinterpret_cast<CImGuiPlatformImeData *>(im) : NULL;
}

inline const CImGuiPlatformImeData * toCIm(const ImGuiPlatformImeData * im) {
    return im ? reinterpret_cast<const CImGuiPlatformImeData *>(im) : NULL;
}

inline ImGuiPlatformImeData * toIm(CImGuiPlatformImeData * cIm) {
    return cIm ? reinterpret_cast<ImGuiPlatformImeData *>(cIm) : NULL;
}

inline const ImGuiPlatformImeData * toIm(const CImGuiPlatformImeData * cIm) {
    return cIm ? reinterpret_cast<const ImGuiPlatformImeData *>(cIm) : NULL;
}

inline CImGuiSizeCallbackData * toCIm(ImGuiSizeCallbackData * im) {
    return im ? reinterpret_cast<CImGuiSizeCallbackData *>(im) : NULL;
}

inline const CImGuiSizeCallbackData * toCIm(const ImGuiSizeCallbackData * im) {
    return im ? reinterpret_cast<const CImGuiSizeCallbackData *>(im) : NULL;
}

inline ImGuiSizeCallbackData * toIm(CImGuiSizeCallbackData * cIm) {
    return cIm ? reinterpret_cast<ImGuiSizeCallbackData *>(cIm) : NULL;
}

inline const ImGuiSizeCallbackData * toIm(const CImGuiSizeCallbackData * cIm) {
    return cIm ? reinterpret_cast<const ImGuiSizeCallbackData *>(cIm) : NULL;
}

inline CImGuiStorage * toCIm(ImGuiStorage * im) {
    return im ? reinterpret_cast<CImGuiStorage *>(im) : NULL;
}

inline const CImGuiStorage * toCIm(const ImGuiStorage * im) {
    return im ? reinterpret_cast<const CImGuiStorage *>(im) : NULL;
}

inline ImGuiStorage * toIm(CImGuiStorage * cIm) {
    return cIm ? reinterpret_cast<ImGuiStorage *>(cIm) : NULL;
}

inline const ImGuiStorage * toIm(const CImGuiStorage * cIm) {
    return cIm ? reinterpret_cast<const ImGuiStorage *>(cIm) : NULL;
}

inline CImGuiStyle * toCIm(ImGuiStyle * im) {
    return im ? reinterpret_cast<CImGuiStyle *>(im) : NULL;
}

inline const CImGuiStyle * toCIm(const ImGuiStyle * im) {
    return im ? reinterpret_cast<const CImGuiStyle *>(im) : NULL;
}

inline ImGuiStyle * toIm(CImGuiStyle * cIm) {
    return cIm ? reinterpret_cast<ImGuiStyle *>(cIm) : NULL;
}

inline const ImGuiStyle * toIm(const CImGuiStyle * cIm) {
    return cIm ? reinterpret_cast<const ImGuiStyle *>(cIm) : NULL;
}

inline CImGuiTableSortSpecs * toCIm(ImGuiTableSortSpecs * im) {
    return im ? reinterpret_cast<CImGuiTableSortSpecs *>(im) : NULL;
}

inline const CImGuiTableSortSpecs * toCIm(const ImGuiTableSortSpecs * im) {
    return im ? reinterpret_cast<const CImGuiTableSortSpecs *>(im) : NULL;
}

inline ImGuiTableSortSpecs * toIm(CImGuiTableSortSpecs * cIm) {
    return cIm ? reinterpret_cast<ImGuiTableSortSpecs *>(cIm) : NULL;
}

inline const ImGuiTableSortSpecs * toIm(const CImGuiTableSortSpecs * cIm) {
    return cIm ? reinterpret_cast<const ImGuiTableSortSpecs *>(cIm) : NULL;
}

inline CImGuiTableColumnSortSpecs * toCIm(ImGuiTableColumnSortSpecs * im) {
    return im ? reinterpret_cast<CImGuiTableColumnSortSpecs *>(im) : NULL;
}

inline const CImGuiTableColumnSortSpecs * toCIm(const ImGuiTableColumnSortSpecs * im) {
    return im ? reinterpret_cast<const CImGuiTableColumnSortSpecs *>(im) : NULL;
}

inline ImGuiTableColumnSortSpecs * toIm(CImGuiTableColumnSortSpecs * cIm) {
    return cIm ? reinterpret_cast<ImGuiTableColumnSortSpecs *>(cIm) : NULL;
}

inline const ImGuiTableColumnSortSpecs * toIm(const CImGuiTableColumnSortSpecs * cIm) {
    return cIm ? reinterpret_cast<const ImGuiTableColumnSortSpecs *>(cIm) : NULL;
}

inline CImGuiTextBuffer * toCIm(ImGuiTextBuffer * im) {
    return im ? reinterpret_cast<CImGuiTextBuffer *>(im) : NULL;
}

inline const CImGuiTextBuffer * toCIm(const ImGuiTextBuffer * im) {
    return im ? reinterpret_cast<const CImGuiTextBuffer *>(im) : NULL;
}

inline ImGuiTextBuffer * toIm(CImGuiTextBuffer * cIm) {
    return cIm ? reinterpret_cast<ImGuiTextBuffer *>(cIm) : NULL;
}

inline const ImGuiTextBuffer * toIm(const CImGuiTextBuffer * cIm) {
    return cIm ? reinterpret_cast<const ImGuiTextBuffer *>(cIm) : NULL;
}

inline CImGuiTextFilter * toCIm(ImGuiTextFilter * im) {
    return im ? reinterpret_cast<CImGuiTextFilter *>(im) : NULL;
}

inline const CImGuiTextFilter * toCIm(const ImGuiTextFilter * im) {
    return im ? reinterpret_cast<const CImGuiTextFilter *>(im) : NULL;
}

inline ImGuiTextFilter * toIm(CImGuiTextFilter * cIm) {
    return cIm ? reinterpret_cast<ImGuiTextFilter *>(cIm) : NULL;
}

inline const ImGuiTextFilter * toIm(const CImGuiTextFilter * cIm) {
    return cIm ? reinterpret_cast<const ImGuiTextFilter *>(cIm) : NULL;
}

inline CImGuiViewport * toCIm(ImGuiViewport * im) {
    return im ? reinterpret_cast<CImGuiViewport *>(im) : NULL;
}

inline const CImGuiViewport * toCIm(const ImGuiViewport * im) {
    return im ? reinterpret_cast<const CImGuiViewport *>(im) : NULL;
}

inline CImGuiViewport ** toCIm(ImGuiViewport ** im) {
    return im ? reinterpret_cast<CImGuiViewport **>(im) : NULL;
}

inline CImGuiViewport * const * toCIm(ImGuiViewport * const * im) {
    return im ? reinterpret_cast<CImGuiViewport * const *>(im) : NULL;
}

inline ImGuiViewport * toIm(CImGuiViewport * cIm) {
    return cIm ? reinterpret_cast<ImGuiViewport *>(cIm) : NULL;
}

inline const ImGuiViewport * toIm(const CImGuiViewport * cIm) {
    return cIm ? reinterpret_cast<const ImGuiViewport *>(cIm) : NULL;
}

inline ImGuiViewport ** toIm(CImGuiViewport ** cIm) {
    return cIm ? reinterpret_cast<ImGuiViewport **>(cIm) : NULL;
}

inline ImGuiViewport * const * toIm(CImGuiViewport * const * cIm) {
    return cIm ? reinterpret_cast<ImGuiViewport * const *>(cIm) : NULL;
}

inline CImGuiWindowClass * toCIm(ImGuiWindowClass * im) {
    return im ? reinterpret_cast<CImGuiWindowClass *>(im) : NULL;
}

inline const CImGuiWindowClass * toCIm(const ImGuiWindowClass * im) {
    return im ? reinterpret_cast<const CImGuiWindowClass *>(im) : NULL;
}

inline ImGuiWindowClass * toIm(CImGuiWindowClass * cIm) {
    return cIm ? reinterpret_cast<ImGuiWindowClass *>(cIm) : NULL;
}

inline const ImGuiWindowClass * toIm(const CImGuiWindowClass * cIm) {
    return cIm ? reinterpret_cast<const ImGuiWindowClass *>(cIm) : NULL;
}

inline CImFontAtlasCustomRect * toCIm(ImFontAtlasCustomRect * im) {
    return im ? reinterpret_cast<CImFontAtlasCustomRect *>(im) : NULL;
}

inline const CImFontAtlasCustomRect * toCIm(const ImFontAtlasCustomRect * im) {
    return im ? reinterpret_cast<const CImFontAtlasCustomRect *>(im) : NULL;
}

inline ImFontAtlasCustomRect * toIm(CImFontAtlasCustomRect * cIm) {
    return cIm ? reinterpret_cast<ImFontAtlasCustomRect *>(cIm) : NULL;
}

inline const ImFontAtlasCustomRect * toIm(const CImFontAtlasCustomRect * cIm) {
    return cIm ? reinterpret_cast<const ImFontAtlasCustomRect *>(cIm) : NULL;
}



inline CImVec2 toCIm(const ImVec2 & im) {
    return {im.x, im.y};
}

inline ImVec2 toIm(const CImVec2 & cIm) {
    return {cIm.x, cIm.y};
}

inline CImVec4 toCIm(const ImVec4 & im) {
    return {im.x, im.y, im.z, im.w};
}

inline ImVec4 toIm(const CImVec4 & cIm) {
    return {cIm.x, cIm.y, cIm.z, cIm.w};
}


inline ImVec2 * toIm(CImVec2 * cIm) {
    return cIm ? reinterpret_cast<ImVec2 *>(cIm) : NULL;
}

inline const ImVec2 * toIm(const CImVec2 * cIm) {
    return cIm ? reinterpret_cast<const ImVec2 *>(cIm) : NULL;
}

inline CImVec2 * toCIm(ImVec2 * im) {
    return im ? reinterpret_cast<CImVec2 *>(im) : NULL;
}

inline const CImVec2 * toCIm(const ImVec2 * im) {
    return im ? reinterpret_cast<const CImVec2 *>(im) : NULL;
}

inline ImVec4 * toIm(CImVec4 * cIm) {
    return cIm ? reinterpret_cast<ImVec4 *>(cIm) : NULL;
}

inline const ImVec4 * toIm(const CImVec4 * cIm) {
    return cIm ? reinterpret_cast<const ImVec4 *>(cIm) : NULL;
}

inline CImVec4 * toCIm(ImVec4 * im) {
    return im ? reinterpret_cast<CImVec4 *>(im) : NULL;
}

inline const CImVec4 * toCIm(const ImVec4 * im) {
    return im ? reinterpret_cast<const CImVec4 *>(im) : NULL;
}


inline CImVector_float * toCIm(ImVector<float> * im) {
    return im ? reinterpret_cast<CImVector_float *>(im) : NULL;
}

inline const CImVector_float * toCIm(const ImVector<float> * im) {
    return im ? reinterpret_cast<const CImVector_float *>(im) : NULL;
}

inline ImVector<float> * toIm(CImVector_float * cIm) {
    return cIm ? reinterpret_cast<ImVector<float> *>(cIm) : NULL;
}

inline const ImVector<float> * toIm(const CImVector_float * cIm) {
    return cIm ? reinterpret_cast<const ImVector<float> *>(cIm) : NULL;
}

inline CImVector_CImWchar * toCIm(ImVector<ImWchar> * im) {
    return im ? reinterpret_cast<CImVector_CImWchar *>(im) : NULL;
}

inline const CImVector_CImWchar * toCIm(const ImVector<ImWchar> * im) {
    return im ? reinterpret_cast<const CImVector_CImWchar *>(im) : NULL;
}

inline ImVector<ImWchar> * toIm(CImVector_CImWchar * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImWchar> *>(cIm) : NULL;
}

inline const ImVector<ImWchar> * toIm(const CImVector_CImWchar * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImWchar> *>(cIm) : NULL;
}

inline CImVector_CImDrawVert * toCIm(ImVector<ImDrawVert> * im) {
    return im ? reinterpret_cast<CImVector_CImDrawVert *>(im) : NULL;
}

inline const CImVector_CImDrawVert * toCIm(const ImVector<ImDrawVert> * im) {
    return im ? reinterpret_cast<const CImVector_CImDrawVert *>(im) : NULL;
}

inline ImVector<ImDrawVert> * toIm(CImVector_CImDrawVert * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImDrawVert> *>(cIm) : NULL;
}

inline const ImVector<ImDrawVert> * toIm(const CImVector_CImDrawVert * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImDrawVert> *>(cIm) : NULL;
}

inline CImVector_CImFontGlyph * toCIm(ImVector<ImFontGlyph> * im) {
    return im ? reinterpret_cast<CImVector_CImFontGlyph *>(im) : NULL;
}

inline const CImVector_CImFontGlyph * toCIm(const ImVector<ImFontGlyph> * im) {
    return im ? reinterpret_cast<const CImVector_CImFontGlyph *>(im) : NULL;
}

inline ImVector<ImFontGlyph> * toIm(CImVector_CImFontGlyph * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImFontGlyph> *>(cIm) : NULL;
}

inline const ImVector<ImFontGlyph> * toIm(const CImVector_CImFontGlyph * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImFontGlyph> *>(cIm) : NULL;
}

inline CImVector_CImGuiTextRange * toCIm(ImVector<ImGuiTextRange> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiTextRange *>(im) : NULL;
}

inline const CImVector_CImGuiTextRange * toCIm(const ImVector<ImGuiTextRange> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiTextRange *>(im) : NULL;
}

inline ImVector<ImGuiTextRange> * toIm(CImVector_CImGuiTextRange * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiTextRange> *>(cIm) : NULL;
}

inline const ImVector<ImGuiTextRange> * toIm(const CImVector_CImGuiTextRange * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiTextRange> *>(cIm) : NULL;
}

inline CImVector_CImGuiStoragePair * toCIm(ImVector<ImGuiStoragePair> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiStoragePair *>(im) : NULL;
}

inline const CImVector_CImGuiStoragePair * toCIm(const ImVector<ImGuiStoragePair> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiStoragePair *>(im) : NULL;
}

inline ImVector<ImGuiStoragePair> * toIm(CImVector_CImGuiStoragePair * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiStoragePair> *>(cIm) : NULL;
}

inline const ImVector<ImGuiStoragePair> * toIm(const CImVector_CImGuiStoragePair * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiStoragePair> *>(cIm) : NULL;
}

inline CImVector_CImDrawChannel * toCIm(ImVector<ImDrawChannel> * im) {
    return im ? reinterpret_cast<CImVector_CImDrawChannel *>(im) : NULL;
}

inline const CImVector_CImDrawChannel * toCIm(const ImVector<ImDrawChannel> * im) {
    return im ? reinterpret_cast<const CImVector_CImDrawChannel *>(im) : NULL;
}

inline ImVector<ImDrawChannel> * toIm(CImVector_CImDrawChannel * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImDrawChannel> *>(cIm) : NULL;
}

inline const ImVector<ImDrawChannel> * toIm(const CImVector_CImDrawChannel * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImDrawChannel> *>(cIm) : NULL;
}

inline CImVector_char * toCIm(ImVector<char> * im) {
    return im ? reinterpret_cast<CImVector_char *>(im) : NULL;
}

inline const CImVector_char * toCIm(const ImVector<char> * im) {
    return im ? reinterpret_cast<const CImVector_char *>(im) : NULL;
}

inline ImVector<char> * toIm(CImVector_char * cIm) {
    return cIm ? reinterpret_cast<ImVector<char> *>(cIm) : NULL;
}

inline const ImVector<char> * toIm(const CImVector_char * cIm) {
    return cIm ? reinterpret_cast<const ImVector<char> *>(cIm) : NULL;
}

inline CImVector_CImU32 * toCIm(ImVector<ImU32> * im) {
    return im ? reinterpret_cast<CImVector_CImU32 *>(im) : NULL;
}

inline const CImVector_CImU32 * toCIm(const ImVector<ImU32> * im) {
    return im ? reinterpret_cast<const CImVector_CImU32 *>(im) : NULL;
}

inline ImVector<ImU32> * toIm(CImVector_CImU32 * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImU32> *>(cIm) : NULL;
}

inline const ImVector<ImU32> * toIm(const CImVector_CImU32 * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImU32> *>(cIm) : NULL;
}

inline CImVector_CImFontAtlasCustomRect * toCIm(ImVector<ImFontAtlasCustomRect> * im) {
    return im ? reinterpret_cast<CImVector_CImFontAtlasCustomRect *>(im) : NULL;
}

inline const CImVector_CImFontAtlasCustomRect * toCIm(const ImVector<ImFontAtlasCustomRect> * im) {
    return im ? reinterpret_cast<const CImVector_CImFontAtlasCustomRect *>(im) : NULL;
}

inline ImVector<ImFontAtlasCustomRect> * toIm(CImVector_CImFontAtlasCustomRect * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImFontAtlasCustomRect> *>(cIm) : NULL;
}

inline const ImVector<ImFontAtlasCustomRect> * toIm(const CImVector_CImFontAtlasCustomRect * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImFontAtlasCustomRect> *>(cIm) : NULL;
}

inline CImVector_CImTextureID * toCIm(ImVector<ImTextureID> * im) {
    return im ? reinterpret_cast<CImVector_CImTextureID *>(im) : NULL;
}

inline const CImVector_CImTextureID * toCIm(const ImVector<ImTextureID> * im) {
    return im ? reinterpret_cast<const CImVector_CImTextureID *>(im) : NULL;
}

inline ImVector<ImTextureID> * toIm(CImVector_CImTextureID * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImTextureID> *>(cIm) : NULL;
}

inline const ImVector<ImTextureID> * toIm(const CImVector_CImTextureID * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImTextureID> *>(cIm) : NULL;
}

inline CImVector_CImFontConfig * toCIm(ImVector<ImFontConfig> * im) {
    return im ? reinterpret_cast<CImVector_CImFontConfig *>(im) : NULL;
}

inline const CImVector_CImFontConfig * toCIm(const ImVector<ImFontConfig> * im) {
    return im ? reinterpret_cast<const CImVector_CImFontConfig *>(im) : NULL;
}

inline ImVector<ImFontConfig> * toIm(CImVector_CImFontConfig * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImFontConfig> *>(cIm) : NULL;
}

inline const ImVector<ImFontConfig> * toIm(const CImVector_CImFontConfig * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImFontConfig> *>(cIm) : NULL;
}

inline CImVector_CImGuiPlatformMonitor * toCIm(ImVector<ImGuiPlatformMonitor> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiPlatformMonitor *>(im) : NULL;
}

inline const CImVector_CImGuiPlatformMonitor * toCIm(const ImVector<ImGuiPlatformMonitor> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiPlatformMonitor *>(im) : NULL;
}

inline ImVector<ImGuiPlatformMonitor> * toIm(CImVector_CImGuiPlatformMonitor * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiPlatformMonitor> *>(cIm) : NULL;
}

inline const ImVector<ImGuiPlatformMonitor> * toIm(const CImVector_CImGuiPlatformMonitor * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiPlatformMonitor> *>(cIm) : NULL;
}

inline CImVector_CImGuiViewportPtr * toCIm(ImVector<ImGuiViewport *> * im) {
    return im ? reinterpret_cast<CImVector_CImGuiViewportPtr *>(im) : NULL;
}

inline const CImVector_CImGuiViewportPtr * toCIm(const ImVector<ImGuiViewport *> * im) {
    return im ? reinterpret_cast<const CImVector_CImGuiViewportPtr *>(im) : NULL;
}

inline ImVector<ImGuiViewport *> * toIm(CImVector_CImGuiViewportPtr * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImGuiViewport *> *>(cIm) : NULL;
}

inline const ImVector<ImGuiViewport *> * toIm(const CImVector_CImGuiViewportPtr * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImGuiViewport *> *>(cIm) : NULL;
}

inline CImVector_CImFontPtr * toCIm(ImVector<ImFont *> * im) {
    return im ? reinterpret_cast<CImVector_CImFontPtr *>(im) : NULL;
}

inline const CImVector_CImFontPtr * toCIm(const ImVector<ImFont *> * im) {
    return im ? reinterpret_cast<const CImVector_CImFontPtr *>(im) : NULL;
}

inline ImVector<ImFont *> * toIm(CImVector_CImFontPtr * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImFont *> *>(cIm) : NULL;
}

inline const ImVector<ImFont *> * toIm(const CImVector_CImFontPtr * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImFont *> *>(cIm) : NULL;
}

inline CImVector_CImDrawCmd * toCIm(ImVector<ImDrawCmd> * im) {
    return im ? reinterpret_cast<CImVector_CImDrawCmd *>(im) : NULL;
}

inline const CImVector_CImDrawCmd * toCIm(const ImVector<ImDrawCmd> * im) {
    return im ? reinterpret_cast<const CImVector_CImDrawCmd *>(im) : NULL;
}

inline ImVector<ImDrawCmd> * toIm(CImVector_CImDrawCmd * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImDrawCmd> *>(cIm) : NULL;
}

inline const ImVector<ImDrawCmd> * toIm(const CImVector_CImDrawCmd * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImDrawCmd> *>(cIm) : NULL;
}

inline CImVector_CImVec4 * toCIm(ImVector<ImVec4> * im) {
    return im ? reinterpret_cast<CImVector_CImVec4 *>(im) : NULL;
}

inline const CImVector_CImVec4 * toCIm(const ImVector<ImVec4> * im) {
    return im ? reinterpret_cast<const CImVector_CImVec4 *>(im) : NULL;
}

inline ImVector<ImVec4> * toIm(CImVector_CImVec4 * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImVec4> *>(cIm) : NULL;
}

inline const ImVector<ImVec4> * toIm(const CImVector_CImVec4 * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImVec4> *>(cIm) : NULL;
}

inline CImVector_CImDrawIdx * toCImIdx(ImVector<ImDrawIdx> * im) {
    return im ? reinterpret_cast<CImVector_CImDrawIdx *>(im) : NULL;
}

inline const CImVector_CImDrawIdx * toCImIdx(const ImVector<ImDrawIdx> * im) {
    return im ? reinterpret_cast<const CImVector_CImDrawIdx *>(im) : NULL;
}

inline ImVector<ImDrawIdx> * toIm(CImVector_CImDrawIdx * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImDrawIdx> *>(cIm) : NULL;
}

inline const ImVector<ImDrawIdx> * toIm(const CImVector_CImDrawIdx * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImDrawIdx> *>(cIm) : NULL;
}

inline CImVector_CImVec2 * toCIm(ImVector<ImVec2> * im) {
    return im ? reinterpret_cast<CImVector_CImVec2 *>(im) : NULL;
}

inline const CImVector_CImVec2 * toCIm(const ImVector<ImVec2> * im) {
    return im ? reinterpret_cast<const CImVector_CImVec2 *>(im) : NULL;
}

inline ImVector<ImVec2> * toIm(CImVector_CImVec2 * cIm) {
    return cIm ? reinterpret_cast<ImVector<ImVec2> *>(cIm) : NULL;
}

inline const ImVector<ImVec2> * toIm(const CImVector_CImVec2 * cIm) {
    return cIm ? reinterpret_cast<const ImVector<ImVec2> *>(cIm) : NULL;
}

#endif //conversions_h
