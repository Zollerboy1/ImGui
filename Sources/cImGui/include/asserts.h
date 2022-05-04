//
//  asserts.h
//  
//
//  Created by Josef Zoller on 09.03.20.
//

#ifndef asserts_h
#define asserts_h

#include "typedefs.h"
#include "vectors.h"
#include "cimgui.h"

#include <cppimgui.hpp>


static_assert((uint8_t)CImGuiCol_COUNT == (uint8_t)ImGuiCol_COUNT, "CImGuiCol_ and ImGuiCol_ are not compatible!");
static_assert((uint8_t)CImGuiDataType_COUNT == (uint8_t)ImGuiDataType_COUNT, "CImGuiDataType_ and ImGuiDataType_ are not compatible!");
static_assert((uint8_t)CImGuiDir_COUNT == (uint8_t)ImGuiDir_COUNT, "CImGuiDir_ and ImGuiDir_ are not compatible!");
static_assert((uint8_t)CImGuiKey_COUNT == (uint8_t)ImGuiKey_COUNT && (uint8_t)CImGuiKey_NamedKey_COUNT == (uint8_t)ImGuiKey_NamedKey_COUNT, "CImGuiKey_ and ImGuiKey_ are not compatible!");
static_assert((uint8_t)CImGuiNavInput_COUNT == (uint8_t)ImGuiNavInput_COUNT, "CImGuiNavInput_ and ImGuiNavInput_ are not compatible!");
static_assert((uint8_t)CImGuiMouseButton_COUNT == (uint8_t)ImGuiMouseButton_COUNT, "CImGuiMouseButton_ and ImGuiMouseButton_ are not compatible!");
static_assert((uint8_t)CImGuiMouseCursor_COUNT == (uint8_t)ImGuiMouseCursor_COUNT, "CImGuiMouseCursor_ and ImGuiMouseCursor_ are not compatible!");
static_assert((uint8_t)CImGuiStyleVar_COUNT == (uint8_t)ImGuiStyleVar_COUNT, "CImGuiStyleVar_ and ImGuiStyleVar_ are not compatible!");


static_assert(sizeof(CImDrawChannel) == sizeof(ImDrawChannel), "CImDrawChannel and ImDrawChannel are not compatible!");
static_assert(sizeof(CImDrawCmd) == sizeof(ImDrawCmd), "CImDrawCmd and ImDrawCmd are not compatible!");
static_assert(sizeof(CImDrawCmdHeader) == sizeof(ImDrawCmdHeader), "CImDrawCmdHeader and ImDrawCmdHeader are not compatible!");
static_assert(sizeof(CImDrawData) == sizeof(ImDrawData), "CImDrawData and ImDrawData are not compatible!");
static_assert(sizeof(CImDrawListSplitter) == sizeof(ImDrawListSplitter), "CImDrawListSplitter and ImDrawListSplitter are not compatible!");
static_assert(sizeof(CImDrawList) == sizeof(ImDrawList), "CImDrawList and ImDrawList are not compatible!");
static_assert(sizeof(CImDrawListSharedData) == sizeof(ImDrawListSharedData), "CImDrawListSharedData and ImDrawListSharedData are not compatible!");
static_assert(sizeof(CImDrawVert) == sizeof(ImDrawVert), "CImDrawVert and ImDrawVert are not compatible!");
static_assert(sizeof(CImFont) == sizeof(ImFont), "CImFont and ImFont are not compatible!");
static_assert(sizeof(CImFontAtlas) == sizeof(ImFontAtlas), "CImFontAtlas and ImFontAtlas are not compatible!");
static_assert(sizeof(CImFontBuilderIO) == sizeof(ImFontBuilderIO), "CImFontBuilderIO and ImFontBuilderIO are not compatible!");
static_assert(sizeof(CImFontConfig) == sizeof(ImFontConfig), "CImFontConfig and ImFontConfig are not compatible!");
static_assert(sizeof(CImFontGlyph) == sizeof(ImFontGlyph), "CImFontGlyph and ImFontGlyph are not compatible!");
static_assert(sizeof(CImFontGlyphRangesBuilder) == sizeof(ImFontGlyphRangesBuilder), "CImFontGlyphRangesBuilder and ImFontGlyphRangesBuilder are not compatible!");
static_assert(sizeof(CImColor) == sizeof(ImColor), "CImColor and ImColor are not compatible!");
static_assert(sizeof(CImGuiIO) == sizeof(ImGuiIO), "CImGuiIO and ImGuiIO are not compatible!");
static_assert(sizeof(CImGuiInputTextCallbackData) == sizeof(ImGuiInputTextCallbackData), "CImGuiInputTextCallbackData and ImGuiInputTextCallbackData are not compatible!");
static_assert(sizeof(CImGuiKeyData) == sizeof(ImGuiKeyData), "CImGuiKeyData and ImGuiKeyData are not compatible!");
static_assert(sizeof(CImGuiListClipper) == sizeof(ImGuiListClipper), "CImGuiListClipper and ImGuiListClipper are not compatible!");
static_assert(sizeof(CImGuiOnceUponAFrame) == sizeof(ImGuiOnceUponAFrame), "CImGuiOnceUponAFrame and ImGuiOnceUponAFrame are not compatible!");
static_assert(sizeof(CImGuiPayload) == sizeof(ImGuiPayload), "CImGuiPayload and ImGuiPayload are not compatible!");
static_assert(sizeof(CImGuiPlatformIO) == sizeof(ImGuiPlatformIO), "CImGuiPlatformIO and ImGuiPlatformIO are not compatible!");
static_assert(sizeof(CImGuiPlatformMonitor) == sizeof(ImGuiPlatformMonitor), "CImGuiPlatformMonitor and ImGuiPlatformMonitor are not compatible!");
static_assert(sizeof(CImGuiPlatformImeData) == sizeof(ImGuiPlatformImeData), "CImGuiPlatformImeData and ImGuiPlatformImeData are not compatible!");
static_assert(sizeof(CImGuiSizeCallbackData) == sizeof(ImGuiSizeCallbackData), "CImGuiSizeCallbackData and ImGuiSizeCallbackData are not compatible!");
static_assert(sizeof(CImGuiStorage) == sizeof(ImGuiStorage), "CImGuiStorage and ImGuiStorage are not compatible!");
static_assert(sizeof(CImGuiStyle) == sizeof(ImGuiStyle), "CImGuiStyle and ImGuiStyle are not compatible!");
static_assert(sizeof(CImGuiTableSortSpecs) == sizeof(ImGuiTableSortSpecs), "CImGuiTableSortSpecs and ImGuiTableSortSpecs are not compatible!");
static_assert(sizeof(CImGuiTableColumnSortSpecs) == sizeof(ImGuiTableColumnSortSpecs), "CImGuiTableColumnSortSpecs and ImGuiTableColumnSortSpecs are not compatible!");
static_assert(sizeof(CImGuiTextBuffer) == sizeof(ImGuiTextBuffer), "CImGuiTextBuffer and ImGuiTextBuffer are not compatible!");
static_assert(sizeof(CImGuiTextFilter) == sizeof(ImGuiTextFilter), "CImGuiTextFilter and ImGuiTextFilter are not compatible!");
static_assert(sizeof(CImGuiViewport) == sizeof(ImGuiViewport), "CImGuiViewport and ImGuiViewport are not compatible!");
static_assert(sizeof(CImGuiWindowClass) == sizeof(ImGuiWindowClass), "CImGuiWindowClass and ImGuiWindowClass are not compatible!");
static_assert(sizeof(CImFontAtlasCustomRect) == sizeof(ImFontAtlasCustomRect), "CImFontAtlasCustomRect and ImFontAtlasCustomRect are not compatible!");

static_assert(sizeof(CImVec2) == sizeof(ImVec2), "CImVec2 and ImVec2 are not compatible!");
static_assert(sizeof(CImVec4) == sizeof(ImVec4), "CImVec4 and ImVec4 are not compatible!");
static_assert(sizeof(CImVector_float) == sizeof(ImVector<float>), "CImVector_float and ImVector<float> are not compatible!");
static_assert(sizeof(CImVector_CImWchar) == sizeof(ImVector<ImWchar>), "CImVector_CImWchar and ImVector<ImWchar> are not compatible!");
static_assert(sizeof(CImVector_CImDrawVert) == sizeof(ImVector<ImDrawVert>), "CImVector_CImDrawVert and ImVector<ImDrawVert> are not compatible!");
static_assert(sizeof(CImVector_CImFontGlyph) == sizeof(ImVector<ImFontGlyph>), "CImVector_CImFontGlyph and ImVector<ImFontGlyph> are not compatible!");
static_assert(sizeof(CImVector_CImGuiTextRange) == sizeof(ImVector<ImGuiTextRange>), "CImVector_CImGuiTextRange and ImVector<ImGuiTextRange> are not compatible!");
static_assert(sizeof(CImVector_CImGuiStoragePair) == sizeof(ImVector<ImGuiStoragePair>), "CImVector_CImGuiStoragePair and ImVector<ImGuiStoragePair> are not compatible!");
static_assert(sizeof(CImVector_CImDrawChannel) == sizeof(ImVector<ImDrawChannel>), "CImVector_CImDrawChannel and ImVector<ImDrawChannel> are not compatible!");
static_assert(sizeof(CImVector_char) == sizeof(ImVector<char>), "CImVector_char and ImVector<char> are not compatible!");
static_assert(sizeof(CImVector_CImU32) == sizeof(ImVector<ImU32>), "CImVector_CImU32 and ImVector<ImU32> are not compatible!");
static_assert(sizeof(CImVector_CImFontAtlasCustomRect) == sizeof(ImVector<ImFontAtlasCustomRect>), "CImVector_CImFontAtlasCustomRect and ImVector<ImFontAtlasCustomRect> are not compatible!");
static_assert(sizeof(CImVector_CImTextureID) == sizeof(ImVector<ImTextureID>), "CImVector_CImTextureID and ImVector<ImTextureID> are not compatible!");
static_assert(sizeof(CImVector_CImFontConfig) == sizeof(ImVector<ImFontConfig>), "CImVector_CImFontConfig and ImVector<ImFontConfig> are not compatible!");
static_assert(sizeof(CImVector_CImGuiPlatformMonitor) == sizeof(ImVector<ImGuiPlatformMonitor>), "CImVector_CImGuiPlatformMonitor and ImVector<ImGuiPlatformMonitor> are not compatible!");
static_assert(sizeof(CImVector_CImGuiViewportPtr) == sizeof(ImVector<ImGuiViewport *>), "CImVector_CImGuiViewportPtr and ImVector<ImGuiViewportPtr> are not compatible!");
static_assert(sizeof(CImVector_CImFontPtr) == sizeof(ImVector<ImFont *>), "CImVector_CImFontPtr and ImVector<ImFontPtr> are not compatible!");
static_assert(sizeof(CImVector_CImDrawCmd) == sizeof(ImVector<ImDrawCmd>), "CImVector_CImDrawCmd and ImVector<ImDrawCmd> are not compatible!");
static_assert(sizeof(CImVector_CImVec4) == sizeof(ImVector<ImVec4>), "CImVector_CImVec4 and ImVector<ImVec4> are not compatible!");
static_assert(sizeof(CImVector_CImDrawIdx) == sizeof(ImVector<ImDrawIdx>), "CImVector_CImDrawIdx and ImVector<ImDrawIdx> are not compatible!");
static_assert(sizeof(CImVector_CImVec2) == sizeof(ImVector<ImVec2>), "CImVector_CImVec2 and ImVector<ImVec2> are not compatible!");

#endif //asserts_h
