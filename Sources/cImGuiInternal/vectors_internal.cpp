//
//  vectors_internal.cpp
//  
//
//  Created by Josef Zoller on 17.11.20.
//

#include "vectors_internal.h"

#include <cppimgui.hpp>

#include "asserts_internal.h"

#include "conversions.h"
#include "conversions_internal.h"

CImVector_const_charPtr * igi_CImVector_const_charPtr_init() {
    return toCIm(new ImVector<const char *>);
}

void igi_CImVector_const_charPtr_deinit(const CImVector_const_charPtr * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_const_charPtr_Empty(const CImVector_const_charPtr * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_const_charPtr_Size(const CImVector_const_charPtr * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_const_charPtr_Size_in_bytes(const CImVector_const_charPtr * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_const_charPtr_Capacity(const CImVector_const_charPtr * ptr) {
    return toIm(ptr)->capacity();
}

const char * igi_CImVector_const_charPtr_subscript(const CImVector_const_charPtr * ptr, int i) {
    return (*toIm(ptr))[i];
}

const char ** igi_CImVector_const_charPtr_subscriptPointer(CImVector_const_charPtr * ptr, int i) {
    return &(*toIm(ptr))[i];
}


void igi_CImVector_const_charPtr_Clear(CImVector_const_charPtr * ptr) {
    toIm(ptr)->clear();
}

const char ** igi_CImVector_const_charPtr_Begin(CImVector_const_charPtr * ptr) {
    return toIm(ptr)->begin();
}

const char * const * igi_CImVector_const_charPtr_BeginConst(const CImVector_const_charPtr * ptr) {
    return toIm(ptr)->begin();
}

const char ** igi_CImVector_const_charPtr_End(CImVector_const_charPtr * ptr) {
    return toIm(ptr)->end();
}

const char * const * igi_CImVector_const_charPtr_EndConst(const CImVector_const_charPtr * ptr) {
    return toIm(ptr)->end();
}

const char * igi_CImVector_const_charPtr_Front(const CImVector_const_charPtr * ptr) {
    return toIm(ptr)->front();
}

const char * igi_CImVector_const_charPtr_Back(const CImVector_const_charPtr * ptr) {
    return toIm(ptr)->back();
}

void igi_CImVector_const_charPtr_Swap(CImVector_const_charPtr * ptr, CImVector_const_charPtr * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_const_charPtr_Resize(CImVector_const_charPtr * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_const_charPtr_ResizeValue(CImVector_const_charPtr * ptr, int new_size, const char * v) {
    toIm(ptr)->resize(new_size, v);
}

void igi_CImVector_const_charPtr_Shrink(CImVector_const_charPtr * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_const_charPtr_Reserve(CImVector_const_charPtr * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_const_charPtr_PushBack(CImVector_const_charPtr * ptr, const char * v) {
    toIm(ptr)->push_back(v);
}

void igi_CImVector_const_charPtr_PopBack(CImVector_const_charPtr * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_const_charPtr_PushFront(CImVector_const_charPtr * ptr, const char * v) {
    toIm(ptr)->push_front(v);
}

const char ** igi_CImVector_const_charPtr_Erase(CImVector_const_charPtr * ptr, const char * const * it) {
    return toIm(ptr)->erase(it);
}

const char ** igi_CImVector_const_charPtr_EraseRange(CImVector_const_charPtr * ptr, const char * const * it, const char * const * it_last) {
    return toIm(ptr)->erase(it, it_last);
}

const char ** igi_CImVector_const_charPtr_Insert(CImVector_const_charPtr * ptr, const char * const * it, const char * v) {
    return toIm(ptr)->insert(it, v);
}

bool igi_CImVector_const_charPtr_Contains(const CImVector_const_charPtr * ptr, const char * v) {
    return toIm(ptr)->contains(v);
}

const char ** igi_CImVector_const_charPtr_Find(CImVector_const_charPtr * ptr, const char * v) {
    return toIm(ptr)->find(v);
}

const char * const * igi_CImVector_const_charPtr_FindConst(const CImVector_const_charPtr * ptr, const char * v) {
    return toIm(ptr)->find(v);
}

bool igi_CImVector_const_charPtr_FindErase(CImVector_const_charPtr * ptr, const char * v) {
    return toIm(ptr)->find_erase(v);
}



CImVector_CImGuiID * igi_CImVector_CImGuiID_init() {
    return toCIm(new ImVector<ImGuiID>);
}

void igi_CImVector_CImGuiID_deinit(const CImVector_CImGuiID * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiID_Empty(const CImVector_CImGuiID * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiID_Size(const CImVector_CImGuiID * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiID_Size_in_bytes(const CImVector_CImGuiID * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_CImGuiID_Capacity(const CImVector_CImGuiID * ptr) {
    return toIm(ptr)->capacity();
}

CImGuiID igi_CImVector_CImGuiID_subscript(const CImVector_CImGuiID * ptr, int i) {
    return (*toIm(ptr))[i];
}

CImGuiID * igi_CImVector_CImGuiID_subscriptPointer(CImVector_CImGuiID * ptr, int i) {
    return &(*toIm(ptr))[i];
}


void igi_CImVector_CImGuiID_Clear(CImVector_CImGuiID * ptr) {
    toIm(ptr)->clear();
}

CImGuiID * igi_CImVector_CImGuiID_Begin(CImVector_CImGuiID * ptr) {
    return toIm(ptr)->begin();
}

const CImGuiID * igi_CImVector_CImGuiID_BeginConst(const CImVector_CImGuiID * ptr) {
    return toIm(ptr)->begin();
}

CImGuiID * igi_CImVector_CImGuiID_End(CImVector_CImGuiID * ptr) {
    return toIm(ptr)->end();
}

const CImGuiID * igi_CImVector_CImGuiID_EndConst(const CImVector_CImGuiID * ptr) {
    return toIm(ptr)->end();
}

CImGuiID igi_CImVector_CImGuiID_Front(const CImVector_CImGuiID * ptr) {
    return toIm(ptr)->front();
}

CImGuiID igi_CImVector_CImGuiID_Back(const CImVector_CImGuiID * ptr) {
    return toIm(ptr)->back();
}

void igi_CImVector_CImGuiID_Swap(CImVector_CImGuiID * ptr, CImVector_CImGuiID * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiID_Resize(CImVector_CImGuiID * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_CImGuiID_ResizeValue(CImVector_CImGuiID * ptr, int new_size, CImGuiID v) {
    toIm(ptr)->resize(new_size, v);
}

void igi_CImVector_CImGuiID_Shrink(CImVector_CImGuiID * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiID_Reserve(CImVector_CImGuiID * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_CImGuiID_PushBack(CImVector_CImGuiID * ptr, CImGuiID v) {
    toIm(ptr)->push_back(v);
}

void igi_CImVector_CImGuiID_PopBack(CImVector_CImGuiID * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_CImGuiID_PushFront(CImVector_CImGuiID * ptr, CImGuiID v) {
    toIm(ptr)->push_front(v);
}

CImGuiID * igi_CImVector_CImGuiID_Erase(CImVector_CImGuiID * ptr, const CImGuiID * it) {
    return toIm(ptr)->erase(it);
}

CImGuiID * igi_CImVector_CImGuiID_EraseRange(CImVector_CImGuiID * ptr, const CImGuiID * it, const CImGuiID * it_last) {
    return toIm(ptr)->erase(it, it_last);
}

CImGuiID * igi_CImVector_CImGuiID_Insert(CImVector_CImGuiID * ptr, const CImGuiID * it, CImGuiID v) {
    return toIm(ptr)->insert(it, v);
}

bool igi_CImVector_CImGuiID_Contains(const CImVector_CImGuiID * ptr, CImGuiID v) {
    return toIm(ptr)->contains(v);
}

CImGuiID * igi_CImVector_CImGuiID_Find(CImVector_CImGuiID * ptr, CImGuiID v) {
    return toIm(ptr)->find(v);
}

const CImGuiID * igi_CImVector_CImGuiID_FindConst(const CImVector_CImGuiID * ptr, CImGuiID v) {
    return toIm(ptr)->find(v);
}

bool igi_CImVector_CImGuiID_FindErase(CImVector_CImGuiID * ptr, CImGuiID v) {
    return toIm(ptr)->find_erase(v);
}



CImVector_CImGuiTabBar * igi_CImVector_CImGuiTabBar_init() {
    return toCIm(new ImVector<ImGuiTabBar>);
}

void igi_CImVector_CImGuiTabBar_deinit(const CImVector_CImGuiTabBar * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiTabBar_Empty(const CImVector_CImGuiTabBar * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiTabBar_Size(const CImVector_CImGuiTabBar * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiTabBar_Size_in_bytes(const CImVector_CImGuiTabBar * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_CImGuiTabBar_Capacity(const CImVector_CImGuiTabBar * ptr) {
    return toIm(ptr)->capacity();
}

const CImGuiTabBar * igi_CImVector_CImGuiTabBar_subscriptConst(const CImVector_CImGuiTabBar * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImGuiTabBar * igi_CImVector_CImGuiTabBar_subscript(CImVector_CImGuiTabBar * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void igi_CImVector_CImGuiTabBar_Clear(CImVector_CImGuiTabBar * ptr) {
    toIm(ptr)->clear();
}

CImGuiTabBar * igi_CImVector_CImGuiTabBar_Begin(CImVector_CImGuiTabBar * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImGuiTabBar * igi_CImVector_CImGuiTabBar_BeginConst(const CImVector_CImGuiTabBar * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiTabBar * igi_CImVector_CImGuiTabBar_End(CImVector_CImGuiTabBar * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImGuiTabBar * igi_CImVector_CImGuiTabBar_EndConst(const CImVector_CImGuiTabBar * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImGuiTabBar * igi_CImVector_CImGuiTabBar_Front(CImVector_CImGuiTabBar * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImGuiTabBar * igi_CImVector_CImGuiTabBar_FrontConst(const CImVector_CImGuiTabBar * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImGuiTabBar * igi_CImVector_CImGuiTabBar_Back(CImVector_CImGuiTabBar * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImGuiTabBar * igi_CImVector_CImGuiTabBar_BackConst(const CImVector_CImGuiTabBar * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void igi_CImVector_CImGuiTabBar_Swap(CImVector_CImGuiTabBar * ptr, CImVector_CImGuiTabBar * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiTabBar_Resize(CImVector_CImGuiTabBar * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_CImGuiTabBar_ResizeValue(CImVector_CImGuiTabBar * ptr, int new_size, const CImGuiTabBar * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void igi_CImVector_CImGuiTabBar_Shrink(CImVector_CImGuiTabBar * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiTabBar_Reserve(CImVector_CImGuiTabBar * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_CImGuiTabBar_PushBack(CImVector_CImGuiTabBar * ptr, const CImGuiTabBar * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void igi_CImVector_CImGuiTabBar_PopBack(CImVector_CImGuiTabBar * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_CImGuiTabBar_PushFront(CImVector_CImGuiTabBar * ptr, const CImGuiTabBar * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImGuiTabBar * igi_CImVector_CImGuiTabBar_Erase(CImVector_CImGuiTabBar * ptr, const CImGuiTabBar * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImGuiTabBar * igi_CImVector_CImGuiTabBar_EraseRange(CImVector_CImGuiTabBar * ptr, const CImGuiTabBar * it, const CImGuiTabBar * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImGuiTabBar * igi_CImVector_CImGuiTabBar_Insert(CImVector_CImGuiTabBar * ptr, const CImGuiTabBar * it, const CImGuiTabBar * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImDrawListPtr * igi_CImVector_CImDrawListPtr_init() {
    return toCIm(new ImVector<ImDrawList *>);
}

void igi_CImVector_CImDrawListPtr_deinit(const CImVector_CImDrawListPtr * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImDrawListPtr_Empty(const CImVector_CImDrawListPtr * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImDrawListPtr_Size(const CImVector_CImDrawListPtr * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImDrawListPtr_Size_in_bytes(const CImVector_CImDrawListPtr * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_CImDrawListPtr_Capacity(const CImVector_CImDrawListPtr * ptr) {
    return toIm(ptr)->capacity();
}

const CImDrawList * igi_CImVector_CImDrawListPtr_subscript(const CImVector_CImDrawListPtr * ptr, int i) {
    return toCIm((*toIm(ptr))[i]);
}

CImDrawList ** igi_CImVector_CImDrawListPtr_subscriptPointer(CImVector_CImDrawListPtr * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void igi_CImVector_CImDrawListPtr_Clear(CImVector_CImDrawListPtr * ptr) {
    toIm(ptr)->clear();
}

CImDrawList ** igi_CImVector_CImDrawListPtr_Begin(CImVector_CImDrawListPtr * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImDrawList * const * igi_CImVector_CImDrawListPtr_BeginConst(const CImVector_CImDrawListPtr * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImDrawList ** igi_CImVector_CImDrawListPtr_End(CImVector_CImDrawListPtr * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImDrawList * const * igi_CImVector_CImDrawListPtr_EndConst(const CImVector_CImDrawListPtr * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImDrawList * igi_CImVector_CImDrawListPtr_Front(const CImVector_CImDrawListPtr * ptr) {
    return toCIm(toIm(ptr)->front());
}

const CImDrawList * igi_CImVector_CImDrawListPtr_Back(const CImVector_CImDrawListPtr * ptr) {
    return toCIm(toIm(ptr)->back());
}

void igi_CImVector_CImDrawListPtr_Swap(CImVector_CImDrawListPtr * ptr, CImVector_CImDrawListPtr * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImDrawListPtr_Resize(CImVector_CImDrawListPtr * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_CImDrawListPtr_ResizeValue(CImVector_CImDrawListPtr * ptr, int new_size, CImDrawList * v) {
    toIm(ptr)->resize(new_size, toIm(v));
}

void igi_CImVector_CImDrawListPtr_Shrink(CImVector_CImDrawListPtr * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImDrawListPtr_Reserve(CImVector_CImDrawListPtr * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_CImDrawListPtr_PushBack(CImVector_CImDrawListPtr * ptr, CImDrawList * v) {
    toIm(ptr)->push_back(toIm(v));
}

void igi_CImVector_CImDrawListPtr_PopBack(CImVector_CImDrawListPtr * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_CImDrawListPtr_PushFront(CImVector_CImDrawListPtr * ptr, CImDrawList * v) {
    toIm(ptr)->push_front(toIm(v));
}

CImDrawList ** igi_CImVector_CImDrawListPtr_Erase(CImVector_CImDrawListPtr * ptr, CImDrawList * const * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImDrawList ** igi_CImVector_CImDrawListPtr_EraseRange(CImVector_CImDrawListPtr * ptr, CImDrawList * const * it, CImDrawList * const * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImDrawList ** igi_CImVector_CImDrawListPtr_Insert(CImVector_CImDrawListPtr * ptr, CImDrawList * const * it, CImDrawList * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), toIm(v)));
}

bool igi_CImVector_CImDrawListPtr_Contains(const CImVector_CImDrawListPtr * ptr, CImDrawList * v) {
    return toIm(ptr)->contains(toIm(v));
}

CImDrawList ** igi_CImVector_CImDrawListPtr_Find(CImVector_CImDrawListPtr * ptr, CImDrawList * v) {
    return toCIm(toIm(ptr)->find(toIm(v)));
}

CImDrawList * const * igi_CImVector_CImDrawListPtr_FindConst(const CImVector_CImDrawListPtr * ptr, CImDrawList * v) {
    return toCIm(toIm(ptr)->find(toIm(v)));
}

bool igi_CImVector_CImDrawListPtr_FindErase(CImVector_CImDrawListPtr * ptr, CImDrawList * v) {
    return toIm(ptr)->find_erase(toIm(v));
}



CImVector_CImGuiWindowPtr * igi_CImVector_CImGuiWindowPtr_init() {
    return toCIm(new ImVector<ImGuiWindow *>);
}

void igi_CImVector_CImGuiWindowPtr_deinit(const CImVector_CImGuiWindowPtr * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiWindowPtr_Empty(const CImVector_CImGuiWindowPtr * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiWindowPtr_Size(const CImVector_CImGuiWindowPtr * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiWindowPtr_Size_in_bytes(const CImVector_CImGuiWindowPtr * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_CImGuiWindowPtr_Capacity(const CImVector_CImGuiWindowPtr * ptr) {
    return toIm(ptr)->capacity();
}

const CImGuiWindow * igi_CImVector_CImGuiWindowPtr_subscript(const CImVector_CImGuiWindowPtr * ptr, int i) {
    return toCIm((*toIm(ptr))[i]);
}

CImGuiWindow ** igi_CImVector_CImGuiWindowPtr_subscriptPointer(CImVector_CImGuiWindowPtr * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void igi_CImVector_CImGuiWindowPtr_Clear(CImVector_CImGuiWindowPtr * ptr) {
    toIm(ptr)->clear();
}

CImGuiWindow ** igi_CImVector_CImGuiWindowPtr_Begin(CImVector_CImGuiWindowPtr * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiWindow * const * igi_CImVector_CImGuiWindowPtr_BeginConst(const CImVector_CImGuiWindowPtr * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiWindow ** igi_CImVector_CImGuiWindowPtr_End(CImVector_CImGuiWindowPtr * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImGuiWindow * const * igi_CImVector_CImGuiWindowPtr_EndConst(const CImVector_CImGuiWindowPtr * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImGuiWindow * igi_CImVector_CImGuiWindowPtr_Front(const CImVector_CImGuiWindowPtr * ptr) {
    return toCIm(toIm(ptr)->front());
}

const CImGuiWindow * igi_CImVector_CImGuiWindowPtr_Back(const CImVector_CImGuiWindowPtr * ptr) {
    return toCIm(toIm(ptr)->back());
}

void igi_CImVector_CImGuiWindowPtr_Swap(CImVector_CImGuiWindowPtr * ptr, CImVector_CImGuiWindowPtr * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiWindowPtr_Resize(CImVector_CImGuiWindowPtr * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_CImGuiWindowPtr_ResizeValue(CImVector_CImGuiWindowPtr * ptr, int new_size, CImGuiWindow * v) {
    toIm(ptr)->resize(new_size, toIm(v));
}

void igi_CImVector_CImGuiWindowPtr_Shrink(CImVector_CImGuiWindowPtr * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiWindowPtr_Reserve(CImVector_CImGuiWindowPtr * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_CImGuiWindowPtr_PushBack(CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * v) {
    toIm(ptr)->push_back(toIm(v));
}

void igi_CImVector_CImGuiWindowPtr_PopBack(CImVector_CImGuiWindowPtr * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_CImGuiWindowPtr_PushFront(CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * v) {
    toIm(ptr)->push_front(toIm(v));
}

CImGuiWindow ** igi_CImVector_CImGuiWindowPtr_Erase(CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * const * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImGuiWindow ** igi_CImVector_CImGuiWindowPtr_EraseRange(CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * const * it, CImGuiWindow * const * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImGuiWindow ** igi_CImVector_CImGuiWindowPtr_Insert(CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * const * it, CImGuiWindow * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), toIm(v)));
}

bool igi_CImVector_CImGuiWindowPtr_Contains(const CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * v) {
    return toIm(ptr)->contains(toIm(v));
}

CImGuiWindow ** igi_CImVector_CImGuiWindowPtr_Find(CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * v) {
    return toCIm(toIm(ptr)->find(toIm(v)));
}

CImGuiWindow * const * igi_CImVector_CImGuiWindowPtr_FindConst(const CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * v) {
    return toCIm(toIm(ptr)->find(toIm(v)));
}

bool igi_CImVector_CImGuiWindowPtr_FindErase(CImVector_CImGuiWindowPtr * ptr, CImGuiWindow * v) {
    return toIm(ptr)->find_erase(toIm(v));
}



CImVector_CImGuiColumnData * igi_CImVector_CImGuiColumnData_init() {
    return toCIm(new ImVector<ImGuiColumnData>);
}

void igi_CImVector_CImGuiColumnData_deinit(const CImVector_CImGuiColumnData * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiColumnData_Empty(const CImVector_CImGuiColumnData * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiColumnData_Size(const CImVector_CImGuiColumnData * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiColumnData_Size_in_bytes(const CImVector_CImGuiColumnData * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_CImGuiColumnData_Capacity(const CImVector_CImGuiColumnData * ptr) {
    return toIm(ptr)->capacity();
}

const CImGuiColumnData * igi_CImVector_CImGuiColumnData_subscriptConst(const CImVector_CImGuiColumnData * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImGuiColumnData * igi_CImVector_CImGuiColumnData_subscript(CImVector_CImGuiColumnData * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void igi_CImVector_CImGuiColumnData_Clear(CImVector_CImGuiColumnData * ptr) {
    toIm(ptr)->clear();
}

CImGuiColumnData * igi_CImVector_CImGuiColumnData_Begin(CImVector_CImGuiColumnData * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImGuiColumnData * igi_CImVector_CImGuiColumnData_BeginConst(const CImVector_CImGuiColumnData * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiColumnData * igi_CImVector_CImGuiColumnData_End(CImVector_CImGuiColumnData * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImGuiColumnData * igi_CImVector_CImGuiColumnData_EndConst(const CImVector_CImGuiColumnData * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImGuiColumnData * igi_CImVector_CImGuiColumnData_Front(CImVector_CImGuiColumnData * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImGuiColumnData * igi_CImVector_CImGuiColumnData_FrontConst(const CImVector_CImGuiColumnData * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImGuiColumnData * igi_CImVector_CImGuiColumnData_Back(CImVector_CImGuiColumnData * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImGuiColumnData * igi_CImVector_CImGuiColumnData_BackConst(const CImVector_CImGuiColumnData * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void igi_CImVector_CImGuiColumnData_Swap(CImVector_CImGuiColumnData * ptr, CImVector_CImGuiColumnData * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiColumnData_Resize(CImVector_CImGuiColumnData * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_CImGuiColumnData_ResizeValue(CImVector_CImGuiColumnData * ptr, int new_size, const CImGuiColumnData * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void igi_CImVector_CImGuiColumnData_Shrink(CImVector_CImGuiColumnData * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiColumnData_Reserve(CImVector_CImGuiColumnData * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_CImGuiColumnData_PushBack(CImVector_CImGuiColumnData * ptr, const CImGuiColumnData * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void igi_CImVector_CImGuiColumnData_PopBack(CImVector_CImGuiColumnData * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_CImGuiColumnData_PushFront(CImVector_CImGuiColumnData * ptr, const CImGuiColumnData * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImGuiColumnData * igi_CImVector_CImGuiColumnData_Erase(CImVector_CImGuiColumnData * ptr, const CImGuiColumnData * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImGuiColumnData * igi_CImVector_CImGuiColumnData_EraseRange(CImVector_CImGuiColumnData * ptr, const CImGuiColumnData * it, const CImGuiColumnData * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImGuiColumnData * igi_CImVector_CImGuiColumnData_Insert(CImVector_CImGuiColumnData * ptr, const CImGuiColumnData * it, const CImGuiColumnData * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImGuiDockRequest * igi_CImVector_CImGuiDockRequest_init() {
    return toCIm(new ImVector<ImGuiDockRequest>);
}

void igi_CImVector_CImGuiDockRequest_deinit(const CImVector_CImGuiDockRequest * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiDockRequest_Empty(const CImVector_CImGuiDockRequest * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiDockRequest_Size(const CImVector_CImGuiDockRequest * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiDockRequest_Capacity(const CImVector_CImGuiDockRequest * ptr) {
    return toIm(ptr)->capacity();
}


void igi_CImVector_CImGuiDockRequest_Clear(CImVector_CImGuiDockRequest * ptr) {
    toIm(ptr)->clear();
}

CImGuiDockRequest * igi_CImVector_CImGuiDockRequest_Begin(CImVector_CImGuiDockRequest * ptr) {
    return toIm(ptr)->begin();
}

const CImGuiDockRequest * igi_CImVector_CImGuiDockRequest_BeginConst(const CImVector_CImGuiDockRequest * ptr) {
    return toIm(ptr)->begin();
}

void igi_CImVector_CImGuiDockRequest_Swap(CImVector_CImGuiDockRequest * ptr, CImVector_CImGuiDockRequest * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiDockRequest_Shrink(CImVector_CImGuiDockRequest * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiDockRequest_PopBack(CImVector_CImGuiDockRequest * ptr) {
    toIm(ptr)->pop_back();
}



CImVector_CImGuiDockNodeSettings * igi_CImVector_CImGuiDockNodeSettings_init() {
    return toCIm(new ImVector<ImGuiDockNodeSettings>);
}

void igi_CImVector_CImGuiDockNodeSettings_deinit(const CImVector_CImGuiDockNodeSettings * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiDockNodeSettings_Empty(const CImVector_CImGuiDockNodeSettings * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiDockNodeSettings_Size(const CImVector_CImGuiDockNodeSettings * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiDockNodeSettings_Capacity(const CImVector_CImGuiDockNodeSettings * ptr) {
    return toIm(ptr)->capacity();
}


void igi_CImVector_CImGuiDockNodeSettings_Clear(CImVector_CImGuiDockNodeSettings * ptr) {
    toIm(ptr)->clear();
}

CImGuiDockNodeSettings * igi_CImVector_CImGuiDockNodeSettings_Begin(CImVector_CImGuiDockNodeSettings * ptr) {
    return toIm(ptr)->begin();
}

const CImGuiDockNodeSettings * igi_CImVector_CImGuiDockNodeSettings_BeginConst(const CImVector_CImGuiDockNodeSettings * ptr) {
    return toIm(ptr)->begin();
}

void igi_CImVector_CImGuiDockNodeSettings_Swap(CImVector_CImGuiDockNodeSettings * ptr, CImVector_CImGuiDockNodeSettings * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiDockNodeSettings_Shrink(CImVector_CImGuiDockNodeSettings * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiDockNodeSettings_PopBack(CImVector_CImGuiDockNodeSettings * ptr) {
    toIm(ptr)->pop_back();
}



CImVector_CImGuiColorMod * igi_CImVector_CImGuiColorMod_init() {
    return toCIm(new ImVector<ImGuiColorMod>);
}

void igi_CImVector_CImGuiColorMod_deinit(const CImVector_CImGuiColorMod * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiColorMod_Empty(const CImVector_CImGuiColorMod * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiColorMod_Size(const CImVector_CImGuiColorMod * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiColorMod_Size_in_bytes(const CImVector_CImGuiColorMod * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_CImGuiColorMod_Capacity(const CImVector_CImGuiColorMod * ptr) {
    return toIm(ptr)->capacity();
}

const CImGuiColorMod * igi_CImVector_CImGuiColorMod_subscriptConst(const CImVector_CImGuiColorMod * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImGuiColorMod * igi_CImVector_CImGuiColorMod_subscript(CImVector_CImGuiColorMod * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void igi_CImVector_CImGuiColorMod_Clear(CImVector_CImGuiColorMod * ptr) {
    toIm(ptr)->clear();
}

CImGuiColorMod * igi_CImVector_CImGuiColorMod_Begin(CImVector_CImGuiColorMod * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImGuiColorMod * igi_CImVector_CImGuiColorMod_BeginConst(const CImVector_CImGuiColorMod * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiColorMod * igi_CImVector_CImGuiColorMod_End(CImVector_CImGuiColorMod * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImGuiColorMod * igi_CImVector_CImGuiColorMod_EndConst(const CImVector_CImGuiColorMod * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImGuiColorMod * igi_CImVector_CImGuiColorMod_Front(CImVector_CImGuiColorMod * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImGuiColorMod * igi_CImVector_CImGuiColorMod_FrontConst(const CImVector_CImGuiColorMod * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImGuiColorMod * igi_CImVector_CImGuiColorMod_Back(CImVector_CImGuiColorMod * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImGuiColorMod * igi_CImVector_CImGuiColorMod_BackConst(const CImVector_CImGuiColorMod * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void igi_CImVector_CImGuiColorMod_Swap(CImVector_CImGuiColorMod * ptr, CImVector_CImGuiColorMod * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiColorMod_Resize(CImVector_CImGuiColorMod * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_CImGuiColorMod_ResizeValue(CImVector_CImGuiColorMod * ptr, int new_size, const CImGuiColorMod * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void igi_CImVector_CImGuiColorMod_Shrink(CImVector_CImGuiColorMod * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiColorMod_Reserve(CImVector_CImGuiColorMod * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_CImGuiColorMod_PushBack(CImVector_CImGuiColorMod * ptr, const CImGuiColorMod * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void igi_CImVector_CImGuiColorMod_PopBack(CImVector_CImGuiColorMod * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_CImGuiColorMod_PushFront(CImVector_CImGuiColorMod * ptr, const CImGuiColorMod * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImGuiColorMod * igi_CImVector_CImGuiColorMod_Erase(CImVector_CImGuiColorMod * ptr, const CImGuiColorMod * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImGuiColorMod * igi_CImVector_CImGuiColorMod_EraseRange(CImVector_CImGuiColorMod * ptr, const CImGuiColorMod * it, const CImGuiColorMod * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImGuiColorMod * igi_CImVector_CImGuiColorMod_Insert(CImVector_CImGuiColorMod * ptr, const CImGuiColorMod * it, const CImGuiColorMod * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_init() {
    return toCIm(new ImVector<ImGuiStyleMod>);
}

void igi_CImVector_CImGuiStyleMod_deinit(const CImVector_CImGuiStyleMod * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiStyleMod_Empty(const CImVector_CImGuiStyleMod * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiStyleMod_Size(const CImVector_CImGuiStyleMod * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiStyleMod_Size_in_bytes(const CImVector_CImGuiStyleMod * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_CImGuiStyleMod_Capacity(const CImVector_CImGuiStyleMod * ptr) {
    return toIm(ptr)->capacity();
}

const CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_subscriptConst(const CImVector_CImGuiStyleMod * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_subscript(CImVector_CImGuiStyleMod * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void igi_CImVector_CImGuiStyleMod_Clear(CImVector_CImGuiStyleMod * ptr) {
    toIm(ptr)->clear();
}

CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_Begin(CImVector_CImGuiStyleMod * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_BeginConst(const CImVector_CImGuiStyleMod * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_End(CImVector_CImGuiStyleMod * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_EndConst(const CImVector_CImGuiStyleMod * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_Front(CImVector_CImGuiStyleMod * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_FrontConst(const CImVector_CImGuiStyleMod * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_Back(CImVector_CImGuiStyleMod * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_BackConst(const CImVector_CImGuiStyleMod * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void igi_CImVector_CImGuiStyleMod_Swap(CImVector_CImGuiStyleMod * ptr, CImVector_CImGuiStyleMod * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiStyleMod_Resize(CImVector_CImGuiStyleMod * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_CImGuiStyleMod_ResizeValue(CImVector_CImGuiStyleMod * ptr, int new_size, const CImGuiStyleMod * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void igi_CImVector_CImGuiStyleMod_Shrink(CImVector_CImGuiStyleMod * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiStyleMod_Reserve(CImVector_CImGuiStyleMod * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_CImGuiStyleMod_PushBack(CImVector_CImGuiStyleMod * ptr, const CImGuiStyleMod * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void igi_CImVector_CImGuiStyleMod_PopBack(CImVector_CImGuiStyleMod * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_CImGuiStyleMod_PushFront(CImVector_CImGuiStyleMod * ptr, const CImGuiStyleMod * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_Erase(CImVector_CImGuiStyleMod * ptr, const CImGuiStyleMod * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_EraseRange(CImVector_CImGuiStyleMod * ptr, const CImGuiStyleMod * it, const CImGuiStyleMod * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImGuiStyleMod * igi_CImVector_CImGuiStyleMod_Insert(CImVector_CImGuiStyleMod * ptr, const CImGuiStyleMod * it, const CImGuiStyleMod * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImGuiPopupData * igi_CImVector_CImGuiPopupData_init() {
    return toCIm(new ImVector<ImGuiPopupData>);
}

void igi_CImVector_CImGuiPopupData_deinit(const CImVector_CImGuiPopupData * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiPopupData_Empty(const CImVector_CImGuiPopupData * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiPopupData_Size(const CImVector_CImGuiPopupData * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiPopupData_Size_in_bytes(const CImVector_CImGuiPopupData * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_CImGuiPopupData_Capacity(const CImVector_CImGuiPopupData * ptr) {
    return toIm(ptr)->capacity();
}

const CImGuiPopupData * igi_CImVector_CImGuiPopupData_subscriptConst(const CImVector_CImGuiPopupData * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImGuiPopupData * igi_CImVector_CImGuiPopupData_subscript(CImVector_CImGuiPopupData * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void igi_CImVector_CImGuiPopupData_Clear(CImVector_CImGuiPopupData * ptr) {
    toIm(ptr)->clear();
}

CImGuiPopupData * igi_CImVector_CImGuiPopupData_Begin(CImVector_CImGuiPopupData * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImGuiPopupData * igi_CImVector_CImGuiPopupData_BeginConst(const CImVector_CImGuiPopupData * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiPopupData * igi_CImVector_CImGuiPopupData_End(CImVector_CImGuiPopupData * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImGuiPopupData * igi_CImVector_CImGuiPopupData_EndConst(const CImVector_CImGuiPopupData * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImGuiPopupData * igi_CImVector_CImGuiPopupData_Front(CImVector_CImGuiPopupData * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImGuiPopupData * igi_CImVector_CImGuiPopupData_FrontConst(const CImVector_CImGuiPopupData * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImGuiPopupData * igi_CImVector_CImGuiPopupData_Back(CImVector_CImGuiPopupData * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImGuiPopupData * igi_CImVector_CImGuiPopupData_BackConst(const CImVector_CImGuiPopupData * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void igi_CImVector_CImGuiPopupData_Swap(CImVector_CImGuiPopupData * ptr, CImVector_CImGuiPopupData * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiPopupData_Resize(CImVector_CImGuiPopupData * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_CImGuiPopupData_ResizeValue(CImVector_CImGuiPopupData * ptr, int new_size, const CImGuiPopupData * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void igi_CImVector_CImGuiPopupData_Shrink(CImVector_CImGuiPopupData * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiPopupData_Reserve(CImVector_CImGuiPopupData * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_CImGuiPopupData_PushBack(CImVector_CImGuiPopupData * ptr, const CImGuiPopupData * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void igi_CImVector_CImGuiPopupData_PopBack(CImVector_CImGuiPopupData * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_CImGuiPopupData_PushFront(CImVector_CImGuiPopupData * ptr, const CImGuiPopupData * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImGuiPopupData * igi_CImVector_CImGuiPopupData_Erase(CImVector_CImGuiPopupData * ptr, const CImGuiPopupData * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImGuiPopupData * igi_CImVector_CImGuiPopupData_EraseRange(CImVector_CImGuiPopupData * ptr, const CImGuiPopupData * it, const CImGuiPopupData * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImGuiPopupData * igi_CImVector_CImGuiPopupData_Insert(CImVector_CImGuiPopupData * ptr, const CImGuiPopupData * it, const CImGuiPopupData * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImGuiViewportPPtr * igi_CImVector_CImGuiViewportPPtr_init() {
    return toCIm(new ImVector<ImGuiViewportP *>);
}

void igi_CImVector_CImGuiViewportPPtr_deinit(const CImVector_CImGuiViewportPPtr * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiViewportPPtr_Empty(const CImVector_CImGuiViewportPPtr * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiViewportPPtr_Size(const CImVector_CImGuiViewportPPtr * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiViewportPPtr_Size_in_bytes(const CImVector_CImGuiViewportPPtr * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_CImGuiViewportPPtr_Capacity(const CImVector_CImGuiViewportPPtr * ptr) {
    return toIm(ptr)->capacity();
}

const CImGuiViewportP * igi_CImVector_CImGuiViewportPPtr_subscript(const CImVector_CImGuiViewportPPtr * ptr, int i) {
    return toCIm((*toIm(ptr))[i]);
}

CImGuiViewportP ** igi_CImVector_CImGuiViewportPPtr_subscriptPointer(CImVector_CImGuiViewportPPtr * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void igi_CImVector_CImGuiViewportPPtr_Clear(CImVector_CImGuiViewportPPtr * ptr) {
    toIm(ptr)->clear();
}

CImGuiViewportP ** igi_CImVector_CImGuiViewportPPtr_Begin(CImVector_CImGuiViewportPPtr * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiViewportP * const * igi_CImVector_CImGuiViewportPPtr_BeginConst(const CImVector_CImGuiViewportPPtr * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiViewportP ** igi_CImVector_CImGuiViewportPPtr_End(CImVector_CImGuiViewportPPtr * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImGuiViewportP * const * igi_CImVector_CImGuiViewportPPtr_EndConst(const CImVector_CImGuiViewportPPtr * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImGuiViewportP * igi_CImVector_CImGuiViewportPPtr_Front(const CImVector_CImGuiViewportPPtr * ptr) {
    return toCIm(toIm(ptr)->front());
}

const CImGuiViewportP * igi_CImVector_CImGuiViewportPPtr_Back(const CImVector_CImGuiViewportPPtr * ptr) {
    return toCIm(toIm(ptr)->back());
}

void igi_CImVector_CImGuiViewportPPtr_Swap(CImVector_CImGuiViewportPPtr * ptr, CImVector_CImGuiViewportPPtr * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiViewportPPtr_Resize(CImVector_CImGuiViewportPPtr * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_CImGuiViewportPPtr_ResizeValue(CImVector_CImGuiViewportPPtr * ptr, int new_size, CImGuiViewportP * v) {
    toIm(ptr)->resize(new_size, toIm(v));
}

void igi_CImVector_CImGuiViewportPPtr_Shrink(CImVector_CImGuiViewportPPtr * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiViewportPPtr_Reserve(CImVector_CImGuiViewportPPtr * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_CImGuiViewportPPtr_PushBack(CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * v) {
    toIm(ptr)->push_back(toIm(v));
}

void igi_CImVector_CImGuiViewportPPtr_PopBack(CImVector_CImGuiViewportPPtr * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_CImGuiViewportPPtr_PushFront(CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * v) {
    toIm(ptr)->push_front(toIm(v));
}

CImGuiViewportP ** igi_CImVector_CImGuiViewportPPtr_Erase(CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * const * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImGuiViewportP ** igi_CImVector_CImGuiViewportPPtr_EraseRange(CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * const * it, CImGuiViewportP * const * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImGuiViewportP ** igi_CImVector_CImGuiViewportPPtr_Insert(CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * const * it, CImGuiViewportP * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), toIm(v)));
}

bool igi_CImVector_CImGuiViewportPPtr_Contains(const CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * v) {
    return toIm(ptr)->contains(toIm(v));
}

CImGuiViewportP ** igi_CImVector_CImGuiViewportPPtr_Find(CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * v) {
    return toCIm(toIm(ptr)->find(toIm(v)));
}

CImGuiViewportP * const * igi_CImVector_CImGuiViewportPPtr_FindConst(const CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * v) {
    return toCIm(toIm(ptr)->find(toIm(v)));
}

bool igi_CImVector_CImGuiViewportPPtr_FindErase(CImVector_CImGuiViewportPPtr * ptr, CImGuiViewportP * v) {
    return toIm(ptr)->find_erase(toIm(v));
}



CImVector_unsigned_char * ig_CImVector_unsigned_char_init() {
    return toCIm(new ImVector<unsigned char>);
}

void ig_CImVector_unsigned_char_deinit(const CImVector_unsigned_char * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_unsigned_char_Empty(const CImVector_unsigned_char * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_unsigned_char_Size(const CImVector_unsigned_char * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_unsigned_char_Size_in_bytes(const CImVector_unsigned_char * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_unsigned_char_Capacity(const CImVector_unsigned_char * ptr) {
    return toIm(ptr)->capacity();
}

unsigned char ig_CImVector_unsigned_char_subscript(const CImVector_unsigned_char * ptr, int i) {
    return (*toIm(ptr))[i];
}

unsigned char * ig_CImVector_unsigned_char_subscriptPointer(CImVector_unsigned_char * ptr, int i) {
    return &(*toIm(ptr))[i];
}


void ig_CImVector_unsigned_char_Clear(CImVector_unsigned_char * ptr) {
    toIm(ptr)->clear();
}

unsigned char * ig_CImVector_unsigned_char_Begin(CImVector_unsigned_char * ptr) {
    return toIm(ptr)->begin();
}

const unsigned char * ig_CImVector_unsigned_char_BeginConst(const CImVector_unsigned_char * ptr) {
    return toIm(ptr)->begin();
}

unsigned char * ig_CImVector_unsigned_char_End(CImVector_unsigned_char * ptr) {
    return toIm(ptr)->end();
}

const unsigned char * ig_CImVector_unsigned_char_EndConst(const CImVector_unsigned_char * ptr) {
    return toIm(ptr)->end();
}

unsigned char ig_CImVector_unsigned_char_Front(const CImVector_unsigned_char * ptr) {
    return toIm(ptr)->front();
}

unsigned char ig_CImVector_unsigned_char_Back(const CImVector_unsigned_char * ptr) {
    return toIm(ptr)->back();
}

void ig_CImVector_unsigned_char_Swap(CImVector_unsigned_char * ptr, CImVector_unsigned_char * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_unsigned_char_Resize(CImVector_unsigned_char * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_unsigned_char_ResizeValue(CImVector_unsigned_char * ptr, int new_size, unsigned char v) {
    toIm(ptr)->resize(new_size, v);
}

void ig_CImVector_unsigned_char_Shrink(CImVector_unsigned_char * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_unsigned_char_Reserve(CImVector_unsigned_char * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_unsigned_char_PushBack(CImVector_unsigned_char * ptr, unsigned char v) {
    toIm(ptr)->push_back(v);
}

void ig_CImVector_unsigned_char_PopBack(CImVector_unsigned_char * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_unsigned_char_PushFront(CImVector_unsigned_char * ptr, unsigned char v) {
    toIm(ptr)->push_front(v);
}

unsigned char * ig_CImVector_unsigned_char_Erase(CImVector_unsigned_char * ptr, const unsigned char * it) {
    return toIm(ptr)->erase(it);
}

unsigned char * ig_CImVector_unsigned_char_EraseRange(CImVector_unsigned_char * ptr, const unsigned char * it, const unsigned char * it_last) {
    return toIm(ptr)->erase(it, it_last);
}

unsigned char * ig_CImVector_unsigned_char_Insert(CImVector_unsigned_char * ptr, const unsigned char * it, unsigned char v) {
    return toIm(ptr)->insert(it, v);
}

bool ig_CImVector_unsigned_char_Contains(const CImVector_unsigned_char * ptr, unsigned char v) {
    return toIm(ptr)->contains(v);
}

unsigned char * ig_CImVector_unsigned_char_Find(CImVector_unsigned_char * ptr, unsigned char v) {
    return toIm(ptr)->find(v);
}

const unsigned char * ig_CImVector_unsigned_char_FindConst(const CImVector_unsigned_char * ptr, unsigned char v) {
    return toIm(ptr)->find(v);
}

bool ig_CImVector_unsigned_char_FindErase(CImVector_unsigned_char * ptr, unsigned char v) {
    return toIm(ptr)->find_erase(v);
}



CImVector_CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_init() {
    return toCIm(new ImVector<ImGuiPtrOrIndex>);
}

void igi_CImVector_CImGuiPtrOrIndex_deinit(const CImVector_CImGuiPtrOrIndex * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiPtrOrIndex_Empty(const CImVector_CImGuiPtrOrIndex * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiPtrOrIndex_Size(const CImVector_CImGuiPtrOrIndex * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiPtrOrIndex_Size_in_bytes(const CImVector_CImGuiPtrOrIndex * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_CImGuiPtrOrIndex_Capacity(const CImVector_CImGuiPtrOrIndex * ptr) {
    return toIm(ptr)->capacity();
}

const CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_subscriptConst(const CImVector_CImGuiPtrOrIndex * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_subscript(CImVector_CImGuiPtrOrIndex * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void igi_CImVector_CImGuiPtrOrIndex_Clear(CImVector_CImGuiPtrOrIndex * ptr) {
    toIm(ptr)->clear();
}

CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_Begin(CImVector_CImGuiPtrOrIndex * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_BeginConst(const CImVector_CImGuiPtrOrIndex * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_End(CImVector_CImGuiPtrOrIndex * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_EndConst(const CImVector_CImGuiPtrOrIndex * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_Front(CImVector_CImGuiPtrOrIndex * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_FrontConst(const CImVector_CImGuiPtrOrIndex * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_Back(CImVector_CImGuiPtrOrIndex * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_BackConst(const CImVector_CImGuiPtrOrIndex * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void igi_CImVector_CImGuiPtrOrIndex_Swap(CImVector_CImGuiPtrOrIndex * ptr, CImVector_CImGuiPtrOrIndex * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiPtrOrIndex_Resize(CImVector_CImGuiPtrOrIndex * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_CImGuiPtrOrIndex_ResizeValue(CImVector_CImGuiPtrOrIndex * ptr, int new_size, const CImGuiPtrOrIndex * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void igi_CImVector_CImGuiPtrOrIndex_Shrink(CImVector_CImGuiPtrOrIndex * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiPtrOrIndex_Reserve(CImVector_CImGuiPtrOrIndex * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_CImGuiPtrOrIndex_PushBack(CImVector_CImGuiPtrOrIndex * ptr, const CImGuiPtrOrIndex * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void igi_CImVector_CImGuiPtrOrIndex_PopBack(CImVector_CImGuiPtrOrIndex * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_CImGuiPtrOrIndex_PushFront(CImVector_CImGuiPtrOrIndex * ptr, const CImGuiPtrOrIndex * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_Erase(CImVector_CImGuiPtrOrIndex * ptr, const CImGuiPtrOrIndex * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_EraseRange(CImVector_CImGuiPtrOrIndex * ptr, const CImGuiPtrOrIndex * it, const CImGuiPtrOrIndex * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImGuiPtrOrIndex * igi_CImVector_CImGuiPtrOrIndex_Insert(CImVector_CImGuiPtrOrIndex * ptr, const CImGuiPtrOrIndex * it, const CImGuiPtrOrIndex * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_init() {
    return toCIm(new ImVector<ImGuiShrinkWidthItem>);
}

void igi_CImVector_CImGuiShrinkWidthItem_deinit(const CImVector_CImGuiShrinkWidthItem * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiShrinkWidthItem_Empty(const CImVector_CImGuiShrinkWidthItem * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiShrinkWidthItem_Size(const CImVector_CImGuiShrinkWidthItem * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiShrinkWidthItem_Size_in_bytes(const CImVector_CImGuiShrinkWidthItem * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_CImGuiShrinkWidthItem_Capacity(const CImVector_CImGuiShrinkWidthItem * ptr) {
    return toIm(ptr)->capacity();
}

const CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_subscriptConst(const CImVector_CImGuiShrinkWidthItem * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_subscript(CImVector_CImGuiShrinkWidthItem * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void igi_CImVector_CImGuiShrinkWidthItem_Clear(CImVector_CImGuiShrinkWidthItem * ptr) {
    toIm(ptr)->clear();
}

CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_Begin(CImVector_CImGuiShrinkWidthItem * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_BeginConst(const CImVector_CImGuiShrinkWidthItem * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_End(CImVector_CImGuiShrinkWidthItem * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_EndConst(const CImVector_CImGuiShrinkWidthItem * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_Front(CImVector_CImGuiShrinkWidthItem * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_FrontConst(const CImVector_CImGuiShrinkWidthItem * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_Back(CImVector_CImGuiShrinkWidthItem * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_BackConst(const CImVector_CImGuiShrinkWidthItem * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void igi_CImVector_CImGuiShrinkWidthItem_Swap(CImVector_CImGuiShrinkWidthItem * ptr, CImVector_CImGuiShrinkWidthItem * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiShrinkWidthItem_Resize(CImVector_CImGuiShrinkWidthItem * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_CImGuiShrinkWidthItem_ResizeValue(CImVector_CImGuiShrinkWidthItem * ptr, int new_size, const CImGuiShrinkWidthItem * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void igi_CImVector_CImGuiShrinkWidthItem_Shrink(CImVector_CImGuiShrinkWidthItem * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiShrinkWidthItem_Reserve(CImVector_CImGuiShrinkWidthItem * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_CImGuiShrinkWidthItem_PushBack(CImVector_CImGuiShrinkWidthItem * ptr, const CImGuiShrinkWidthItem * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void igi_CImVector_CImGuiShrinkWidthItem_PopBack(CImVector_CImGuiShrinkWidthItem * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_CImGuiShrinkWidthItem_PushFront(CImVector_CImGuiShrinkWidthItem * ptr, const CImGuiShrinkWidthItem * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_Erase(CImVector_CImGuiShrinkWidthItem * ptr, const CImGuiShrinkWidthItem * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_EraseRange(CImVector_CImGuiShrinkWidthItem * ptr, const CImGuiShrinkWidthItem * it, const CImGuiShrinkWidthItem * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImGuiShrinkWidthItem * igi_CImVector_CImGuiShrinkWidthItem_Insert(CImVector_CImGuiShrinkWidthItem * ptr, const CImGuiShrinkWidthItem * it, const CImGuiShrinkWidthItem * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_init() {
    return toCIm(new ImVector<ImGuiSettingsHandler>);
}

void igi_CImVector_CImGuiSettingsHandler_deinit(const CImVector_CImGuiSettingsHandler * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiSettingsHandler_Empty(const CImVector_CImGuiSettingsHandler * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiSettingsHandler_Size(const CImVector_CImGuiSettingsHandler * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiSettingsHandler_Size_in_bytes(const CImVector_CImGuiSettingsHandler * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_CImGuiSettingsHandler_Capacity(const CImVector_CImGuiSettingsHandler * ptr) {
    return toIm(ptr)->capacity();
}

const CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_subscriptConst(const CImVector_CImGuiSettingsHandler * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_subscript(CImVector_CImGuiSettingsHandler * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void igi_CImVector_CImGuiSettingsHandler_Clear(CImVector_CImGuiSettingsHandler * ptr) {
    toIm(ptr)->clear();
}

CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_Begin(CImVector_CImGuiSettingsHandler * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_BeginConst(const CImVector_CImGuiSettingsHandler * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_End(CImVector_CImGuiSettingsHandler * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_EndConst(const CImVector_CImGuiSettingsHandler * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_Front(CImVector_CImGuiSettingsHandler * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_FrontConst(const CImVector_CImGuiSettingsHandler * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_Back(CImVector_CImGuiSettingsHandler * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_BackConst(const CImVector_CImGuiSettingsHandler * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void igi_CImVector_CImGuiSettingsHandler_Swap(CImVector_CImGuiSettingsHandler * ptr, CImVector_CImGuiSettingsHandler * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiSettingsHandler_Resize(CImVector_CImGuiSettingsHandler * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_CImGuiSettingsHandler_ResizeValue(CImVector_CImGuiSettingsHandler * ptr, int new_size, const CImGuiSettingsHandler * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void igi_CImVector_CImGuiSettingsHandler_Shrink(CImVector_CImGuiSettingsHandler * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiSettingsHandler_Reserve(CImVector_CImGuiSettingsHandler * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_CImGuiSettingsHandler_PushBack(CImVector_CImGuiSettingsHandler * ptr, const CImGuiSettingsHandler * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void igi_CImVector_CImGuiSettingsHandler_PopBack(CImVector_CImGuiSettingsHandler * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_CImGuiSettingsHandler_PushFront(CImVector_CImGuiSettingsHandler * ptr, const CImGuiSettingsHandler * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_Erase(CImVector_CImGuiSettingsHandler * ptr, const CImGuiSettingsHandler * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_EraseRange(CImVector_CImGuiSettingsHandler * ptr, const CImGuiSettingsHandler * it, const CImGuiSettingsHandler * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImGuiSettingsHandler * igi_CImVector_CImGuiSettingsHandler_Insert(CImVector_CImGuiSettingsHandler * ptr, const CImGuiSettingsHandler * it, const CImGuiSettingsHandler * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImGuiItemFlags * ig_CImVector_CImGuiItemFlags_init() {
    return toCIm(new ImVector<ImGuiItemFlags>);
}

void ig_CImVector_CImGuiItemFlags_deinit(const CImVector_CImGuiItemFlags * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImGuiItemFlags_Empty(const CImVector_CImGuiItemFlags * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImGuiItemFlags_Size(const CImVector_CImGuiItemFlags * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImGuiItemFlags_Size_in_bytes(const CImVector_CImGuiItemFlags * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImGuiItemFlags_Capacity(const CImVector_CImGuiItemFlags * ptr) {
    return toIm(ptr)->capacity();
}

CImGuiItemFlags ig_CImVector_CImGuiItemFlags_subscript(const CImVector_CImGuiItemFlags * ptr, int i) {
    return (*toIm(ptr))[i];
}

CImGuiItemFlags * ig_CImVector_CImGuiItemFlags_subscriptPointer(CImVector_CImGuiItemFlags * ptr, int i) {
    return &(*toIm(ptr))[i];
}


void ig_CImVector_CImGuiItemFlags_Clear(CImVector_CImGuiItemFlags * ptr) {
    toIm(ptr)->clear();
}

CImGuiItemFlags * ig_CImVector_CImGuiItemFlags_Begin(CImVector_CImGuiItemFlags * ptr) {
    return toIm(ptr)->begin();
}

const CImGuiItemFlags * ig_CImVector_CImGuiItemFlags_BeginConst(const CImVector_CImGuiItemFlags * ptr) {
    return toIm(ptr)->begin();
}

CImGuiItemFlags * ig_CImVector_CImGuiItemFlags_End(CImVector_CImGuiItemFlags * ptr) {
    return toIm(ptr)->end();
}

const CImGuiItemFlags * ig_CImVector_CImGuiItemFlags_EndConst(const CImVector_CImGuiItemFlags * ptr) {
    return toIm(ptr)->end();
}

CImGuiItemFlags ig_CImVector_CImGuiItemFlags_Front(const CImVector_CImGuiItemFlags * ptr) {
    return toIm(ptr)->front();
}

CImGuiItemFlags ig_CImVector_CImGuiItemFlags_Back(const CImVector_CImGuiItemFlags * ptr) {
    return toIm(ptr)->back();
}

void ig_CImVector_CImGuiItemFlags_Swap(CImVector_CImGuiItemFlags * ptr, CImVector_CImGuiItemFlags * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImGuiItemFlags_Resize(CImVector_CImGuiItemFlags * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImGuiItemFlags_ResizeValue(CImVector_CImGuiItemFlags * ptr, int new_size, CImGuiItemFlags v) {
    toIm(ptr)->resize(new_size, v);
}

void ig_CImVector_CImGuiItemFlags_Shrink(CImVector_CImGuiItemFlags * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImGuiItemFlags_Reserve(CImVector_CImGuiItemFlags * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImGuiItemFlags_PushBack(CImVector_CImGuiItemFlags * ptr, CImGuiItemFlags v) {
    toIm(ptr)->push_back(v);
}

void ig_CImVector_CImGuiItemFlags_PopBack(CImVector_CImGuiItemFlags * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImGuiItemFlags_PushFront(CImVector_CImGuiItemFlags * ptr, CImGuiItemFlags v) {
    toIm(ptr)->push_front(v);
}

CImGuiItemFlags * ig_CImVector_CImGuiItemFlags_Erase(CImVector_CImGuiItemFlags * ptr, const CImGuiItemFlags * it) {
    return toIm(ptr)->erase(it);
}

CImGuiItemFlags * ig_CImVector_CImGuiItemFlags_EraseRange(CImVector_CImGuiItemFlags * ptr, const CImGuiItemFlags * it, const CImGuiItemFlags * it_last) {
    return toIm(ptr)->erase(it, it_last);
}

CImGuiItemFlags * ig_CImVector_CImGuiItemFlags_Insert(CImVector_CImGuiItemFlags * ptr, const CImGuiItemFlags * it, CImGuiItemFlags v) {
    return toIm(ptr)->insert(it, v);
}

bool ig_CImVector_CImGuiItemFlags_Contains(const CImVector_CImGuiItemFlags * ptr, CImGuiItemFlags v) {
    return toIm(ptr)->contains(v);
}

CImGuiItemFlags * ig_CImVector_CImGuiItemFlags_Find(CImVector_CImGuiItemFlags * ptr, CImGuiItemFlags v) {
    return toIm(ptr)->find(v);
}

const CImGuiItemFlags * ig_CImVector_CImGuiItemFlags_FindConst(const CImVector_CImGuiItemFlags * ptr, CImGuiItemFlags v) {
    return toIm(ptr)->find(v);
}

bool ig_CImVector_CImGuiItemFlags_FindErase(CImVector_CImGuiItemFlags * ptr, CImGuiItemFlags v) {
    return toIm(ptr)->find_erase(v);
}



CImVector_CImGuiGroupData * igi_CImVector_CImGuiGroupData_init() {
    return toCIm(new ImVector<ImGuiGroupData>);
}

void igi_CImVector_CImGuiGroupData_deinit(const CImVector_CImGuiGroupData * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiGroupData_Empty(const CImVector_CImGuiGroupData * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiGroupData_Size(const CImVector_CImGuiGroupData * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiGroupData_Size_in_bytes(const CImVector_CImGuiGroupData * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_CImGuiGroupData_Capacity(const CImVector_CImGuiGroupData * ptr) {
    return toIm(ptr)->capacity();
}

const CImGuiGroupData * igi_CImVector_CImGuiGroupData_subscriptConst(const CImVector_CImGuiGroupData * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImGuiGroupData * igi_CImVector_CImGuiGroupData_subscript(CImVector_CImGuiGroupData * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void igi_CImVector_CImGuiGroupData_Clear(CImVector_CImGuiGroupData * ptr) {
    toIm(ptr)->clear();
}

CImGuiGroupData * igi_CImVector_CImGuiGroupData_Begin(CImVector_CImGuiGroupData * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImGuiGroupData * igi_CImVector_CImGuiGroupData_BeginConst(const CImVector_CImGuiGroupData * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiGroupData * igi_CImVector_CImGuiGroupData_End(CImVector_CImGuiGroupData * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImGuiGroupData * igi_CImVector_CImGuiGroupData_EndConst(const CImVector_CImGuiGroupData * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImGuiGroupData * igi_CImVector_CImGuiGroupData_Front(CImVector_CImGuiGroupData * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImGuiGroupData * igi_CImVector_CImGuiGroupData_FrontConst(const CImVector_CImGuiGroupData * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImGuiGroupData * igi_CImVector_CImGuiGroupData_Back(CImVector_CImGuiGroupData * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImGuiGroupData * igi_CImVector_CImGuiGroupData_BackConst(const CImVector_CImGuiGroupData * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void igi_CImVector_CImGuiGroupData_Swap(CImVector_CImGuiGroupData * ptr, CImVector_CImGuiGroupData * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiGroupData_Resize(CImVector_CImGuiGroupData * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_CImGuiGroupData_ResizeValue(CImVector_CImGuiGroupData * ptr, int new_size, const CImGuiGroupData * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void igi_CImVector_CImGuiGroupData_Shrink(CImVector_CImGuiGroupData * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiGroupData_Reserve(CImVector_CImGuiGroupData * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_CImGuiGroupData_PushBack(CImVector_CImGuiGroupData * ptr, const CImGuiGroupData * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void igi_CImVector_CImGuiGroupData_PopBack(CImVector_CImGuiGroupData * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_CImGuiGroupData_PushFront(CImVector_CImGuiGroupData * ptr, const CImGuiGroupData * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImGuiGroupData * igi_CImVector_CImGuiGroupData_Erase(CImVector_CImGuiGroupData * ptr, const CImGuiGroupData * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImGuiGroupData * igi_CImVector_CImGuiGroupData_EraseRange(CImVector_CImGuiGroupData * ptr, const CImGuiGroupData * it, const CImGuiGroupData * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImGuiGroupData * igi_CImVector_CImGuiGroupData_Insert(CImVector_CImGuiGroupData * ptr, const CImGuiGroupData * it, const CImGuiGroupData * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImGuiColumns * igi_CImVector_CImGuiColumns_init() {
    return toCIm(new ImVector<ImGuiColumns>);
}

void igi_CImVector_CImGuiColumns_deinit(const CImVector_CImGuiColumns * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiColumns_Empty(const CImVector_CImGuiColumns * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiColumns_Size(const CImVector_CImGuiColumns * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiColumns_Size_in_bytes(const CImVector_CImGuiColumns * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_CImGuiColumns_Capacity(const CImVector_CImGuiColumns * ptr) {
    return toIm(ptr)->capacity();
}

const CImGuiColumns * igi_CImVector_CImGuiColumns_subscriptConst(const CImVector_CImGuiColumns * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImGuiColumns * igi_CImVector_CImGuiColumns_subscript(CImVector_CImGuiColumns * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void igi_CImVector_CImGuiColumns_Clear(CImVector_CImGuiColumns * ptr) {
    toIm(ptr)->clear();
}

CImGuiColumns * igi_CImVector_CImGuiColumns_Begin(CImVector_CImGuiColumns * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImGuiColumns * igi_CImVector_CImGuiColumns_BeginConst(const CImVector_CImGuiColumns * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiColumns * igi_CImVector_CImGuiColumns_End(CImVector_CImGuiColumns * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImGuiColumns * igi_CImVector_CImGuiColumns_EndConst(const CImVector_CImGuiColumns * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImGuiColumns * igi_CImVector_CImGuiColumns_Front(CImVector_CImGuiColumns * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImGuiColumns * igi_CImVector_CImGuiColumns_FrontConst(const CImVector_CImGuiColumns * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImGuiColumns * igi_CImVector_CImGuiColumns_Back(CImVector_CImGuiColumns * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImGuiColumns * igi_CImVector_CImGuiColumns_BackConst(const CImVector_CImGuiColumns * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void igi_CImVector_CImGuiColumns_Swap(CImVector_CImGuiColumns * ptr, CImVector_CImGuiColumns * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiColumns_Resize(CImVector_CImGuiColumns * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_CImGuiColumns_ResizeValue(CImVector_CImGuiColumns * ptr, int new_size, const CImGuiColumns * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void igi_CImVector_CImGuiColumns_Shrink(CImVector_CImGuiColumns * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiColumns_Reserve(CImVector_CImGuiColumns * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_CImGuiColumns_PushBack(CImVector_CImGuiColumns * ptr, const CImGuiColumns * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void igi_CImVector_CImGuiColumns_PopBack(CImVector_CImGuiColumns * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_CImGuiColumns_PushFront(CImVector_CImGuiColumns * ptr, const CImGuiColumns * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImGuiColumns * igi_CImVector_CImGuiColumns_Erase(CImVector_CImGuiColumns * ptr, const CImGuiColumns * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImGuiColumns * igi_CImVector_CImGuiColumns_EraseRange(CImVector_CImGuiColumns * ptr, const CImGuiColumns * it, const CImGuiColumns * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImGuiColumns * igi_CImVector_CImGuiColumns_Insert(CImVector_CImGuiColumns * ptr, const CImGuiColumns * it, const CImGuiColumns * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImGuiTabItem * igi_CImVector_CImGuiTabItem_init() {
    return toCIm(new ImVector<ImGuiTabItem>);
}

void igi_CImVector_CImGuiTabItem_deinit(const CImVector_CImGuiTabItem * ptr) {
    delete toIm(ptr);
}

bool igi_CImVector_CImGuiTabItem_Empty(const CImVector_CImGuiTabItem * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImVector_CImGuiTabItem_Size(const CImVector_CImGuiTabItem * ptr) {
    return toIm(ptr)->size();
}

int igi_CImVector_CImGuiTabItem_Size_in_bytes(const CImVector_CImGuiTabItem * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int igi_CImVector_CImGuiTabItem_Capacity(const CImVector_CImGuiTabItem * ptr) {
    return toIm(ptr)->capacity();
}

const CImGuiTabItem * igi_CImVector_CImGuiTabItem_subscriptConst(const CImVector_CImGuiTabItem * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImGuiTabItem * igi_CImVector_CImGuiTabItem_subscript(CImVector_CImGuiTabItem * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void igi_CImVector_CImGuiTabItem_Clear(CImVector_CImGuiTabItem * ptr) {
    toIm(ptr)->clear();
}

CImGuiTabItem * igi_CImVector_CImGuiTabItem_Begin(CImVector_CImGuiTabItem * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImGuiTabItem * igi_CImVector_CImGuiTabItem_BeginConst(const CImVector_CImGuiTabItem * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiTabItem * igi_CImVector_CImGuiTabItem_End(CImVector_CImGuiTabItem * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImGuiTabItem * igi_CImVector_CImGuiTabItem_EndConst(const CImVector_CImGuiTabItem * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImGuiTabItem * igi_CImVector_CImGuiTabItem_Front(CImVector_CImGuiTabItem * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImGuiTabItem * igi_CImVector_CImGuiTabItem_FrontConst(const CImVector_CImGuiTabItem * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImGuiTabItem * igi_CImVector_CImGuiTabItem_Back(CImVector_CImGuiTabItem * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImGuiTabItem * igi_CImVector_CImGuiTabItem_BackConst(const CImVector_CImGuiTabItem * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void igi_CImVector_CImGuiTabItem_Swap(CImVector_CImGuiTabItem * ptr, CImVector_CImGuiTabItem * other) {
    toIm(ptr)->swap(*toIm(other));
}


void igi_CImVector_CImGuiTabItem_Resize(CImVector_CImGuiTabItem * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void igi_CImVector_CImGuiTabItem_ResizeValue(CImVector_CImGuiTabItem * ptr, int new_size, const CImGuiTabItem * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void igi_CImVector_CImGuiTabItem_Shrink(CImVector_CImGuiTabItem * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void igi_CImVector_CImGuiTabItem_Reserve(CImVector_CImGuiTabItem * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void igi_CImVector_CImGuiTabItem_PushBack(CImVector_CImGuiTabItem * ptr, const CImGuiTabItem * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void igi_CImVector_CImGuiTabItem_PopBack(CImVector_CImGuiTabItem * ptr) {
    toIm(ptr)->pop_back();
}

void igi_CImVector_CImGuiTabItem_PushFront(CImVector_CImGuiTabItem * ptr, const CImGuiTabItem * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImGuiTabItem * igi_CImVector_CImGuiTabItem_Erase(CImVector_CImGuiTabItem * ptr, const CImGuiTabItem * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImGuiTabItem * igi_CImVector_CImGuiTabItem_EraseRange(CImVector_CImGuiTabItem * ptr, const CImGuiTabItem * it, const CImGuiTabItem * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImGuiTabItem * igi_CImVector_CImGuiTabItem_Insert(CImVector_CImGuiTabItem * ptr, const CImGuiTabItem * it, const CImGuiTabItem * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}
