//
//  vectors.h
//  
//
//  Created by Josef Zoller on 11.03.20.
//

#ifndef vectors_h
#define vectors_h

#include <stdio.h>
#include <stdint.h>

#ifndef __cplusplus
    #include <stdarg.h>
    #include <stdbool.h>
#endif

#include "typedefs.h"


struct CImVec2 {
    float x, y;
};

struct CImVec4 {
    float x, y, z, w;
};

//template vectors
struct CImVector_float {
    int Size;
    int Capacity;
    float * Data;
};

struct CImVector_CImWchar {
    int Size;
    int Capacity;
    CImWchar * Data;
};

struct CImVector_CImDrawVert {
    int Size;
    int Capacity;
    CImDrawVert * Data;
};

struct CImVector_CImFontGlyph {
    int Size;
    int Capacity;
    CImFontGlyph * Data;
};

struct CImVector_CImGuiTextRange {
    int Size;
    int Capacity;
    CImGuiTextRange * Data;
};

struct CImVector_CImGuiStoragePair {
    int Size;
    int Capacity;
    CImGuiStoragePair * Data;
};

struct CImVector_CImDrawChannel {
    int Size;
    int Capacity;
    CImDrawChannel * Data;
};

struct CImVector_char {
    int Size;
    int Capacity;
    char * Data;
};

struct CImVector_CImU32 {
    int Size;
    int Capacity;
    CImU32 * Data;
};

struct CImVector_CImFontAtlasCustomRect {
    int Size;
    int Capacity;
    CImFontAtlasCustomRect * Data;
};

struct CImVector_CImTextureID {
    int Size;
    int Capacity;
    CImTextureID * Data;
};

struct CImVector_CImFontConfig {
    int Size;
    int Capacity;
    CImFontConfig * Data;
};

struct CImVector_CImGuiPlatformMonitor {
    int Size;
    int Capacity;
    CImGuiPlatformMonitor * Data;
};

struct CImVector_CImGuiViewportPtr {
    int Size;
    int Capacity;
    CImGuiViewport ** Data;
};

struct CImVector_CImFontPtr {
    int Size;
    int Capacity;
    CImFont ** Data;
};

struct CImVector_CImDrawCmd {
    int Size;
    int Capacity;
    CImDrawCmd * Data;
};

struct CImVector_CImVec4 {
    int Size;
    int Capacity;
    CImVec4 * Data;
};

struct CImVector_CImDrawIdx {
    int Size;
    int Capacity;
    CImDrawIdx * Data;
};

struct CImVector_CImVec2 {
    int Size;
    int Capacity;
    CImVec2 * Data;
};



#ifdef __cplusplus
extern "C" {
#endif

CImVec2 * ig_CImVec2_init();
CImVec2 * ig_CImVec2_initFloat(float _x, float _y);
void ig_CImVec2_deinit(const CImVec2 * ptr);


CImVec4 * ig_CImVec4_init();
CImVec4 * ig_CImVec4_initFloat(float _x, float _y, float _z, float _w);
void ig_CImVec4_deinit(const CImVec4 * ptr);


CImVector_float * ig_CImVector_float_init();
void ig_CImVector_float_deinit(const CImVector_float * ptr);
bool ig_CImVector_float_Empty(const CImVector_float * ptr);
int ig_CImVector_float_Size(const CImVector_float * ptr);
int ig_CImVector_float_Size_in_bytes(const CImVector_float * ptr);
int ig_CImVector_float_Capacity(const CImVector_float * ptr);
float ig_CImVector_float_subscript(const CImVector_float * ptr, int i);
float * ig_CImVector_float_subscriptPointer(CImVector_float * ptr, int i);

void ig_CImVector_float_Clear(CImVector_float * ptr);
float * ig_CImVector_float_Begin(CImVector_float * ptr);
const float * ig_CImVector_float_BeginConst(const CImVector_float * ptr);
float * ig_CImVector_float_End(CImVector_float * ptr);
const float * ig_CImVector_float_EndConst(const CImVector_float * ptr);
float ig_CImVector_float_Front(const CImVector_float * ptr);
float ig_CImVector_float_Back(const CImVector_float * ptr);
void ig_CImVector_float_Swap(CImVector_float * ptr, CImVector_float * other);

void ig_CImVector_float_Resize(CImVector_float * ptr, int new_size);
void ig_CImVector_float_ResizeValue(CImVector_float * ptr, int new_size, float v);
void ig_CImVector_float_Shrink(CImVector_float * ptr, int new_size);
void ig_CImVector_float_Reserve(CImVector_float * ptr, int new_capacity);

void ig_CImVector_float_PushBack(CImVector_float * ptr, float v);
void ig_CImVector_float_PopBack(CImVector_float * ptr);
void ig_CImVector_float_PushFront(CImVector_float * ptr, float v);
float * ig_CImVector_float_Erase(CImVector_float * ptr, const float * it);
float * ig_CImVector_float_EraseRange(CImVector_float * ptr, const float * it, const float * it_last);
float * ig_CImVector_float_Insert(CImVector_float * ptr, const float * it, float v);
bool ig_CImVector_float_Contains(const CImVector_float * ptr, float v);
float * ig_CImVector_float_Find(CImVector_float * ptr, float v);
const float * ig_CImVector_float_FindConst(const CImVector_float * ptr, float v);
bool ig_CImVector_float_FindErase(CImVector_float * ptr, float v);


CImVector_CImWchar * ig_CImVector_CImWchar_init();
void ig_CImVector_CImWchar_deinit(const CImVector_CImWchar * ptr);
bool ig_CImVector_CImWchar_Empty(const CImVector_CImWchar * ptr);
int ig_CImVector_CImWchar_Size(const CImVector_CImWchar * ptr);
int ig_CImVector_CImWchar_Size_in_bytes(const CImVector_CImWchar * ptr);
int ig_CImVector_CImWchar_Capacity(const CImVector_CImWchar * ptr);
CImWchar ig_CImVector_CImWchar_subscript(const CImVector_CImWchar * ptr, int i);
CImWchar * ig_CImVector_CImWchar_subscriptPointer(CImVector_CImWchar * ptr, int i);

void ig_CImVector_CImWchar_Clear(CImVector_CImWchar * ptr);
CImWchar * ig_CImVector_CImWchar_Begin(CImVector_CImWchar * ptr);
const CImWchar * ig_CImVector_CImWchar_BeginConst(const CImVector_CImWchar * ptr);
CImWchar * ig_CImVector_CImWchar_End(CImVector_CImWchar * ptr);
const CImWchar * ig_CImVector_CImWchar_EndConst(const CImVector_CImWchar * ptr);
CImWchar ig_CImVector_CImWchar_Front(const CImVector_CImWchar * ptr);
CImWchar ig_CImVector_CImWchar_Back(const CImVector_CImWchar * ptr);
void ig_CImVector_CImWchar_Swap(CImVector_CImWchar * ptr, CImVector_CImWchar * other);

void ig_CImVector_CImWchar_Resize(CImVector_CImWchar * ptr, int new_size);
void ig_CImVector_CImWchar_ResizeValue(CImVector_CImWchar * ptr, int new_size, CImWchar v);
void ig_CImVector_CImWchar_Shrink(CImVector_CImWchar * ptr, int new_size);
void ig_CImVector_CImWchar_Reserve(CImVector_CImWchar * ptr, int new_capacity);

void ig_CImVector_CImWchar_PushBack(CImVector_CImWchar * ptr, CImWchar v);
void ig_CImVector_CImWchar_PopBack(CImVector_CImWchar * ptr);
void ig_CImVector_CImWchar_PushFront(CImVector_CImWchar * ptr, CImWchar v);
CImWchar * ig_CImVector_CImWchar_Erase(CImVector_CImWchar * ptr, const CImWchar * it);
CImWchar * ig_CImVector_CImWchar_EraseRange(CImVector_CImWchar * ptr, const CImWchar * it, const CImWchar * it_last);
CImWchar * ig_CImVector_CImWchar_Insert(CImVector_CImWchar * ptr, const CImWchar * it, CImWchar v);
bool ig_CImVector_CImWchar_Contains(const CImVector_CImWchar * ptr, CImWchar v);
CImWchar * ig_CImVector_CImWchar_Find(CImVector_CImWchar * ptr, CImWchar v);
const CImWchar * ig_CImVector_CImWchar_FindConst(const CImVector_CImWchar * ptr, CImWchar v);
bool ig_CImVector_CImWchar_FindErase(CImVector_CImWchar * ptr, CImWchar v);


CImVector_CImDrawVert * ig_CImVector_CImDrawVert_init();
void ig_CImVector_CImDrawVert_deinit(const CImVector_CImDrawVert * ptr);
bool ig_CImVector_CImDrawVert_Empty(const CImVector_CImDrawVert * ptr);
int ig_CImVector_CImDrawVert_Size(const CImVector_CImDrawVert * ptr);
int ig_CImVector_CImDrawVert_Size_in_bytes(const CImVector_CImDrawVert * ptr);
int ig_CImVector_CImDrawVert_Capacity(const CImVector_CImDrawVert * ptr);
const CImDrawVert * ig_CImVector_CImDrawVert_subscriptConst(const CImVector_CImDrawVert * ptr, int i);
CImDrawVert * ig_CImVector_CImDrawVert_subscript(CImVector_CImDrawVert * ptr, int i);

void ig_CImVector_CImDrawVert_Clear(CImVector_CImDrawVert * ptr);
CImDrawVert * ig_CImVector_CImDrawVert_Begin(CImVector_CImDrawVert * ptr);
const CImDrawVert * ig_CImVector_CImDrawVert_BeginConst(const CImVector_CImDrawVert * ptr);
CImDrawVert * ig_CImVector_CImDrawVert_End(CImVector_CImDrawVert * ptr);
const CImDrawVert * ig_CImVector_CImDrawVert_EndConst(const CImVector_CImDrawVert * ptr);
CImDrawVert * ig_CImVector_CImDrawVert_Front(CImVector_CImDrawVert * ptr);
const CImDrawVert * ig_CImVector_CImDrawVert_FrontConst(const CImVector_CImDrawVert * ptr);
CImDrawVert * ig_CImVector_CImDrawVert_Back(CImVector_CImDrawVert * ptr);
const CImDrawVert * ig_CImVector_CImDrawVert_BackConst(const CImVector_CImDrawVert * ptr);
void ig_CImVector_CImDrawVert_Swap(CImVector_CImDrawVert * ptr, CImVector_CImDrawVert * other);

void ig_CImVector_CImDrawVert_Resize(CImVector_CImDrawVert * ptr, int new_size);
void ig_CImVector_CImDrawVert_ResizeValue(CImVector_CImDrawVert * ptr, int new_size, const CImDrawVert * v);
void ig_CImVector_CImDrawVert_Shrink(CImVector_CImDrawVert * ptr, int new_size);
void ig_CImVector_CImDrawVert_Reserve(CImVector_CImDrawVert * ptr, int new_capacity);

void ig_CImVector_CImDrawVert_PushBack(CImVector_CImDrawVert * ptr, const CImDrawVert * v);
void ig_CImVector_CImDrawVert_PopBack(CImVector_CImDrawVert * ptr);
void ig_CImVector_CImDrawVert_PushFront(CImVector_CImDrawVert * ptr, const CImDrawVert * v);
CImDrawVert * ig_CImVector_CImDrawVert_Erase(CImVector_CImDrawVert * ptr, const CImDrawVert * it);
CImDrawVert * ig_CImVector_CImDrawVert_EraseRange(CImVector_CImDrawVert * ptr, const CImDrawVert * it, const CImDrawVert * it_last);
CImDrawVert * ig_CImVector_CImDrawVert_Insert(CImVector_CImDrawVert * ptr, const CImDrawVert * it, const CImDrawVert * v);


CImVector_CImFontGlyph * ig_CImVector_CImFontGlyph_init();
void ig_CImVector_CImFontGlyph_deinit(const CImVector_CImFontGlyph * ptr);
bool ig_CImVector_CImFontGlyph_Empty(const CImVector_CImFontGlyph * ptr);
int ig_CImVector_CImFontGlyph_Size(const CImVector_CImFontGlyph * ptr);
int ig_CImVector_CImFontGlyph_Size_in_bytes(const CImVector_CImFontGlyph * ptr);
int ig_CImVector_CImFontGlyph_Capacity(const CImVector_CImFontGlyph * ptr);
const CImFontGlyph * ig_CImVector_CImFontGlyph_subscriptConst(const CImVector_CImFontGlyph * ptr, int i);
CImFontGlyph * ig_CImVector_CImFontGlyph_subscript(CImVector_CImFontGlyph * ptr, int i);

void ig_CImVector_CImFontGlyph_Clear(CImVector_CImFontGlyph * ptr);
CImFontGlyph * ig_CImVector_CImFontGlyph_Begin(CImVector_CImFontGlyph * ptr);
const CImFontGlyph * ig_CImVector_CImFontGlyph_BeginConst(const CImVector_CImFontGlyph * ptr);
CImFontGlyph * ig_CImVector_CImFontGlyph_End(CImVector_CImFontGlyph * ptr);
const CImFontGlyph * ig_CImVector_CImFontGlyph_EndConst(const CImVector_CImFontGlyph * ptr);
CImFontGlyph * ig_CImVector_CImFontGlyph_Front(CImVector_CImFontGlyph * ptr);
const CImFontGlyph * ig_CImVector_CImFontGlyph_FrontConst(const CImVector_CImFontGlyph * ptr);
CImFontGlyph * ig_CImVector_CImFontGlyph_Back(CImVector_CImFontGlyph * ptr);
const CImFontGlyph * ig_CImVector_CImFontGlyph_BackConst(const CImVector_CImFontGlyph * ptr);
void ig_CImVector_CImFontGlyph_Swap(CImVector_CImFontGlyph * ptr, CImVector_CImFontGlyph * other);

void ig_CImVector_CImFontGlyph_Resize(CImVector_CImFontGlyph * ptr, int new_size);
void ig_CImVector_CImFontGlyph_ResizeValue(CImVector_CImFontGlyph * ptr, int new_size, const CImFontGlyph * v);
void ig_CImVector_CImFontGlyph_Shrink(CImVector_CImFontGlyph * ptr, int new_size);
void ig_CImVector_CImFontGlyph_Reserve(CImVector_CImFontGlyph * ptr, int new_capacity);

void ig_CImVector_CImFontGlyph_PushBack(CImVector_CImFontGlyph * ptr, const CImFontGlyph * v);
void ig_CImVector_CImFontGlyph_PopBack(CImVector_CImFontGlyph * ptr);
void ig_CImVector_CImFontGlyph_PushFront(CImVector_CImFontGlyph * ptr, const CImFontGlyph * v);
CImFontGlyph * ig_CImVector_CImFontGlyph_Erase(CImVector_CImFontGlyph * ptr, const CImFontGlyph * it);
CImFontGlyph * ig_CImVector_CImFontGlyph_EraseRange(CImVector_CImFontGlyph * ptr, const CImFontGlyph * it, const CImFontGlyph * it_last);
CImFontGlyph * ig_CImVector_CImFontGlyph_Insert(CImVector_CImFontGlyph * ptr, const CImFontGlyph * it, const CImFontGlyph * v);


CImVector_CImGuiTextRange * ig_CImVector_CImGuiTextRange_init();
void ig_CImVector_CImGuiTextRange_deinit(const CImVector_CImGuiTextRange * ptr);
bool ig_CImVector_CImGuiTextRange_Empty(const CImVector_CImGuiTextRange * ptr);
int ig_CImVector_CImGuiTextRange_Size(const CImVector_CImGuiTextRange * ptr);
int ig_CImVector_CImGuiTextRange_Capacity(const CImVector_CImGuiTextRange * ptr);

void ig_CImVector_CImGuiTextRange_Clear(CImVector_CImGuiTextRange * ptr);
CImGuiTextRange * ig_CImVector_CImGuiTextRange_Begin(CImVector_CImGuiTextRange * ptr);
const CImGuiTextRange * ig_CImVector_CImGuiTextRange_BeginConst(const CImVector_CImGuiTextRange * ptr);
void ig_CImVector_CImGuiTextRange_Swap(CImVector_CImGuiTextRange * ptr, CImVector_CImGuiTextRange * other);

void ig_CImVector_CImGuiTextRange_Shrink(CImVector_CImGuiTextRange * ptr, int new_size);

void ig_CImVector_CImGuiTextRange_PopBack(CImVector_CImGuiTextRange * ptr);


CImVector_CImGuiStoragePair * ig_CImVector_CImGuiStoragePair_init();
void ig_CImVector_CImGuiStoragePair_deinit(const CImVector_CImGuiStoragePair * ptr);
bool ig_CImVector_CImGuiStoragePair_Empty(const CImVector_CImGuiStoragePair * ptr);
int ig_CImVector_CImGuiStoragePair_Size(const CImVector_CImGuiStoragePair * ptr);
int ig_CImVector_CImGuiStoragePair_Capacity(const CImVector_CImGuiStoragePair * ptr);

void ig_CImVector_CImGuiStoragePair_Clear(CImVector_CImGuiStoragePair * ptr);
CImGuiStoragePair * ig_CImVector_CImGuiStoragePair_Begin(CImVector_CImGuiStoragePair * ptr);
const CImGuiStoragePair * ig_CImVector_CImGuiStoragePair_BeginConst(const CImVector_CImGuiStoragePair * ptr);
void ig_CImVector_CImGuiStoragePair_Swap(CImVector_CImGuiStoragePair * ptr, CImVector_CImGuiStoragePair * other);

void ig_CImVector_CImGuiStoragePair_Shrink(CImVector_CImGuiStoragePair * ptr, int new_size);
void ig_CImVector_CImGuiStoragePair_PopBack(CImVector_CImGuiStoragePair * ptr);


CImVector_CImDrawChannel * ig_CImVector_CImDrawChannel_init();
void ig_CImVector_CImDrawChannel_deinit(const CImVector_CImDrawChannel * ptr);
bool ig_CImVector_CImDrawChannel_Empty(const CImVector_CImDrawChannel * ptr);
int ig_CImVector_CImDrawChannel_Size(const CImVector_CImDrawChannel * ptr);
int ig_CImVector_CImDrawChannel_Size_in_bytes(const CImVector_CImDrawChannel * ptr);
int ig_CImVector_CImDrawChannel_Capacity(const CImVector_CImDrawChannel * ptr);
const CImDrawChannel * ig_CImVector_CImDrawChannel_subscriptConst(const CImVector_CImDrawChannel * ptr, int i);
CImDrawChannel * ig_CImVector_CImDrawChannel_subscript(CImVector_CImDrawChannel * ptr, int i);

void ig_CImVector_CImDrawChannel_Clear(CImVector_CImDrawChannel * ptr);
CImDrawChannel * ig_CImVector_CImDrawChannel_Begin(CImVector_CImDrawChannel * ptr);
const CImDrawChannel * ig_CImVector_CImDrawChannel_BeginConst(const CImVector_CImDrawChannel * ptr);
CImDrawChannel * ig_CImVector_CImDrawChannel_End(CImVector_CImDrawChannel * ptr);
const CImDrawChannel * ig_CImVector_CImDrawChannel_EndConst(const CImVector_CImDrawChannel * ptr);
CImDrawChannel * ig_CImVector_CImDrawChannel_Front(CImVector_CImDrawChannel * ptr);
const CImDrawChannel * ig_CImVector_CImDrawChannel_FrontConst(const CImVector_CImDrawChannel * ptr);
CImDrawChannel * ig_CImVector_CImDrawChannel_Back(CImVector_CImDrawChannel * ptr);
const CImDrawChannel * ig_CImVector_CImDrawChannel_BackConst(const CImVector_CImDrawChannel * ptr);
void ig_CImVector_CImDrawChannel_Swap(CImVector_CImDrawChannel * ptr, CImVector_CImDrawChannel * other);

void ig_CImVector_CImDrawChannel_Resize(CImVector_CImDrawChannel * ptr, int new_size);
void ig_CImVector_CImDrawChannel_ResizeValue(CImVector_CImDrawChannel * ptr, int new_size, const CImDrawChannel * v);
void ig_CImVector_CImDrawChannel_Shrink(CImVector_CImDrawChannel * ptr, int new_size);
void ig_CImVector_CImDrawChannel_Reserve(CImVector_CImDrawChannel * ptr, int new_capacity);

void ig_CImVector_CImDrawChannel_PushBack(CImVector_CImDrawChannel * ptr, const CImDrawChannel * v);
void ig_CImVector_CImDrawChannel_PopBack(CImVector_CImDrawChannel * ptr);
void ig_CImVector_CImDrawChannel_PushFront(CImVector_CImDrawChannel * ptr, const CImDrawChannel * v);
CImDrawChannel * ig_CImVector_CImDrawChannel_Erase(CImVector_CImDrawChannel * ptr, const CImDrawChannel * it);
CImDrawChannel * ig_CImVector_CImDrawChannel_EraseRange(CImVector_CImDrawChannel * ptr, const CImDrawChannel * it, const CImDrawChannel * it_last);
CImDrawChannel * ig_CImVector_CImDrawChannel_Insert(CImVector_CImDrawChannel * ptr, const CImDrawChannel * it, const CImDrawChannel * v);


CImVector_char * ig_CImVector_char_init();
void ig_CImVector_char_deinit(const CImVector_char * ptr);
bool ig_CImVector_char_Empty(const CImVector_char * ptr);
int ig_CImVector_char_Size(const CImVector_char * ptr);
int ig_CImVector_char_Size_in_bytes(const CImVector_char * ptr);
int ig_CImVector_char_Capacity(const CImVector_char * ptr);
char ig_CImVector_char_subscript(const CImVector_char * ptr, int i);
char * ig_CImVector_char_subscriptPointer(CImVector_char * ptr, int i);

void ig_CImVector_char_Clear(CImVector_char * ptr);
char * ig_CImVector_char_Begin(CImVector_char * ptr);
const char * ig_CImVector_char_BeginConst(const CImVector_char * ptr);
char * ig_CImVector_char_End(CImVector_char * ptr);
const char * ig_CImVector_char_EndConst(const CImVector_char * ptr);
char ig_CImVector_char_Front(const CImVector_char * ptr);
char ig_CImVector_char_Back(const CImVector_char * ptr);
void ig_CImVector_char_Swap(CImVector_char * ptr, CImVector_char * other);

void ig_CImVector_char_Resize(CImVector_char * ptr, int new_size);
void ig_CImVector_char_ResizeValue(CImVector_char * ptr, int new_size, char v);
void ig_CImVector_char_Shrink(CImVector_char * ptr, int new_size);
void ig_CImVector_char_Reserve(CImVector_char * ptr, int new_capacity);

void ig_CImVector_char_PushBack(CImVector_char * ptr, char v);
void ig_CImVector_char_PopBack(CImVector_char * ptr);
void ig_CImVector_char_PushFront(CImVector_char * ptr, char v);
char * ig_CImVector_char_Erase(CImVector_char * ptr, const char * it);
char * ig_CImVector_char_EraseRange(CImVector_char * ptr, const char * it, const char * it_last);
char * ig_CImVector_char_Insert(CImVector_char * ptr, const char * it, char v);
bool ig_CImVector_char_Contains(const CImVector_char * ptr, char v);
char * ig_CImVector_char_Find(CImVector_char * ptr, char v);
const char * ig_CImVector_char_FindConst(const CImVector_char * ptr, char v);
bool ig_CImVector_char_FindErase(CImVector_char * ptr, char v);


CImVector_CImU32 * ig_CImVector_CImU32_init();
void ig_CImVector_CImU32_deinit(const CImVector_CImU32 * ptr);
bool ig_CImVector_CImU32_Empty(const CImVector_CImU32 * ptr);
int ig_CImVector_CImU32_Size(const CImVector_CImU32 * ptr);
int ig_CImVector_CImU32_Size_in_bytes(const CImVector_CImU32 * ptr);
int ig_CImVector_CImU32_Capacity(const CImVector_CImU32 * ptr);
CImU32 ig_CImVector_CImU32_subscript(const CImVector_CImU32 * ptr, int i);
CImU32 * ig_CImVector_CImU32_subscriptPointer(CImVector_CImU32 * ptr, int i);

void ig_CImVector_CImU32_Clear(CImVector_CImU32 * ptr);
CImU32 * ig_CImVector_CImU32_Begin(CImVector_CImU32 * ptr);
const CImU32 * ig_CImVector_CImU32_BeginConst(const CImVector_CImU32 * ptr);
CImU32 * ig_CImVector_CImU32_End(CImVector_CImU32 * ptr);
const CImU32 * ig_CImVector_CImU32_EndConst(const CImVector_CImU32 * ptr);
CImU32 ig_CImVector_CImU32_Front(const CImVector_CImU32 * ptr);
CImU32 ig_CImVector_CImU32_Back(const CImVector_CImU32 * ptr);
void ig_CImVector_CImU32_Swap(CImVector_CImU32 * ptr, CImVector_CImU32 * other);

void ig_CImVector_CImU32_Resize(CImVector_CImU32 * ptr, int new_size);
void ig_CImVector_CImU32_ResizeValue(CImVector_CImU32 * ptr, int new_size, CImU32 v);
void ig_CImVector_CImU32_Shrink(CImVector_CImU32 * ptr, int new_size);
void ig_CImVector_CImU32_Reserve(CImVector_CImU32 * ptr, int new_capacity);

void ig_CImVector_CImU32_PushBack(CImVector_CImU32 * ptr, CImU32 v);
void ig_CImVector_CImU32_PopBack(CImVector_CImU32 * ptr);
void ig_CImVector_CImU32_PushFront(CImVector_CImU32 * ptr, CImU32 v);
CImU32 * ig_CImVector_CImU32_Erase(CImVector_CImU32 * ptr, const CImU32 * it);
CImU32 * ig_CImVector_CImU32_EraseRange(CImVector_CImU32 * ptr, const CImU32 * it, const CImU32 * it_last);
CImU32 * ig_CImVector_CImU32_Insert(CImVector_CImU32 * ptr, const CImU32 * it, CImU32 v);
bool ig_CImVector_CImU32_Contains(const CImVector_CImU32 * ptr, CImU32 v);
CImU32 * ig_CImVector_CImU32_Find(CImVector_CImU32 * ptr, CImU32 v);
const CImU32 * ig_CImVector_CImU32_FindConst(const CImVector_CImU32 * ptr, CImU32 v);
bool ig_CImVector_CImU32_FindErase(CImVector_CImU32 * ptr, CImU32 v);


CImVector_CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_init();
void ig_CImVector_CImFontAtlasCustomRect_deinit(const CImVector_CImFontAtlasCustomRect * ptr);
bool ig_CImVector_CImFontAtlasCustomRect_Empty(const CImVector_CImFontAtlasCustomRect * ptr);
int ig_CImVector_CImFontAtlasCustomRect_Size(const CImVector_CImFontAtlasCustomRect * ptr);
int ig_CImVector_CImFontAtlasCustomRect_Size_in_bytes(const CImVector_CImFontAtlasCustomRect * ptr);
int ig_CImVector_CImFontAtlasCustomRect_Capacity(const CImVector_CImFontAtlasCustomRect * ptr);
const CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_subscriptConst(const CImVector_CImFontAtlasCustomRect * ptr, int i);
CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_subscript(CImVector_CImFontAtlasCustomRect * ptr, int i);

void ig_CImVector_CImFontAtlasCustomRect_Clear(CImVector_CImFontAtlasCustomRect * ptr);
CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_Begin(CImVector_CImFontAtlasCustomRect * ptr);
const CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_BeginConst(const CImVector_CImFontAtlasCustomRect * ptr);
CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_End(CImVector_CImFontAtlasCustomRect * ptr);
const CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_EndConst(const CImVector_CImFontAtlasCustomRect * ptr);
CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_Front(CImVector_CImFontAtlasCustomRect * ptr);
const CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_FrontConst(const CImVector_CImFontAtlasCustomRect * ptr);
CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_Back(CImVector_CImFontAtlasCustomRect * ptr);
const CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_BackConst(const CImVector_CImFontAtlasCustomRect * ptr);
void ig_CImVector_CImFontAtlasCustomRect_Swap(CImVector_CImFontAtlasCustomRect * ptr, CImVector_CImFontAtlasCustomRect * other);

void ig_CImVector_CImFontAtlasCustomRect_Resize(CImVector_CImFontAtlasCustomRect * ptr, int new_size);
void ig_CImVector_CImFontAtlasCustomRect_ResizeValue(CImVector_CImFontAtlasCustomRect * ptr, int new_size, const CImFontAtlasCustomRect * v);
void ig_CImVector_CImFontAtlasCustomRect_Shrink(CImVector_CImFontAtlasCustomRect * ptr, int new_size);
void ig_CImVector_CImFontAtlasCustomRect_Reserve(CImVector_CImFontAtlasCustomRect * ptr, int new_capacity);

void ig_CImVector_CImFontAtlasCustomRect_PushBack(CImVector_CImFontAtlasCustomRect * ptr, const CImFontAtlasCustomRect * v);
void ig_CImVector_CImFontAtlasCustomRect_PopBack(CImVector_CImFontAtlasCustomRect * ptr);
void ig_CImVector_CImFontAtlasCustomRect_PushFront(CImVector_CImFontAtlasCustomRect * ptr, const CImFontAtlasCustomRect * v);
CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_Erase(CImVector_CImFontAtlasCustomRect * ptr, const CImFontAtlasCustomRect * it);
CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_EraseRange(CImVector_CImFontAtlasCustomRect * ptr, const CImFontAtlasCustomRect * it, const CImFontAtlasCustomRect * it_last);
CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_Insert(CImVector_CImFontAtlasCustomRect * ptr, const CImFontAtlasCustomRect * it, const CImFontAtlasCustomRect * v);


CImVector_CImTextureID * ig_CImVector_CImTextureID_init();
void ig_CImVector_CImTextureID_deinit(const CImVector_CImTextureID * ptr);
bool ig_CImVector_CImTextureID_Empty(const CImVector_CImTextureID * ptr);
int ig_CImVector_CImTextureID_Size(const CImVector_CImTextureID * ptr);
int ig_CImVector_CImTextureID_Size_in_bytes(const CImVector_CImTextureID * ptr);
int ig_CImVector_CImTextureID_Capacity(const CImVector_CImTextureID * ptr);
CImTextureID ig_CImVector_CImTextureID_subscript(const CImVector_CImTextureID * ptr, int i);
CImTextureID * ig_CImVector_CImTextureID_subscriptPointer(CImVector_CImTextureID * ptr, int i);

void ig_CImVector_CImTextureID_Clear(CImVector_CImTextureID * ptr);
CImTextureID * ig_CImVector_CImTextureID_Begin(CImVector_CImTextureID * ptr);
const CImTextureID * ig_CImVector_CImTextureID_BeginConst(const CImVector_CImTextureID * ptr);
CImTextureID * ig_CImVector_CImTextureID_End(CImVector_CImTextureID * ptr);
const CImTextureID * ig_CImVector_CImTextureID_EndConst(const CImVector_CImTextureID * ptr);
CImTextureID ig_CImVector_CImTextureID_Front(const CImVector_CImTextureID * ptr);
CImTextureID ig_CImVector_CImTextureID_Back(const CImVector_CImTextureID * ptr);
void ig_CImVector_CImTextureID_Swap(CImVector_CImTextureID * ptr, CImVector_CImTextureID * other);

void ig_CImVector_CImTextureID_Resize(CImVector_CImTextureID * ptr, int new_size);
void ig_CImVector_CImTextureID_ResizeValue(CImVector_CImTextureID * ptr, int new_size, CImTextureID v);
void ig_CImVector_CImTextureID_Shrink(CImVector_CImTextureID * ptr, int new_size);
void ig_CImVector_CImTextureID_Reserve(CImVector_CImTextureID * ptr, int new_capacity);

void ig_CImVector_CImTextureID_PushBack(CImVector_CImTextureID * ptr, CImTextureID v);
void ig_CImVector_CImTextureID_PopBack(CImVector_CImTextureID * ptr);
void ig_CImVector_CImTextureID_PushFront(CImVector_CImTextureID * ptr, CImTextureID v);
CImTextureID * ig_CImVector_CImTextureID_Erase(CImVector_CImTextureID * ptr, const CImTextureID * it);
CImTextureID * ig_CImVector_CImTextureID_EraseRange(CImVector_CImTextureID * ptr, const CImTextureID * it, const CImTextureID * it_last);
CImTextureID * ig_CImVector_CImTextureID_Insert(CImVector_CImTextureID * ptr, const CImTextureID * it, CImTextureID v);
bool ig_CImVector_CImTextureID_Contains(const CImVector_CImTextureID * ptr, CImTextureID v);
CImTextureID * ig_CImVector_CImTextureID_Find(CImVector_CImTextureID * ptr, CImTextureID v);
const CImTextureID * ig_CImVector_CImTextureID_FindConst(const CImVector_CImTextureID * ptr, CImTextureID v);
bool ig_CImVector_CImTextureID_FindErase(CImVector_CImTextureID * ptr, CImTextureID v);


CImVector_CImFontConfig * ig_CImVector_CImFontConfig_init();
void ig_CImVector_CImFontConfig_deinit(const CImVector_CImFontConfig * ptr);
bool ig_CImVector_CImFontConfig_Empty(const CImVector_CImFontConfig * ptr);
int ig_CImVector_CImFontConfig_Size(const CImVector_CImFontConfig * ptr);
int ig_CImVector_CImFontConfig_Size_in_bytes(const CImVector_CImFontConfig * ptr);
int ig_CImVector_CImFontConfig_Capacity(const CImVector_CImFontConfig * ptr);
const CImFontConfig * ig_CImVector_CImFontConfig_subscriptConst(const CImVector_CImFontConfig * ptr, int i);
CImFontConfig * ig_CImVector_CImFontConfig_subscript(CImVector_CImFontConfig * ptr, int i);

void ig_CImVector_CImFontConfig_Clear(CImVector_CImFontConfig * ptr);
CImFontConfig * ig_CImVector_CImFontConfig_Begin(CImVector_CImFontConfig * ptr);
const CImFontConfig * ig_CImVector_CImFontConfig_BeginConst(const CImVector_CImFontConfig * ptr);
CImFontConfig * ig_CImVector_CImFontConfig_End(CImVector_CImFontConfig * ptr);
const CImFontConfig * ig_CImVector_CImFontConfig_EndConst(const CImVector_CImFontConfig * ptr);
CImFontConfig * ig_CImVector_CImFontConfig_Front(CImVector_CImFontConfig * ptr);
const CImFontConfig * ig_CImVector_CImFontConfig_FrontConst(const CImVector_CImFontConfig * ptr);
CImFontConfig * ig_CImVector_CImFontConfig_Back(CImVector_CImFontConfig * ptr);
const CImFontConfig * ig_CImVector_CImFontConfig_BackConst(const CImVector_CImFontConfig * ptr);
void ig_CImVector_CImFontConfig_Swap(CImVector_CImFontConfig * ptr, CImVector_CImFontConfig * other);

void ig_CImVector_CImFontConfig_Resize(CImVector_CImFontConfig * ptr, int new_size);
void ig_CImVector_CImFontConfig_ResizeValue(CImVector_CImFontConfig * ptr, int new_size, const CImFontConfig * v);
void ig_CImVector_CImFontConfig_Shrink(CImVector_CImFontConfig * ptr, int new_size);
void ig_CImVector_CImFontConfig_Reserve(CImVector_CImFontConfig * ptr, int new_capacity);

void ig_CImVector_CImFontConfig_PushBack(CImVector_CImFontConfig * ptr, const CImFontConfig * v);
void ig_CImVector_CImFontConfig_PopBack(CImVector_CImFontConfig * ptr);
void ig_CImVector_CImFontConfig_PushFront(CImVector_CImFontConfig * ptr, const CImFontConfig * v);
CImFontConfig * ig_CImVector_CImFontConfig_Erase(CImVector_CImFontConfig * ptr, const CImFontConfig * it);
CImFontConfig * ig_CImVector_CImFontConfig_EraseRange(CImVector_CImFontConfig * ptr, const CImFontConfig * it, const CImFontConfig * it_last);
CImFontConfig * ig_CImVector_CImFontConfig_Insert(CImVector_CImFontConfig * ptr, const CImFontConfig * it, const CImFontConfig * v);


CImVector_CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_init();
void ig_CImVector_CImGuiPlatformMonitor_deinit(const CImVector_CImGuiPlatformMonitor * ptr);
bool ig_CImVector_CImGuiPlatformMonitor_Empty(const CImVector_CImGuiPlatformMonitor * ptr);
int ig_CImVector_CImGuiPlatformMonitor_Size(const CImVector_CImGuiPlatformMonitor * ptr);
int ig_CImVector_CImGuiPlatformMonitor_Size_in_bytes(const CImVector_CImGuiPlatformMonitor * ptr);
int ig_CImVector_CImGuiPlatformMonitor_Capacity(const CImVector_CImGuiPlatformMonitor * ptr);
const CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_subscriptConst(const CImVector_CImGuiPlatformMonitor * ptr, int i);
CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_subscript(CImVector_CImGuiPlatformMonitor * ptr, int i);

void ig_CImVector_CImGuiPlatformMonitor_Clear(CImVector_CImGuiPlatformMonitor * ptr);
CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_Begin(CImVector_CImGuiPlatformMonitor * ptr);
const CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_BeginConst(const CImVector_CImGuiPlatformMonitor * ptr);
CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_End(CImVector_CImGuiPlatformMonitor * ptr);
const CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_EndConst(const CImVector_CImGuiPlatformMonitor * ptr);
CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_Front(CImVector_CImGuiPlatformMonitor * ptr);
const CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_FrontConst(const CImVector_CImGuiPlatformMonitor * ptr);
CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_Back(CImVector_CImGuiPlatformMonitor * ptr);
const CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_BackConst(const CImVector_CImGuiPlatformMonitor * ptr);
void ig_CImVector_CImGuiPlatformMonitor_Swap(CImVector_CImGuiPlatformMonitor * ptr, CImVector_CImGuiPlatformMonitor * other);

void ig_CImVector_CImGuiPlatformMonitor_Resize(CImVector_CImGuiPlatformMonitor * ptr, int new_size);
void ig_CImVector_CImGuiPlatformMonitor_ResizeValue(CImVector_CImGuiPlatformMonitor * ptr, int new_size, const CImGuiPlatformMonitor * v);
void ig_CImVector_CImGuiPlatformMonitor_Shrink(CImVector_CImGuiPlatformMonitor * ptr, int new_size);
void ig_CImVector_CImGuiPlatformMonitor_Reserve(CImVector_CImGuiPlatformMonitor * ptr, int new_capacity);

void ig_CImVector_CImGuiPlatformMonitor_PushBack(CImVector_CImGuiPlatformMonitor * ptr, const CImGuiPlatformMonitor * v);
void ig_CImVector_CImGuiPlatformMonitor_PopBack(CImVector_CImGuiPlatformMonitor * ptr);
void ig_CImVector_CImGuiPlatformMonitor_PushFront(CImVector_CImGuiPlatformMonitor * ptr, const CImGuiPlatformMonitor * v);
CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_Erase(CImVector_CImGuiPlatformMonitor * ptr, const CImGuiPlatformMonitor * it);
CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_EraseRange(CImVector_CImGuiPlatformMonitor * ptr, const CImGuiPlatformMonitor * it, const CImGuiPlatformMonitor * it_last);
CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_Insert(CImVector_CImGuiPlatformMonitor * ptr, const CImGuiPlatformMonitor * it, const CImGuiPlatformMonitor * v);


CImVector_CImGuiViewportPtr * ig_CImVector_CImGuiViewportPtr_init();
void ig_CImVector_CImGuiViewportPtr_deinit(const CImVector_CImGuiViewportPtr * ptr);
bool ig_CImVector_CImGuiViewportPtr_Empty(const CImVector_CImGuiViewportPtr * ptr);
int ig_CImVector_CImGuiViewportPtr_Size(const CImVector_CImGuiViewportPtr * ptr);
int ig_CImVector_CImGuiViewportPtr_Size_in_bytes(const CImVector_CImGuiViewportPtr * ptr);
int ig_CImVector_CImGuiViewportPtr_Capacity(const CImVector_CImGuiViewportPtr * ptr);
const CImGuiViewport * ig_CImVector_CImGuiViewportPtr_subscript(const CImVector_CImGuiViewportPtr * ptr, int i);
CImGuiViewport ** ig_CImVector_CImGuiViewportPtr_subscriptPointer(CImVector_CImGuiViewportPtr * ptr, int i);

void ig_CImVector_CImGuiViewportPtr_Clear(CImVector_CImGuiViewportPtr * ptr);
CImGuiViewport ** ig_CImVector_CImGuiViewportPtr_Begin(CImVector_CImGuiViewportPtr * ptr);
CImGuiViewport * const * ig_CImVector_CImGuiViewportPtr_BeginConst(const CImVector_CImGuiViewportPtr * ptr);
CImGuiViewport ** ig_CImVector_CImGuiViewportPtr_End(CImVector_CImGuiViewportPtr * ptr);
CImGuiViewport * const * ig_CImVector_CImGuiViewportPtr_EndConst(const CImVector_CImGuiViewportPtr * ptr);
const CImGuiViewport * ig_CImVector_CImGuiViewportPtr_Front(const CImVector_CImGuiViewportPtr * ptr);
const CImGuiViewport * ig_CImVector_CImGuiViewportPtr_Back(const CImVector_CImGuiViewportPtr * ptr);
void ig_CImVector_CImGuiViewportPtr_Swap(CImVector_CImGuiViewportPtr * ptr, CImVector_CImGuiViewportPtr * other);

void ig_CImVector_CImGuiViewportPtr_Resize(CImVector_CImGuiViewportPtr * ptr, int new_size);
void ig_CImVector_CImGuiViewportPtr_ResizeValue(CImVector_CImGuiViewportPtr * ptr, int new_size, CImGuiViewport * v);
void ig_CImVector_CImGuiViewportPtr_Shrink(CImVector_CImGuiViewportPtr * ptr, int new_size);
void ig_CImVector_CImGuiViewportPtr_Reserve(CImVector_CImGuiViewportPtr * ptr, int new_capacity);

void ig_CImVector_CImGuiViewportPtr_PushBack(CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * v);
void ig_CImVector_CImGuiViewportPtr_PopBack(CImVector_CImGuiViewportPtr * ptr);
void ig_CImVector_CImGuiViewportPtr_PushFront(CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * v);
CImGuiViewport ** ig_CImVector_CImGuiViewportPtr_Erase(CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * const * it);
CImGuiViewport ** ig_CImVector_CImGuiViewportPtr_EraseRange(CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * const * it, CImGuiViewport * const * it_last);
CImGuiViewport ** ig_CImVector_CImGuiViewportPtr_Insert(CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * const * it, CImGuiViewport * v);
bool ig_CImVector_CImGuiViewportPtr_Contains(const CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * v);
CImGuiViewport ** ig_CImVector_CImGuiViewportPtr_Find(CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * v);
CImGuiViewport * const * ig_CImVector_CImGuiViewportPtr_FindConst(const CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * v);
bool ig_CImVector_CImGuiViewportPtr_FindErase(CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * v);


CImVector_CImFontPtr * ig_CImVector_CImFontPtr_init();
void ig_CImVector_CImFontPtr_deinit(const CImVector_CImFontPtr * ptr);
bool ig_CImVector_CImFontPtr_Empty(const CImVector_CImFontPtr * ptr);
int ig_CImVector_CImFontPtr_Size(const CImVector_CImFontPtr * ptr);
int ig_CImVector_CImFontPtr_Size_in_bytes(const CImVector_CImFontPtr * ptr);
int ig_CImVector_CImFontPtr_Capacity(const CImVector_CImFontPtr * ptr);
const CImFont * ig_CImVector_CImFontPtr_subscript(const CImVector_CImFontPtr * ptr, int i);
CImFont ** ig_CImVector_CImFontPtr_subscriptPointer(CImVector_CImFontPtr * ptr, int i);

void ig_CImVector_CImFontPtr_Clear(CImVector_CImFontPtr * ptr);
CImFont ** ig_CImVector_CImFontPtr_Begin(CImVector_CImFontPtr * ptr);
CImFont * const * ig_CImVector_CImFontPtr_BeginConst(const CImVector_CImFontPtr * ptr);
CImFont ** ig_CImVector_CImFontPtr_End(CImVector_CImFontPtr * ptr);
CImFont * const * ig_CImVector_CImFontPtr_EndConst(const CImVector_CImFontPtr * ptr);
const CImFont * ig_CImVector_CImFontPtr_Front(const CImVector_CImFontPtr * ptr);
const CImFont * ig_CImVector_CImFontPtr_Back(const CImVector_CImFontPtr * ptr);
void ig_CImVector_CImFontPtr_Swap(CImVector_CImFontPtr * ptr, CImVector_CImFontPtr * other);

void ig_CImVector_CImFontPtr_Resize(CImVector_CImFontPtr * ptr, int new_size);
void ig_CImVector_CImFontPtr_ResizeValue(CImVector_CImFontPtr * ptr, int new_size, CImFont * v);
void ig_CImVector_CImFontPtr_Shrink(CImVector_CImFontPtr * ptr, int new_size);
void ig_CImVector_CImFontPtr_Reserve(CImVector_CImFontPtr * ptr, int new_capacity);

void ig_CImVector_CImFontPtr_PushBack(CImVector_CImFontPtr * ptr, CImFont * v);
void ig_CImVector_CImFontPtr_PopBack(CImVector_CImFontPtr * ptr);
void ig_CImVector_CImFontPtr_PushFront(CImVector_CImFontPtr * ptr, CImFont * v);
CImFont ** ig_CImVector_CImFontPtr_Erase(CImVector_CImFontPtr * ptr, CImFont * const * it);
CImFont ** ig_CImVector_CImFontPtr_EraseRange(CImVector_CImFontPtr * ptr, CImFont * const * it, CImFont * const * it_last);
CImFont ** ig_CImVector_CImFontPtr_Insert(CImVector_CImFontPtr * ptr, CImFont * const * it, CImFont * v);
bool ig_CImVector_CImFontPtr_Contains(const CImVector_CImFontPtr * ptr, CImFont * v);
CImFont ** ig_CImVector_CImFontPtr_Find(CImVector_CImFontPtr * ptr, CImFont * v);
CImFont * const * ig_CImVector_CImFontPtr_FindConst(const CImVector_CImFontPtr * ptr, CImFont * v);
bool ig_CImVector_CImFontPtr_FindErase(CImVector_CImFontPtr * ptr, CImFont * v);


CImVector_CImDrawCmd * ig_CImVector_CImDrawCmd_init();
void ig_CImVector_CImDrawCmd_deinit(const CImVector_CImDrawCmd * ptr);
bool ig_CImVector_CImDrawCmd_Empty(const CImVector_CImDrawCmd * ptr);
int ig_CImVector_CImDrawCmd_Size(const CImVector_CImDrawCmd * ptr);
int ig_CImVector_CImDrawCmd_Size_in_bytes(const CImVector_CImDrawCmd * ptr);
int ig_CImVector_CImDrawCmd_Capacity(const CImVector_CImDrawCmd * ptr);
const CImDrawCmd * ig_CImVector_CImDrawCmd_subscriptConst(const CImVector_CImDrawCmd * ptr, int i);
CImDrawCmd * ig_CImVector_CImDrawCmd_subscript(CImVector_CImDrawCmd * ptr, int i);

void ig_CImVector_CImDrawCmd_Clear(CImVector_CImDrawCmd * ptr);
CImDrawCmd * ig_CImVector_CImDrawCmd_Begin(CImVector_CImDrawCmd * ptr);
const CImDrawCmd * ig_CImVector_CImDrawCmd_BeginConst(const CImVector_CImDrawCmd * ptr);
CImDrawCmd * ig_CImVector_CImDrawCmd_End(CImVector_CImDrawCmd * ptr);
const CImDrawCmd * ig_CImVector_CImDrawCmd_EndConst(const CImVector_CImDrawCmd * ptr);
CImDrawCmd * ig_CImVector_CImDrawCmd_Front(CImVector_CImDrawCmd * ptr);
const CImDrawCmd * ig_CImVector_CImDrawCmd_FrontConst(const CImVector_CImDrawCmd * ptr);
CImDrawCmd * ig_CImVector_CImDrawCmd_Back(CImVector_CImDrawCmd * ptr);
const CImDrawCmd * ig_CImVector_CImDrawCmd_BackConst(const CImVector_CImDrawCmd * ptr);
void ig_CImVector_CImDrawCmd_Swap(CImVector_CImDrawCmd * ptr, CImVector_CImDrawCmd * other);

void ig_CImVector_CImDrawCmd_Resize(CImVector_CImDrawCmd * ptr, int new_size);
void ig_CImVector_CImDrawCmd_ResizeValue(CImVector_CImDrawCmd * ptr, int new_size, const CImDrawCmd * v);
void ig_CImVector_CImDrawCmd_Shrink(CImVector_CImDrawCmd * ptr, int new_size);
void ig_CImVector_CImDrawCmd_Reserve(CImVector_CImDrawCmd * ptr, int new_capacity);

void ig_CImVector_CImDrawCmd_PushBack(CImVector_CImDrawCmd * ptr, const CImDrawCmd * v);
void ig_CImVector_CImDrawCmd_PopBack(CImVector_CImDrawCmd * ptr);
void ig_CImVector_CImDrawCmd_PushFront(CImVector_CImDrawCmd * ptr, const CImDrawCmd * v);
CImDrawCmd * ig_CImVector_CImDrawCmd_Erase(CImVector_CImDrawCmd * ptr, const CImDrawCmd * it);
CImDrawCmd * ig_CImVector_CImDrawCmd_EraseRange(CImVector_CImDrawCmd * ptr, const CImDrawCmd * it, const CImDrawCmd * it_last);
CImDrawCmd * ig_CImVector_CImDrawCmd_Insert(CImVector_CImDrawCmd * ptr, const CImDrawCmd * it, const CImDrawCmd * v);


CImVector_CImVec4 * ig_CImVector_CImVec4_init();
void ig_CImVector_CImVec4_deinit(const CImVector_CImVec4 * ptr);
bool ig_CImVector_CImVec4_Empty(const CImVector_CImVec4 * ptr);
int ig_CImVector_CImVec4_Size(const CImVector_CImVec4 * ptr);
int ig_CImVector_CImVec4_Size_in_bytes(const CImVector_CImVec4 * ptr);
int ig_CImVector_CImVec4_Capacity(const CImVector_CImVec4 * ptr);
const CImVec4 * ig_CImVector_CImVec4_subscriptConst(const CImVector_CImVec4 * ptr, int i);
CImVec4 * ig_CImVector_CImVec4_subscript(CImVector_CImVec4 * ptr, int i);

void ig_CImVector_CImVec4_Clear(CImVector_CImVec4 * ptr);
CImVec4 * ig_CImVector_CImVec4_Begin(CImVector_CImVec4 * ptr);
const CImVec4 * ig_CImVector_CImVec4_BeginConst(const CImVector_CImVec4 * ptr);
CImVec4 * ig_CImVector_CImVec4_End(CImVector_CImVec4 * ptr);
const CImVec4 * ig_CImVector_CImVec4_EndConst(const CImVector_CImVec4 * ptr);
CImVec4 * ig_CImVector_CImVec4_Front(CImVector_CImVec4 * ptr);
const CImVec4 * ig_CImVector_CImVec4_FrontConst(const CImVector_CImVec4 * ptr);
CImVec4 * ig_CImVector_CImVec4_Back(CImVector_CImVec4 * ptr);
const CImVec4 * ig_CImVector_CImVec4_BackConst(const CImVector_CImVec4 * ptr);
void ig_CImVector_CImVec4_Swap(CImVector_CImVec4 * ptr, CImVector_CImVec4 * other);

void ig_CImVector_CImVec4_Resize(CImVector_CImVec4 * ptr, int new_size);
void ig_CImVector_CImVec4_ResizeValue(CImVector_CImVec4 * ptr, int new_size, const CImVec4 * v);
void ig_CImVector_CImVec4_Shrink(CImVector_CImVec4 * ptr, int new_size);
void ig_CImVector_CImVec4_Reserve(CImVector_CImVec4 * ptr, int new_capacity);

void ig_CImVector_CImVec4_PushBack(CImVector_CImVec4 * ptr, const CImVec4 * v);
void ig_CImVector_CImVec4_PopBack(CImVector_CImVec4 * ptr);
void ig_CImVector_CImVec4_PushFront(CImVector_CImVec4 * ptr, const CImVec4 * v);
CImVec4 * ig_CImVector_CImVec4_Erase(CImVector_CImVec4 * ptr, const CImVec4 * it);
CImVec4 * ig_CImVector_CImVec4_EraseRange(CImVector_CImVec4 * ptr, const CImVec4 * it, const CImVec4 * it_last);
CImVec4 * ig_CImVector_CImVec4_Insert(CImVector_CImVec4 * ptr, const CImVec4 * it, const CImVec4 * v);


CImVector_CImDrawIdx * ig_CImVector_CImDrawIdx_init();
void ig_CImVector_CImDrawIdx_deinit(const CImVector_CImDrawIdx * ptr);
bool ig_CImVector_CImDrawIdx_Empty(const CImVector_CImDrawIdx * ptr);
int ig_CImVector_CImDrawIdx_Size(const CImVector_CImDrawIdx * ptr);
int ig_CImVector_CImDrawIdx_Size_in_bytes(const CImVector_CImDrawIdx * ptr);
int ig_CImVector_CImDrawIdx_Capacity(const CImVector_CImDrawIdx * ptr);
CImDrawIdx ig_CImVector_CImDrawIdx_subscript(const CImVector_CImDrawIdx * ptr, int i);
CImDrawIdx * ig_CImVector_CImDrawIdx_subscriptPointer(CImVector_CImDrawIdx * ptr, int i);

void ig_CImVector_CImDrawIdx_Clear(CImVector_CImDrawIdx * ptr);
CImDrawIdx * ig_CImVector_CImDrawIdx_Begin(CImVector_CImDrawIdx * ptr);
const CImDrawIdx * ig_CImVector_CImDrawIdx_BeginConst(const CImVector_CImDrawIdx * ptr);
CImDrawIdx * ig_CImVector_CImDrawIdx_End(CImVector_CImDrawIdx * ptr);
const CImDrawIdx * ig_CImVector_CImDrawIdx_EndConst(const CImVector_CImDrawIdx * ptr);
CImDrawIdx ig_CImVector_CImDrawIdx_Front(const CImVector_CImDrawIdx * ptr);
CImDrawIdx ig_CImVector_CImDrawIdx_Back(const CImVector_CImDrawIdx * ptr);
void ig_CImVector_CImDrawIdx_Swap(CImVector_CImDrawIdx * ptr, CImVector_CImDrawIdx * other);

void ig_CImVector_CImDrawIdx_Resize(CImVector_CImDrawIdx * ptr, int new_size);
void ig_CImVector_CImDrawIdx_ResizeValue(CImVector_CImDrawIdx * ptr, int new_size, CImDrawIdx v);
void ig_CImVector_CImDrawIdx_Shrink(CImVector_CImDrawIdx * ptr, int new_size);
void ig_CImVector_CImDrawIdx_Reserve(CImVector_CImDrawIdx * ptr, int new_capacity);

void ig_CImVector_CImDrawIdx_PushBack(CImVector_CImDrawIdx * ptr, CImDrawIdx v);
void ig_CImVector_CImDrawIdx_PopBack(CImVector_CImDrawIdx * ptr);
void ig_CImVector_CImDrawIdx_PushFront(CImVector_CImDrawIdx * ptr, CImDrawIdx v);
CImDrawIdx * ig_CImVector_CImDrawIdx_Erase(CImVector_CImDrawIdx * ptr, const CImDrawIdx * it);
CImDrawIdx * ig_CImVector_CImDrawIdx_EraseRange(CImVector_CImDrawIdx * ptr, const CImDrawIdx * it, const CImDrawIdx * it_last);
CImDrawIdx * ig_CImVector_CImDrawIdx_Insert(CImVector_CImDrawIdx * ptr, const CImDrawIdx * it, CImDrawIdx v);
bool ig_CImVector_CImDrawIdx_Contains(const CImVector_CImDrawIdx * ptr, CImDrawIdx v);
CImDrawIdx * ig_CImVector_CImDrawIdx_Find(CImVector_CImDrawIdx * ptr, CImDrawIdx v);
const CImDrawIdx * ig_CImVector_CImDrawIdx_FindConst(const CImVector_CImDrawIdx * ptr, CImDrawIdx v);
bool ig_CImVector_CImDrawIdx_FindErase(CImVector_CImDrawIdx * ptr, CImDrawIdx v);


CImVector_CImVec2 * ig_CImVector_CImVec2_init();
void ig_CImVector_CImVec2_deinit(const CImVector_CImVec2 * ptr);
bool ig_CImVector_CImVec2_Empty(const CImVector_CImVec2 * ptr);
int ig_CImVector_CImVec2_Size(const CImVector_CImVec2 * ptr);
int ig_CImVector_CImVec2_Size_in_bytes(const CImVector_CImVec2 * ptr);
int ig_CImVector_CImVec2_Capacity(const CImVector_CImVec2 * ptr);
const CImVec2 * ig_CImVector_CImVec2_subscriptConst(const CImVector_CImVec2 * ptr, int i);
CImVec2 * ig_CImVector_CImVec2_subscript(CImVector_CImVec2 * ptr, int i);

void ig_CImVector_CImVec2_Clear(CImVector_CImVec2 * ptr);
CImVec2 * ig_CImVector_CImVec2_Begin(CImVector_CImVec2 * ptr);
const CImVec2 * ig_CImVector_CImVec2_BeginConst(const CImVector_CImVec2 * ptr);
CImVec2 * ig_CImVector_CImVec2_End(CImVector_CImVec2 * ptr);
const CImVec2 * ig_CImVector_CImVec2_EndConst(const CImVector_CImVec2 * ptr);
CImVec2 * ig_CImVector_CImVec2_Front(CImVector_CImVec2 * ptr);
const CImVec2 * ig_CImVector_CImVec2_FrontConst(const CImVector_CImVec2 * ptr);
CImVec2 * ig_CImVector_CImVec2_Back(CImVector_CImVec2 * ptr);
const CImVec2 * ig_CImVector_CImVec2_BackConst(const CImVector_CImVec2 * ptr);
void ig_CImVector_CImVec2_Swap(CImVector_CImVec2 * ptr, CImVector_CImVec2 * other);

void ig_CImVector_CImVec2_Resize(CImVector_CImVec2 * ptr, int new_size);
void ig_CImVector_CImVec2_ResizeValue(CImVector_CImVec2 * ptr, int new_size, const CImVec2 * v);
void ig_CImVector_CImVec2_Shrink(CImVector_CImVec2 * ptr, int new_size);
void ig_CImVector_CImVec2_Reserve(CImVector_CImVec2 * ptr, int new_capacity);

void ig_CImVector_CImVec2_PushBack(CImVector_CImVec2 * ptr, const CImVec2 * v);
void ig_CImVector_CImVec2_PopBack(CImVector_CImVec2 * ptr);
void ig_CImVector_CImVec2_PushFront(CImVector_CImVec2 * ptr, const CImVec2 * v);
CImVec2 * ig_CImVector_CImVec2_Erase(CImVector_CImVec2 * ptr, const CImVec2 * it);
CImVec2 * ig_CImVector_CImVec2_EraseRange(CImVector_CImVec2 * ptr, const CImVec2 * it, const CImVec2 * it_last);
CImVec2 * ig_CImVector_CImVec2_Insert(CImVector_CImVec2 * ptr, const CImVec2 * it, const CImVec2 * v);


#ifdef __cplusplus
}
#endif

#endif //vectors_h
