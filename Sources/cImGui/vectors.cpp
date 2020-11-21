//
//  vectors.cpp
//  
//
//  Created by Josef Zoller on 11.03.20.
//

#include "vectors.h"

#include <cppimgui.hpp>

#include "asserts.h"

#include "conversions.h"


CImVec2 * ig_CImVec2_init() {
    return new CImVec2;
}

CImVec2 * ig_CImVec2_initFloat(float _x, float _y) {
    CImVec2 * cIm = new CImVec2;
    cIm->x = _x;
    cIm->y = _y;
    return cIm;
}

void ig_CImVec2_deinit(const CImVec2 * ptr) {
    delete ptr;
}



CImVec4 * ig_CImVec4_init() {
    return new CImVec4;
}

CImVec4 * ig_CImVec4_initFloat(float _x, float _y, float _z, float _w) {
    CImVec4 * cIm = new CImVec4;
    cIm->x = _x;
    cIm->y = _y;
    cIm->z = _z;
    cIm->w = _w;
    return cIm;
}

void ig_CImVec4_deinit(const CImVec4 * ptr) {
    delete ptr;
}



CImVector_float * ig_CImVector_float_init() {
    return toCIm(new ImVector<float>);
}

void ig_CImVector_float_deinit(const CImVector_float * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_float_Empty(const CImVector_float * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_float_Size(const CImVector_float * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_float_Size_in_bytes(const CImVector_float * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_float_Capacity(const CImVector_float * ptr) {
    return toIm(ptr)->capacity();
}

float ig_CImVector_float_subscript(const CImVector_float * ptr, int i) {
    return (*toIm(ptr))[i];
}

float * ig_CImVector_float_subscriptPointer(CImVector_float * ptr, int i) {
    return &(*toIm(ptr))[i];
}


void ig_CImVector_float_Clear(CImVector_float * ptr) {
    toIm(ptr)->clear();
}

float * ig_CImVector_float_Begin(CImVector_float * ptr) {
    return toIm(ptr)->begin();
}

const float * ig_CImVector_float_BeginConst(const CImVector_float * ptr) {
    return toIm(ptr)->begin();
}

float * ig_CImVector_float_End(CImVector_float * ptr) {
    return toIm(ptr)->end();
}

const float * ig_CImVector_float_EndConst(const CImVector_float * ptr) {
    return toIm(ptr)->end();
}

float ig_CImVector_float_Front(const CImVector_float * ptr) {
    return toIm(ptr)->front();
}

float ig_CImVector_float_Back(const CImVector_float * ptr) {
    return toIm(ptr)->back();
}

void ig_CImVector_float_Swap(CImVector_float * ptr, CImVector_float * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_float_Resize(CImVector_float * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_float_ResizeValue(CImVector_float * ptr, int new_size, float v) {
    toIm(ptr)->resize(new_size, v);
}

void ig_CImVector_float_Shrink(CImVector_float * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_float_Reserve(CImVector_float * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_float_PushBack(CImVector_float * ptr, float v) {
    toIm(ptr)->push_back(v);
}

void ig_CImVector_float_PopBack(CImVector_float * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_float_PushFront(CImVector_float * ptr, float v) {
    toIm(ptr)->push_front(v);
}

float * ig_CImVector_float_Erase(CImVector_float * ptr, const float * it) {
    return toIm(ptr)->erase(it);
}

float * ig_CImVector_float_EraseRange(CImVector_float * ptr, const float * it, const float * it_last) {
    return toIm(ptr)->erase(it, it_last);
}

float * ig_CImVector_float_Insert(CImVector_float * ptr, const float * it, float v) {
    return toIm(ptr)->insert(it, v);
}

bool ig_CImVector_float_Contains(const CImVector_float * ptr, float v) {
    return toIm(ptr)->contains(v);
}

float * ig_CImVector_float_Find(CImVector_float * ptr, float v) {
    return toIm(ptr)->find(v);
}

const float * ig_CImVector_float_FindConst(const CImVector_float * ptr, float v) {
    return toIm(ptr)->find(v);
}

bool ig_CImVector_float_FindErase(CImVector_float * ptr, float v) {
    return toIm(ptr)->find_erase(v);
}



CImVector_CImWchar * ig_CImVector_CImWchar_init() {
    return toCIm(new ImVector<ImWchar>);
}

void ig_CImVector_CImWchar_deinit(const CImVector_CImWchar * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImWchar_Empty(const CImVector_CImWchar * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImWchar_Size(const CImVector_CImWchar * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImWchar_Size_in_bytes(const CImVector_CImWchar * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImWchar_Capacity(const CImVector_CImWchar * ptr) {
    return toIm(ptr)->capacity();
}

CImWchar ig_CImVector_CImWchar_subscript(const CImVector_CImWchar * ptr, int i) {
    return (*toIm(ptr))[i];
}

CImWchar * ig_CImVector_CImWchar_subscriptPointer(CImVector_CImWchar * ptr, int i) {
    return &(*toIm(ptr))[i];
}


void ig_CImVector_CImWchar_Clear(CImVector_CImWchar * ptr) {
    toIm(ptr)->clear();
}

CImWchar * ig_CImVector_CImWchar_Begin(CImVector_CImWchar * ptr) {
    return toIm(ptr)->begin();
}

const CImWchar * ig_CImVector_CImWchar_BeginConst(const CImVector_CImWchar * ptr) {
    return toIm(ptr)->begin();
}

CImWchar * ig_CImVector_CImWchar_End(CImVector_CImWchar * ptr) {
    return toIm(ptr)->end();
}

const CImWchar * ig_CImVector_CImWchar_EndConst(const CImVector_CImWchar * ptr) {
    return toIm(ptr)->end();
}

CImWchar ig_CImVector_CImWchar_Front(const CImVector_CImWchar * ptr) {
    return toIm(ptr)->front();
}

CImWchar ig_CImVector_CImWchar_Back(const CImVector_CImWchar * ptr) {
    return toIm(ptr)->back();
}

void ig_CImVector_CImWchar_Swap(CImVector_CImWchar * ptr, CImVector_CImWchar * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImWchar_Resize(CImVector_CImWchar * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImWchar_ResizeValue(CImVector_CImWchar * ptr, int new_size, CImWchar v) {
    toIm(ptr)->resize(new_size, v);
}

void ig_CImVector_CImWchar_Shrink(CImVector_CImWchar * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImWchar_Reserve(CImVector_CImWchar * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImWchar_PushBack(CImVector_CImWchar * ptr, CImWchar v) {
    toIm(ptr)->push_back(v);
}

void ig_CImVector_CImWchar_PopBack(CImVector_CImWchar * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImWchar_PushFront(CImVector_CImWchar * ptr, CImWchar v) {
    toIm(ptr)->push_front(v);
}

CImWchar * ig_CImVector_CImWchar_Erase(CImVector_CImWchar * ptr, const CImWchar * it) {
    return toIm(ptr)->erase(it);
}

CImWchar * ig_CImVector_CImWchar_EraseRange(CImVector_CImWchar * ptr, const CImWchar * it, const CImWchar * it_last) {
    return toIm(ptr)->erase(it, it_last);
}

CImWchar * ig_CImVector_CImWchar_Insert(CImVector_CImWchar * ptr, const CImWchar * it, CImWchar v) {
    return toIm(ptr)->insert(it, v);
}

bool ig_CImVector_CImWchar_Contains(const CImVector_CImWchar * ptr, CImWchar v) {
    return toIm(ptr)->contains(v);
}

CImWchar * ig_CImVector_CImWchar_Find(CImVector_CImWchar * ptr, CImWchar v) {
    return toIm(ptr)->find(v);
}

const CImWchar * ig_CImVector_CImWchar_FindConst(const CImVector_CImWchar * ptr, CImWchar v) {
    return toIm(ptr)->find(v);
}

bool ig_CImVector_CImWchar_FindErase(CImVector_CImWchar * ptr, CImWchar v) {
    return toIm(ptr)->find_erase(v);
}



CImVector_CImDrawVert * ig_CImVector_CImDrawVert_init() {
    return toCIm(new ImVector<ImDrawVert>);
}

void ig_CImVector_CImDrawVert_deinit(const CImVector_CImDrawVert * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImDrawVert_Empty(const CImVector_CImDrawVert * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImDrawVert_Size(const CImVector_CImDrawVert * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImDrawVert_Size_in_bytes(const CImVector_CImDrawVert * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImDrawVert_Capacity(const CImVector_CImDrawVert * ptr) {
    return toIm(ptr)->capacity();
}

const CImDrawVert * ig_CImVector_CImDrawVert_subscriptConst(const CImVector_CImDrawVert * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImDrawVert * ig_CImVector_CImDrawVert_subscript(CImVector_CImDrawVert * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void ig_CImVector_CImDrawVert_Clear(CImVector_CImDrawVert * ptr) {
    toIm(ptr)->clear();
}

CImDrawVert * ig_CImVector_CImDrawVert_Begin(CImVector_CImDrawVert * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImDrawVert * ig_CImVector_CImDrawVert_BeginConst(const CImVector_CImDrawVert * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImDrawVert * ig_CImVector_CImDrawVert_End(CImVector_CImDrawVert * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImDrawVert * ig_CImVector_CImDrawVert_EndConst(const CImVector_CImDrawVert * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImDrawVert * ig_CImVector_CImDrawVert_Front(CImVector_CImDrawVert * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImDrawVert * ig_CImVector_CImDrawVert_FrontConst(const CImVector_CImDrawVert * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImDrawVert * ig_CImVector_CImDrawVert_Back(CImVector_CImDrawVert * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImDrawVert * ig_CImVector_CImDrawVert_BackConst(const CImVector_CImDrawVert * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void ig_CImVector_CImDrawVert_Swap(CImVector_CImDrawVert * ptr, CImVector_CImDrawVert * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImDrawVert_Resize(CImVector_CImDrawVert * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImDrawVert_ResizeValue(CImVector_CImDrawVert * ptr, int new_size, const CImDrawVert * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void ig_CImVector_CImDrawVert_Shrink(CImVector_CImDrawVert * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImDrawVert_Reserve(CImVector_CImDrawVert * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImDrawVert_PushBack(CImVector_CImDrawVert * ptr, const CImDrawVert * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void ig_CImVector_CImDrawVert_PopBack(CImVector_CImDrawVert * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImDrawVert_PushFront(CImVector_CImDrawVert * ptr, const CImDrawVert * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImDrawVert * ig_CImVector_CImDrawVert_Erase(CImVector_CImDrawVert * ptr, const CImDrawVert * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImDrawVert * ig_CImVector_CImDrawVert_EraseRange(CImVector_CImDrawVert * ptr, const CImDrawVert * it, const CImDrawVert * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImDrawVert * ig_CImVector_CImDrawVert_Insert(CImVector_CImDrawVert * ptr, const CImDrawVert * it, const CImDrawVert * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImFontGlyph * ig_CImVector_CImFontGlyph_init() {
    return toCIm(new ImVector<ImFontGlyph>);
}

void ig_CImVector_CImFontGlyph_deinit(const CImVector_CImFontGlyph * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImFontGlyph_Empty(const CImVector_CImFontGlyph * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImFontGlyph_Size(const CImVector_CImFontGlyph * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImFontGlyph_Size_in_bytes(const CImVector_CImFontGlyph * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImFontGlyph_Capacity(const CImVector_CImFontGlyph * ptr) {
    return toIm(ptr)->capacity();
}

const CImFontGlyph * ig_CImVector_CImFontGlyph_subscriptConst(const CImVector_CImFontGlyph * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImFontGlyph * ig_CImVector_CImFontGlyph_subscript(CImVector_CImFontGlyph * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void ig_CImVector_CImFontGlyph_Clear(CImVector_CImFontGlyph * ptr) {
    toIm(ptr)->clear();
}

CImFontGlyph * ig_CImVector_CImFontGlyph_Begin(CImVector_CImFontGlyph * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImFontGlyph * ig_CImVector_CImFontGlyph_BeginConst(const CImVector_CImFontGlyph * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImFontGlyph * ig_CImVector_CImFontGlyph_End(CImVector_CImFontGlyph * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImFontGlyph * ig_CImVector_CImFontGlyph_EndConst(const CImVector_CImFontGlyph * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImFontGlyph * ig_CImVector_CImFontGlyph_Front(CImVector_CImFontGlyph * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImFontGlyph * ig_CImVector_CImFontGlyph_FrontConst(const CImVector_CImFontGlyph * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImFontGlyph * ig_CImVector_CImFontGlyph_Back(CImVector_CImFontGlyph * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImFontGlyph * ig_CImVector_CImFontGlyph_BackConst(const CImVector_CImFontGlyph * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void ig_CImVector_CImFontGlyph_Swap(CImVector_CImFontGlyph * ptr, CImVector_CImFontGlyph * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImFontGlyph_Resize(CImVector_CImFontGlyph * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImFontGlyph_ResizeValue(CImVector_CImFontGlyph * ptr, int new_size, const CImFontGlyph * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void ig_CImVector_CImFontGlyph_Shrink(CImVector_CImFontGlyph * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImFontGlyph_Reserve(CImVector_CImFontGlyph * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImFontGlyph_PushBack(CImVector_CImFontGlyph * ptr, const CImFontGlyph * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void ig_CImVector_CImFontGlyph_PopBack(CImVector_CImFontGlyph * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImFontGlyph_PushFront(CImVector_CImFontGlyph * ptr, const CImFontGlyph * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImFontGlyph * ig_CImVector_CImFontGlyph_Erase(CImVector_CImFontGlyph * ptr, const CImFontGlyph * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImFontGlyph * ig_CImVector_CImFontGlyph_EraseRange(CImVector_CImFontGlyph * ptr, const CImFontGlyph * it, const CImFontGlyph * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImFontGlyph * ig_CImVector_CImFontGlyph_Insert(CImVector_CImFontGlyph * ptr, const CImFontGlyph * it, const CImFontGlyph * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImGuiTextRange * ig_CImVector_CImGuiTextRange_init() {
    return toCIm(new ImVector<ImGuiTextRange>);
}

void ig_CImVector_CImGuiTextRange_deinit(const CImVector_CImGuiTextRange * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImGuiTextRange_Empty(const CImVector_CImGuiTextRange * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImGuiTextRange_Size(const CImVector_CImGuiTextRange * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImGuiTextRange_Capacity(const CImVector_CImGuiTextRange * ptr) {
    return toIm(ptr)->capacity();
}


void ig_CImVector_CImGuiTextRange_Clear(CImVector_CImGuiTextRange * ptr) {
    toIm(ptr)->clear();
}

CImGuiTextRange * ig_CImVector_CImGuiTextRange_Begin(CImVector_CImGuiTextRange * ptr) {
    return toIm(ptr)->begin();
}

const CImGuiTextRange * ig_CImVector_CImGuiTextRange_BeginConst(const CImVector_CImGuiTextRange * ptr) {
    return toIm(ptr)->begin();
}

void ig_CImVector_CImGuiTextRange_Swap(CImVector_CImGuiTextRange * ptr, CImVector_CImGuiTextRange * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImGuiTextRange_Shrink(CImVector_CImGuiTextRange * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}


void ig_CImVector_CImGuiTextRange_PopBack(CImVector_CImGuiTextRange * ptr) {
    toIm(ptr)->pop_back();
}



CImVector_CImGuiStoragePair * ig_CImVector_CImGuiStoragePair_init() {
    return toCIm(new ImVector<ImGuiStoragePair>);
}

void ig_CImVector_CImGuiStoragePair_deinit(const CImVector_CImGuiStoragePair * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImGuiStoragePair_Empty(const CImVector_CImGuiStoragePair * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImGuiStoragePair_Size(const CImVector_CImGuiStoragePair * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImGuiStoragePair_Capacity(const CImVector_CImGuiStoragePair * ptr) {
    return toIm(ptr)->capacity();
}


void ig_CImVector_CImGuiStoragePair_Clear(CImVector_CImGuiStoragePair * ptr) {
    toIm(ptr)->clear();
}

CImGuiStoragePair * ig_CImVector_CImGuiStoragePair_Begin(CImVector_CImGuiStoragePair * ptr) {
    return toIm(ptr)->begin();
}

const CImGuiStoragePair * ig_CImVector_CImGuiStoragePair_BeginConst(const CImVector_CImGuiStoragePair * ptr) {
    return toIm(ptr)->begin();
}

void ig_CImVector_CImGuiStoragePair_Swap(CImVector_CImGuiStoragePair * ptr, CImVector_CImGuiStoragePair * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImGuiStoragePair_Shrink(CImVector_CImGuiStoragePair * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImGuiStoragePair_PopBack(CImVector_CImGuiStoragePair * ptr) {
    toIm(ptr)->pop_back();
}



CImVector_CImDrawChannel * ig_CImVector_CImDrawChannel_init() {
    return toCIm(new ImVector<ImDrawChannel>);
}

void ig_CImVector_CImDrawChannel_deinit(const CImVector_CImDrawChannel * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImDrawChannel_Empty(const CImVector_CImDrawChannel * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImDrawChannel_Size(const CImVector_CImDrawChannel * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImDrawChannel_Size_in_bytes(const CImVector_CImDrawChannel * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImDrawChannel_Capacity(const CImVector_CImDrawChannel * ptr) {
    return toIm(ptr)->capacity();
}

const CImDrawChannel * ig_CImVector_CImDrawChannel_subscriptConst(const CImVector_CImDrawChannel * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImDrawChannel * ig_CImVector_CImDrawChannel_subscript(CImVector_CImDrawChannel * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void ig_CImVector_CImDrawChannel_Clear(CImVector_CImDrawChannel * ptr) {
    toIm(ptr)->clear();
}

CImDrawChannel * ig_CImVector_CImDrawChannel_Begin(CImVector_CImDrawChannel * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImDrawChannel * ig_CImVector_CImDrawChannel_BeginConst(const CImVector_CImDrawChannel * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImDrawChannel * ig_CImVector_CImDrawChannel_End(CImVector_CImDrawChannel * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImDrawChannel * ig_CImVector_CImDrawChannel_EndConst(const CImVector_CImDrawChannel * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImDrawChannel * ig_CImVector_CImDrawChannel_Front(CImVector_CImDrawChannel * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImDrawChannel * ig_CImVector_CImDrawChannel_FrontConst(const CImVector_CImDrawChannel * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImDrawChannel * ig_CImVector_CImDrawChannel_Back(CImVector_CImDrawChannel * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImDrawChannel * ig_CImVector_CImDrawChannel_BackConst(const CImVector_CImDrawChannel * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void ig_CImVector_CImDrawChannel_Swap(CImVector_CImDrawChannel * ptr, CImVector_CImDrawChannel * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImDrawChannel_Resize(CImVector_CImDrawChannel * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImDrawChannel_ResizeValue(CImVector_CImDrawChannel * ptr, int new_size, const CImDrawChannel * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void ig_CImVector_CImDrawChannel_Shrink(CImVector_CImDrawChannel * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImDrawChannel_Reserve(CImVector_CImDrawChannel * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImDrawChannel_PushBack(CImVector_CImDrawChannel * ptr, const CImDrawChannel * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void ig_CImVector_CImDrawChannel_PopBack(CImVector_CImDrawChannel * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImDrawChannel_PushFront(CImVector_CImDrawChannel * ptr, const CImDrawChannel * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImDrawChannel * ig_CImVector_CImDrawChannel_Erase(CImVector_CImDrawChannel * ptr, const CImDrawChannel * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImDrawChannel * ig_CImVector_CImDrawChannel_EraseRange(CImVector_CImDrawChannel * ptr, const CImDrawChannel * it, const CImDrawChannel * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImDrawChannel * ig_CImVector_CImDrawChannel_Insert(CImVector_CImDrawChannel * ptr, const CImDrawChannel * it, const CImDrawChannel * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_char * ig_CImVector_char_init() {
    return toCIm(new ImVector<char>);
}

void ig_CImVector_char_deinit(const CImVector_char * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_char_Empty(const CImVector_char * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_char_Size(const CImVector_char * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_char_Size_in_bytes(const CImVector_char * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_char_Capacity(const CImVector_char * ptr) {
    return toIm(ptr)->capacity();
}

char ig_CImVector_char_subscript(const CImVector_char * ptr, int i) {
    return (*toIm(ptr))[i];
}

char * ig_CImVector_char_subscriptPointer(CImVector_char * ptr, int i) {
    return &(*toIm(ptr))[i];
}


void ig_CImVector_char_Clear(CImVector_char * ptr) {
    toIm(ptr)->clear();
}

char * ig_CImVector_char_Begin(CImVector_char * ptr) {
    return toIm(ptr)->begin();
}

const char * ig_CImVector_char_BeginConst(const CImVector_char * ptr) {
    return toIm(ptr)->begin();
}

char * ig_CImVector_char_End(CImVector_char * ptr) {
    return toIm(ptr)->end();
}

const char * ig_CImVector_char_EndConst(const CImVector_char * ptr) {
    return toIm(ptr)->end();
}

char ig_CImVector_char_Front(const CImVector_char * ptr) {
    return toIm(ptr)->front();
}

char ig_CImVector_char_Back(const CImVector_char * ptr) {
    return toIm(ptr)->back();
}

void ig_CImVector_char_Swap(CImVector_char * ptr, CImVector_char * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_char_Resize(CImVector_char * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_char_ResizeValue(CImVector_char * ptr, int new_size, char v) {
    toIm(ptr)->resize(new_size, v);
}

void ig_CImVector_char_Shrink(CImVector_char * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_char_Reserve(CImVector_char * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_char_PushBack(CImVector_char * ptr, char v) {
    toIm(ptr)->push_back(v);
}

void ig_CImVector_char_PopBack(CImVector_char * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_char_PushFront(CImVector_char * ptr, char v) {
    toIm(ptr)->push_front(v);
}

char * ig_CImVector_char_Erase(CImVector_char * ptr, const char * it) {
    return toIm(ptr)->erase(it);
}

char * ig_CImVector_char_EraseRange(CImVector_char * ptr, const char * it, const char * it_last) {
    return toIm(ptr)->erase(it, it_last);
}

char * ig_CImVector_char_Insert(CImVector_char * ptr, const char * it, char v) {
    return toIm(ptr)->insert(it, v);
}

bool ig_CImVector_char_Contains(const CImVector_char * ptr, char v) {
    return toIm(ptr)->contains(v);
}

char * ig_CImVector_char_Find(CImVector_char * ptr, char v) {
    return toIm(ptr)->find(v);
}

const char * ig_CImVector_char_FindConst(const CImVector_char * ptr, char v) {
    return toIm(ptr)->find(v);
}

bool ig_CImVector_char_FindErase(CImVector_char * ptr, char v) {
    return toIm(ptr)->find_erase(v);
}



CImVector_CImU32 * ig_CImVector_CImU32_init() {
    return toCIm(new ImVector<ImU32>);
}

void ig_CImVector_CImU32_deinit(const CImVector_CImU32 * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImU32_Empty(const CImVector_CImU32 * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImU32_Size(const CImVector_CImU32 * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImU32_Size_in_bytes(const CImVector_CImU32 * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImU32_Capacity(const CImVector_CImU32 * ptr) {
    return toIm(ptr)->capacity();
}

CImU32 ig_CImVector_CImU32_subscript(const CImVector_CImU32 * ptr, int i) {
    return (*toIm(ptr))[i];
}

CImU32 * ig_CImVector_CImU32_subscriptPointer(CImVector_CImU32 * ptr, int i) {
    return &(*toIm(ptr))[i];
}


void ig_CImVector_CImU32_Clear(CImVector_CImU32 * ptr) {
    toIm(ptr)->clear();
}

CImU32 * ig_CImVector_CImU32_Begin(CImVector_CImU32 * ptr) {
    return toIm(ptr)->begin();
}

const CImU32 * ig_CImVector_CImU32_BeginConst(const CImVector_CImU32 * ptr) {
    return toIm(ptr)->begin();
}

CImU32 * ig_CImVector_CImU32_End(CImVector_CImU32 * ptr) {
    return toIm(ptr)->end();
}

const CImU32 * ig_CImVector_CImU32_EndConst(const CImVector_CImU32 * ptr) {
    return toIm(ptr)->end();
}

CImU32 ig_CImVector_CImU32_Front(const CImVector_CImU32 * ptr) {
    return toIm(ptr)->front();
}

CImU32 ig_CImVector_CImU32_Back(const CImVector_CImU32 * ptr) {
    return toIm(ptr)->back();
}

void ig_CImVector_CImU32_Swap(CImVector_CImU32 * ptr, CImVector_CImU32 * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImU32_Resize(CImVector_CImU32 * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImU32_ResizeValue(CImVector_CImU32 * ptr, int new_size, CImU32 v) {
    toIm(ptr)->resize(new_size, v);
}

void ig_CImVector_CImU32_Shrink(CImVector_CImU32 * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImU32_Reserve(CImVector_CImU32 * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImU32_PushBack(CImVector_CImU32 * ptr, CImU32 v) {
    toIm(ptr)->push_back(v);
}

void ig_CImVector_CImU32_PopBack(CImVector_CImU32 * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImU32_PushFront(CImVector_CImU32 * ptr, CImU32 v) {
    toIm(ptr)->push_front(v);
}

CImU32 * ig_CImVector_CImU32_Erase(CImVector_CImU32 * ptr, const CImU32 * it) {
    return toIm(ptr)->erase(it);
}

CImU32 * ig_CImVector_CImU32_EraseRange(CImVector_CImU32 * ptr, const CImU32 * it, const CImU32 * it_last) {
    return toIm(ptr)->erase(it, it_last);
}

CImU32 * ig_CImVector_CImU32_Insert(CImVector_CImU32 * ptr, const CImU32 * it, CImU32 v) {
    return toIm(ptr)->insert(it, v);
}

bool ig_CImVector_CImU32_Contains(const CImVector_CImU32 * ptr, CImU32 v) {
    return toIm(ptr)->contains(v);
}

CImU32 * ig_CImVector_CImU32_Find(CImVector_CImU32 * ptr, CImU32 v) {
    return toIm(ptr)->find(v);
}

const CImU32 * ig_CImVector_CImU32_FindConst(const CImVector_CImU32 * ptr, CImU32 v) {
    return toIm(ptr)->find(v);
}

bool ig_CImVector_CImU32_FindErase(CImVector_CImU32 * ptr, CImU32 v) {
    return toIm(ptr)->find_erase(v);
}



CImVector_CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_init() {
    return toCIm(new ImVector<ImFontAtlasCustomRect>);
}

void ig_CImVector_CImFontAtlasCustomRect_deinit(const CImVector_CImFontAtlasCustomRect * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImFontAtlasCustomRect_Empty(const CImVector_CImFontAtlasCustomRect * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImFontAtlasCustomRect_Size(const CImVector_CImFontAtlasCustomRect * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImFontAtlasCustomRect_Size_in_bytes(const CImVector_CImFontAtlasCustomRect * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImFontAtlasCustomRect_Capacity(const CImVector_CImFontAtlasCustomRect * ptr) {
    return toIm(ptr)->capacity();
}

const CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_subscriptConst(const CImVector_CImFontAtlasCustomRect * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_subscript(CImVector_CImFontAtlasCustomRect * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void ig_CImVector_CImFontAtlasCustomRect_Clear(CImVector_CImFontAtlasCustomRect * ptr) {
    toIm(ptr)->clear();
}

CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_Begin(CImVector_CImFontAtlasCustomRect * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_BeginConst(const CImVector_CImFontAtlasCustomRect * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_End(CImVector_CImFontAtlasCustomRect * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_EndConst(const CImVector_CImFontAtlasCustomRect * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_Front(CImVector_CImFontAtlasCustomRect * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_FrontConst(const CImVector_CImFontAtlasCustomRect * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_Back(CImVector_CImFontAtlasCustomRect * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_BackConst(const CImVector_CImFontAtlasCustomRect * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void ig_CImVector_CImFontAtlasCustomRect_Swap(CImVector_CImFontAtlasCustomRect * ptr, CImVector_CImFontAtlasCustomRect * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImFontAtlasCustomRect_Resize(CImVector_CImFontAtlasCustomRect * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImFontAtlasCustomRect_ResizeValue(CImVector_CImFontAtlasCustomRect * ptr, int new_size, const CImFontAtlasCustomRect * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void ig_CImVector_CImFontAtlasCustomRect_Shrink(CImVector_CImFontAtlasCustomRect * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImFontAtlasCustomRect_Reserve(CImVector_CImFontAtlasCustomRect * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImFontAtlasCustomRect_PushBack(CImVector_CImFontAtlasCustomRect * ptr, const CImFontAtlasCustomRect * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void ig_CImVector_CImFontAtlasCustomRect_PopBack(CImVector_CImFontAtlasCustomRect * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImFontAtlasCustomRect_PushFront(CImVector_CImFontAtlasCustomRect * ptr, const CImFontAtlasCustomRect * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_Erase(CImVector_CImFontAtlasCustomRect * ptr, const CImFontAtlasCustomRect * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_EraseRange(CImVector_CImFontAtlasCustomRect * ptr, const CImFontAtlasCustomRect * it, const CImFontAtlasCustomRect * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImFontAtlasCustomRect * ig_CImVector_CImFontAtlasCustomRect_Insert(CImVector_CImFontAtlasCustomRect * ptr, const CImFontAtlasCustomRect * it, const CImFontAtlasCustomRect * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImTextureID * ig_CImVector_CImTextureID_init() {
    return toCIm(new ImVector<ImTextureID>);
}

void ig_CImVector_CImTextureID_deinit(const CImVector_CImTextureID * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImTextureID_Empty(const CImVector_CImTextureID * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImTextureID_Size(const CImVector_CImTextureID * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImTextureID_Size_in_bytes(const CImVector_CImTextureID * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImTextureID_Capacity(const CImVector_CImTextureID * ptr) {
    return toIm(ptr)->capacity();
}

CImTextureID ig_CImVector_CImTextureID_subscript(const CImVector_CImTextureID * ptr, int i) {
    return (*toIm(ptr))[i];
}

CImTextureID * ig_CImVector_CImTextureID_subscriptPointer(CImVector_CImTextureID * ptr, int i) {
    return &(*toIm(ptr))[i];
}


void ig_CImVector_CImTextureID_Clear(CImVector_CImTextureID * ptr) {
    toIm(ptr)->clear();
}

CImTextureID * ig_CImVector_CImTextureID_Begin(CImVector_CImTextureID * ptr) {
    return toIm(ptr)->begin();
}

const CImTextureID * ig_CImVector_CImTextureID_BeginConst(const CImVector_CImTextureID * ptr) {
    return toIm(ptr)->begin();
}

CImTextureID * ig_CImVector_CImTextureID_End(CImVector_CImTextureID * ptr) {
    return toIm(ptr)->end();
}

const CImTextureID * ig_CImVector_CImTextureID_EndConst(const CImVector_CImTextureID * ptr) {
    return toIm(ptr)->end();
}

CImTextureID ig_CImVector_CImTextureID_Front(const CImVector_CImTextureID * ptr) {
    return toIm(ptr)->front();
}

CImTextureID ig_CImVector_CImTextureID_Back(const CImVector_CImTextureID * ptr) {
    return toIm(ptr)->back();
}

void ig_CImVector_CImTextureID_Swap(CImVector_CImTextureID * ptr, CImVector_CImTextureID * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImTextureID_Resize(CImVector_CImTextureID * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImTextureID_ResizeValue(CImVector_CImTextureID * ptr, int new_size, CImTextureID v) {
    toIm(ptr)->resize(new_size, v);
}

void ig_CImVector_CImTextureID_Shrink(CImVector_CImTextureID * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImTextureID_Reserve(CImVector_CImTextureID * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImTextureID_PushBack(CImVector_CImTextureID * ptr, CImTextureID v) {
    toIm(ptr)->push_back(v);
}

void ig_CImVector_CImTextureID_PopBack(CImVector_CImTextureID * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImTextureID_PushFront(CImVector_CImTextureID * ptr, CImTextureID v) {
    toIm(ptr)->push_front(v);
}

CImTextureID * ig_CImVector_CImTextureID_Erase(CImVector_CImTextureID * ptr, const CImTextureID * it) {
    return toIm(ptr)->erase(it);
}

CImTextureID * ig_CImVector_CImTextureID_EraseRange(CImVector_CImTextureID * ptr, const CImTextureID * it, const CImTextureID * it_last) {
    return toIm(ptr)->erase(it, it_last);
}

CImTextureID * ig_CImVector_CImTextureID_Insert(CImVector_CImTextureID * ptr, const CImTextureID * it, CImTextureID v) {
    return toIm(ptr)->insert(it, v);
}

bool ig_CImVector_CImTextureID_Contains(const CImVector_CImTextureID * ptr, CImTextureID v) {
    return toIm(ptr)->contains(v);
}

CImTextureID * ig_CImVector_CImTextureID_Find(CImVector_CImTextureID * ptr, CImTextureID v) {
    return toIm(ptr)->find(v);
}

const CImTextureID * ig_CImVector_CImTextureID_FindConst(const CImVector_CImTextureID * ptr, CImTextureID v) {
    return toIm(ptr)->find(v);
}

bool ig_CImVector_CImTextureID_FindErase(CImVector_CImTextureID * ptr, CImTextureID v) {
    return toIm(ptr)->find_erase(v);
}



CImVector_CImFontConfig * ig_CImVector_CImFontConfig_init() {
    return toCIm(new ImVector<ImFontConfig>);
}

void ig_CImVector_CImFontConfig_deinit(const CImVector_CImFontConfig * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImFontConfig_Empty(const CImVector_CImFontConfig * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImFontConfig_Size(const CImVector_CImFontConfig * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImFontConfig_Size_in_bytes(const CImVector_CImFontConfig * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImFontConfig_Capacity(const CImVector_CImFontConfig * ptr) {
    return toIm(ptr)->capacity();
}

const CImFontConfig * ig_CImVector_CImFontConfig_subscriptConst(const CImVector_CImFontConfig * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImFontConfig * ig_CImVector_CImFontConfig_subscript(CImVector_CImFontConfig * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void ig_CImVector_CImFontConfig_Clear(CImVector_CImFontConfig * ptr) {
    toIm(ptr)->clear();
}

CImFontConfig * ig_CImVector_CImFontConfig_Begin(CImVector_CImFontConfig * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImFontConfig * ig_CImVector_CImFontConfig_BeginConst(const CImVector_CImFontConfig * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImFontConfig * ig_CImVector_CImFontConfig_End(CImVector_CImFontConfig * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImFontConfig * ig_CImVector_CImFontConfig_EndConst(const CImVector_CImFontConfig * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImFontConfig * ig_CImVector_CImFontConfig_Front(CImVector_CImFontConfig * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImFontConfig * ig_CImVector_CImFontConfig_FrontConst(const CImVector_CImFontConfig * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImFontConfig * ig_CImVector_CImFontConfig_Back(CImVector_CImFontConfig * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImFontConfig * ig_CImVector_CImFontConfig_BackConst(const CImVector_CImFontConfig * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void ig_CImVector_CImFontConfig_Swap(CImVector_CImFontConfig * ptr, CImVector_CImFontConfig * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImFontConfig_Resize(CImVector_CImFontConfig * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImFontConfig_ResizeValue(CImVector_CImFontConfig * ptr, int new_size, const CImFontConfig * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void ig_CImVector_CImFontConfig_Shrink(CImVector_CImFontConfig * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImFontConfig_Reserve(CImVector_CImFontConfig * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImFontConfig_PushBack(CImVector_CImFontConfig * ptr, const CImFontConfig * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void ig_CImVector_CImFontConfig_PopBack(CImVector_CImFontConfig * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImFontConfig_PushFront(CImVector_CImFontConfig * ptr, const CImFontConfig * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImFontConfig * ig_CImVector_CImFontConfig_Erase(CImVector_CImFontConfig * ptr, const CImFontConfig * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImFontConfig * ig_CImVector_CImFontConfig_EraseRange(CImVector_CImFontConfig * ptr, const CImFontConfig * it, const CImFontConfig * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImFontConfig * ig_CImVector_CImFontConfig_Insert(CImVector_CImFontConfig * ptr, const CImFontConfig * it, const CImFontConfig * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_init() {
    return toCIm(new ImVector<ImGuiPlatformMonitor>);
}

void ig_CImVector_CImGuiPlatformMonitor_deinit(const CImVector_CImGuiPlatformMonitor * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImGuiPlatformMonitor_Empty(const CImVector_CImGuiPlatformMonitor * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImGuiPlatformMonitor_Size(const CImVector_CImGuiPlatformMonitor * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImGuiPlatformMonitor_Size_in_bytes(const CImVector_CImGuiPlatformMonitor * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImGuiPlatformMonitor_Capacity(const CImVector_CImGuiPlatformMonitor * ptr) {
    return toIm(ptr)->capacity();
}

const CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_subscriptConst(const CImVector_CImGuiPlatformMonitor * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_subscript(CImVector_CImGuiPlatformMonitor * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void ig_CImVector_CImGuiPlatformMonitor_Clear(CImVector_CImGuiPlatformMonitor * ptr) {
    toIm(ptr)->clear();
}

CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_Begin(CImVector_CImGuiPlatformMonitor * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_BeginConst(const CImVector_CImGuiPlatformMonitor * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_End(CImVector_CImGuiPlatformMonitor * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_EndConst(const CImVector_CImGuiPlatformMonitor * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_Front(CImVector_CImGuiPlatformMonitor * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_FrontConst(const CImVector_CImGuiPlatformMonitor * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_Back(CImVector_CImGuiPlatformMonitor * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_BackConst(const CImVector_CImGuiPlatformMonitor * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void ig_CImVector_CImGuiPlatformMonitor_Swap(CImVector_CImGuiPlatformMonitor * ptr, CImVector_CImGuiPlatformMonitor * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImGuiPlatformMonitor_Resize(CImVector_CImGuiPlatformMonitor * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImGuiPlatformMonitor_ResizeValue(CImVector_CImGuiPlatformMonitor * ptr, int new_size, const CImGuiPlatformMonitor * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void ig_CImVector_CImGuiPlatformMonitor_Shrink(CImVector_CImGuiPlatformMonitor * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImGuiPlatformMonitor_Reserve(CImVector_CImGuiPlatformMonitor * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImGuiPlatformMonitor_PushBack(CImVector_CImGuiPlatformMonitor * ptr, const CImGuiPlatformMonitor * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void ig_CImVector_CImGuiPlatformMonitor_PopBack(CImVector_CImGuiPlatformMonitor * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImGuiPlatformMonitor_PushFront(CImVector_CImGuiPlatformMonitor * ptr, const CImGuiPlatformMonitor * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_Erase(CImVector_CImGuiPlatformMonitor * ptr, const CImGuiPlatformMonitor * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_EraseRange(CImVector_CImGuiPlatformMonitor * ptr, const CImGuiPlatformMonitor * it, const CImGuiPlatformMonitor * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImGuiPlatformMonitor * ig_CImVector_CImGuiPlatformMonitor_Insert(CImVector_CImGuiPlatformMonitor * ptr, const CImGuiPlatformMonitor * it, const CImGuiPlatformMonitor * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImGuiViewportPtr * ig_CImVector_CImGuiViewportPtr_init() {
    return toCIm(new ImVector<ImGuiViewport *>);
}

void ig_CImVector_CImGuiViewportPtr_deinit(const CImVector_CImGuiViewportPtr * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImGuiViewportPtr_Empty(const CImVector_CImGuiViewportPtr * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImGuiViewportPtr_Size(const CImVector_CImGuiViewportPtr * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImGuiViewportPtr_Size_in_bytes(const CImVector_CImGuiViewportPtr * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImGuiViewportPtr_Capacity(const CImVector_CImGuiViewportPtr * ptr) {
    return toIm(ptr)->capacity();
}

const CImGuiViewport * ig_CImVector_CImGuiViewportPtr_subscript(const CImVector_CImGuiViewportPtr * ptr, int i) {
    return toCIm((*toIm(ptr))[i]);
}

CImGuiViewport ** ig_CImVector_CImGuiViewportPtr_subscriptPointer(CImVector_CImGuiViewportPtr * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void ig_CImVector_CImGuiViewportPtr_Clear(CImVector_CImGuiViewportPtr * ptr) {
    toIm(ptr)->clear();
}

CImGuiViewport ** ig_CImVector_CImGuiViewportPtr_Begin(CImVector_CImGuiViewportPtr * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiViewport * const * ig_CImVector_CImGuiViewportPtr_BeginConst(const CImVector_CImGuiViewportPtr * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiViewport ** ig_CImVector_CImGuiViewportPtr_End(CImVector_CImGuiViewportPtr * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImGuiViewport * const * ig_CImVector_CImGuiViewportPtr_EndConst(const CImVector_CImGuiViewportPtr * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImGuiViewport * ig_CImVector_CImGuiViewportPtr_Front(const CImVector_CImGuiViewportPtr * ptr) {
    return toCIm(toIm(ptr)->front());
}

const CImGuiViewport * ig_CImVector_CImGuiViewportPtr_Back(const CImVector_CImGuiViewportPtr * ptr) {
    return toCIm(toIm(ptr)->back());
}

void ig_CImVector_CImGuiViewportPtr_Swap(CImVector_CImGuiViewportPtr * ptr, CImVector_CImGuiViewportPtr * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImGuiViewportPtr_Resize(CImVector_CImGuiViewportPtr * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImGuiViewportPtr_ResizeValue(CImVector_CImGuiViewportPtr * ptr, int new_size, CImGuiViewport * v) {
    toIm(ptr)->resize(new_size, toIm(v));
}

void ig_CImVector_CImGuiViewportPtr_Shrink(CImVector_CImGuiViewportPtr * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImGuiViewportPtr_Reserve(CImVector_CImGuiViewportPtr * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImGuiViewportPtr_PushBack(CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * v) {
    toIm(ptr)->push_back(toIm(v));
}

void ig_CImVector_CImGuiViewportPtr_PopBack(CImVector_CImGuiViewportPtr * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImGuiViewportPtr_PushFront(CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * v) {
    toIm(ptr)->push_front(toIm(v));
}

CImGuiViewport ** ig_CImVector_CImGuiViewportPtr_Erase(CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * const * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImGuiViewport ** ig_CImVector_CImGuiViewportPtr_EraseRange(CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * const * it, CImGuiViewport * const * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImGuiViewport ** ig_CImVector_CImGuiViewportPtr_Insert(CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * const * it, CImGuiViewport * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), toIm(v)));
}

bool ig_CImVector_CImGuiViewportPtr_Contains(const CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * v) {
    return toIm(ptr)->contains(toIm(v));
}

CImGuiViewport ** ig_CImVector_CImGuiViewportPtr_Find(CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * v) {
    return toCIm(toIm(ptr)->find(toIm(v)));
}

CImGuiViewport * const * ig_CImVector_CImGuiViewportPtr_FindConst(const CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * v) {
    return toCIm(toIm(ptr)->find(toIm(v)));
}

bool ig_CImVector_CImGuiViewportPtr_FindErase(CImVector_CImGuiViewportPtr * ptr, CImGuiViewport * v) {
    return toIm(ptr)->find_erase(toIm(v));
}



CImVector_CImFontPtr * ig_CImVector_CImFontPtr_init() {
    return toCIm(new ImVector<ImFont *>);
}

void ig_CImVector_CImFontPtr_deinit(const CImVector_CImFontPtr * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImFontPtr_Empty(const CImVector_CImFontPtr * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImFontPtr_Size(const CImVector_CImFontPtr * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImFontPtr_Size_in_bytes(const CImVector_CImFontPtr * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImFontPtr_Capacity(const CImVector_CImFontPtr * ptr) {
    return toIm(ptr)->capacity();
}

const CImFont * ig_CImVector_CImFontPtr_subscript(const CImVector_CImFontPtr * ptr, int i) {
    return toCIm((*toIm(ptr))[i]);
}

CImFont ** ig_CImVector_CImFontPtr_subscriptPointer(CImVector_CImFontPtr * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void ig_CImVector_CImFontPtr_Clear(CImVector_CImFontPtr * ptr) {
    toIm(ptr)->clear();
}

CImFont ** ig_CImVector_CImFontPtr_Begin(CImVector_CImFontPtr * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImFont * const * ig_CImVector_CImFontPtr_BeginConst(const CImVector_CImFontPtr * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImFont ** ig_CImVector_CImFontPtr_End(CImVector_CImFontPtr * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImFont * const * ig_CImVector_CImFontPtr_EndConst(const CImVector_CImFontPtr * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImFont * ig_CImVector_CImFontPtr_Front(const CImVector_CImFontPtr * ptr) {
    return toCIm(toIm(ptr)->front());
}

const CImFont * ig_CImVector_CImFontPtr_Back(const CImVector_CImFontPtr * ptr) {
    return toCIm(toIm(ptr)->back());
}

void ig_CImVector_CImFontPtr_Swap(CImVector_CImFontPtr * ptr, CImVector_CImFontPtr * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImFontPtr_Resize(CImVector_CImFontPtr * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImFontPtr_ResizeValue(CImVector_CImFontPtr * ptr, int new_size, CImFont * v) {
    toIm(ptr)->resize(new_size, toIm(v));
}

void ig_CImVector_CImFontPtr_Shrink(CImVector_CImFontPtr * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImFontPtr_Reserve(CImVector_CImFontPtr * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImFontPtr_PushBack(CImVector_CImFontPtr * ptr, CImFont * v) {
    toIm(ptr)->push_back(toIm(v));
}

void ig_CImVector_CImFontPtr_PopBack(CImVector_CImFontPtr * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImFontPtr_PushFront(CImVector_CImFontPtr * ptr, CImFont * v) {
    toIm(ptr)->push_front(toIm(v));
}

CImFont ** ig_CImVector_CImFontPtr_Erase(CImVector_CImFontPtr * ptr, CImFont * const * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImFont ** ig_CImVector_CImFontPtr_EraseRange(CImVector_CImFontPtr * ptr, CImFont * const * it, CImFont * const * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImFont ** ig_CImVector_CImFontPtr_Insert(CImVector_CImFontPtr * ptr, CImFont * const * it, CImFont * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), toIm(v)));
}

bool ig_CImVector_CImFontPtr_Contains(const CImVector_CImFontPtr * ptr, CImFont * v) {
    return toIm(ptr)->contains(toIm(v));
}

CImFont ** ig_CImVector_CImFontPtr_Find(CImVector_CImFontPtr * ptr, CImFont * v) {
    return toCIm(toIm(ptr)->find(toIm(v)));
}

CImFont * const * ig_CImVector_CImFontPtr_FindConst(const CImVector_CImFontPtr * ptr, CImFont * v) {
    return toCIm(toIm(ptr)->find(toIm(v)));
}

bool ig_CImVector_CImFontPtr_FindErase(CImVector_CImFontPtr * ptr, CImFont * v) {
    return toIm(ptr)->find_erase(toIm(v));
}



CImVector_CImDrawCmd * ig_CImVector_CImDrawCmd_init() {
    return toCIm(new ImVector<ImDrawCmd>);
}

void ig_CImVector_CImDrawCmd_deinit(const CImVector_CImDrawCmd * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImDrawCmd_Empty(const CImVector_CImDrawCmd * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImDrawCmd_Size(const CImVector_CImDrawCmd * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImDrawCmd_Size_in_bytes(const CImVector_CImDrawCmd * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImDrawCmd_Capacity(const CImVector_CImDrawCmd * ptr) {
    return toIm(ptr)->capacity();
}

const CImDrawCmd * ig_CImVector_CImDrawCmd_subscriptConst(const CImVector_CImDrawCmd * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImDrawCmd * ig_CImVector_CImDrawCmd_subscript(CImVector_CImDrawCmd * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void ig_CImVector_CImDrawCmd_Clear(CImVector_CImDrawCmd * ptr) {
    toIm(ptr)->clear();
}

CImDrawCmd * ig_CImVector_CImDrawCmd_Begin(CImVector_CImDrawCmd * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImDrawCmd * ig_CImVector_CImDrawCmd_BeginConst(const CImVector_CImDrawCmd * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImDrawCmd * ig_CImVector_CImDrawCmd_End(CImVector_CImDrawCmd * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImDrawCmd * ig_CImVector_CImDrawCmd_EndConst(const CImVector_CImDrawCmd * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImDrawCmd * ig_CImVector_CImDrawCmd_Front(CImVector_CImDrawCmd * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImDrawCmd * ig_CImVector_CImDrawCmd_FrontConst(const CImVector_CImDrawCmd * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImDrawCmd * ig_CImVector_CImDrawCmd_Back(CImVector_CImDrawCmd * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImDrawCmd * ig_CImVector_CImDrawCmd_BackConst(const CImVector_CImDrawCmd * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void ig_CImVector_CImDrawCmd_Swap(CImVector_CImDrawCmd * ptr, CImVector_CImDrawCmd * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImDrawCmd_Resize(CImVector_CImDrawCmd * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImDrawCmd_ResizeValue(CImVector_CImDrawCmd * ptr, int new_size, const CImDrawCmd * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void ig_CImVector_CImDrawCmd_Shrink(CImVector_CImDrawCmd * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImDrawCmd_Reserve(CImVector_CImDrawCmd * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImDrawCmd_PushBack(CImVector_CImDrawCmd * ptr, const CImDrawCmd * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void ig_CImVector_CImDrawCmd_PopBack(CImVector_CImDrawCmd * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImDrawCmd_PushFront(CImVector_CImDrawCmd * ptr, const CImDrawCmd * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImDrawCmd * ig_CImVector_CImDrawCmd_Erase(CImVector_CImDrawCmd * ptr, const CImDrawCmd * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImDrawCmd * ig_CImVector_CImDrawCmd_EraseRange(CImVector_CImDrawCmd * ptr, const CImDrawCmd * it, const CImDrawCmd * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImDrawCmd * ig_CImVector_CImDrawCmd_Insert(CImVector_CImDrawCmd * ptr, const CImDrawCmd * it, const CImDrawCmd * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImVec4 * ig_CImVector_CImVec4_init() {
    return toCIm(new ImVector<ImVec4>);
}

void ig_CImVector_CImVec4_deinit(const CImVector_CImVec4 * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImVec4_Empty(const CImVector_CImVec4 * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImVec4_Size(const CImVector_CImVec4 * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImVec4_Size_in_bytes(const CImVector_CImVec4 * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImVec4_Capacity(const CImVector_CImVec4 * ptr) {
    return toIm(ptr)->capacity();
}

const CImVec4 * ig_CImVector_CImVec4_subscriptConst(const CImVector_CImVec4 * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImVec4 * ig_CImVector_CImVec4_subscript(CImVector_CImVec4 * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void ig_CImVector_CImVec4_Clear(CImVector_CImVec4 * ptr) {
    toIm(ptr)->clear();
}

CImVec4 * ig_CImVector_CImVec4_Begin(CImVector_CImVec4 * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImVec4 * ig_CImVector_CImVec4_BeginConst(const CImVector_CImVec4 * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImVec4 * ig_CImVector_CImVec4_End(CImVector_CImVec4 * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImVec4 * ig_CImVector_CImVec4_EndConst(const CImVector_CImVec4 * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImVec4 * ig_CImVector_CImVec4_Front(CImVector_CImVec4 * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImVec4 * ig_CImVector_CImVec4_FrontConst(const CImVector_CImVec4 * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImVec4 * ig_CImVector_CImVec4_Back(CImVector_CImVec4 * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImVec4 * ig_CImVector_CImVec4_BackConst(const CImVector_CImVec4 * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void ig_CImVector_CImVec4_Swap(CImVector_CImVec4 * ptr, CImVector_CImVec4 * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImVec4_Resize(CImVector_CImVec4 * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImVec4_ResizeValue(CImVector_CImVec4 * ptr, int new_size, const CImVec4 * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void ig_CImVector_CImVec4_Shrink(CImVector_CImVec4 * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImVec4_Reserve(CImVector_CImVec4 * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImVec4_PushBack(CImVector_CImVec4 * ptr, const CImVec4 * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void ig_CImVector_CImVec4_PopBack(CImVector_CImVec4 * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImVec4_PushFront(CImVector_CImVec4 * ptr, const CImVec4 * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImVec4 * ig_CImVector_CImVec4_Erase(CImVector_CImVec4 * ptr, const CImVec4 * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImVec4 * ig_CImVector_CImVec4_EraseRange(CImVector_CImVec4 * ptr, const CImVec4 * it, const CImVec4 * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImVec4 * ig_CImVector_CImVec4_Insert(CImVector_CImVec4 * ptr, const CImVec4 * it, const CImVec4 * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}



CImVector_CImDrawIdx * ig_CImVector_CImDrawIdx_init() {
    return toCImIdx(new ImVector<ImDrawIdx>);
}

void ig_CImVector_CImDrawIdx_deinit(const CImVector_CImDrawIdx * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImDrawIdx_Empty(const CImVector_CImDrawIdx * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImDrawIdx_Size(const CImVector_CImDrawIdx * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImDrawIdx_Size_in_bytes(const CImVector_CImDrawIdx * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImDrawIdx_Capacity(const CImVector_CImDrawIdx * ptr) {
    return toIm(ptr)->capacity();
}

CImDrawIdx ig_CImVector_CImDrawIdx_subscript(const CImVector_CImDrawIdx * ptr, int i) {
    return (*toIm(ptr))[i];
}

CImDrawIdx * ig_CImVector_CImDrawIdx_subscriptPointer(CImVector_CImDrawIdx * ptr, int i) {
    return &(*toIm(ptr))[i];
}


void ig_CImVector_CImDrawIdx_Clear(CImVector_CImDrawIdx * ptr) {
    toIm(ptr)->clear();
}

CImDrawIdx * ig_CImVector_CImDrawIdx_Begin(CImVector_CImDrawIdx * ptr) {
    return toIm(ptr)->begin();
}

const CImDrawIdx * ig_CImVector_CImDrawIdx_BeginConst(const CImVector_CImDrawIdx * ptr) {
    return toIm(ptr)->begin();
}

CImDrawIdx * ig_CImVector_CImDrawIdx_End(CImVector_CImDrawIdx * ptr) {
    return toIm(ptr)->end();
}

const CImDrawIdx * ig_CImVector_CImDrawIdx_EndConst(const CImVector_CImDrawIdx * ptr) {
    return toIm(ptr)->end();
}

CImDrawIdx ig_CImVector_CImDrawIdx_Front(const CImVector_CImDrawIdx * ptr) {
    return toIm(ptr)->front();
}

CImDrawIdx ig_CImVector_CImDrawIdx_Back(const CImVector_CImDrawIdx * ptr) {
    return toIm(ptr)->back();
}

void ig_CImVector_CImDrawIdx_Swap(CImVector_CImDrawIdx * ptr, CImVector_CImDrawIdx * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImDrawIdx_Resize(CImVector_CImDrawIdx * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImDrawIdx_ResizeValue(CImVector_CImDrawIdx * ptr, int new_size, CImDrawIdx v) {
    toIm(ptr)->resize(new_size, v);
}

void ig_CImVector_CImDrawIdx_Shrink(CImVector_CImDrawIdx * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImDrawIdx_Reserve(CImVector_CImDrawIdx * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImDrawIdx_PushBack(CImVector_CImDrawIdx * ptr, CImDrawIdx v) {
    toIm(ptr)->push_back(v);
}

void ig_CImVector_CImDrawIdx_PopBack(CImVector_CImDrawIdx * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImDrawIdx_PushFront(CImVector_CImDrawIdx * ptr, CImDrawIdx v) {
    toIm(ptr)->push_front(v);
}

CImDrawIdx * ig_CImVector_CImDrawIdx_Erase(CImVector_CImDrawIdx * ptr, const CImDrawIdx * it) {
    return toIm(ptr)->erase(it);
}

CImDrawIdx * ig_CImVector_CImDrawIdx_EraseRange(CImVector_CImDrawIdx * ptr, const CImDrawIdx * it, const CImDrawIdx * it_last) {
    return toIm(ptr)->erase(it, it_last);
}

CImDrawIdx * ig_CImVector_CImDrawIdx_Insert(CImVector_CImDrawIdx * ptr, const CImDrawIdx * it, CImDrawIdx v) {
    return toIm(ptr)->insert(it, v);
}

bool ig_CImVector_CImDrawIdx_Contains(const CImVector_CImDrawIdx * ptr, CImDrawIdx v) {
    return toIm(ptr)->contains(v);
}

CImDrawIdx * ig_CImVector_CImDrawIdx_Find(CImVector_CImDrawIdx * ptr, CImDrawIdx v) {
    return toIm(ptr)->find(v);
}

const CImDrawIdx * ig_CImVector_CImDrawIdx_FindConst(const CImVector_CImDrawIdx * ptr, CImDrawIdx v) {
    return toIm(ptr)->find(v);
}

bool ig_CImVector_CImDrawIdx_FindErase(CImVector_CImDrawIdx * ptr, CImDrawIdx v) {
    return toIm(ptr)->find_erase(v);
}



CImVector_CImVec2 * ig_CImVector_CImVec2_init() {
    return toCIm(new ImVector<ImVec2>);
}

void ig_CImVector_CImVec2_deinit(const CImVector_CImVec2 * ptr) {
    delete toIm(ptr);
}

bool ig_CImVector_CImVec2_Empty(const CImVector_CImVec2 * ptr) {
    return toIm(ptr)->empty();
}

int ig_CImVector_CImVec2_Size(const CImVector_CImVec2 * ptr) {
    return toIm(ptr)->size();
}

int ig_CImVector_CImVec2_Size_in_bytes(const CImVector_CImVec2 * ptr) {
    return toIm(ptr)->size_in_bytes();
}

int ig_CImVector_CImVec2_Capacity(const CImVector_CImVec2 * ptr) {
    return toIm(ptr)->capacity();
}

const CImVec2 * ig_CImVector_CImVec2_subscriptConst(const CImVector_CImVec2 * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}

CImVec2 * ig_CImVector_CImVec2_subscript(CImVector_CImVec2 * ptr, int i) {
    return toCIm(&(*toIm(ptr))[i]);
}


void ig_CImVector_CImVec2_Clear(CImVector_CImVec2 * ptr) {
    toIm(ptr)->clear();
}

CImVec2 * ig_CImVector_CImVec2_Begin(CImVector_CImVec2 * ptr) {
    return toCIm(toIm(ptr)->begin());
}

const CImVec2 * ig_CImVector_CImVec2_BeginConst(const CImVector_CImVec2 * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImVec2 * ig_CImVector_CImVec2_End(CImVector_CImVec2 * ptr) {
    return toCIm(toIm(ptr)->end());
}

const CImVec2 * ig_CImVector_CImVec2_EndConst(const CImVector_CImVec2 * ptr) {
    return toCIm(toIm(ptr)->end());
}

CImVec2 * ig_CImVector_CImVec2_Front(CImVector_CImVec2 * ptr) {
    return toCIm(&toIm(ptr)->front());
}

const CImVec2 * ig_CImVector_CImVec2_FrontConst(const CImVector_CImVec2 * ptr) {
    return toCIm(&toIm(ptr)->front());
}

CImVec2 * ig_CImVector_CImVec2_Back(CImVector_CImVec2 * ptr) {
    return toCIm(&toIm(ptr)->back());
}

const CImVec2 * ig_CImVector_CImVec2_BackConst(const CImVector_CImVec2 * ptr) {
    return toCIm(&toIm(ptr)->back());
}

void ig_CImVector_CImVec2_Swap(CImVector_CImVec2 * ptr, CImVector_CImVec2 * other) {
    toIm(ptr)->swap(*toIm(other));
}


void ig_CImVector_CImVec2_Resize(CImVector_CImVec2 * ptr, int new_size) {
    toIm(ptr)->resize(new_size);
}

void ig_CImVector_CImVec2_ResizeValue(CImVector_CImVec2 * ptr, int new_size, const CImVec2 * v) {
    toIm(ptr)->resize(new_size, *toIm(v));
}

void ig_CImVector_CImVec2_Shrink(CImVector_CImVec2 * ptr, int new_size) {
    toIm(ptr)->shrink(new_size);
}

void ig_CImVector_CImVec2_Reserve(CImVector_CImVec2 * ptr, int new_capacity) {
    toIm(ptr)->reserve(new_capacity);
}


void ig_CImVector_CImVec2_PushBack(CImVector_CImVec2 * ptr, const CImVec2 * v) {
    toIm(ptr)->push_back(*toIm(v));
}

void ig_CImVector_CImVec2_PopBack(CImVector_CImVec2 * ptr) {
    toIm(ptr)->pop_back();
}

void ig_CImVector_CImVec2_PushFront(CImVector_CImVec2 * ptr, const CImVec2 * v) {
    toIm(ptr)->push_front(*toIm(v));
}

CImVec2 * ig_CImVector_CImVec2_Erase(CImVector_CImVec2 * ptr, const CImVec2 * it) {
    return toCIm(toIm(ptr)->erase(toIm(it)));
}

CImVec2 * ig_CImVector_CImVec2_EraseRange(CImVector_CImVec2 * ptr, const CImVec2 * it, const CImVec2 * it_last) {
    return toCIm(toIm(ptr)->erase(toIm(it), toIm(it_last)));
}

CImVec2 * ig_CImVector_CImVec2_Insert(CImVector_CImVec2 * ptr, const CImVec2 * it, const CImVec2 * v) {
    return toCIm(toIm(ptr)->insert(toIm(it), *toIm(v)));
}

