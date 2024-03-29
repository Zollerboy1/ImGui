//
//  typedefs.h
//
//
//  Created by Josef Zoller on 11.03.20.
//

#ifndef typedefs_h
#define typedefs_h

#include <stdio.h>
#include <stdint.h>

#ifndef __cplusplus
    #include <stdarg.h>
    #include <stdbool.h>
#endif

typedef struct CImDrawChannel CImDrawChannel;
typedef struct CImDrawCmd CImDrawCmd;
typedef struct CImDrawCmdHeader CImDrawCmdHeader;
typedef struct CImDrawData CImDrawData;
typedef struct CImDrawList CImDrawList;
typedef struct CImDrawListSharedData CImDrawListSharedData;
typedef struct CImDrawListSplitter CImDrawListSplitter;
typedef struct CImDrawVert CImDrawVert;
typedef struct CImFont CImFont;
typedef struct CImFontAtlas CImFontAtlas;
typedef struct CImFontBuilderIO CImFontBuilderIO;
typedef struct CImFontConfig CImFontConfig;
typedef struct CImFontGlyph CImFontGlyph;
typedef struct CImFontGlyphRangesBuilder CImFontGlyphRangesBuilder;
typedef struct CImColor CImColor;
typedef struct CImGuiIO CImGuiIO;
typedef struct CImGuiInputTextCallbackData CImGuiInputTextCallbackData;
typedef struct CImGuiKeyData CImGuiKeyData;
typedef struct CImGuiListClipper CImGuiListClipper;
typedef struct CImGuiOnceUponAFrame CImGuiOnceUponAFrame;
typedef struct CImGuiPayload CImGuiPayload;
typedef struct CImGuiPlatformIO CImGuiPlatformIO;
typedef struct CImGuiPlatformMonitor CImGuiPlatformMonitor;
typedef struct CImGuiPlatformImeData CImGuiPlatformImeData;
typedef struct CImGuiSizeCallbackData CImGuiSizeCallbackData;
typedef struct CImGuiStorage CImGuiStorage;
typedef struct CImGuiStyle CImGuiStyle;
typedef struct CImGuiTableSortSpecs CImGuiTableSortSpecs;
typedef struct CImGuiTableColumnSortSpecs CImGuiTableColumnSortSpecs;
typedef struct CImGuiTextBuffer CImGuiTextBuffer;
typedef struct CImGuiTextFilter CImGuiTextFilter;
typedef struct CImGuiViewport CImGuiViewport;
typedef struct CImGuiWindowClass CImGuiWindowClass;
typedef struct CImFontAtlasCustomRect CImFontAtlasCustomRect;

//Opaque
typedef struct ImGuiContext CImGuiContext;
typedef struct ImGuiStoragePair CImGuiStoragePair;
typedef struct ImGuiTextRange CImGuiTextRange;

//For callbacks
typedef struct ImVec2 ImVec2;
typedef struct ImDrawData ImDrawData;
typedef struct ImFontAtlas ImFontAtlas;
typedef struct ImGuiViewport ImGuiViewport;
typedef struct ImGuiPlatformImeData ImGuiPlatformImeData;

typedef int CImGuiKey;
typedef int CImGuiCol;
typedef int CImGuiCond;
typedef int CImGuiDataType;
typedef int CImGuiDir;
typedef int CImGuiMouseButton;
typedef int CImGuiMouseCursor;
typedef int CImGuiSortDirection;
typedef int CImGuiStyleVar;
typedef int CImGuiTableBgTarget;
typedef int CImDrawFlags;
typedef int CImDrawListFlags;
typedef int CImFontAtlasFlags;
typedef int CImGuiBackendFlags;
typedef int CImGuiButtonFlags;
typedef int CImGuiColorEditFlags;
typedef int CImGuiConfigFlags;
typedef int CImGuiComboFlags;
typedef int CImGuiDockNodeFlags;
typedef int CImGuiDragDropFlags;
typedef int CImGuiFocusedFlags;
typedef int CImGuiHoveredFlags;
typedef int CImGuiInputTextFlags;
typedef int CImGuiPopupFlags;
typedef int CImGuiKeyChord;
typedef int CImGuiSelectableFlags;
typedef int CImGuiSliderFlags;
typedef int CImGuiTabBarFlags;
typedef int CImGuiTabItemFlags;
typedef int CImGuiTableFlags;
typedef int CImGuiTableColumnFlags;
typedef int CImGuiTableRowFlags;
typedef int CImGuiTreeNodeFlags;
typedef int CImGuiViewportFlags;
typedef int CImGuiWindowFlags;

typedef void * CImTextureID;
typedef unsigned short CImDrawIdx;
typedef unsigned int CImGuiID;

typedef signed char CImS8;
typedef unsigned char CImU8;
typedef signed short CImS16;
typedef unsigned short CImU16;
typedef signed int CImS32;
typedef unsigned int CImU32;
typedef signed long long CImS64;
typedef unsigned long long CImU64;

typedef unsigned short CImWchar16;
typedef unsigned int CImWchar32;
#ifdef CIMGUI_USE_WCHAR32
typedef CImWchar32 CImWchar;
#else
typedef CImWchar16 CImWchar;
#endif

typedef int (*CImGuiInputTextCallback)(CImGuiInputTextCallbackData * data);
typedef void (*CImGuiSizeCallback)(CImGuiSizeCallbackData * data);
typedef void * (*CImGuiMemAllocFunc)(size_t sz, void * userData);
typedef void (*CImGuiMemFreeFunc)(void * ptr, void * userData);
typedef void (*CImDrawCallback)(const CImDrawList * parent_list, const CImDrawCmd * cmd);

#define CIM_UNICODE_CODEPOINT_INVALID 0xFFFD
#ifdef CIMGUI_USE_WCHAR32
#define CIM_UNICODE_CODEPOINT_MAX     0x10FFFF
#else
#define CIM_UNICODE_CODEPOINT_MAX     0xFFFF
#endif

#define CIM_DRAWLIST_TEX_LINES_WIDTH_MAX (63)

typedef struct CImVec2 CImVec2;
typedef struct CImVec4 CImVec4;
typedef struct CImVector_float CImVector_float;
typedef struct CImVector_CImWchar CImVector_CImWchar;
typedef struct CImVector_CImDrawVert CImVector_CImDrawVert;
typedef struct CImVector_CImFontGlyph CImVector_CImFontGlyph;
typedef struct CImVector_CImGuiTextRange CImVector_CImGuiTextRange;
typedef struct CImVector_CImGuiStoragePair CImVector_CImGuiStoragePair;
typedef struct CImVector_CImDrawChannel CImVector_CImDrawChannel;
typedef struct CImVector_char CImVector_char;
typedef struct CImVector_CImU32 CImVector_CImU32;
typedef struct CImVector_CImFontAtlasCustomRect CImVector_CImFontAtlasCustomRect;
typedef struct CImVector_CImTextureID CImVector_CImTextureID;
typedef struct CImVector_CImFontConfig CImVector_CImFontConfig;
typedef struct CImVector_CImGuiPlatformMonitor CImVector_CImGuiPlatformMonitor;
typedef struct CImVector_CImGuiViewportPtr CImVector_CImGuiViewportPtr;
typedef struct CImVector_CImFontPtr CImVector_CImFontPtr;
typedef struct CImVector_CImDrawCmd CImVector_CImDrawCmd;
typedef struct CImVector_CImVec4 CImVector_CImVec4;
typedef struct CImVector_CImDrawIdx CImVector_CImDrawIdx;
typedef struct CImVector_CImVec2 CImVector_CImVec2;

#endif //typedefs_h
