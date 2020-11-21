//
//  vectors_internal.h
//  
//
//  Created by Josef Zoller on 17.11.20.
//

#ifndef vectors_internal_h
#define vectors_internal_h

#include <stdio.h>
#include <stdint.h>

#ifndef __cplusplus
    #include <stdarg.h>
    #include <stdbool.h>
#endif

#include "typedefs_internal.h"


struct CImVec1 {
    float x;
};

struct CImVec2ih {
    short x, y;
};

//template vectors
struct CImVector_const_charPtr {
    int Size;
    int Capacity;
    const char ** Data;
};

struct CImVector_CImGuiTabBar {
    int Size;
    int Capacity;
    CImGuiTabBar * Data;
};

struct CImVector_CImDrawListPtr {
    int Size;
    int Capacity;
    CImDrawList ** Data;
};

struct CImVector_CImGuiWindowPtr {
    int Size;
    int Capacity;
    CImGuiWindow ** Data;
};

struct CImVector_CImGuiColumnData {
    int Size;
    int Capacity;
    CImGuiColumnData * Data;
};

struct CImVector_CImGuiDockRequest {
    int Size;
    int Capacity;
    CImGuiDockRequest * Data;
};

struct CImVector_CImGuiDockNodeSettings {
    int Size;
    int Capacity;
    CImGuiDockNodeSettings * Data;
};

struct CImVector_CImGuiColorMod {
    int Size;
    int Capacity;
    CImGuiColorMod * Data;
};

struct CImVector_CImGuiStyleMod {
    int Size;
    int Capacity;
    CImGuiStyleMod * Data;
};

struct CImVector_CImGuiPopupData {
    int Size;
    int Capacity;
    CImGuiPopupData * Data;
};

struct CImVector_CImGuiViewportPPtr {
    int Size;
    int Capacity;
    CImGuiViewportP ** Data;
};

struct CImVector_unsigned_char {
    int Size;
    int Capacity;
    unsigned char * Data;
};

struct CImVector_CImGuiPtrOrIndex {
    int Size;
    int Capacity;
    CImGuiPtrOrIndex * Data;
};

struct CImVector_CImGuiShrinkWidthItem {
    int Size;
    int Capacity;
    CImGuiShrinkWidthItem * Data;
};

struct CImVector_CImGuiSettingsHandler {
    int Size;
    int Capacity;
    CImGuiSettingsHandler * Data;
};

struct CImVector_CImGuiItemFlags {
    int Size;
    int Capacity;
    CImGuiItemFlags * Data;
};

struct CImVector_CImGuiGroupData {
    int Size;
    int Capacity;
    CImGuiGroupData * Data;
};

struct CImVector_CImGuiColumns {
    int Size;
    int Capacity;
    CImGuiColumns * Data;
};

struct CImVector_CImGuiTabItem {
    int Size;
    int Capacity;
    CImGuiTabItem * Data;
};


#ifdef __cplusplus
extern "C" {
#endif

CImVector_const_charPtr * igi_CImVector_const_charPtr_init();
void igi_CImVector_const_charPtr_deinit(const CImVector_const_charPtr * ptr);
bool igi_CImVector_const_charPtr_Empty(const CImVector_const_charPtr * ptr);
int igi_CImVector_const_charPtr_Size(const CImVector_const_charPtr * ptr);
int igi_CImVector_const_charPtr_Size_in_bytes(const CImVector_const_charPtr * ptr);
int igi_CImVector_const_charPtr_Capacity(const CImVector_const_charPtr * ptr);
const char * igi_CImVector_const_charPtr_subscript(const CImVector_const_charPtr * ptr, int i);
const char ** igi_CImVector_const_charPtr_subscriptPointer(CImVector_const_charPtr * ptr, int i);

void igi_CImVector_const_charPtr_Clear(CImVector_const_charPtr * ptr);
const char ** igi_CImVector_const_charPtr_Begin(CImVector_const_charPtr * ptr);
const char * const * igi_CImVector_const_charPtr_BeginConst(const CImVector_const_charPtr * ptr);
const char ** igi_CImVector_const_charPtr_End(CImVector_const_charPtr * ptr);
const char * const * igi_CImVector_const_charPtr_EndConst(const CImVector_const_charPtr * ptr);
const char * igi_CImVector_const_charPtr_Front(const CImVector_const_charPtr * ptr);
const char * igi_CImVector_const_charPtr_Back(const CImVector_const_charPtr * ptr);
void igi_CImVector_const_charPtr_Swap(CImVector_const_charPtr * ptr, CImVector_const_charPtr * other);

void igi_CImVector_const_charPtr_Resize(CImVector_const_charPtr * ptr, int new_size);
void igi_CImVector_const_charPtr_ResizeValue(CImVector_const_charPtr * ptr, int new_size, const char * v);
void igi_CImVector_const_charPtr_Shrink(CImVector_const_charPtr * ptr, int new_size);
void igi_CImVector_const_charPtr_Reserve(CImVector_const_charPtr * ptr, int new_capacity);

void igi_CImVector_const_charPtr_PushBack(CImVector_const_charPtr * ptr, const char * v);
void igi_CImVector_const_charPtr_PopBack(CImVector_const_charPtr * ptr);
void igi_CImVector_const_charPtr_PushFront(CImVector_const_charPtr * ptr, const char * v);
const char ** igi_CImVector_const_charPtr_Erase(CImVector_const_charPtr * ptr, const char * const * it);
const char ** igi_CImVector_const_charPtr_EraseRange(CImVector_const_charPtr * ptr, const char * const * it, const char * const * it_last);
const char ** igi_CImVector_const_charPtr_Insert(CImVector_const_charPtr * ptr, const char * const * it, const char * v);
bool igi_CImVector_const_charPtr_Contains(const CImVector_const_charPtr * ptr, const char * v);
const char ** igi_CImVector_const_charPtr_Find(CImVector_const_charPtr * ptr, const char * v);
const char * const * igi_CImVector_const_charPtr_FindConst(const CImVector_const_charPtr * ptr, const char * v);
bool igi_CImVector_const_charPtr_FindErase(CImVector_const_charPtr * ptr, const char * v);


CImVector_CImGuiTabBar * igi_CImVector_CImGuiTabBar_init();
void igi_CImVector_CImGuiTabBar_deinit(const CImVector_CImGuiTabBar * ptr);
bool igi_CImVector_CImGuiTabBar_Empty(const CImVector_CImGuiTabBar * ptr);
int igi_CImVector_CImGuiTabBar_Size(const CImVector_CImGuiTabBar * ptr);
int igi_CImVector_CImGuiTabBar_Size_in_bytes(const CImVector_CImGuiTabBar * ptr);
int igi_CImVector_CImGuiTabBar_Capacity(const CImVector_CImGuiTabBar * ptr);
const CImGuiTabBar * igi_CImVector_CImGuiTabBar_subscriptConst(const CImVector_CImGuiTabBar * ptr, int i);
CImGuiTabBar * igi_CImVector_CImGuiTabBar_subscript(CImVector_CImGuiTabBar * ptr, int i);

void igi_CImVector_CImGuiTabBar_Clear(CImVector_CImGuiTabBar * ptr);
CImGuiTabBar * igi_CImVector_CImGuiTabBar_Begin(CImVector_CImGuiTabBar * ptr);
const CImGuiTabBar * igi_CImVector_CImGuiTabBar_BeginConst(const CImVector_CImGuiTabBar * ptr);
CImGuiTabBar * igi_CImVector_CImGuiTabBar_End(CImVector_CImGuiTabBar * ptr);
const CImGuiTabBar * igi_CImVector_CImGuiTabBar_EndConst(const CImVector_CImGuiTabBar * ptr);
CImGuiTabBar * igi_CImVector_CImGuiTabBar_Front(CImVector_CImGuiTabBar * ptr);
const CImGuiTabBar * igi_CImVector_CImGuiTabBar_FrontConst(const CImVector_CImGuiTabBar * ptr);
CImGuiTabBar * igi_CImVector_CImGuiTabBar_Back(CImVector_CImGuiTabBar * ptr);
const CImGuiTabBar * igi_CImVector_CImGuiTabBar_BackConst(const CImVector_CImGuiTabBar * ptr);
void igi_CImVector_CImGuiTabBar_Swap(CImVector_CImGuiTabBar * ptr, CImVector_CImGuiTabBar * other);

void igi_CImVector_CImGuiTabBar_Resize(CImVector_CImGuiTabBar * ptr, int new_size);
void igi_CImVector_CImGuiTabBar_ResizeValue(CImVector_CImGuiTabBar * ptr, int new_size, const CImGuiTabBar * v);
void igi_CImVector_CImGuiTabBar_Shrink(CImVector_CImGuiTabBar * ptr, int new_size);
void igi_CImVector_CImGuiTabBar_Reserve(CImVector_CImGuiTabBar * ptr, int new_capacity);

void igi_CImVector_CImGuiTabBar_PushBack(CImVector_CImGuiTabBar * ptr, const CImGuiTabBar * v);
void igi_CImVector_CImGuiTabBar_PopBack(CImVector_CImGuiTabBar * ptr);
void igi_CImVector_CImGuiTabBar_PushFront(CImVector_CImGuiTabBar * ptr, const CImGuiTabBar * v);
CImGuiTabBar * igi_CImVector_CImGuiTabBar_Erase(CImVector_CImGuiTabBar * ptr, const CImGuiTabBar * it);
CImGuiTabBar * igi_CImVector_CImGuiTabBar_EraseRange(CImVector_CImGuiTabBar * ptr, const CImGuiTabBar * it, const CImGuiTabBar * it_last);
CImGuiTabBar * igi_CImVector_CImGuiTabBar_Insert(CImVector_CImGuiTabBar * ptr, const CImGuiTabBar * it, const CImGuiTabBar * v);


CImVector_CImDrawListPtr * igi_CImVector_CImDrawListPtr_init();
void igi_CImVector_CImDrawListPtr_deinit(const CImVector_CImDrawListPtr * ptr);
bool igi_CImVector_CImDrawListPtr_Empty(const CImVector_CImDrawListPtr * ptr);
int igi_CImVector_CImDrawListPtr_Size(const CImVector_CImDrawListPtr * ptr);
int igi_CImVector_CImDrawListPtr_Size_in_bytes(const CImVector_CImDrawListPtr * ptr);
int igi_CImVector_CImDrawListPtr_Capacity(const CImVector_CImDrawListPtr * ptr);
const CImDrawList * igi_CImVector_CImDrawListPtr_subscript(const CImVector_CImDrawListPtr * ptr, int i);
CImDrawList ** igi_CImVector_CImDrawListPtr_subscriptPointer(CImVector_CImDrawListPtr * ptr, int i);

void igi_CImVector_CImDrawListPtr_Clear(CImVector_CImDrawListPtr * ptr);
CImDrawList ** igi_CImVector_CImDrawListPtr_Begin(CImVector_CImDrawListPtr * ptr);
CImDrawList * const * igi_CImVector_CImDrawListPtr_BeginConst(const CImVector_CImDrawListPtr * ptr);
CImDrawList ** igi_CImVector_CImDrawListPtr_End(CImVector_CImDrawListPtr * ptr);
CImDrawList * const * igi_CImVector_CImDrawListPtr_EndConst(const CImVector_CImDrawListPtr * ptr);
const CImDrawList * igi_CImVector_CImDrawListPtr_Front(const CImVector_CImDrawListPtr * ptr);
const CImDrawList * igi_CImVector_CImDrawListPtr_Back(const CImVector_CImDrawListPtr * ptr);
void igi_CImVector_CImDrawListPtr_Swap(CImVector_CImDrawListPtr * ptr, CImVector_CImDrawListPtr * other);

void igi_CImVector_CImDrawListPtr_Resize(CImVector_CImDrawListPtr * ptr, int new_size);
void igi_CImVector_CImDrawListPtr_ResizeValue(CImVector_CImDrawListPtr * ptr, int new_size, CImDrawList * v);
void igi_CImVector_CImDrawListPtr_Shrink(CImVector_CImDrawListPtr * ptr, int new_size);
void igi_CImVector_CImDrawListPtr_Reserve(CImVector_CImDrawListPtr * ptr, int new_capacity);

void igi_CImVector_CImDrawListPtr_PushBack(CImVector_CImDrawListPtr * ptr, CImDrawList * v);
void igi_CImVector_CImDrawListPtr_PopBack(CImVector_CImDrawListPtr * ptr);
void igi_CImVector_CImDrawListPtr_PushFront(CImVector_CImDrawListPtr * ptr, CImDrawList * v);
CImDrawList ** igi_CImVector_CImDrawListPtr_Erase(CImVector_CImDrawListPtr * ptr, CImDrawList * const * it);
CImDrawList ** igi_CImVector_CImDrawListPtr_EraseRange(CImVector_CImDrawListPtr * ptr, CImDrawList * const * it, CImDrawList * const * it_last);
CImDrawList ** igi_CImVector_CImDrawListPtr_Insert(CImVector_CImDrawListPtr * ptr, CImDrawList * const * it, CImDrawList * v);
bool igi_CImVector_CImDrawListPtr_Contains(const CImVector_CImDrawListPtr * ptr, CImDrawList * v);
CImDrawList ** igi_CImVector_CImDrawListPtr_Find(CImVector_CImDrawListPtr * ptr, CImDrawList * v);
CImDrawList * const * igi_CImVector_CImDrawListPtr_FindConst(const CImVector_CImDrawListPtr * ptr, CImDrawList * v);
bool igi_CImVector_CImDrawListPtr_FindErase(CImVector_CImDrawListPtr * ptr, CImDrawList * v);


CImVector_CImGuiWindowPtr * igi_CImVector_CImGuiWindowPtr_init();
void igi_CImVector_CImGuiWindowPtr_deinit(const CImVector_CImGuiWindowPtr * ptr);
bool igi_CImVector_CImGuiWindowPtr_Empty(const CImVector_CImGuiWindowPtr * ptr);
int igi_CImVector_CImGuiWindowPtr_Size(const CImVector_CImGuiWindowPtr * ptr);
int igi_CImVector_CImGuiWindowPtr_Size_in_bytes(const CImVector_CImGuiWindowPtr * ptr);
int igi_CImVector_CImGuiWindowPtr_Capacity(const CImVector_CImGuiWindowPtr * ptr);
const CImGuiWindow * igi_CImVector_CImGuiWindowPtr_subscript(const CImVector_CImGuiWindowPtr * ptr, int i);
CImGuiWindow ** igi_CImVector_CImGuiWindowPtr_subscriptPointer(CImVector_CImGuiWindowPtr * ptr, int i);

void igi_CImVector_CImGuiWindowPtr_Clear(CImVector_CImGuiWindowPtr * ptr);
CImGuiWindow ** igi_CImVector_CImGuiWindowPtr_Begin(CImVector_CImGuiWindowPtr * ptr);
CImGuiWindow * const * igi_CImVector_CImGuiWindowPtr_BeginConst(const CImVector_CImGuiWindowPtr * ptr);
CImGuiWindow ** igi_CImVector_CImGuiWindowPtr_End(CImVector_CImGuiWindowPtr * ptr);
CImGuiWindow * const * igi_CImVector_CImGuiWindowPtr_EndConst(const CImVector_CImGuiWindowPtr * ptr);
const CImGuiWindow * igi_CImVector_CImGuiWindowPtr_Front(const CImVector_CImGuiWindowPtr * ptr);
const CImGuiWindow * igi_CImVector_CImGuiWindowPtr_Back(const CImVector_CImGuiWindowPtr * ptr);
void igi_CImVector_CImGuiWindowPtr_Swap(CImVector_CImGuiWindowPtr * ptr, CImVector_CImGuiWindowPtr * other);

void igi_CImVector_CImGuiWindowPtr_Resize(CImVector_CImGuiWindowPtr * ptr, int new_size);
void igi_CImVector_CImGuiWindowPtr_ResizeValue(CImVector_CImGuiWindowPtr * ptr, int new_size, CImGuiWindow * v);
void igi_CImVector_CImGuiWindowPtr_Shrink(CImVector_CImGuiWindowPtr * ptr, int new_size);
void igi_CImVector_CImGuiWindowPtr_Reserve(CImVector_CImGuiWindowPtr * ptr, int new_capacity);

void igi_CImVector_CImGuiWindowPtr_PushBack(CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * v);
void igi_CImVector_CImGuiWindowPtr_PopBack(CImVector_CImGuiWindowPtr * ptr);
void igi_CImVector_CImGuiWindowPtr_PushFront(CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * v);
CImGuiWindow ** igi_CImVector_CImGuiWindowPtr_Erase(CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * const * it);
CImGuiWindow ** igi_CImVector_CImGuiWindowPtr_EraseRange(CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * const * it, CImGuiWindow * const * it_last);
CImGuiWindow ** igi_CImVector_CImGuiWindowPtr_Insert(CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * const * it, CImGuiWindow * v);
bool igi_CImVector_CImGuiWindowPtr_Contains(const CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * v);
CImGuiWindow ** igi_CImVector_CImGuiWindowPtr_Find(CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * v);
CImGuiWindow * const * igi_CImVector_CImGuiWindowPtr_FindConst(const CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * v);
bool igi_CImVector_CImGuiWindowPtr_FindErase(CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * v);


CImVector_CImGuiColumnData * igi_CImVector_CImGuiColumnData_init();
void igi_CImVector_CImGuiColumnData_deinit(const CImVector_CImGuiColumnData * ptr);
bool igi_CImVector_CImGuiColumnData_Empty(const CImVector_CImGuiColumnData * ptr);
int igi_CImVector_CImGuiColumnData_Size(const CImVector_CImGuiColumnData * ptr);
int igi_CImVector_CImGuiColumnData_Size_in_bytes(const CImVector_CImGuiColumnData * ptr);
int igi_CImVector_CImGuiColumnData_Capacity(const CImVector_CImGuiColumnData * ptr);
const CImGuiColumnData * igi_CImVector_CImGuiColumnData_subscriptConst(const CImVector_CImGuiColumnData * ptr, int i);
CImGuiColumnData * igi_CImVector_CImGuiColumnData_subscript(CImVector_CImGuiColumnData * ptr, int i);

void igi_CImVector_CImGuiColumnData_Clear(CImVector_CImGuiColumnData * ptr);
CImGuiColumnData * igi_CImVector_CImGuiColumnData_Begin(CImVector_CImGuiColumnData * ptr);
const CImGuiColumnData * igi_CImVector_CImGuiColumnData_BeginConst(const CImVector_CImGuiColumnData * ptr);
CImGuiColumnData * igi_CImVector_CImGuiColumnData_End(CImVector_CImGuiColumnData * ptr);
const CImGuiColumnData * igi_CImVector_CImGuiColumnData_EndConst(const CImVector_CImGuiColumnData * ptr);
CImGuiColumnData * igi_CImVector_CImGuiColumnData_Front(CImVector_CImGuiColumnData * ptr);
const CImGuiColumnData * igi_CImVector_CImGuiColumnData_FrontConst(const CImVector_CImGuiColumnData * ptr);
CImGuiColumnData * igi_CImVector_CImGuiColumnData_Back(CImVector_CImGuiColumnData * ptr);
const CImGuiColumnData * igi_CImVector_CImGuiColumnData_BackConst(const CImVector_CImGuiColumnData * ptr);
void igi_CImVector_CImGuiColumnData_Swap(CImVector_CImGuiColumnData * ptr, CImVector_CImGuiColumnData * other);

void igi_CImVector_CImGuiColumnData_Resize(CImVector_CImGuiColumnData * ptr, int new_size);
void igi_CImVector_CImGuiColumnData_ResizeValue(CImVector_CImGuiColumnData * ptr, int new_size, const CImGuiColumnData * v);
void igi_CImVector_CImGuiColumnData_Shrink(CImVector_CImGuiColumnData * ptr, int new_size);
void igi_CImVector_CImGuiColumnData_Reserve(CImVector_CImGuiColumnData * ptr, int new_capacity);

void igi_CImVector_CImGuiColumnData_PushBack(CImVector_CImGuiColumnData * ptr, const CImGuiColumnData * v);
void igi_CImVector_CImGuiColumnData_PopBack(CImVector_CImGuiColumnData * ptr);
void igi_CImVector_CImGuiColumnData_PushFront(CImVector_CImGuiColumnData * ptr, const CImGuiColumnData * v);
CImGuiColumnData * igi_CImVector_CImGuiColumnData_Erase(CImVector_CImGuiColumnData * ptr, const CImGuiColumnData * it);
CImGuiColumnData * igi_CImVector_CImGuiColumnData_EraseRange(CImVector_CImGuiColumnData * ptr, const CImGuiColumnData * it, const CImGuiColumnData * it_last);
CImGuiColumnData * igi_CImVector_CImGuiColumnData_Insert(CImVector_CImGuiColumnData * ptr, const CImGuiColumnData * it, const CImGuiColumnData * v);


CImVector_CImGuiDockRequest * igi_CImVector_CImGuiDockRequest_init();
void igi_CImVector_CImGuiDockRequest_deinit(const CImVector_CImGuiDockRequest * ptr);
bool igi_CImVector_CImGuiDockRequest_Empty(const CImVector_CImGuiDockRequest * ptr);
int igi_CImVector_CImGuiDockRequest_Size(const CImVector_CImGuiDockRequest * ptr);
int igi_CImVector_CImGuiDockRequest_Capacity(const CImVector_CImGuiDockRequest * ptr);

void igi_CImVector_CImGuiDockRequest_Clear(CImVector_CImGuiDockRequest * ptr);
CImGuiDockRequest * igi_CImVector_CImGuiDockRequest_Begin(CImVector_CImGuiDockRequest * ptr);
const CImGuiDockRequest * igi_CImVector_CImGuiDockRequest_BeginConst(const CImVector_CImGuiDockRequest * ptr);
void igi_CImVector_CImGuiDockRequest_Swap(CImVector_CImGuiDockRequest * ptr, CImVector_CImGuiDockRequest * other);

void igi_CImVector_CImGuiDockRequest_Shrink(CImVector_CImGuiDockRequest * ptr, int new_size);
void igi_CImVector_CImGuiDockRequest_PopBack(CImVector_CImGuiDockRequest * ptr);


CImVector_CImGuiDockNodeSettings * igi_CImVector_CImGuiDockNodeSettings_init();
void igi_CImVector_CImGuiDockNodeSettings_deinit(const CImVector_CImGuiDockNodeSettings * ptr);
bool igi_CImVector_CImGuiDockNodeSettings_Empty(const CImVector_CImGuiDockNodeSettings * ptr);
int igi_CImVector_CImGuiDockNodeSettings_Size(const CImVector_CImGuiDockNodeSettings * ptr);
int igi_CImVector_CImGuiDockNodeSettings_Capacity(const CImVector_CImGuiDockNodeSettings * ptr);

void igi_CImVector_CImGuiDockNodeSettings_Clear(CImVector_CImGuiDockNodeSettings * ptr);
CImGuiDockNodeSettings * igi_CImVector_CImGuiDockNodeSettings_Begin(CImVector_CImGuiDockNodeSettings * ptr);
const CImGuiDockNodeSettings * igi_CImVector_CImGuiDockNodeSettings_BeginConst(const CImVector_CImGuiDockNodeSettings * ptr);
void igi_CImVector_CImGuiDockNodeSettings_Swap(CImVector_CImGuiDockNodeSettings * ptr, CImVector_CImGuiDockNodeSettings * other);

void igi_CImVector_CImGuiDockNodeSettings_Shrink(CImVector_CImGuiDockNodeSettings * ptr, int new_size);
void igi_CImVector_CImGuiDockNodeSettings_PopBack(CImVector_CImGuiDockNodeSettings * ptr);


CImVector_CImGuiColorMod * igi_CImVector_CImGuiColorMod_init();
void igi_CImVector_CImGuiColorMod_deinit(const CImVector_CImGuiColorMod * ptr);
bool igi_CImVector_CImGuiColorMod_Empty(const CImVector_CImGuiColorMod * ptr);
int igi_CImVector_CImGuiColorMod_Size(const CImVector_CImGuiColorMod * ptr);
int igi_CImVector_CImGuiColorMod_Size_in_bytes(const CImVector_CImGuiColorMod * ptr);
int igi_CImVector_CImGuiColorMod_Capacity(const CImVector_CImGuiColorMod * ptr);
const CImGuiColorMod * igi_CImVector_CImGuiColorMod_subscriptConst(const CImVector_CImGuiColorMod * ptr, int i);
CImGuiColorMod * igi_CImVector_CImGuiColorMod_subscript(CImVector_CImGuiColorMod * ptr, int i);

void igi_CImVector_CImGuiColorMod_Clear(CImVector_CImGuiColorMod * ptr);
CImGuiColorMod * igi_CImVector_CImGuiColorMod_Begin(CImVector_CImGuiColorMod * ptr);
const CImGuiColorMod * igi_CImVector_CImGuiColorMod_BeginConst(const CImVector_CImGuiColorMod * ptr);
CImGuiColorMod * igi_CImVector_CImGuiColorMod_End(CImVector_CImGuiColorMod * ptr);
const CImGuiColorMod * igi_CImVector_CImGuiColorMod_EndConst(const CImVector_CImGuiColorMod * ptr);
CImGuiColorMod * igi_CImVector_CImGuiColorMod_Front(CImVector_CImGuiColorMod * ptr);
const CImGuiColorMod * igi_CImVector_CImGuiColorMod_FrontConst(const CImVector_CImGuiColorMod * ptr);
CImGuiColorMod * igi_CImVector_CImGuiColorMod_Back(CImVector_CImGuiColorMod * ptr);
const CImGuiColorMod * igi_CImVector_CImGuiColorMod_BackConst(const CImVector_CImGuiColorMod * ptr);
void igi_CImVector_CImGuiColorMod_Swap(CImVector_CImGuiColorMod * ptr, CImVector_CImGuiColorMod * other);

void igi_CImVector_CImGuiColorMod_Resize(CImVector_CImGuiColorMod * ptr, int new_size);
void igi_CImVector_CImGuiColorMod_ResizeValue(CImVector_CImGuiColorMod * ptr, int new_size, const CImGuiColorMod * v);
void igi_CImVector_CImGuiColorMod_Shrink(CImVector_CImGuiColorMod * ptr, int new_size);
void igi_CImVector_CImGuiColorMod_Reserve(CImVector_CImGuiColorMod * ptr, int new_capacity);

void igi_CImVector_CImGuiColorMod_PushBack(CImVector_CImGuiColorMod * ptr, const CImGuiColorMod * v);
void igi_CImVector_CImGuiColorMod_PopBack(CImVector_CImGuiColorMod * ptr);
void igi_CImVector_CImGuiColorMod_PushFront(CImVector_CImGuiColorMod * ptr, const CImGuiColorMod * v);
CImGuiColorMod * igi_CImVector_CImGuiColorMod_Erase(CImVector_CImGuiColorMod * ptr, const CImGuiColorMod * it);
CImGuiColorMod * igi_CImVector_CImGuiColorMod_EraseRange(CImVector_CImGuiColorMod * ptr, const CImGuiColorMod * it, const CImGuiColorMod * it_last);
CImGuiColorMod * igi_CImVector_CImGuiColorMod_Insert(CImVector_CImGuiColorMod * ptr, const CImGuiColorMod * it, const CImGuiColorMod * v);


CImVector_CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_init();
void igi_CImVector_CImGuiStyleMod_deinit(const CImVector_CImGuiStyleMod * ptr);
bool igi_CImVector_CImGuiStyleMod_Empty(const CImVector_CImGuiStyleMod * ptr);
int igi_CImVector_CImGuiStyleMod_Size(const CImVector_CImGuiStyleMod * ptr);
int igi_CImVector_CImGuiStyleMod_Size_in_bytes(const CImVector_CImGuiStyleMod * ptr);
int igi_CImVector_CImGuiStyleMod_Capacity(const CImVector_CImGuiStyleMod * ptr);
const CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_subscriptConst(const CImVector_CImGuiStyleMod * ptr, int i);
CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_subscript(CImVector_CImGuiStyleMod * ptr, int i);

void igi_CImVector_CImGuiStyleMod_Clear(CImVector_CImGuiStyleMod * ptr);
CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_Begin(CImVector_CImGuiStyleMod * ptr);
const CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_BeginConst(const CImVector_CImGuiStyleMod * ptr);
CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_End(CImVector_CImGuiStyleMod * ptr);
const CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_EndConst(const CImVector_CImGuiStyleMod * ptr);
CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_Front(CImVector_CImGuiStyleMod * ptr);
const CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_FrontConst(const CImVector_CImGuiStyleMod * ptr);
CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_Back(CImVector_CImGuiStyleMod * ptr);
const CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_BackConst(const CImVector_CImGuiStyleMod * ptr);
void igi_CImVector_CImGuiStyleMod_Swap(CImVector_CImGuiStyleMod * ptr, CImVector_CImGuiStyleMod * other);

void igi_CImVector_CImGuiStyleMod_Resize(CImVector_CImGuiStyleMod * ptr, int new_size);
void igi_CImVector_CImGuiStyleMod_ResizeValue(CImVector_CImGuiStyleMod * ptr, int new_size, const CImGuiStyleMod * v);
void igi_CImVector_CImGuiStyleMod_Shrink(CImVector_CImGuiStyleMod * ptr, int new_size);
void igi_CImVector_CImGuiStyleMod_Reserve(CImVector_CImGuiStyleMod * ptr, int new_capacity);

void igi_CImVector_CImGuiStyleMod_PushBack(CImVector_CImGuiStyleMod * ptr, const CImGuiStyleMod * v);
void igi_CImVector_CImGuiStyleMod_PopBack(CImVector_CImGuiStyleMod * ptr);
void igi_CImVector_CImGuiStyleMod_PushFront(CImVector_CImGuiStyleMod * ptr, const CImGuiStyleMod * v);
CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_Erase(CImVector_CImGuiStyleMod * ptr, const CImGuiStyleMod * it);
CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_EraseRange(CImVector_CImGuiStyleMod * ptr, const CImGuiStyleMod * it, const CImGuiStyleMod * it_last);
CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_Insert(CImVector_CImGuiStyleMod * ptr, const CImGuiStyleMod * it, const CImGuiStyleMod * v);


CImVector_CImGuiPopupData * igi_CImVector_CImGuiPopupData_init();
void igi_CImVector_CImGuiPopupData_deinit(const CImVector_CImGuiPopupData * ptr);
bool igi_CImVector_CImGuiPopupData_Empty(const CImVector_CImGuiPopupData * ptr);
int igi_CImVector_CImGuiPopupData_Size(const CImVector_CImGuiPopupData * ptr);
int igi_CImVector_CImGuiPopupData_Size_in_bytes(const CImVector_CImGuiPopupData * ptr);
int igi_CImVector_CImGuiPopupData_Capacity(const CImVector_CImGuiPopupData * ptr);
const CImGuiPopupData * igi_CImVector_CImGuiPopupData_subscriptConst(const CImVector_CImGuiPopupData * ptr, int i);
CImGuiPopupData * igi_CImVector_CImGuiPopupData_subscript(CImVector_CImGuiPopupData * ptr, int i);

void igi_CImVector_CImGuiPopupData_Clear(CImVector_CImGuiPopupData * ptr);
CImGuiPopupData * igi_CImVector_CImGuiPopupData_Begin(CImVector_CImGuiPopupData * ptr);
const CImGuiPopupData * igi_CImVector_CImGuiPopupData_BeginConst(const CImVector_CImGuiPopupData * ptr);
CImGuiPopupData * igi_CImVector_CImGuiPopupData_End(CImVector_CImGuiPopupData * ptr);
const CImGuiPopupData * igi_CImVector_CImGuiPopupData_EndConst(const CImVector_CImGuiPopupData * ptr);
CImGuiPopupData * igi_CImVector_CImGuiPopupData_Front(CImVector_CImGuiPopupData * ptr);
const CImGuiPopupData * igi_CImVector_CImGuiPopupData_FrontConst(const CImVector_CImGuiPopupData * ptr);
CImGuiPopupData * igi_CImVector_CImGuiPopupData_Back(CImVector_CImGuiPopupData * ptr);
const CImGuiPopupData * igi_CImVector_CImGuiPopupData_BackConst(const CImVector_CImGuiPopupData * ptr);
void igi_CImVector_CImGuiPopupData_Swap(CImVector_CImGuiPopupData * ptr, CImVector_CImGuiPopupData * other);

void igi_CImVector_CImGuiPopupData_Resize(CImVector_CImGuiPopupData * ptr, int new_size);
void igi_CImVector_CImGuiPopupData_ResizeValue(CImVector_CImGuiPopupData * ptr, int new_size, const CImGuiPopupData * v);
void igi_CImVector_CImGuiPopupData_Shrink(CImVector_CImGuiPopupData * ptr, int new_size);
void igi_CImVector_CImGuiPopupData_Reserve(CImVector_CImGuiPopupData * ptr, int new_capacity);

void igi_CImVector_CImGuiPopupData_PushBack(CImVector_CImGuiPopupData * ptr, const CImGuiPopupData * v);
void igi_CImVector_CImGuiPopupData_PopBack(CImVector_CImGuiPopupData * ptr);
void igi_CImVector_CImGuiPopupData_PushFront(CImVector_CImGuiPopupData * ptr, const CImGuiPopupData * v);
CImGuiPopupData * igi_CImVector_CImGuiPopupData_Erase(CImVector_CImGuiPopupData * ptr, const CImGuiPopupData * it);
CImGuiPopupData * igi_CImVector_CImGuiPopupData_EraseRange(CImVector_CImGuiPopupData * ptr, const CImGuiPopupData * it, const CImGuiPopupData * it_last);
CImGuiPopupData * igi_CImVector_CImGuiPopupData_Insert(CImVector_CImGuiPopupData * ptr, const CImGuiPopupData * it, const CImGuiPopupData * v);


CImVector_CImGuiViewportPPtr * igi_CImVector_CImGuiViewportPPtr_init();
void igi_CImVector_CImGuiViewportPPtr_deinit(const CImVector_CImGuiViewportPPtr * ptr);
bool igi_CImVector_CImGuiViewportPPtr_Empty(const CImVector_CImGuiViewportPPtr * ptr);
int igi_CImVector_CImGuiViewportPPtr_Size(const CImVector_CImGuiViewportPPtr * ptr);
int igi_CImVector_CImGuiViewportPPtr_Size_in_bytes(const CImVector_CImGuiViewportPPtr * ptr);
int igi_CImVector_CImGuiViewportPPtr_Capacity(const CImVector_CImGuiViewportPPtr * ptr);
const CImGuiViewportP * igi_CImVector_CImGuiViewportPPtr_subscript(const CImVector_CImGuiViewportPPtr * ptr, int i);
CImGuiViewportP ** igi_CImVector_CImGuiViewportPPtr_subscriptPointer(CImVector_CImGuiViewportPPtr * ptr, int i);

void igi_CImVector_CImGuiViewportPPtr_Clear(CImVector_CImGuiViewportPPtr * ptr);
CImGuiViewportP ** igi_CImVector_CImGuiViewportPPtr_Begin(CImVector_CImGuiViewportPPtr * ptr);
CImGuiViewportP * const * igi_CImVector_CImGuiViewportPPtr_BeginConst(const CImVector_CImGuiViewportPPtr * ptr);
CImGuiViewportP ** igi_CImVector_CImGuiViewportPPtr_End(CImVector_CImGuiViewportPPtr * ptr);
CImGuiViewportP * const * igi_CImVector_CImGuiViewportPPtr_EndConst(const CImVector_CImGuiViewportPPtr * ptr);
const CImGuiViewportP * igi_CImVector_CImGuiViewportPPtr_Front(const CImVector_CImGuiViewportPPtr * ptr);
const CImGuiViewportP * igi_CImVector_CImGuiViewportPPtr_Back(const CImVector_CImGuiViewportPPtr * ptr);
void igi_CImVector_CImGuiViewportPPtr_Swap(CImVector_CImGuiViewportPPtr * ptr, CImVector_CImGuiViewportPPtr * other);

void igi_CImVector_CImGuiViewportPPtr_Resize(CImVector_CImGuiViewportPPtr * ptr, int new_size);
void igi_CImVector_CImGuiViewportPPtr_ResizeValue(CImVector_CImGuiViewportPPtr * ptr, int new_size, CImGuiViewportP * v);
void igi_CImVector_CImGuiViewportPPtr_Shrink(CImVector_CImGuiViewportPPtr * ptr, int new_size);
void igi_CImVector_CImGuiViewportPPtr_Reserve(CImVector_CImGuiViewportPPtr * ptr, int new_capacity);

void igi_CImVector_CImGuiViewportPPtr_PushBack(CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * v);
void igi_CImVector_CImGuiViewportPPtr_PopBack(CImVector_CImGuiViewportPPtr * ptr);
void igi_CImVector_CImGuiViewportPPtr_PushFront(CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * v);
CImGuiViewportP ** igi_CImVector_CImGuiViewportPPtr_Erase(CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * const * it);
CImGuiViewportP ** igi_CImVector_CImGuiViewportPPtr_EraseRange(CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * const * it, CImGuiViewportP * const * it_last);
CImGuiViewportP ** igi_CImVector_CImGuiViewportPPtr_Insert(CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * const * it, CImGuiViewportP * v);
bool igi_CImVector_CImGuiViewportPPtr_Contains(const CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * v);
CImGuiViewportP ** igi_CImVector_CImGuiViewportPPtr_Find(CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * v);
CImGuiViewportP * const * igi_CImVector_CImGuiViewportPPtr_FindConst(const CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * v);
bool igi_CImVector_CImGuiViewportPPtr_FindErase(CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * v);


CImVector_unsigned_char * igi_CImVector_unsigned_char_init();
void igi_CImVector_unsigned_char_deinit(const CImVector_unsigned_char * ptr);
bool igi_CImVector_unsigned_char_Empty(const CImVector_unsigned_char * ptr);
int igi_CImVector_unsigned_char_Size(const CImVector_unsigned_char * ptr);
int igi_CImVector_unsigned_char_Size_in_bytes(const CImVector_unsigned_char * ptr);
int igi_CImVector_unsigned_char_Capacity(const CImVector_unsigned_char * ptr);
unsigned char igi_CImVector_unsigned_char_subscript(const CImVector_unsigned_char * ptr, int i);
unsigned char * igi_CImVector_unsigned_char_subscriptPointer(CImVector_unsigned_char * ptr, int i);

void igi_CImVector_unsigned_char_Clear(CImVector_unsigned_char * ptr);
unsigned char * igi_CImVector_unsigned_char_Begin(CImVector_unsigned_char * ptr);
const unsigned char * igi_CImVector_unsigned_char_BeginConst(const CImVector_unsigned_char * ptr);
unsigned char * igi_CImVector_unsigned_char_End(CImVector_unsigned_char * ptr);
const unsigned char * igi_CImVector_unsigned_char_EndConst(const CImVector_unsigned_char * ptr);
unsigned char igi_CImVector_unsigned_char_Front(const CImVector_unsigned_char * ptr);
unsigned char igi_CImVector_unsigned_char_Back(const CImVector_unsigned_char * ptr);
void igi_CImVector_unsigned_char_Swap(CImVector_unsigned_char * ptr, CImVector_unsigned_char * other);

void igi_CImVector_unsigned_char_Resize(CImVector_unsigned_char * ptr, int new_size);
void igi_CImVector_unsigned_char_ResizeValue(CImVector_unsigned_char * ptr, int new_size, unsigned char v);
void igi_CImVector_unsigned_char_Shrink(CImVector_unsigned_char * ptr, int new_size);
void igi_CImVector_unsigned_char_Reserve(CImVector_unsigned_char * ptr, int new_capacity);

void igi_CImVector_unsigned_char_PushBack(CImVector_unsigned_char * ptr, unsigned char v);
void igi_CImVector_unsigned_char_PopBack(CImVector_unsigned_char * ptr);
void igi_CImVector_unsigned_char_PushFront(CImVector_unsigned_char * ptr, unsigned char v);
unsigned char * igi_CImVector_unsigned_char_Erase(CImVector_unsigned_char * ptr, const unsigned char * it);
unsigned char * igi_CImVector_unsigned_char_EraseRange(CImVector_unsigned_char * ptr, const unsigned char * it, const unsigned char * it_last);
unsigned char * igi_CImVector_unsigned_char_Insert(CImVector_unsigned_char * ptr, const unsigned char * it, unsigned char v);
bool igi_CImVector_unsigned_char_Contains(const CImVector_unsigned_char * ptr, unsigned char v);
unsigned char * igi_CImVector_unsigned_char_Find(CImVector_unsigned_char * ptr, unsigned char v);
const unsigned char * igi_CImVector_unsigned_char_FindConst(const CImVector_unsigned_char * ptr, unsigned char v);
bool igi_CImVector_unsigned_char_FindErase(CImVector_unsigned_char * ptr, unsigned char v);


CImVector_CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_init();
void igi_CImVector_CImGuiPtrOrIndex_deinit(const CImVector_CImGuiPtrOrIndex * ptr);
bool igi_CImVector_CImGuiPtrOrIndex_Empty(const CImVector_CImGuiPtrOrIndex * ptr);
int igi_CImVector_CImGuiPtrOrIndex_Size(const CImVector_CImGuiPtrOrIndex * ptr);
int igi_CImVector_CImGuiPtrOrIndex_Size_in_bytes(const CImVector_CImGuiPtrOrIndex * ptr);
int igi_CImVector_CImGuiPtrOrIndex_Capacity(const CImVector_CImGuiPtrOrIndex * ptr);
const CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_subscriptConst(const CImVector_CImGuiPtrOrIndex * ptr, int i);
CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_subscript(CImVector_CImGuiPtrOrIndex * ptr, int i);

void igi_CImVector_CImGuiPtrOrIndex_Clear(CImVector_CImGuiPtrOrIndex * ptr);
CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_Begin(CImVector_CImGuiPtrOrIndex * ptr);
const CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_BeginConst(const CImVector_CImGuiPtrOrIndex * ptr);
CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_End(CImVector_CImGuiPtrOrIndex * ptr);
const CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_EndConst(const CImVector_CImGuiPtrOrIndex * ptr);
CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_Front(CImVector_CImGuiPtrOrIndex * ptr);
const CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_FrontConst(const CImVector_CImGuiPtrOrIndex * ptr);
CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_Back(CImVector_CImGuiPtrOrIndex * ptr);
const CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_BackConst(const CImVector_CImGuiPtrOrIndex * ptr);
void igi_CImVector_CImGuiPtrOrIndex_Swap(CImVector_CImGuiPtrOrIndex * ptr, CImVector_CImGuiPtrOrIndex * other);

void igi_CImVector_CImGuiPtrOrIndex_Resize(CImVector_CImGuiPtrOrIndex * ptr, int new_size);
void igi_CImVector_CImGuiPtrOrIndex_ResizeValue(CImVector_CImGuiPtrOrIndex * ptr, int new_size, const CImGuiPtrOrIndex * v);
void igi_CImVector_CImGuiPtrOrIndex_Shrink(CImVector_CImGuiPtrOrIndex * ptr, int new_size);
void igi_CImVector_CImGuiPtrOrIndex_Reserve(CImVector_CImGuiPtrOrIndex * ptr, int new_capacity);

void igi_CImVector_CImGuiPtrOrIndex_PushBack(CImVector_CImGuiPtrOrIndex * ptr, const CImGuiPtrOrIndex * v);
void igi_CImVector_CImGuiPtrOrIndex_PopBack(CImVector_CImGuiPtrOrIndex * ptr);
void igi_CImVector_CImGuiPtrOrIndex_PushFront(CImVector_CImGuiPtrOrIndex * ptr, const CImGuiPtrOrIndex * v);
CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_Erase(CImVector_CImGuiPtrOrIndex * ptr, const CImGuiPtrOrIndex * it);
CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_EraseRange(CImVector_CImGuiPtrOrIndex * ptr, const CImGuiPtrOrIndex * it, const CImGuiPtrOrIndex * it_last);
CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_Insert(CImVector_CImGuiPtrOrIndex * ptr, const CImGuiPtrOrIndex * it, const CImGuiPtrOrIndex * v);


CImVector_CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_init();
void igi_CImVector_CImGuiShrinkWidthItem_deinit(const CImVector_CImGuiShrinkWidthItem * ptr);
bool igi_CImVector_CImGuiShrinkWidthItem_Empty(const CImVector_CImGuiShrinkWidthItem * ptr);
int igi_CImVector_CImGuiShrinkWidthItem_Size(const CImVector_CImGuiShrinkWidthItem * ptr);
int igi_CImVector_CImGuiShrinkWidthItem_Size_in_bytes(const CImVector_CImGuiShrinkWidthItem * ptr);
int igi_CImVector_CImGuiShrinkWidthItem_Capacity(const CImVector_CImGuiShrinkWidthItem * ptr);
const CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_subscriptConst(const CImVector_CImGuiShrinkWidthItem * ptr, int i);
CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_subscript(CImVector_CImGuiShrinkWidthItem * ptr, int i);

void igi_CImVector_CImGuiShrinkWidthItem_Clear(CImVector_CImGuiShrinkWidthItem * ptr);
CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_Begin(CImVector_CImGuiShrinkWidthItem * ptr);
const CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_BeginConst(const CImVector_CImGuiShrinkWidthItem * ptr);
CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_End(CImVector_CImGuiShrinkWidthItem * ptr);
const CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_EndConst(const CImVector_CImGuiShrinkWidthItem * ptr);
CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_Front(CImVector_CImGuiShrinkWidthItem * ptr);
const CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_FrontConst(const CImVector_CImGuiShrinkWidthItem * ptr);
CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_Back(CImVector_CImGuiShrinkWidthItem * ptr);
const CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_BackConst(const CImVector_CImGuiShrinkWidthItem * ptr);
void igi_CImVector_CImGuiShrinkWidthItem_Swap(CImVector_CImGuiShrinkWidthItem * ptr, CImVector_CImGuiShrinkWidthItem * other);

void igi_CImVector_CImGuiShrinkWidthItem_Resize(CImVector_CImGuiShrinkWidthItem * ptr, int new_size);
void igi_CImVector_CImGuiShrinkWidthItem_ResizeValue(CImVector_CImGuiShrinkWidthItem * ptr, int new_size, const CImGuiShrinkWidthItem * v);
void igi_CImVector_CImGuiShrinkWidthItem_Shrink(CImVector_CImGuiShrinkWidthItem * ptr, int new_size);
void igi_CImVector_CImGuiShrinkWidthItem_Reserve(CImVector_CImGuiShrinkWidthItem * ptr, int new_capacity);

void igi_CImVector_CImGuiShrinkWidthItem_PushBack(CImVector_CImGuiShrinkWidthItem * ptr, const CImGuiShrinkWidthItem * v);
void igi_CImVector_CImGuiShrinkWidthItem_PopBack(CImVector_CImGuiShrinkWidthItem * ptr);
void igi_CImVector_CImGuiShrinkWidthItem_PushFront(CImVector_CImGuiShrinkWidthItem * ptr, const CImGuiShrinkWidthItem * v);
CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_Erase(CImVector_CImGuiShrinkWidthItem * ptr, const CImGuiShrinkWidthItem * it);
CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_EraseRange(CImVector_CImGuiShrinkWidthItem * ptr, const CImGuiShrinkWidthItem * it, const CImGuiShrinkWidthItem * it_last);
CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_Insert(CImVector_CImGuiShrinkWidthItem * ptr, const CImGuiShrinkWidthItem * it, const CImGuiShrinkWidthItem * v);


CImVector_CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_init();
void igi_CImVector_CImGuiSettingsHandler_deinit(const CImVector_CImGuiSettingsHandler * ptr);
bool igi_CImVector_CImGuiSettingsHandler_Empty(const CImVector_CImGuiSettingsHandler * ptr);
int igi_CImVector_CImGuiSettingsHandler_Size(const CImVector_CImGuiSettingsHandler * ptr);
int igi_CImVector_CImGuiSettingsHandler_Size_in_bytes(const CImVector_CImGuiSettingsHandler * ptr);
int igi_CImVector_CImGuiSettingsHandler_Capacity(const CImVector_CImGuiSettingsHandler * ptr);
const CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_subscriptConst(const CImVector_CImGuiSettingsHandler * ptr, int i);
CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_subscript(CImVector_CImGuiSettingsHandler * ptr, int i);

void igi_CImVector_CImGuiSettingsHandler_Clear(CImVector_CImGuiSettingsHandler * ptr);
CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_Begin(CImVector_CImGuiSettingsHandler * ptr);
const CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_BeginConst(const CImVector_CImGuiSettingsHandler * ptr);
CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_End(CImVector_CImGuiSettingsHandler * ptr);
const CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_EndConst(const CImVector_CImGuiSettingsHandler * ptr);
CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_Front(CImVector_CImGuiSettingsHandler * ptr);
const CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_FrontConst(const CImVector_CImGuiSettingsHandler * ptr);
CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_Back(CImVector_CImGuiSettingsHandler * ptr);
const CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_BackConst(const CImVector_CImGuiSettingsHandler * ptr);
void igi_CImVector_CImGuiSettingsHandler_Swap(CImVector_CImGuiSettingsHandler * ptr, CImVector_CImGuiSettingsHandler * other);

void igi_CImVector_CImGuiSettingsHandler_Resize(CImVector_CImGuiSettingsHandler * ptr, int new_size);
void igi_CImVector_CImGuiSettingsHandler_ResizeValue(CImVector_CImGuiSettingsHandler * ptr, int new_size, const CImGuiSettingsHandler * v);
void igi_CImVector_CImGuiSettingsHandler_Shrink(CImVector_CImGuiSettingsHandler * ptr, int new_size);
void igi_CImVector_CImGuiSettingsHandler_Reserve(CImVector_CImGuiSettingsHandler * ptr, int new_capacity);

void igi_CImVector_CImGuiSettingsHandler_PushBack(CImVector_CImGuiSettingsHandler * ptr, const CImGuiSettingsHandler * v);
void igi_CImVector_CImGuiSettingsHandler_PopBack(CImVector_CImGuiSettingsHandler * ptr);
void igi_CImVector_CImGuiSettingsHandler_PushFront(CImVector_CImGuiSettingsHandler * ptr, const CImGuiSettingsHandler * v);
CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_Erase(CImVector_CImGuiSettingsHandler * ptr, const CImGuiSettingsHandler * it);
CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_EraseRange(CImVector_CImGuiSettingsHandler * ptr, const CImGuiSettingsHandler * it, const CImGuiSettingsHandler * it_last);
CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_Insert(CImVector_CImGuiSettingsHandler * ptr, const CImGuiSettingsHandler * it, const CImGuiSettingsHandler * v);


CImVector_CImGuiItemFlags * igi_CImVector_CImGuiItemFlags_init();
void igi_CImVector_CImGuiItemFlags_deinit(const CImVector_CImGuiItemFlags * ptr);
bool igi_CImVector_CImGuiItemFlags_Empty(const CImVector_CImGuiItemFlags * ptr);
int igi_CImVector_CImGuiItemFlags_Size(const CImVector_CImGuiItemFlags * ptr);
int igi_CImVector_CImGuiItemFlags_Size_in_bytes(const CImVector_CImGuiItemFlags * ptr);
int igi_CImVector_CImGuiItemFlags_Capacity(const CImVector_CImGuiItemFlags * ptr);
CImGuiItemFlags igi_CImVector_CImGuiItemFlags_subscript(const CImVector_CImGuiItemFlags * ptr, int i);
CImGuiItemFlags * igi_CImVector_CImGuiItemFlags_subscriptPointer(CImVector_CImGuiItemFlags * ptr, int i);

void igi_CImVector_CImGuiItemFlags_Clear(CImVector_CImGuiItemFlags * ptr);
CImGuiItemFlags * igi_CImVector_CImGuiItemFlags_Begin(CImVector_CImGuiItemFlags * ptr);
const CImGuiItemFlags * igi_CImVector_CImGuiItemFlags_BeginConst(const CImVector_CImGuiItemFlags * ptr);
CImGuiItemFlags * igi_CImVector_CImGuiItemFlags_End(CImVector_CImGuiItemFlags * ptr);
const CImGuiItemFlags * igi_CImVector_CImGuiItemFlags_EndConst(const CImVector_CImGuiItemFlags * ptr);
CImGuiItemFlags igi_CImVector_CImGuiItemFlags_Front(const CImVector_CImGuiItemFlags * ptr);
CImGuiItemFlags igi_CImVector_CImGuiItemFlags_Back(const CImVector_CImGuiItemFlags * ptr);
void igi_CImVector_CImGuiItemFlags_Swap(CImVector_CImGuiItemFlags * ptr, CImVector_CImGuiItemFlags * other);

void igi_CImVector_CImGuiItemFlags_Resize(CImVector_CImGuiItemFlags * ptr, int new_size);
void igi_CImVector_CImGuiItemFlags_ResizeValue(CImVector_CImGuiItemFlags * ptr, int new_size, CImGuiItemFlags v);
void igi_CImVector_CImGuiItemFlags_Shrink(CImVector_CImGuiItemFlags * ptr, int new_size);
void igi_CImVector_CImGuiItemFlags_Reserve(CImVector_CImGuiItemFlags * ptr, int new_capacity);

void igi_CImVector_CImGuiItemFlags_PushBack(CImVector_CImGuiItemFlags * ptr, CImGuiItemFlags v);
void igi_CImVector_CImGuiItemFlags_PopBack(CImVector_CImGuiItemFlags * ptr);
void igi_CImVector_CImGuiItemFlags_PushFront(CImVector_CImGuiItemFlags * ptr, CImGuiItemFlags v);
CImGuiItemFlags * igi_CImVector_CImGuiItemFlags_Erase(CImVector_CImGuiItemFlags * ptr, const CImGuiItemFlags * it);
CImGuiItemFlags * igi_CImVector_CImGuiItemFlags_EraseRange(CImVector_CImGuiItemFlags * ptr, const CImGuiItemFlags * it, const CImGuiItemFlags * it_last);
CImGuiItemFlags * igi_CImVector_CImGuiItemFlags_Insert(CImVector_CImGuiItemFlags * ptr, const CImGuiItemFlags * it, CImGuiItemFlags v);
bool igi_CImVector_CImGuiItemFlags_Contains(const CImVector_CImGuiItemFlags * ptr, CImGuiItemFlags v);
CImGuiItemFlags * igi_CImVector_CImGuiItemFlags_Find(CImVector_CImGuiItemFlags * ptr, CImGuiItemFlags v);
const CImGuiItemFlags * igi_CImVector_CImGuiItemFlags_FindConst(const CImVector_CImGuiItemFlags * ptr, CImGuiItemFlags v);
bool igi_CImVector_CImGuiItemFlags_FindErase(CImVector_CImGuiItemFlags * ptr, CImGuiItemFlags v);


CImVector_CImGuiGroupData * igi_CImVector_CImGuiGroupData_init();
void igi_CImVector_CImGuiGroupData_deinit(const CImVector_CImGuiGroupData * ptr);
bool igi_CImVector_CImGuiGroupData_Empty(const CImVector_CImGuiGroupData * ptr);
int igi_CImVector_CImGuiGroupData_Size(const CImVector_CImGuiGroupData * ptr);
int igi_CImVector_CImGuiGroupData_Size_in_bytes(const CImVector_CImGuiGroupData * ptr);
int igi_CImVector_CImGuiGroupData_Capacity(const CImVector_CImGuiGroupData * ptr);
const CImGuiGroupData * igi_CImVector_CImGuiGroupData_subscriptConst(const CImVector_CImGuiGroupData * ptr, int i);
CImGuiGroupData * igi_CImVector_CImGuiGroupData_subscript(CImVector_CImGuiGroupData * ptr, int i);

void igi_CImVector_CImGuiGroupData_Clear(CImVector_CImGuiGroupData * ptr);
CImGuiGroupData * igi_CImVector_CImGuiGroupData_Begin(CImVector_CImGuiGroupData * ptr);
const CImGuiGroupData * igi_CImVector_CImGuiGroupData_BeginConst(const CImVector_CImGuiGroupData * ptr);
CImGuiGroupData * igi_CImVector_CImGuiGroupData_End(CImVector_CImGuiGroupData * ptr);
const CImGuiGroupData * igi_CImVector_CImGuiGroupData_EndConst(const CImVector_CImGuiGroupData * ptr);
CImGuiGroupData * igi_CImVector_CImGuiGroupData_Front(CImVector_CImGuiGroupData * ptr);
const CImGuiGroupData * igi_CImVector_CImGuiGroupData_FrontConst(const CImVector_CImGuiGroupData * ptr);
CImGuiGroupData * igi_CImVector_CImGuiGroupData_Back(CImVector_CImGuiGroupData * ptr);
const CImGuiGroupData * igi_CImVector_CImGuiGroupData_BackConst(const CImVector_CImGuiGroupData * ptr);
void igi_CImVector_CImGuiGroupData_Swap(CImVector_CImGuiGroupData * ptr, CImVector_CImGuiGroupData * other);

void igi_CImVector_CImGuiGroupData_Resize(CImVector_CImGuiGroupData * ptr, int new_size);
void igi_CImVector_CImGuiGroupData_ResizeValue(CImVector_CImGuiGroupData * ptr, int new_size, const CImGuiGroupData * v);
void igi_CImVector_CImGuiGroupData_Shrink(CImVector_CImGuiGroupData * ptr, int new_size);
void igi_CImVector_CImGuiGroupData_Reserve(CImVector_CImGuiGroupData * ptr, int new_capacity);

void igi_CImVector_CImGuiGroupData_PushBack(CImVector_CImGuiGroupData * ptr, const CImGuiGroupData * v);
void igi_CImVector_CImGuiGroupData_PopBack(CImVector_CImGuiGroupData * ptr);
void igi_CImVector_CImGuiGroupData_PushFront(CImVector_CImGuiGroupData * ptr, const CImGuiGroupData * v);
CImGuiGroupData * igi_CImVector_CImGuiGroupData_Erase(CImVector_CImGuiGroupData * ptr, const CImGuiGroupData * it);
CImGuiGroupData * igi_CImVector_CImGuiGroupData_EraseRange(CImVector_CImGuiGroupData * ptr, const CImGuiGroupData * it, const CImGuiGroupData * it_last);
CImGuiGroupData * igi_CImVector_CImGuiGroupData_Insert(CImVector_CImGuiGroupData * ptr, const CImGuiGroupData * it, const CImGuiGroupData * v);


CImVector_CImGuiColumns * igi_CImVector_CImGuiColumns_init();
void igi_CImVector_CImGuiColumns_deinit(const CImVector_CImGuiColumns * ptr);
bool igi_CImVector_CImGuiColumns_Empty(const CImVector_CImGuiColumns * ptr);
int igi_CImVector_CImGuiColumns_Size(const CImVector_CImGuiColumns * ptr);
int igi_CImVector_CImGuiColumns_Size_in_bytes(const CImVector_CImGuiColumns * ptr);
int igi_CImVector_CImGuiColumns_Capacity(const CImVector_CImGuiColumns * ptr);
const CImGuiColumns * igi_CImVector_CImGuiColumns_subscriptConst(const CImVector_CImGuiColumns * ptr, int i);
CImGuiColumns * igi_CImVector_CImGuiColumns_subscript(CImVector_CImGuiColumns * ptr, int i);

void igi_CImVector_CImGuiColumns_Clear(CImVector_CImGuiColumns * ptr);
CImGuiColumns * igi_CImVector_CImGuiColumns_Begin(CImVector_CImGuiColumns * ptr);
const CImGuiColumns * igi_CImVector_CImGuiColumns_BeginConst(const CImVector_CImGuiColumns * ptr);
CImGuiColumns * igi_CImVector_CImGuiColumns_End(CImVector_CImGuiColumns * ptr);
const CImGuiColumns * igi_CImVector_CImGuiColumns_EndConst(const CImVector_CImGuiColumns * ptr);
CImGuiColumns * igi_CImVector_CImGuiColumns_Front(CImVector_CImGuiColumns * ptr);
const CImGuiColumns * igi_CImVector_CImGuiColumns_FrontConst(const CImVector_CImGuiColumns * ptr);
CImGuiColumns * igi_CImVector_CImGuiColumns_Back(CImVector_CImGuiColumns * ptr);
const CImGuiColumns * igi_CImVector_CImGuiColumns_BackConst(const CImVector_CImGuiColumns * ptr);
void igi_CImVector_CImGuiColumns_Swap(CImVector_CImGuiColumns * ptr, CImVector_CImGuiColumns * other);

void igi_CImVector_CImGuiColumns_Resize(CImVector_CImGuiColumns * ptr, int new_size);
void igi_CImVector_CImGuiColumns_ResizeValue(CImVector_CImGuiColumns * ptr, int new_size, const CImGuiColumns * v);
void igi_CImVector_CImGuiColumns_Shrink(CImVector_CImGuiColumns * ptr, int new_size);
void igi_CImVector_CImGuiColumns_Reserve(CImVector_CImGuiColumns * ptr, int new_capacity);

void igi_CImVector_CImGuiColumns_PushBack(CImVector_CImGuiColumns * ptr, const CImGuiColumns * v);
void igi_CImVector_CImGuiColumns_PopBack(CImVector_CImGuiColumns * ptr);
void igi_CImVector_CImGuiColumns_PushFront(CImVector_CImGuiColumns * ptr, const CImGuiColumns * v);
CImGuiColumns * igi_CImVector_CImGuiColumns_Erase(CImVector_CImGuiColumns * ptr, const CImGuiColumns * it);
CImGuiColumns * igi_CImVector_CImGuiColumns_EraseRange(CImVector_CImGuiColumns * ptr, const CImGuiColumns * it, const CImGuiColumns * it_last);
CImGuiColumns * igi_CImVector_CImGuiColumns_Insert(CImVector_CImGuiColumns * ptr, const CImGuiColumns * it, const CImGuiColumns * v);


CImVector_CImGuiTabItem * igi_CImVector_CImGuiTabItem_init();
void igi_CImVector_CImGuiTabItem_deinit(const CImVector_CImGuiTabItem * ptr);
bool igi_CImVector_CImGuiTabItem_Empty(const CImVector_CImGuiTabItem * ptr);
int igi_CImVector_CImGuiTabItem_Size(const CImVector_CImGuiTabItem * ptr);
int igi_CImVector_CImGuiTabItem_Size_in_bytes(const CImVector_CImGuiTabItem * ptr);
int igi_CImVector_CImGuiTabItem_Capacity(const CImVector_CImGuiTabItem * ptr);
const CImGuiTabItem * igi_CImVector_CImGuiTabItem_subscriptConst(const CImVector_CImGuiTabItem * ptr, int i);
CImGuiTabItem * igi_CImVector_CImGuiTabItem_subscript(CImVector_CImGuiTabItem * ptr, int i);

void igi_CImVector_CImGuiTabItem_Clear(CImVector_CImGuiTabItem * ptr);
CImGuiTabItem * igi_CImVector_CImGuiTabItem_Begin(CImVector_CImGuiTabItem * ptr);
const CImGuiTabItem * igi_CImVector_CImGuiTabItem_BeginConst(const CImVector_CImGuiTabItem * ptr);
CImGuiTabItem * igi_CImVector_CImGuiTabItem_End(CImVector_CImGuiTabItem * ptr);
const CImGuiTabItem * igi_CImVector_CImGuiTabItem_EndConst(const CImVector_CImGuiTabItem * ptr);
CImGuiTabItem * igi_CImVector_CImGuiTabItem_Front(CImVector_CImGuiTabItem * ptr);
const CImGuiTabItem * igi_CImVector_CImGuiTabItem_FrontConst(const CImVector_CImGuiTabItem * ptr);
CImGuiTabItem * igi_CImVector_CImGuiTabItem_Back(CImVector_CImGuiTabItem * ptr);
const CImGuiTabItem * igi_CImVector_CImGuiTabItem_BackConst(const CImVector_CImGuiTabItem * ptr);
void igi_CImVector_CImGuiTabItem_Swap(CImVector_CImGuiTabItem * ptr, CImVector_CImGuiTabItem * other);

void igi_CImVector_CImGuiTabItem_Resize(CImVector_CImGuiTabItem * ptr, int new_size);
void igi_CImVector_CImGuiTabItem_ResizeValue(CImVector_CImGuiTabItem * ptr, int new_size, const CImGuiTabItem * v);
void igi_CImVector_CImGuiTabItem_Shrink(CImVector_CImGuiTabItem * ptr, int new_size);
void igi_CImVector_CImGuiTabItem_Reserve(CImVector_CImGuiTabItem * ptr, int new_capacity);

void igi_CImVector_CImGuiTabItem_PushBack(CImVector_CImGuiTabItem * ptr, const CImGuiTabItem * v);
void igi_CImVector_CImGuiTabItem_PopBack(CImVector_CImGuiTabItem * ptr);
void igi_CImVector_CImGuiTabItem_PushFront(CImVector_CImGuiTabItem * ptr, const CImGuiTabItem * v);
CImGuiTabItem * igi_CImVector_CImGuiTabItem_Erase(CImVector_CImGuiTabItem * ptr, const CImGuiTabItem * it);
CImGuiTabItem * igi_CImVector_CImGuiTabItem_EraseRange(CImVector_CImGuiTabItem * ptr, const CImGuiTabItem * it, const CImGuiTabItem * it_last);
CImGuiTabItem * igi_CImVector_CImGuiTabItem_Insert(CImVector_CImGuiTabItem * ptr, const CImGuiTabItem * it, const CImGuiTabItem * v);


#ifdef __cplusplus
}
#endif

#endif /* vectors_internal_h */
