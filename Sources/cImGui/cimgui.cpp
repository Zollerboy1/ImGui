//
//  cimgui.c
//  
//
//  Created by Josef Zoller on 06.03.20.
//

#include "cimgui.h"

#include <cppimgui.hpp>

#include "asserts.h"
#include "conversions.h"


CImGuiContext * igCreateContext(CImFontAtlas * shared_font_atlas) {
    return ImGui::CreateContext(toIm(shared_font_atlas));
}

void igDestroyContext(CImGuiContext * ctx) {
    ImGui::DestroyContext(ctx);
}

CImGuiContext * igGetCurrentContext() {
    return ImGui::GetCurrentContext();
}

void igSetCurrentContext(CImGuiContext * ctx) {
    ImGui::SetCurrentContext(ctx);
}

bool igDebugCheckVersionAndDataLayout(const char * version_str, size_t sz_io, size_t sz_style, size_t sz_vec2, size_t sz_vec4, size_t sz_drawvert, size_t sz_drawidx) {
    return ImGui::DebugCheckVersionAndDataLayout(version_str, sz_io, sz_style, sz_vec2, sz_vec4, sz_drawvert, sz_drawidx);
}

bool igCheckVersion() {
    return IMGUI_CHECKVERSION();
}


CImGuiIO * igGetIO() {
    return toCIm(&ImGui::GetIO());
}

CImGuiStyle * igGetStyle() {
    return toCIm(&ImGui::GetStyle());
}

void igNewFrame() {
    ImGui::NewFrame();
}

void igEndFrame() {
    ImGui::EndFrame();
}

void igRender() {
    ImGui::Render();
}

CImDrawData * igGetDrawData() {
    return toCIm(ImGui::GetDrawData());
}


void igShowDemoWindow(bool * p_open) {
    ImGui::ShowDemoWindow(p_open);
}

void igShowAboutWindow(bool * p_open) {
    ImGui::ShowAboutWindow(p_open);
}

void igShowMetricsWindow(bool * p_open) {
    ImGui::ShowMetricsWindow(p_open);
}

void igShowStyleEditor(CImGuiStyle * ref) {
    ImGui::ShowStyleEditor(toIm(ref));
}

void igShowStyleSelector(const char * label) {
    ImGui::ShowStyleSelector(label);
}

void igShowFontSelector(const char * label) {
    ImGui::ShowFontSelector(label);
}

void igShowUserGuide() {
    ImGui::ShowUserGuide();
}

const char * igGetVersion() {
    return ImGui::GetVersion();
}


void igStyleColorsDark(CImGuiStyle * dst) {
    ImGui::StyleColorsDark(toIm(dst));
}

void igStyleColorsClassic(CImGuiStyle * dst) {
    ImGui::StyleColorsClassic(toIm(dst));
}

void igStyleColorsLight(CImGuiStyle * dst) {
    ImGui::StyleColorsLight(toIm(dst));
}

bool igBegin(const char * name, bool * p_open, CImGuiWindowFlags flags) {
    return ImGui::Begin(name, p_open, flags);
}

void igEnd() {
    ImGui::End();
}


bool igBeginChild(const char * str_id, const CImVec2 * size, bool border, CImGuiWindowFlags flags) {
    return ImGui::BeginChild(str_id, toImVal(size), border, flags);
}

bool igBeginChildWithID(CImGuiID id, const CImVec2 * size, bool border, CImGuiWindowFlags flags) {
    return ImGui::BeginChild(id, toImVal(size), border, flags);
}

void igEndChild() {
    ImGui::EndChild();
}


bool igIsWindowAppearing() {
    return ImGui::IsWindowAppearing();
}

bool igIsWindowCollapsed() {
    return ImGui::IsWindowCollapsed();
}

bool igIsWindowFocused(CImGuiFocusedFlags flags) {
    return ImGui::IsWindowFocused(flags);
}

bool igIsWindowHovered(CImGuiHoveredFlags flags) {
    return ImGui::IsWindowHovered(flags);
}

CImDrawList * igGetWindowDrawList() {
    return toCIm(ImGui::GetWindowDrawList());
}

float igGetWindowDpiScale() {
    return ImGui::GetWindowDpiScale();
}

CImGuiViewport * igGetWindowViewport() {
    return toCIm(ImGui::GetWindowViewport());
}

CImVec2 * igGetWindowPos() {
    return toCImPtr(ImGui::GetWindowPos());
}

CImVec2 * igGetWindowSize() {
    return toCImPtr(ImGui::GetWindowSize());
}

float igGetWindowWidth() {
    return ImGui::GetWindowWidth();
}

float igGetWindowHeight() {
    return ImGui::GetWindowHeight();
}


void igSetNextWindowPos(const CImVec2 * pos, CImGuiCond cond, const CImVec2 * pivot) {
    ImGui::SetNextWindowPos(toImVal(pos), cond, toImVal(pivot));
}

void igSetNextWindowSize(const CImVec2 * size, CImGuiCond cond) {
    ImGui::SetNextWindowSize(toImVal(size), cond);
}

void igSetNextWindowSizeConstraints(const CImVec2 * size_min, const CImVec2 * size_max, CImGuiSizeCallback custom_callback, void * custom_callback_data) {
    ImGui::SetNextWindowSizeConstraints(toImVal(size_min), toImVal(size_max), custom_callback, custom_callback_data);
}

void igSetNextWindowContentSize(const CImVec2 * size) {
    ImGui::SetNextWindowContentSize(toImVal(size));
}

void igSetNextWindowCollapsed(bool collapsed, CImGuiCond cond) {
    ImGui::SetNextWindowCollapsed(collapsed, cond);
}

void igSetNextWindowFocus() {
    ImGui::SetNextWindowFocus();
}

void igSetNextWindowBgAlpha(float alpha) {
    ImGui::SetNextWindowBgAlpha(alpha);
}

void igSetNextWindowViewport(CImGuiID viewport_id) {
    ImGui::SetNextWindowViewport(viewport_id);
}

void igSetWindowPos(const CImVec2 * pos, CImGuiCond cond) {
    ImGui::SetWindowPos(toImVal(pos), cond);
}

void igSetWindowSize(const CImVec2 * size, CImGuiCond cond) {
    ImGui::SetWindowSize(toImVal(size), cond);
}

void igSetWindowCollapsed(bool collapsed, CImGuiCond cond) {
    ImGui::SetWindowCollapsed(collapsed, cond);
}

void igSetWindowFocus() {
    ImGui::SetWindowFocus();
}

void igSetWindowFontScale(float scale) {
    ImGui::SetWindowFontScale(scale);
}

void igSetNamedWindowPos(const char * name, const CImVec2 * pos, CImGuiCond cond) {
    ImGui::SetWindowPos(name, toImVal(pos), cond);
}

void igSetNamedWindowSize(const char * name, const CImVec2 * size, CImGuiCond cond) {
    ImGui::SetWindowSize(name, toImVal(size), cond);
}

void igSetNamedWindowCollapsed(const char * name, bool collapsed, CImGuiCond cond) {
    ImGui::SetWindowCollapsed(name, collapsed, cond);
}

void igSetNamedWindowFocus(const char * name) {
    ImGui::SetWindowFocus(name);
}


CImVec2 * igGetContentRegionMax() {
    return toCImPtr(ImGui::GetContentRegionMax());
}

CImVec2 * igGetContentRegionAvail() {
    return toCImPtr(ImGui::GetContentRegionAvail());
}

CImVec2 * igGetWindowContentRegionMin() {
    return toCImPtr(ImGui::GetWindowContentRegionMin());
}

CImVec2 * igGetWindowContentRegionMax() {
    return toCImPtr(ImGui::GetWindowContentRegionMax());
}

float igGetWindowContentRegionWidth() {
    return ImGui::GetWindowContentRegionWidth();
}


float igGetScrollX() {
    return ImGui::GetScrollX();
}

float igGetScrollY() {
    return ImGui::GetScrollY();
}

float igGetScrollMaxX() {
    return ImGui::GetScrollMaxX();
}

float igGetScrollMaxY() {
    return ImGui::GetScrollMaxY();
}

void igSetScrollX(float scroll_x) {
    ImGui::SetScrollX(scroll_x);
}

void igSetScrollY(float scroll_y) {
    ImGui::SetScrollY(scroll_y);
}

void igSetScrollHereX(float center_x_ratio) {
    ImGui::SetScrollHereX(center_x_ratio);
}

void igSetScrollHereY(float center_y_ratio) {
    ImGui::SetScrollHereY(center_y_ratio);
}

void igSetScrollFromPosX(float local_x, float center_x_ratio) {
    ImGui::SetScrollFromPosX(local_x, center_x_ratio);
}

void igSetScrollFromPosY(float local_y, float center_y_ratio) {
    ImGui::SetScrollFromPosY(local_y, center_y_ratio);
}


void igPushFont(CImFont * font) {
    ImGui::PushFont(toIm(font));
}

void igPopFont() {
    ImGui::PopFont();
}

void igPushStyleColor(CImGuiCol idx, CImU32 col) {
    ImGui::PushStyleColor(idx, col);
}

void igPushStyleColorVec4(CImGuiCol idx, const CImVec4 * col) {
    ImGui::PushStyleColor(idx, toImVal(col));
}

void igPopStyleColor(int count) {
    ImGui::PopStyleColor(count);
}

void igPushStyleVar(CImGuiStyleVar idx, float val) {
    ImGui::PushStyleVar(idx, val);
}

void igPushStyleVarVec2(CImGuiStyleVar idx, const CImVec2 * val) {
    ImGui::PushStyleVar(idx, toImVal(val));
}

void igPopStyleVar(int count) {
    ImGui::PopStyleVar();
}

CImVec4 * igGetStyleColorVec4(CImGuiCol idx) {
    return toCImPtr(ImGui::GetStyleColorVec4(idx));
}


CImFont * igGetFont() {
    return toCIm(ImGui::GetFont());
}

float igGetFontSize() {
    return ImGui::GetFontSize();
}

CImVec2 * igGetFontTexUvWhitePixel() {
    return toCImPtr(ImGui::GetFontTexUvWhitePixel());
}

CImU32 igGetColorWithIndexU32(CImGuiCol idx, float alpha_mul) {
    return ImGui::GetColorU32(idx, alpha_mul);
}

CImU32 igGetColorVec4U32(const CImVec4 * col) {
    return ImGui::GetColorU32(toImVal(col));
}

CImU32 igGetColorU32(CImU32 col) {
    return ImGui::GetColorU32(col);
}


void igPushItemWidth(float item_width) {
    ImGui::PushItemWidth(item_width);
}

void igPopItemWidth() {
    ImGui::PopItemWidth();
}

void igSetNextItemWidth(float item_width) {
    ImGui::SetNextItemWidth(item_width);
}

float igCalcItemWidth() {
    return ImGui::CalcItemWidth();
}

void igPushTextWrapPos(float wrap_local_pos_x) {
    ImGui::PushTextWrapPos(wrap_local_pos_x);
}

void igPopTextWrapPos() {
    ImGui::PopTextWrapPos();
}

void igPushAllowKeyboardFocus(bool allow_keyboard_focus) {
    ImGui::PushAllowKeyboardFocus(allow_keyboard_focus);
}

void igPopAllowKeyboardFocus() {
    ImGui::PopAllowKeyboardFocus();
}

void igPushButtonRepeat(bool repeat) {
    ImGui::PushButtonRepeat(repeat);
}

void igPopButtonRepeat() {
    ImGui::PopButtonRepeat();
}


void igSeparator() {
    ImGui::Separator();
}

void igSameLine(float offset_from_start_x, float spacing) {
    ImGui::SameLine(offset_from_start_x, spacing);
}

void igNewLine() {
    ImGui::NewLine();
}

void igSpacing() {
    ImGui::Spacing();
}

void igDummy(const CImVec2 * size) {
    ImGui::Dummy(toImVal(size));
}

void igIndent(float indent_w) {
    ImGui::Indent(indent_w);
}

void igUnindent(float indent_w) {
    ImGui::Unindent(indent_w);
}

void igBeginGroup() {
    ImGui::BeginGroup();
}

void igEndGroup() {
    ImGui::EndGroup();
}

CImVec2 * igGetCursorPos() {
    return toCImPtr(ImGui::GetCursorPos());
}

float igGetCursorPosX() {
    return ImGui::GetCursorPosX();
}

float igGetCursorPosY() {
    return ImGui::GetCursorPosY();
}

void igSetCursorPos(const CImVec2 * local_pos) {
    ImGui::SetCursorPos(toImVal(local_pos));
}

void igSetCursorPosX(float local_x) {
    ImGui::SetCursorPosX(local_x);
}

void igSetCursorPosY(float local_y) {
    ImGui::SetCursorPosY(local_y);
}

CImVec2 * igGetCursorStartPos() {
    return toCImPtr(ImGui::GetCursorStartPos());
}

CImVec2 * igGetCursorScreenPos() {
    return toCImPtr(ImGui::GetCursorScreenPos());
}

void igSetCursorScreenPos(const CImVec2 * pos) {
    ImGui::SetCursorScreenPos(toImVal(pos));
}

void igAlignTextToFramePadding() {
    ImGui::AlignTextToFramePadding();
}

float igGetTextLineHeight() {
    return ImGui::GetTextLineHeight();
}

float igGetTextLineHeightWithSpacing() {
    return ImGui::GetTextLineHeightWithSpacing();
}

float igGetFrameHeight() {
    return ImGui::GetFrameHeight();
}

float igGetFrameHeightWithSpacing() {
    return ImGui::GetFrameHeightWithSpacing();
}


void igPushIDBuffer(const char * str_id) {
    ImGui::PushID(str_id);
}

void igPushIDString(const char * str_id_begin, const char * str_id_end) {
    ImGui::PushID(str_id_begin, str_id_end);
}

void igPushIDPointer(const void * ptr_id) {
    ImGui::PushID(ptr_id);
}

void igPushIDInt(int int_id) {
    ImGui::PushID(int_id);
}

void igPopID() {
    ImGui::PopID();
}

CImGuiID igGetIDBuffer(const char * str_id) {
    return ImGui::GetID(str_id);
}

CImGuiID igGetIDString(const char * str_id_begin, const char * str_id_end) {
    return ImGui::GetID(str_id_begin, str_id_end);
}

CImGuiID igGetIDPointer(const void * ptr_id) {
    return ImGui::GetID(ptr_id);
}


void igTextUnformatted(const char * text, const char * text_end) {
    ImGui::TextUnformatted(text, text_end);
}

void igText(const char * fmt, va_list args) {
    ImGui::TextV(fmt, args);
}

void igTextColored(const CImVec4 * col, const char * fmt, va_list args) {
    ImGui::TextColoredV(toImVal(col), fmt, args);
}

void igTextDisabled(const char* fmt, va_list args) {
    ImGui::TextDisabledV(fmt, args);
}

void igTextWrapped(const char * fmt, va_list args) {
    ImGui::TextWrappedV(fmt, args);
}

void igLabelText(const char * label, const char * fmt, va_list args) {
    ImGui::LabelTextV(label, fmt, args);
}

void igBulletText(const char * fmt, va_list args) {
    ImGui::BulletTextV(fmt, args);
}

bool igButton(const char * label, const CImVec2 * size) {
    return ImGui::Button(label, toImVal(size));
}

bool igSmallButton(const char * label) {
    return ImGui::SmallButton(label);
}

bool igInvisibleButton(const char * str_id, const CImVec2 * size) {
    return ImGui::InvisibleButton(str_id, toImVal(size));
}

bool igArrowButton(const char * str_id, CImGuiDir dir) {
    return ImGui::ArrowButton(str_id, dir);
}

void igImage(CImTextureID user_texture_id, const CImVec2 * size, const CImVec2 * uv0, const CImVec2 * uv1, const CImVec4 * tint_col, const CImVec4 * border_col) {
    ImGui::Image(user_texture_id, toImVal(size), toImVal(uv0), toImVal(uv1), toImVal(tint_col), toImVal(border_col));
}

bool igImageButton(CImTextureID user_texture_id, const CImVec2 * size, const CImVec2 * uv0,  const CImVec2 * uv1, int frame_padding, const CImVec4 * bg_col, const CImVec4 * tint_col) {
    return ImGui::ImageButton(user_texture_id, toImVal(size), toImVal(uv0), toImVal(uv1), frame_padding, toImVal(bg_col), toImVal(tint_col));
}

bool igCheckbox(const char * label, bool * v) {
    return ImGui::Checkbox(label, v);
}

bool igCheckboxFlags(const char * label, unsigned int * flags, unsigned int flags_value) {
    return ImGui::CheckboxFlags(label, flags, flags_value);
}

bool igRadioButton(const char * label, bool active) {
    return ImGui::RadioButton(label, active);
}

bool igRadioButtonInt(const char * label, int * v, int v_button) {
    return ImGui::RadioButton(label, v, v_button);
}

void igProgressBar(float fraction, const CImVec2 * size_arg, const char * overlay) {
    ImGui::ProgressBar(fraction, toImVal(size_arg), overlay);
}

void igBullet() {
    ImGui::Bullet();
}


bool igBeginCombo(const char * label, const char * preview_value, CImGuiComboFlags flags) {
    return ImGui::BeginCombo(label, preview_value, flags);
}

void igEndCombo() {
    ImGui::EndCombo();
}

bool igCombo(const char * label, int * current_item, const char * const items[], int items_count, int popup_max_height_in_items) {
    return ImGui::Combo(label, current_item, items, items_count, popup_max_height_in_items);
}

bool igComboZeroSeparated(const char * label, int * current_item, const char * items_separated_by_zeros, int popup_max_height_in_items) {
    return ImGui::Combo(label, current_item, items_separated_by_zeros, popup_max_height_in_items);
}

bool igComboGetter(const char * label, int * current_item, bool (*items_getter)(void * data, int idx, const char ** out_text), void * data, int items_count, int popup_max_height_in_items) {
    return ImGui::Combo(label, current_item, items_getter, data, items_count, popup_max_height_in_items);
}


bool igDragFloat(const char * label, float * v, float v_speed, float v_min, float v_max, const char * format, float power) {
    return ImGui::DragFloat(label, v, v_speed, v_min, v_max, format, power);
}

bool igDragFloat2(const char * label, float v[2], float v_speed, float v_min, float v_max, const char * format, float power) {
    return ImGui::DragFloat2(label, v, v_speed, v_min, v_max, format, power);
}

bool igDragFloat3(const char * label, float v[3], float v_speed, float v_min, float v_max, const char * format, float power) {
    return ImGui::DragFloat3(label, v, v_speed, v_min, v_max, format, power);
}

bool igDragFloat4(const char * label, float v[4], float v_speed, float v_min, float v_max, const char * format, float power) {
    return ImGui::DragFloat4(label, v, v_speed, v_min, v_max, format, power);
}

bool igDragFloatRange2(const char * label, float * v_current_min, float * v_current_max, float v_speed, float v_min, float v_max, const char * format, const char * format_max, float power) {
    return ImGui::DragFloatRange2(label, v_current_min, v_current_max, v_speed, v_min, v_max, format, format_max, power);
}

bool igDragInt(const char * label, int * v, float v_speed, int v_min, int v_max, const char * format) {
    return ImGui::DragInt(label, v, v_speed, v_min, v_max, format);
}

bool igDragInt2(const char * label, int v[2], float v_speed, int v_min, int v_max, const char * format) {
    return ImGui::DragInt2(label, v, v_speed, v_min, v_max, format);
}

bool igDragInt3(const char * label, int v[3], float v_speed, int v_min, int v_max, const char * format) {
    return ImGui::DragInt3(label, v, v_speed, v_min, v_max, format);
}

bool igDragInt4(const char * label, int v[4], float v_speed, int v_min, int v_max, const char * format) {
    return ImGui::DragInt4(label, v, v_speed, v_min, v_max, format);
}

bool igDragIntRange2(const char * label, int * v_current_min, int * v_current_max, float v_speed, int v_min, int v_max, const char * format, const char * format_max) {
    return ImGui::DragIntRange2(label, v_current_min, v_current_max, v_speed, v_min, v_max, format, format_max);
}

bool igDragScalar(const char * label, CImGuiDataType data_type, void * p_data, float v_speed, const void * p_min, const void * p_max, const char * format, float power) {
    return ImGui::DragScalar(label, data_type, p_data, v_speed, p_min, p_max, format, power);
}

bool igDragScalarN(const char * label, CImGuiDataType data_type, void * p_data, int components, float v_speed, const void * p_min, const void * p_max, const char * format, float power) {
    return ImGui::DragScalarN(label, data_type, p_data, components, v_speed, p_min, p_max, format, power);
}


bool igSliderFloat(const char * label, float * v, float v_min, float v_max, const char * format, float power) {
    return ImGui::SliderFloat(label, v, v_min, v_max, format, power);
}

bool igSliderFloat2(const char * label, float v[2], float v_min, float v_max, const char * format, float power) {
    return ImGui::SliderFloat2(label, v, v_min, v_max, format, power);
}

bool igSliderFloat3(const char * label, float v[3], float v_min, float v_max, const char * format, float power) {
    return ImGui::SliderFloat3(label, v, v_min, v_max, format, power);
}

bool igSliderFloat4(const char * label, float v[4], float v_min, float v_max, const char * format, float power) {
    return ImGui::SliderFloat4(label, v, v_min, v_max, format, power);
}

bool igSliderAngle(const char * label, float * v_rad, float v_degrees_min, float v_degrees_max, const char * format) {
    return ImGui::SliderAngle(label, v_rad, v_degrees_min, v_degrees_max, format);
}

bool igSliderInt(const char * label, int * v, int v_min, int v_max, const char * format) {
    return ImGui::SliderInt(label, v, v_min, v_max, format);
}

bool igSliderInt2(const char * label, int v[2], int v_min, int v_max, const char * format) {
    return ImGui::SliderInt2(label, v, v_min, v_max, format);
}

bool igSliderInt3(const char * label, int v[3], int v_min, int v_max, const char * format) {
    return ImGui::SliderInt3(label, v, v_min, v_max, format);
}

bool igSliderInt4(const char * label, int v[4], int v_min, int v_max, const char * format) {
    return ImGui::SliderInt4(label, v, v_min, v_max, format);
}

bool igSliderScalar(const char * label, CImGuiDataType data_type, void * p_data, const void * p_min, const void * p_max, const char * format, float power) {
    return ImGui::SliderScalar(label, data_type, p_data, p_min, p_max, format, power);
}

bool igSliderScalarN(const char * label, CImGuiDataType data_type, void * p_data, int components, const void * p_min, const void * p_max, const char * format, float power) {
    return ImGui::SliderScalarN(label, data_type, p_data, components, p_min, p_max, format, power);
}

bool igVSliderFloat(const char * label, const CImVec2 * size, float * v, float v_min, float v_max, const char * format, float power) {
    return ImGui::VSliderFloat(label, toImVal(size), v, v_min, v_max, format, power);
}

bool igVSliderInt(const char * label, const CImVec2 * size, int * v, int v_min, int v_max, const char * format) {
    return ImGui::VSliderInt(label, toImVal(size), v, v_min, v_max, format);
}

bool igVSliderScalar(const char * label, const CImVec2 * size, CImGuiDataType data_type, void * p_data, const void * p_min, const void * p_max, const char * format, float power) {
    return ImGui::VSliderScalar(label, toImVal(size), data_type, p_data, p_min, p_max, format, power);
}


bool igInputText(const char * label, char * buf, size_t buf_size, CImGuiInputTextFlags flags, CImGuiInputTextCallback callback, void * user_data) {
    return ImGui::InputText(label, buf, buf_size, flags, callback, user_data);
}

bool igInputTextMultiline(const char * label, char * buf, size_t buf_size, const CImVec2 * size, CImGuiInputTextFlags flags, CImGuiInputTextCallback callback, void * user_data) {
    return ImGui::InputTextMultiline(label, buf, buf_size, toImVal(size), flags, callback, user_data);
}

bool igInputTextWithHint(const char * label, const char * hint, char * buf, size_t buf_size, CImGuiInputTextFlags flags, CImGuiInputTextCallback callback, void * user_data) {
    return ImGui::InputTextWithHint(label, hint, buf, buf_size, flags, callback, user_data);
}

bool igInputFloat(const char * label, float * v, float step, float step_fast, const char * format, CImGuiInputTextFlags flags) {
    return ImGui::InputFloat(label, v, step, step_fast, format, flags);
}

bool igInputFloat2(const char * label, float v[2], const char * format, CImGuiInputTextFlags flags) {
    return ImGui::InputFloat2(label, v, format, flags);
}

bool igInputFloat3(const char * label, float v[3], const char * format, CImGuiInputTextFlags flags) {
    return ImGui::InputFloat3(label, v, format, flags);
}

bool igInputFloat4(const char * label, float v[4], const char * format, CImGuiInputTextFlags flags) {
    return ImGui::InputFloat4(label, v, format, flags);
}

bool igInputInt(const char * label, int * v, int step, int step_fast, CImGuiInputTextFlags flags) {
    return ImGui::InputInt(label, v, step, step_fast, flags);
}

bool igInputInt2(const char * label, int v[2], CImGuiInputTextFlags flags) {
    return ImGui::InputInt2(label, v, flags);
}

bool igInputInt3(const char * label, int v[3], CImGuiInputTextFlags flags) {
    return ImGui::InputInt3(label, v, flags);
}

bool igInputInt4(const char * label, int v[4], CImGuiInputTextFlags flags) {
    return ImGui::InputInt4(label, v, flags);
}

bool igInputDouble(const char * label, double * v, double step, double step_fast, const char * format, CImGuiInputTextFlags flags) {
    return ImGui::InputDouble(label, v, step, step_fast, format, flags);
}

bool igInputScalar(const char * label, CImGuiDataType data_type, void * p_data, const void * p_step, const void * p_step_fast, const char * format, CImGuiInputTextFlags flags) {
    return ImGui::InputScalar(label, data_type, p_data, p_step, p_step_fast, format, flags);
}

bool igInputScalarN(const char * label, CImGuiDataType data_type, void * p_data, int components, const void * p_step, const void * p_step_fast, const char * format, CImGuiInputTextFlags flags) {
    return ImGui::InputScalarN(label, data_type, p_data, components, p_step, p_step_fast, format, flags);
}


bool igColorEdit3(const char * label, float col[3], CImGuiColorEditFlags flags) {
    return ImGui::ColorEdit3(label, col, flags);
}

bool igColorEdit4(const char * label, float col[4], CImGuiColorEditFlags flags) {
    return ImGui::ColorEdit4(label, col, flags);
}

bool igColorPicker3(const char * label, float col[3], CImGuiColorEditFlags flags) {
    return ImGui::ColorPicker3(label, col, flags);
}

bool igColorPicker4(const char * label, float col[4], CImGuiColorEditFlags flags, const float * ref_col) {
    return ImGui::ColorPicker4(label, col, flags, ref_col);
}

bool igColorButton(const char * desc_id, const CImVec4 * col, CImGuiColorEditFlags flags, const CImVec2 * size) {
    return ImGui::ColorButton(desc_id, toImVal(col), flags, toImVal(size));
}

void igSetColorEditOptions(CImGuiColorEditFlags flags) {
    ImGui::SetColorEditOptions(flags);
}


bool igTreeNode(const char * label) {
    return ImGui::TreeNode(label);
}

bool igTreeNodeString(const char * str_id, const char * fmt, va_list args) {
    return ImGui::TreeNodeV(str_id, fmt, args);
}

bool igTreeNodePointer(const void * ptr_id, const char * fmt, va_list args) {
    return ImGui::TreeNodeV(ptr_id, fmt, args);
}

bool igTreeNodeEx(const char * label, CImGuiTreeNodeFlags flags) {
    return ImGui::TreeNodeEx(label, flags);
}

bool igTreeNodeExString(const char * str_id, CImGuiTreeNodeFlags flags, const char * fmt, va_list args) {
    return ImGui::TreeNodeExV(str_id, flags, fmt, args);
}

bool igTreeNodeExPointer(const void * ptr_id, CImGuiTreeNodeFlags flags, const char * fmt, va_list args) {
    return ImGui::TreeNodeExV(ptr_id, flags, fmt, args);
}

void igTreePushString(const char * str_id) {
    ImGui::TreePush(str_id);
}

void igTreePushPointer(const void * ptr_id) {
    ImGui::TreePush(ptr_id);
}

void igTreePop() {
    ImGui::TreePop();
}

float igGetTreeNodeToLabelSpacing() {
    return ImGui::GetTreeNodeToLabelSpacing();
}

bool igCollapsingHeader(const char * label, CImGuiTreeNodeFlags flags) {
    return ImGui::CollapsingHeader(label, flags);
}

bool igCollapsingHeaderCloseButton(const char * label, bool * p_open, CImGuiTreeNodeFlags flags) {
    return ImGui::CollapsingHeader(label, p_open, flags);
}

void igSetNextItemOpen(bool is_open, CImGuiCond cond) {
    ImGui::SetNextItemOpen(is_open, cond);
}


bool igSelectable(const char * label, bool selected, CImGuiSelectableFlags flags, const CImVec2 * size) {
    return ImGui::Selectable(label, selected, flags, toImVal(size));
}

bool igSelectablePointer(const char * label, bool * p_selected, CImGuiSelectableFlags flags, const CImVec2 * size) {
    return ImGui::Selectable(label, p_selected, flags, toImVal(size));
}


bool igListBox(const char * label, int * current_item, const char * const items[], int items_count, int height_in_items) {
    return ImGui::ListBox(label, current_item, items, items_count, height_in_items);
}

bool igListBoxGetter(const char * label, int * current_item, bool (*items_getter)(void * data, int idx, const char ** out_text), void * data, int items_count, int height_in_items) {
    return ImGui::ListBox(label, current_item, items_getter, data, items_count, height_in_items);
}

bool igListBoxHeader(const char * label, const CImVec2 * size) {
    return ImGui::ListBoxHeader(label, toImVal(size));
}

bool igListBoxHeaderCount(const char * label, int items_count, int height_in_items) {
    return ImGui::ListBoxHeader(label, items_count, height_in_items);
}

void igListBoxFooter() {
    ImGui::ListBoxFooter();
}


void igPlotLines(const char * label, const float * values, int values_count, int values_offset, const char * overlay_text, float scale_min, float scale_max, CImVec2 * graph_size, int stride) {
    ImGui::PlotLines(label, values, values_count, values_offset, overlay_text, scale_min, scale_max, toImVal(graph_size), stride);
}

void igPlotLinesGetter(const char * label, float(*values_getter)(void * data, int idx), void * data, int values_count, int values_offset, const char * overlay_text, float scale_min, float scale_max, CImVec2 * graph_size) {
    ImGui::PlotLines(label, values_getter, data, values_count, values_offset, overlay_text, scale_min, scale_max, toImVal(graph_size));
}

void igPlotHistogram(const char * label, const float * values, int values_count, int values_offset, const char * overlay_text, float scale_min, float scale_max, CImVec2 * graph_size, int stride) {
    ImGui::PlotHistogram(label, values, values_count, values_offset, overlay_text, scale_min, scale_max, toImVal(graph_size), stride);
}

void igPlotHistogramGetter(const char * label, float(*values_getter)(void * data, int idx), void * data, int values_count, int values_offset, const char * overlay_text, float scale_min, float scale_max, CImVec2 * graph_size) {
    ImGui::PlotHistogram(label, values_getter, data, values_count, values_offset, overlay_text, scale_min, scale_max, toImVal(graph_size));
}


void igValueBool(const char * prefix, bool b) {
    ImGui::Value(prefix, b);
}

void igValueInt(const char * prefix, int v) {
    ImGui::Value(prefix, v);
}

void igValueUnsigned(const char * prefix, unsigned int v) {
    ImGui::Value(prefix, v);
}

void igValueFloat(const char * prefix, float v, const char * float_format) {
    ImGui::Value(prefix, v, float_format);
}


bool igBeginMenuBar() {
    return ImGui::BeginMenuBar();
}

void igEndMenuBar() {
    ImGui::EndMenuBar();
}

bool igBeginMainMenuBar() {
    return ImGui::BeginMainMenuBar();
}

void igEndMainMenuBar() {
    ImGui::EndMainMenuBar();
}

bool igBeginMenu(const char * label, bool enabled) {
    return ImGui::BeginMenu(label, enabled);
}

void igEndMenu() {
    ImGui::EndMenu();
}

bool igMenuItem(const char * label, const char * shortcut, bool selected, bool enabled) {
    return ImGui::MenuItem(label, shortcut, selected, enabled);
}

bool igMenuItemPointer(const char * label, const char * shortcut, bool * p_selected, bool enabled) {
    return ImGui::MenuItem(label, shortcut, p_selected, enabled);
}


void igBeginTooltip() {
    ImGui::BeginTooltip();
}

void igEndTooltip() {
    ImGui::EndTooltip();
}

void igSetTooltip(const char * fmt, va_list args) {
    ImGui::SetTooltipV(fmt, args);
}


void igOpenPopup(const char * str_id) {
    ImGui::OpenPopup(str_id);
}

bool igBeginPopup(const char * str_id, CImGuiWindowFlags flags) {
    return ImGui::BeginPopup(str_id, flags);
}

bool igBeginPopupContextItem(const char * str_id, CImGuiMouseButton mouse_button) {
    return ImGui::BeginPopupContextItem(str_id, mouse_button);
}

bool igBeginPopupContextWindow(const char * str_id, CImGuiMouseButton mouse_button, bool also_over_items) {
    return ImGui::BeginPopupContextWindow(str_id, mouse_button, also_over_items);
}

bool igBeginPopupContextVoid(const char * str_id, CImGuiMouseButton mouse_button) {
    return ImGui::BeginPopupContextVoid(str_id, mouse_button);
}

bool igBeginPopupModal(const char * name, bool * p_open, CImGuiWindowFlags flags) {
    return ImGui::BeginPopupModal(name, p_open, flags);
}

void igEndPopup() {
    ImGui::EndPopup();
}

bool igOpenPopupOnItemClick(const char * str_id, CImGuiMouseButton mouse_button) {
    return ImGui::OpenPopupOnItemClick(str_id, mouse_button);
}

bool igIsPopupOpen(const char * str_id) {
    return ImGui::IsPopupOpen(str_id);
}

void igCloseCurrentPopup() {
    ImGui::CloseCurrentPopup();
}


void igColumns(int count, const char * id, bool border) {
    ImGui::Columns(count, id, border);
}

void igNextColumn() {
    ImGui::NextColumn();
}

int igGetColumnIndex() {
    return ImGui::GetColumnIndex();
}

float igGetColumnWidth(int column_index) {
    return ImGui::GetColumnWidth(column_index);
}

void igSetColumnWidth(int column_index, float width) {
    ImGui::SetColumnWidth(column_index, width);
}

float igGetColumnOffset(int column_index) {
    return ImGui::GetColumnOffset();
}

void igSetColumnOffset(int column_index, float offset_x) {
    ImGui::SetColumnOffset(column_index, offset_x);
}

int igGetColumnsCount() {
    return ImGui::GetColumnsCount();
}


bool igBeginTabBar(const char * str_id, CImGuiTabBarFlags flags) {
    return ImGui::BeginTabBar(str_id, flags);
}

void igEndTabBar() {
    ImGui::EndTabBar();
}

bool igBeginTabItem(const char * label, bool * p_open, CImGuiTabItemFlags flags) {
    return ImGui::BeginTabItem(label, p_open, flags);
}

void igEndTabItem() {
    ImGui::EndTabItem();
}

void igSetTabItemClosed(const char * tab_or_docked_window_label) {
    ImGui::SetTabItemClosed(tab_or_docked_window_label);
}


void igDockSpace(CImGuiID id, const CImVec2 * size, CImGuiDockNodeFlags flags, const CImGuiWindowClass * window_class) {
    ImGui::DockSpace(id, toImVal(size), flags, toIm(window_class));
}

CImGuiID igDockSpaceOverViewport(CImGuiViewport * viewport, CImGuiDockNodeFlags flags, const CImGuiWindowClass * window_class) {
    return ImGui::DockSpaceOverViewport(toIm(viewport), flags, toIm(window_class));
}

void igSetNextWindowDockID(CImGuiID dock_id, CImGuiCond cond) {
    ImGui::SetNextWindowDockID(dock_id, cond);
}

void igSetNextWindowClass(const CImGuiWindowClass* window_class) {
    ImGui::SetNextWindowClass(toIm(window_class));
}

CImGuiID igGetWindowDockID() {
    return ImGui::GetWindowDockID();
}

bool igIsWindowDocked() {
    return ImGui::IsWindowDocked();
}


void igLogToTTY(int auto_open_depth) {
    ImGui::LogToTTY(auto_open_depth);
}

void igLogToFile(int auto_open_depth, const char * filename) {
    ImGui::LogToFile(auto_open_depth, filename);
}

void igLogToClipboard(int auto_open_depth) {
    ImGui::LogToClipboard(auto_open_depth);
}

void igLogFinish() {
    ImGui::LogFinish();
}

void igLogButtons() {
    ImGui::LogButtons();
}


bool igBeginDragDropSource(CImGuiDragDropFlags flags) {
    return ImGui::BeginDragDropSource(flags);
}

bool igSetDragDropPayload(const char * type, const void * data, size_t sz, CImGuiCond cond) {
    return ImGui::SetDragDropPayload(type, data, sz, cond);
}

void igEndDragDropSource() {
    ImGui::EndDragDropSource();
}

bool igBeginDragDropTarget() {
    return ImGui::BeginDragDropTarget();
}

const CImGuiPayload * igAcceptDragDropPayload(const char * type, CImGuiDragDropFlags flags) {
    return toCIm(ImGui::AcceptDragDropPayload(type, flags));
}

void igEndDragDropTarget() {
    ImGui::EndDragDropTarget();
}

const CImGuiPayload * igGetDragDropPayload() {
    return toCIm(ImGui::GetDragDropPayload());
}


void igPushClipRect(const CImVec2 * clip_rect_min, const CImVec2 * clip_rect_max, bool intersect_with_current_clip_rect) {
    ImGui::PushClipRect(toImVal(clip_rect_min), toImVal(clip_rect_max), intersect_with_current_clip_rect);
}

void igPopClipRect() {
    ImGui::PopClipRect();
}


void igSetItemDefaultFocus() {
    ImGui::SetItemDefaultFocus();
}

void igSetKeyboardFocusHere(int offset) {
    ImGui::SetKeyboardFocusHere(offset);
}


bool igIsItemHovered(CImGuiHoveredFlags flags) {
    return ImGui::IsItemHovered(flags);
}

bool igIsItemActive() {
    return ImGui::IsItemActive();
}

bool igIsItemFocused() {
    return ImGui::IsItemFocused();
}

bool igIsItemClicked(CImGuiMouseButton mouse_button) {
    return ImGui::IsItemClicked();
}

bool igIsItemVisible() {
    return ImGui::IsItemVisible();
}

bool igIsItemEdited() {
    return ImGui::IsItemEdited();
}

bool igIsItemActivated() {
    return ImGui::IsItemActivated();
}

bool igIsItemDeactivated() {
    return ImGui::IsItemDeactivated();
}

bool igIsItemDeactivatedAfterEdit() {
    return ImGui::IsItemDeactivatedAfterEdit();
}

bool igIsItemToggledOpen() {
    return ImGui::IsItemToggledOpen();
}

bool igIsAnyItemHovered() {
    return ImGui::IsAnyItemHovered();
}

bool igIsAnyItemActive() {
    return ImGui::IsAnyItemActive();
}

bool igIsAnyItemFocused() {
    return ImGui::IsAnyItemFocused();
}

CImVec2 * igGetItemRectMin() {
    return toCImPtr(ImGui::GetItemRectMin());
}

CImVec2 * igGetItemRectMax() {
    return toCImPtr(ImGui::GetItemRectMax());
}

CImVec2 * igGetItemRectSize() {
    return toCImPtr(ImGui::GetItemRectSize());
}

void igSetItemAllowOverlap() {
    ImGui::SetItemAllowOverlap();
}


bool igIsRectWithSizeVisible(const CImVec2 * size) {
    return ImGui::IsRectVisible(toImVal(size));
}

bool igIsRectVisible(const CImVec2 * rect_min, const CImVec2 * rect_max) {
    return ImGui::IsRectVisible(toImVal(rect_min), toImVal(rect_max));
}

double igGetTime() {
    return ImGui::GetTime();
}

int igGetFrameCount() {
    return ImGui::GetFrameCount();
}

CImDrawList * igGetBackgroundDrawList() {
    return toCIm(ImGui::GetBackgroundDrawList());
}

CImDrawList * igGetForegroundDrawList() {
    return toCIm(ImGui::GetForegroundDrawList());
}

CImDrawList * igGetBackgroundDrawListViewport(CImGuiViewport * viewport) {
    return toCIm(ImGui::GetBackgroundDrawList(toIm(viewport)));
}

CImDrawList * igGetForegroundDrawListViewport(CImGuiViewport * viewport) {
    return toCIm(ImGui::GetForegroundDrawList(toIm(viewport)));
}

CImDrawListSharedData * igGetDrawListSharedData() {
    return toCIm(ImGui::GetDrawListSharedData());
}

const char * igGetStyleColorName(CImGuiCol idx) {
    return ImGui::GetStyleColorName(idx);
}

void igSetStateStorage(CImGuiStorage * storage) {
    ImGui::SetStateStorage(toIm(storage));
}

CImGuiStorage * igGetStateStorage() {
    return toCIm(ImGui::GetStateStorage());
}

void igCalcListClipping(int items_count, float items_height, int * out_items_display_start, int * out_items_display_end) {
    ImGui::CalcListClipping(items_count, items_height, out_items_display_start, out_items_display_end);
}

bool igBeginChildFrame(CImGuiID id, const CImVec2 * size, CImGuiWindowFlags flags) {
    return ImGui::BeginChildFrame(id, toImVal(size), flags);
}

void igEndChildFrame() {
    ImGui::EndChildFrame();
}


CImVec2 * igCalcTextSize(const char * text, const char * text_end, bool hide_text_after_double_hash, float wrap_width) {
    return toCImPtr(ImGui::CalcTextSize(text, text_end, hide_text_after_double_hash, wrap_width));
}


CImVec4 * igColorConvertU32ToFloat4(CImU32 in) {
    return toCImPtr(ImGui::ColorConvertU32ToFloat4(in));
}

CImU32 igColorConvertFloat4ToU32(const CImVec4 * in) {
    return ImGui::ColorConvertFloat4ToU32(toImVal(in));
}

void igColorConvertRGBtoHSV(float r, float g, float b, float * out_h, float * out_s, float * out_v) {
    ImGui::ColorConvertRGBtoHSV(r, g, b, *out_h, *out_s, *out_v);
}

void igColorConvertHSVtoRGB(float h, float s, float v, float * out_r, float * out_g, float * out_b) {
    ImGui::ColorConvertHSVtoRGB(h, s, v, *out_r, *out_g, *out_b);
}


int igGetKeyIndex(CImGuiKey imgui_key) {
    return ImGui::GetKeyIndex(imgui_key);
}

bool igIsKeyDown(int user_key_index) {
    return ImGui::IsKeyDown(user_key_index);
}

bool igIsKeyPressed(int user_key_index, bool repeat) {
    return ImGui::IsKeyPressed(user_key_index, repeat);
}

bool igIsKeyReleased(int user_key_index) {
    return ImGui::IsKeyReleased(user_key_index);
}

int igGetKeyPressedAmount(int key_index, float repeat_delay, float rate) {
    return ImGui::GetKeyPressedAmount(key_index, repeat_delay, rate);
}

void igCaptureKeyboardFromApp(bool want_capture_keyboard_value) {
    ImGui::CaptureKeyboardFromApp(want_capture_keyboard_value);
}


bool igIsMouseDown(CImGuiMouseButton button) {
    return ImGui::IsMouseDown(button);
}

bool igIsMouseClicked(CImGuiMouseButton button, bool repeat) {
    return ImGui::IsMouseClicked(button, repeat);
}

bool igIsMouseReleased(CImGuiMouseButton button) {
    return ImGui::IsMouseReleased(button);
}

bool igIsMouseDoubleClicked(CImGuiMouseButton button) {
    return ImGui::IsMouseDoubleClicked(button);
}

bool igIsMouseHoveringRect(const CImVec2 * r_min, const CImVec2 * r_max, bool clip) {
    return ImGui::IsMouseHoveringRect(toImVal(r_min), toImVal(r_max), clip);
}

bool igIsMousePosValid(const CImVec2 * mouse_pos) {
    return ImGui::IsMousePosValid(toIm(mouse_pos));
}

bool igIsAnyMouseDown() {
    return ImGui::IsAnyMouseDown();
}

CImVec2 * igGetMousePos() {
    return toCImPtr(ImGui::GetMousePos());
}

CImVec2 * igGetMousePosOnOpeningCurrentPopup() {
    return toCImPtr(ImGui::GetMousePosOnOpeningCurrentPopup());
}

bool igIsMouseDragging(CImGuiMouseButton button, float lock_threshold) {
    return ImGui::IsMouseDragging(button, lock_threshold);
}

CImVec2 * igGetMouseDragDelta(CImGuiMouseButton button, float lock_threshold) {
    return toCImPtr(ImGui::GetMouseDragDelta(button, lock_threshold));
}

void igResetMouseDragDelta(CImGuiMouseButton button) {
    ImGui::ResetMouseDragDelta(button);
}

CImGuiMouseCursor igGetMouseCursor() {
    return ImGui::GetMouseCursor();
}

void igSetMouseCursor(CImGuiMouseCursor cursor_type) {
    ImGui::SetMouseCursor(cursor_type);
}

void igCaptureMouseFromApp(bool want_capture_mouse_value) {
    ImGui::CaptureMouseFromApp(want_capture_mouse_value);
}


const char * igGetClipboardText() {
    return ImGui::GetClipboardText();
}

void igSetClipboardText(const char * text) {
    ImGui::SetClipboardText(text);
}


void igLoadIniSettingsFromDisk(const char * ini_filename) {
    ImGui::LoadIniSettingsFromDisk(ini_filename);
}

void igLoadIniSettingsFromMemory(const char * ini_data, size_t ini_size) {
    ImGui::LoadIniSettingsFromMemory(ini_data, ini_size);
}

void igSaveIniSettingsToDisk(const char * ini_filename) {
    ImGui::SaveIniSettingsToDisk(ini_filename);
}

const char * igSaveIniSettingsToMemory(size_t * out_ini_size) {
    return ImGui::SaveIniSettingsToMemory(out_ini_size);
}


void igSetAllocatorFunctions(void * (*alloc_func)(size_t sz, void * user_data), void (*free_func)(void * ptr, void * user_data), void * user_data) {
    ImGui::SetAllocatorFunctions(alloc_func, free_func, user_data);
}

void * igMemAlloc(size_t size) {
    return ImGui::MemAlloc(size);
}

void igMemFree(void * ptr) {
    ImGui::MemFree(ptr);
}


CImGuiPlatformIO * igGetPlatformIO() {
    return toCIm(&ImGui::GetPlatformIO());
}

CImGuiViewport * igGetMainViewport() {
    return toCIm(ImGui::GetMainViewport());
}

void igUpdatePlatformWindows() {
    ImGui::UpdatePlatformWindows();
}

void igRenderPlatformWindowsDefault(void * platform_render_arg, void * renderer_render_arg) {
    ImGui::RenderPlatformWindowsDefault(platform_render_arg, renderer_render_arg);
}

void igDestroyPlatformWindows() {
    ImGui::DestroyPlatformWindows();
}

CImGuiViewport * igFindViewportByID(CImGuiID id) {
    return toCIm(ImGui::FindViewportByID(id));
}

CImGuiViewport * igFindViewportByPlatformHandle(void * platform_handle) {
    return toCIm(ImGui::FindViewportByPlatformHandle(platform_handle));
}


CImDrawChannel * ig_CImDrawChannel_init() {
    return toCIm(new ImDrawChannel);
}

void ig_CImDrawChannel_deinit(CImDrawChannel * ptr) {
    delete toIm(ptr);
}



CImDrawCmd * ig_CImDrawCmd_init() {
    return toCIm(new ImDrawCmd);
}

void ig_CImDrawCmd_deinit(CImDrawCmd * ptr) {
    delete toIm(ptr);
}



CImDrawData * ig_CImDrawData_init() {
    return toCIm(new ImDrawData);
}

void ig_CImDrawData_deinit(CImDrawData * ptr) {
    delete toIm(ptr);
}

void ig_CImDrawData_Clear(CImDrawData * ptr) {
    toIm(ptr)->Clear();
}

void ig_CImDrawData_DeIndexAllBuffers(CImDrawData * ptr) {
    toIm(ptr)->DeIndexAllBuffers();
}

void ig_CImDrawData_ScaleClipRects(CImDrawData * ptr, const CImVec2 * fb_scale) {
    toIm(ptr)->ScaleClipRects(toImVal(fb_scale));
}



CImDrawListSplitter * ig_CImDrawListSplitter_init() {
    return toCIm(new ImDrawListSplitter);
}

void ig_CImDrawListSplitter_deinit(CImDrawListSplitter * ptr) {
    delete toIm(ptr);
}

void ig_CImDrawListSplitter_Clear(CImDrawListSplitter * ptr) {
    toIm(ptr)->Clear();
}

void ig_CImDrawListSplitter_ClearFreeMemory(CImDrawListSplitter * ptr) {
    toIm(ptr)->ClearFreeMemory();
}

void ig_CImDrawListSplitter_Split(CImDrawListSplitter * ptr, CImDrawList * draw_list, int count) {
    toIm(ptr)->Split(toIm(draw_list), count);
}

void ig_CImDrawListSplitter_Merge(CImDrawListSplitter * ptr, CImDrawList * draw_list) {
    toIm(ptr)->Merge(toIm(draw_list));
}

void ig_CImDrawListSplitter_SetCurrentChannel(CImDrawListSplitter * ptr, CImDrawList * draw_list, int channel_idx) {
    toIm(ptr)->SetCurrentChannel(toIm(draw_list), channel_idx);
}




CImDrawList * ig_CImDrawList_init(const CImDrawListSharedData * shared_data) {
    return toCIm(new ImDrawList(toIm(shared_data)));
}

void ig_CImDrawList_deinit(CImDrawList * ptr) {
    delete toIm(ptr);
}

void ig_CImDrawList_PushClipRectFullScreen(CImDrawList * ptr) {
    toIm(ptr)->PushClipRectFullScreen();
}

void ig_CImDrawList_PopClipRect(CImDrawList * ptr) {
    toIm(ptr)->PopClipRect();
}

void ig_CImDrawList_PushTextureID(CImDrawList * ptr, CImTextureID texture_id) {
    toIm(ptr)->PushTextureID(texture_id);
}

void ig_CImDrawList_PopTextureID(CImDrawList * ptr) {
    toIm(ptr)->PopTextureID();
}

CImVec2 * ig_CImDrawList_GetClipRectMin(const CImDrawList * ptr) {
    return toCImPtr(toIm(ptr)->GetClipRectMin());
}

CImVec2 * ig_CImDrawList_GetClipRectMax(const CImDrawList * ptr) {
    return toCImPtr(toIm(ptr)->GetClipRectMax());
}


void ig_CImDrawList_AddLine(CImDrawList * ptr, const CImVec2 * p1, const CImVec2 * p2, CImU32 col, float thickness) {
    toIm(ptr)->AddLine(toImVal(p1), toImVal(p2), col, thickness);
}

void ig_CImDrawList_AddRect(CImDrawList * ptr, const CImVec2 * p_min, const CImVec2 * p_max, CImU32 col, float rounding, CImDrawCornerFlags rounding_corners, float thickness) {
    toIm(ptr)->AddRect(toImVal(p_min), toImVal(p_max), col, rounding, rounding_corners, thickness);
}

void ig_CImDrawList_AddRectFilled(CImDrawList * ptr, const CImVec2 * p_min, const CImVec2 * p_max, CImU32 col, float rounding, CImDrawCornerFlags rounding_corners) {
    toIm(ptr)->AddRectFilled(toImVal(p_min), toImVal(p_max), col, rounding, rounding_corners);
}

void ig_CImDrawList_AddRectFilledMultiColor(CImDrawList * ptr, const CImVec2 * p_min, const CImVec2 * p_max, CImU32 col_upr_left, CImU32 col_upr_right, CImU32 col_bot_right, CImU32 col_bot_left) {
    toIm(ptr)->AddRectFilledMultiColor(toImVal(p_min), toImVal(p_max), col_upr_left, col_upr_right, col_bot_right, col_bot_left);
}

void ig_CImDrawList_AddQuad(CImDrawList * ptr, const CImVec2 * p1, const CImVec2 * p2, const CImVec2 * p3, const CImVec2 * p4, CImU32 col, float thickness) {
    toIm(ptr)->AddQuad(toImVal(p1), toImVal(p2), toImVal(p3), toImVal(p4), col, thickness);
}

void ig_CImDrawList_AddQuadFilled(CImDrawList * ptr, const CImVec2 * p1, const CImVec2 * p2, const CImVec2 * p3, const CImVec2 * p4, CImU32 col) {
    toIm(ptr)->AddQuadFilled(toImVal(p1), toImVal(p2), toImVal(p3), toImVal(p4), col);
}

void ig_CImDrawList_AddTriangle(CImDrawList * ptr, const CImVec2 * p1, const CImVec2 * p2, const CImVec2 * p3, CImU32 col, float thickness) {
    toIm(ptr)->AddTriangle(toImVal(p1), toImVal(p2), toImVal(p3), col, thickness);
}

void ig_CImDrawList_AddTriangleFilled(CImDrawList * ptr, const CImVec2 * p1, const CImVec2 * p2, const CImVec2 * p3, CImU32 col) {
    toIm(ptr)->AddTriangleFilled(toImVal(p1), toImVal(p2), toImVal(p3), col);
}

void ig_CImDrawList_AddCircle(CImDrawList * ptr, const CImVec2 * center, float radius, CImU32 col, int num_segments, float thickness) {
    toIm(ptr)->AddCircle(toImVal(center), radius, col, num_segments, thickness);
}

void ig_CImDrawList_AddCircleFilled(CImDrawList * ptr, const CImVec2 * center, float radius, CImU32 col, int num_segments) {
    toIm(ptr)->AddCircleFilled(toImVal(center), radius, col, num_segments);
}

void ig_CImDrawList_AddNgon(CImDrawList * ptr, const CImVec2 * center, float radius, CImU32 col, int num_segments, float thickness) {
    toIm(ptr)->AddNgon(toImVal(center), radius, col, num_segments, thickness);
}

void ig_CImDrawList_AddNgonFilled(CImDrawList * ptr, const CImVec2 * center, float radius, CImU32 col, int num_segments) {
    toIm(ptr)->AddNgonFilled(toImVal(center), radius, col, num_segments);
}

void ig_CImDrawList_AddText(CImDrawList * ptr, const CImVec2 * pos, CImU32 col, const char * text_begin, const char * text_end) {
    toIm(ptr)->AddText(toImVal(pos), col, text_begin, text_end);
}

void ig_CImDrawList_AddTextWithFont(CImDrawList * ptr, const CImFont * font, float font_size, const CImVec2 * pos, CImU32 col, const char * text_begin, const char * text_end, float wrap_width, const CImVec4 * cpu_fine_clip_rect) {
    toIm(ptr)->AddText(toIm(font), font_size, toImVal(pos), col, text_begin, text_end);
}

void ig_CImDrawList_AddPolyline(CImDrawList * ptr, const CImVec2 ** points, int num_points, CImU32 col, bool closed, float thickness) {
    toIm(ptr)->AddPolyline(toIm(*points), num_points, col, closed, thickness);
}

void ig_CImDrawList_AddConvexPolyFilled(CImDrawList * ptr, const CImVec2 ** points, int num_points, CImU32 col) {
    toIm(ptr)->AddConvexPolyFilled(toIm(*points), num_points, col);
}

void ig_CImDrawList_AddBezierCurve(CImDrawList * ptr, const CImVec2 * p1, const CImVec2 * p2, const CImVec2 * p3, const CImVec2 * p4, CImU32 col, float thickness, int num_segments) {
    toIm(ptr)->AddBezierCurve(toImVal(p1), toImVal(p2), toImVal(p3), toImVal(p4), col, thickness, num_segments);
}


void ig_CImDrawList_AddImage(CImDrawList * ptr, CImTextureID user_texture_id, const CImVec2 * p_min, const CImVec2 * p_max, const CImVec2 * uv_min, const CImVec2 * uv_max, CImU32 col) {
    toIm(ptr)->AddImage(user_texture_id, toImVal(p_min), toImVal(p_max), toImVal(uv_min), toImVal(uv_max), col);
}

void ig_CImDrawList_AddImageQuad(CImDrawList * ptr, CImTextureID user_texture_id, const CImVec2 * p1, const CImVec2 * p2, const CImVec2 * p3, const CImVec2 * p4, const CImVec2 * uv1, const CImVec2 * uv2, const CImVec2 * uv3, const CImVec2 * uv4, CImU32 col) {
    toIm(ptr)->AddImageQuad(user_texture_id, toImVal(p1), toImVal(p2), toImVal(p3), toImVal(p4), toImVal(uv1), toImVal(uv2), toImVal(uv3), toImVal(uv4), col);
}

void ig_CImDrawList_AddImageRounded(CImDrawList * ptr, CImTextureID user_texture_id, const CImVec2 * p_min, const CImVec2 * p_max, const CImVec2 * uv_min, const CImVec2 * uv_max, CImU32 col, float rounding, CImDrawCornerFlags rounding_corners) {
    toIm(ptr)->AddImageRounded(user_texture_id, toImVal(p_min), toImVal(p_max), toImVal(uv_min), toImVal(uv_max), col, rounding, rounding_corners);
}


void ig_CImDrawList_PathClear(CImDrawList * ptr) {
    toIm(ptr)->PathClear();
}

void ig_CImDrawList_PathLineTo(CImDrawList * ptr, const CImVec2 * pos) {
    toIm(ptr)->PathLineTo(toImVal(pos));
}

void ig_CImDrawList_PathLineToMergeDuplicate(CImDrawList * ptr, const CImVec2 * pos) {
    toIm(ptr)->PathLineToMergeDuplicate(toImVal(pos));
}

void ig_CImDrawList_PathFillConvex(CImDrawList * ptr, CImU32 col) {
    toIm(ptr)->PathFillConvex(col);
}

void ig_CImDrawList_PathStroke(CImDrawList * ptr, CImU32 col, bool closed, float thickness) {
    toIm(ptr)->PathStroke(col, closed, thickness);
}

void ig_CImDrawList_PathArcTo(CImDrawList * ptr, const CImVec2 * center, float radius, float a_min, float a_max, int num_segments) {
    toIm(ptr)->PathArcTo(toImVal(center), radius, a_min, a_max, num_segments);
}

void ig_CImDrawList_PathArcToFast(CImDrawList * ptr, const CImVec2 * center, float radius, int a_min_of_12, int a_max_of_12) {
    toIm(ptr)->PathArcToFast(toImVal(center), radius, a_min_of_12, a_max_of_12);
}

void ig_CImDrawList_PathBezierCurveTo(CImDrawList * ptr, const CImVec2 * p2, const CImVec2 * p3, const CImVec2 * p4, int num_segments) {
    toIm(ptr)->PathBezierCurveTo(toImVal(p2), toImVal(p3), toImVal(p4), num_segments);
}

void ig_CImDrawList_PathRect(CImDrawList * ptr, const CImVec2 * rect_min, const CImVec2 * rect_max, float rounding, CImDrawCornerFlags rounding_corners) {
    toIm(ptr)->PathRect(toImVal(rect_min), toImVal(rect_max), rounding, rounding_corners);
}


void ig_CImDrawList_AddCallback(CImDrawList * ptr, CImDrawCallback callback, void * callback_data) {
    toIm(ptr)->AddCallback(callback, callback_data);
}

void ig_CImDrawList_AddDrawCmd(CImDrawList * ptr) {
    toIm(ptr)->AddDrawCmd();
}

CImDrawList * ig_CImDrawList_CloneOutput(const CImDrawList * ptr) {
    return toCIm(toIm(ptr)->CloneOutput());
}


void ig_CImDrawList_ChannelsSplit(CImDrawList * ptr, int count) {
    toIm(ptr)->ChannelsSplit(count);
}

void ig_CImDrawList_ChannelsMerge(CImDrawList * ptr) {
    toIm(ptr)->ChannelsMerge();
}

void ig_CImDrawList_ChannelsSetCurrent(CImDrawList * ptr, int n) {
    toIm(ptr)->ChannelsSetCurrent(n);
}



CImDrawListSharedData * ig_CImDrawListSharedData_init() {
    return toCIm(new ImDrawListSharedData);
}

void ig_CImDrawListSharedData_deinit(CImDrawListSharedData * ptr) {
    delete toIm(ptr);
}

void ig_CImDrawListSharedData_SetCircleSegmentMaxError(CImDrawListSharedData * ptr, float max_error) {
    toIm(ptr)->SetCircleSegmentMaxError(max_error);
}



CImDrawVert * ig_CImDrawVert_init() {
    return toCIm(new ImDrawVert);
}

void ig_CImDrawVert_deinit(CImDrawVert * ptr) {
    delete toIm(ptr);
}



CImFont * ig_CImFont_init() {
    return toCIm(new ImFont);
}

void ig_CImFont_deinit(CImFont * ptr) {
    delete toIm(ptr);
}

const CImFontGlyph * ig_CImFont_FindGlyph(const CImFont * ptr, CImWchar c) {
    return toCIm(toIm(ptr)->FindGlyph(c));
}

const CImFontGlyph * ig_CImFont_FindGlyphNoFallback(const CImFont * ptr, CImWchar c) {
    return toCIm(toIm(ptr)->FindGlyphNoFallback(c));
}

float ig_CImFont_GetCharAdvance(const CImFont * ptr, CImWchar c) {
    return toIm(ptr)->GetCharAdvance(c);
}

bool ig_CImFont_IsLoaded(const CImFont * ptr) {
    return toIm(ptr)->IsLoaded();
}

const char * ig_CImFont_GetDebugName(const CImFont * ptr) {
    return toIm(ptr)->GetDebugName();
}


CImVec2 * ig_CImFont_CalcTextSizeA(const CImFont * ptr, float size, float max_width, float wrap_width, const char * text_begin, const char * text_end, const char ** remaining) {
    return toCImPtr(toIm(ptr)->CalcTextSizeA(size, max_width, wrap_width, text_begin, text_end, remaining));
}

const char * ig_CImFont_CalcWordWrapPositionA(const CImFont * ptr, float scale, const char * text, const char * text_end, float wrap_width) {
    return toIm(ptr)->CalcWordWrapPositionA(scale, text, text_end, wrap_width);
}

void ig_CImFont_RenderChar(const CImFont * ptr, CImDrawList * draw_list, float size, const CImVec2 * pos, CImU32 col, CImWchar c) {
    toIm(ptr)->RenderChar(toIm(draw_list), size, toImVal(pos), col, c);
}

void ig_CImFont_RenderText(const CImFont * ptr, CImDrawList * draw_list, float size, const CImVec2 * pos, CImU32 col, const CImVec4 * clip_rect, const char * text_begin, const char * text_end, float wrap_width, bool cpu_fine_clip) {
    toIm(ptr)->RenderText(toIm(draw_list), size, toImVal(pos), col, toImVal(clip_rect), text_begin, text_end, wrap_width, cpu_fine_clip);
}



CImFontAtlas * ig_CImFontAtlas_init() {
    return toCIm(new ImFontAtlas);
}

void ig_CImFontAtlas_deinit(CImFontAtlas * ptr) {
    delete toIm(ptr);
}

CImFont * ig_CImFontAtlas_AddFont(CImFontAtlas * ptr, const CImFontConfig * font_cfg) {
    return toCIm(toIm(ptr)->AddFont(toIm(font_cfg)));
}

CImFont * ig_CImFontAtlas_AddFontDefault(CImFontAtlas * ptr, const CImFontConfig * font_cfg) {
    return toCIm(toIm(ptr)->AddFontDefault(toIm(font_cfg)));
}

CImFont * ig_CImFontAtlas_AddFontFromFileTTF(CImFontAtlas * ptr, const char * filename, float size_pixels, const CImFontConfig * font_cfg, const CImWchar * glyph_ranges) {
    return toCIm(toIm(ptr)->AddFontFromFileTTF(filename, size_pixels, toIm(font_cfg), glyph_ranges));
}

CImFont * ig_CImFontAtlas_AddFontFromMemoryTTF(CImFontAtlas * ptr, void * font_data, int font_size, float size_pixels, const CImFontConfig * font_cfg, const CImWchar * glyph_ranges) {
    return toCIm(toIm(ptr)->AddFontFromMemoryTTF(font_data, font_size, size_pixels, toIm(font_cfg), glyph_ranges));
}

CImFont * ig_CImFontAtlas_AddFontFromMemoryCompressedTTF(CImFontAtlas * ptr, const void * compressed_font_data, int compressed_font_size, float size_pixels, const CImFontConfig * font_cfg, const CImWchar * glyph_ranges) {
    return toCIm(toIm(ptr)->AddFontFromMemoryCompressedTTF(compressed_font_data, compressed_font_size, size_pixels, toIm(font_cfg), glyph_ranges));
}

CImFont * ig_CImFontAtlas_AddFontFromMemoryCompressedBase85TTF(CImFontAtlas * ptr, const char * compressed_font_data_base85, float size_pixels, const CImFontConfig * font_cfg, const CImWchar * glyph_ranges) {
    return toCIm(toIm(ptr)->AddFontFromMemoryCompressedBase85TTF(compressed_font_data_base85, size_pixels, toIm(font_cfg), glyph_ranges));
}

void ig_CImFontAtlas_ClearInputData(CImFontAtlas * ptr) {
    toIm(ptr)->ClearInputData();
}

void ig_CImFontAtlas_ClearTexData(CImFontAtlas * ptr) {
    toIm(ptr)->ClearTexData();
}

void ig_CImFontAtlas_ClearFonts(CImFontAtlas * ptr) {
    toIm(ptr)->ClearFonts();
}

void ig_CImFontAtlas_Clear(CImFontAtlas * ptr) {
    toIm(ptr)->Clear();
}


bool ig_CImFontAtlas_Build(CImFontAtlas * ptr) {
    return toIm(ptr)->Build();
}

void ig_CImFontAtlas_GetTexDataAsAlpha8(CImFontAtlas * ptr, unsigned char ** out_pixels, int * out_width, int * out_height, int * out_bytes_per_pixel) {
    toIm(ptr)->GetTexDataAsAlpha8(out_pixels, out_width, out_height, out_bytes_per_pixel);
}

void ig_CImFontAtlas_GetTexDataAsRGBA32(CImFontAtlas * ptr, unsigned char ** out_pixels, int * out_width, int * out_height, int * out_bytes_per_pixel) {
    toIm(ptr)->GetTexDataAsRGBA32(out_pixels, out_width, out_height, out_bytes_per_pixel);
}

bool ig_CImFontAtlas_IsBuilt(const CImFontAtlas * ptr) {
    return toIm(ptr)->IsBuilt();
}

void ig_CImFontAtlas_SetTexID(CImFontAtlas * ptr, CImTextureID id) {
    toIm(ptr)->SetTexID(id);
}


const CImWchar * ig_CImFontAtlas_GetGlyphRangesDefault(CImFontAtlas * ptr) {
    return toIm(ptr)->GetGlyphRangesDefault();
}

const CImWchar * ig_CImFontAtlas_GetGlyphRangesKorean(CImFontAtlas * ptr) {
    return toIm(ptr)->GetGlyphRangesKorean();
}

const CImWchar * ig_CImFontAtlas_GetGlyphRangesJapanese(CImFontAtlas * ptr) {
    return toIm(ptr)->GetGlyphRangesJapanese();
}

const CImWchar * ig_CImFontAtlas_GetGlyphRangesChineseFull(CImFontAtlas * ptr) {
    return toIm(ptr)->GetGlyphRangesChineseFull();
}

const CImWchar * ig_CImFontAtlas_GetGlyphRangesChineseSimplifiedCommon(CImFontAtlas * ptr) {
    return toIm(ptr)->GetGlyphRangesChineseSimplifiedCommon();
}

const CImWchar * ig_CImFontAtlas_GetGlyphRangesCyrillic(CImFontAtlas * ptr) {
    return toIm(ptr)->GetGlyphRangesCyrillic();
}

const CImWchar * ig_CImFontAtlas_GetGlyphRangesThai(CImFontAtlas * ptr) {
    return toIm(ptr)->GetGlyphRangesThai();
}

const CImWchar * ig_CImFontAtlas_GetGlyphRangesVietnamese(CImFontAtlas * ptr) {
    return toIm(ptr)->GetGlyphRangesVietnamese();
}


int ig_CImFontAtlas_AddCustomRectRegular(CImFontAtlas * ptr, unsigned int id, int width, int height) {
    return toIm(ptr)->AddCustomRectRegular(id, width, height);
}

int ig_CImFontAtlas_AddCustomRectFontGlyph(CImFontAtlas * ptr, CImFont * font, CImWchar id, int width, int height, float advance_x, const CImVec2 * offset) {
    return toIm(ptr)->AddCustomRectFontGlyph(toIm(font), id, width, height, advance_x, toImVal(offset));
}

const CImFontAtlasCustomRect * ig_CImFontAtlas_GetCustomRectByIndex(const CImFontAtlas * ptr, int index) {
    return toCIm(toIm(ptr)->GetCustomRectByIndex(index));
}



CImFontConfig * ig_CImFontConfig_init() {
    return toCIm(new ImFontConfig);
}

void ig_CImFontConfig_deinit(CImFontConfig * ptr) {
    if (!ptr->FontDataOwnedByAtlas) delete toIm(ptr);
}



CImFontGlyphRangesBuilder * ig_CImFontGlyphRangesBuilder_init() {
    return toCIm(new ImFontGlyphRangesBuilder);
}

void ig_CImFontGlyphRangesBuilder_deinit(CImFontGlyphRangesBuilder * ptr) {
    delete toIm(ptr);
}

void ig_CImFontGlyphRangesBuilder_Clear(CImFontGlyphRangesBuilder * ptr) {
    toIm(ptr)->Clear();
}

bool ig_CImFontGlyphRangesBuilder_GetBit(const CImFontGlyphRangesBuilder * ptr, size_t n) {
    return toIm(ptr)->GetBit(n);
}

void ig_CImFontGlyphRangesBuilder_SetBit(CImFontGlyphRangesBuilder * ptr, size_t n) {
    toIm(ptr)->SetBit(n);
}

void ig_CImFontGlyphRangesBuilder_AddChar(CImFontGlyphRangesBuilder * ptr, CImWchar c) {
    toIm(ptr)->AddChar(c);
}

void ig_CImFontGlyphRangesBuilder_AddText(CImFontGlyphRangesBuilder * ptr, const char * text, const char * text_end) {
    toIm(ptr)->AddText(text, text_end);
}

void ig_CImFontGlyphRangesBuilder_AddRanges(CImFontGlyphRangesBuilder * ptr, const CImWchar * ranges) {
    toIm(ptr)->AddRanges(ranges);
}

void ig_CImFontGlyphRangesBuilder_BuildRanges(CImFontGlyphRangesBuilder * ptr, CImVector_CImWchar * out_ranges) {
    toIm(ptr)->BuildRanges(toIm(out_ranges));
}



CImColor * ig_CImColor_init() {
    return toCIm(new ImColor);
}

CImColor * ig_CImColor_initInt(int r, int g, int b, int a) {
    return toCIm(new ImColor(r, g, b, a));
}

CImColor * ig_CImColor_initRGBA(CImU32 rgba) {
    return toCIm(new ImColor(rgba));
}

CImColor * ig_CImColor_initFloat(float r, float g, float b, float a) {
    return toCIm(new ImColor(r, g, b, a));
}

CImColor * ig_CImColor_initVec(const CImVec4 * col) {
    return toCIm(new ImColor(toImVal(col)));
}

CImColor * ig_CImColor_initHSV(float h, float s, float v, float a) {
    float r,g,b;
    ImGui::ColorConvertHSVtoRGB(h, s, v, r, g, b);
    return ig_CImColor_initFloat(r, g, b, a);
}

void ig_CImColor_deinit(CImColor * ptr) {
    delete toIm(ptr);
}

void ig_CImColor_SetHSV(CImColor * ptr, float h, float s, float v, float a) {
    toIm(ptr)->SetHSV(h, s, v, a);
}



CImGuiIO * ig_CImGuiIO_init() {
    return toCIm(new ImGuiIO);
}

void ig_CImGuiIO_deinit(CImGuiIO * ptr) {
    delete toIm(ptr);
}

void ig_CImGuiIO_AddInputCharacter(CImGuiIO * ptr, unsigned int c) {
    toIm(ptr)->AddInputCharacter(c);
}

void ig_CImGuiIO_AddInputCharacterUTF16(CImGuiIO * ptr, ImWchar16 c) {
    toIm(ptr)->AddInputCharacterUTF16(c);
}

void ig_CImGuiIO_AddInputCharactersUTF8(CImGuiIO * ptr, const char * str) {
    toIm(ptr)->AddInputCharactersUTF8(str);
}

void ig_CImGuiIO_ClearInputCharacters(CImGuiIO * ptr) {
    toIm(ptr)->ClearInputCharacters();
}



CImGuiInputTextCallbackData * ig_CImGuiInputTextCallbackData_init() {
    return toCIm(new ImGuiInputTextCallbackData);
}

void ig_CImGuiInputTextCallbackData_deinit(CImGuiInputTextCallbackData * ptr) {
    delete toIm(ptr);
}

void ig_CImGuiInputTextCallbackData_DeleteChars(CImGuiInputTextCallbackData * ptr, int pos, int bytes_count) {
    toIm(ptr)->DeleteChars(pos, bytes_count);
}

void ig_CImGuiInputTextCallbackData_InsertChars(CImGuiInputTextCallbackData * ptr, int pos, const char * text, const char * text_end) {
    toIm(ptr)->InsertChars(pos, text, text_end);
}

bool ig_CImGuiInputTextCallbackData_HasSelection(const CImGuiInputTextCallbackData * ptr) {
    return toIm(ptr)->HasSelection();
}



CImGuiListClipper * ig_CImGuiListClipper_init(int items_count, float items_height) {
    return toCIm(new ImGuiListClipper(items_count, items_height));
}

void ig_CImGuiListClipper_deinit(CImGuiListClipper * ptr) {
    delete toIm(ptr);
}

bool ig_CImGuiListClipper_Step(CImGuiListClipper * ptr) {
    return toIm(ptr)->Step();
}

void ig_CImGuiListClipper_Begin(CImGuiListClipper * ptr, int items_count, float items_height) {
    return toIm(ptr)->Begin(items_count, items_height);
}

void ig_CImGuiListClipper_End(CImGuiListClipper * ptr) {
    return toIm(ptr)->End();
}



CImGuiOnceUponAFrame * ig_CImGuiOnceUponAFrame_init() {
    return toCIm(new ImGuiOnceUponAFrame);
}

void ig_CImGuiOnceUponAFrame_deinit(CImGuiOnceUponAFrame * ptr) {
    delete toIm(ptr);
}

bool ig_CImGuiOnceUponAFrame_bool(const CImGuiOnceUponAFrame * ptr) {
    return toIm(ptr);
}



CImGuiPayload * ig_CImGuiPayload_init() {
    return toCIm(new ImGuiPayload);
}

void ig_CImGuiPayload_deinit(CImGuiPayload * ptr) {
    delete toIm(ptr);
}

void ig_CImGuiPayload_Clear(CImGuiPayload * ptr) {
    toIm(ptr)->Clear();
}

bool ig_CImGuiPayload_IsDataType(const CImGuiPayload * ptr, const char* type) {
    return toIm(ptr)->IsDataType(type);
}

bool ig_CImGuiPayload_IsPreview(const CImGuiPayload * ptr) {
    return toIm(ptr)->IsPreview();
}

bool ig_CImGuiPayload_IsDelivery(const CImGuiPayload * ptr) {
    return toIm(ptr)->IsDelivery();
}



CImGuiPlatformIO * ig_CImGuiPlatformIO_init() {
    return toCIm(new ImGuiPlatformIO);
}

void ig_CImGuiPlatformIO_deinit(CImGuiPlatformIO * ptr) {
    delete toIm(ptr);
}



CImGuiPlatformMonitor * ig_CImGuiPlatformMonitor_init() {
    return toCIm(new ImGuiPlatformMonitor);
}

void ig_CImGuiPlatformMonitor_deinit(CImGuiPlatformMonitor * ptr) {
    delete toIm(ptr);
}



CImGuiSizeCallbackData * ig_CImGuiSizeCallbackData_init() {
    return toCIm(new ImGuiSizeCallbackData);
}

void ig_CImGuiSizeCallbackData_deinit(CImGuiSizeCallbackData * ptr) {
    delete toIm(ptr);
}



CImGuiStorage * ig_CImGuiStorage_init() {
    return toCIm(new ImGuiStorage);
}

void ig_CImGuiStorage_deinit(CImGuiStorage * ptr) {
    delete toIm(ptr);
}

void ig_CImGuiStorage_Clear(CImGuiStorage * ptr) {
    toIm(ptr)->Clear();
}

int ig_CImGuiStorage_GetInt(const CImGuiStorage * ptr, ImGuiID key, int default_val) {
    return toIm(ptr)->GetInt(key, default_val);
}

void ig_CImGuiStorage_SetInt(CImGuiStorage * ptr, ImGuiID key, int val) {
    toIm(ptr)->SetInt(key, val);
}

bool ig_CImGuiStorage_GetBool(const CImGuiStorage * ptr, ImGuiID key, bool default_val) {
    return toIm(ptr)->GetBool(key, default_val);
}

void ig_CImGuiStorage_SetBool(CImGuiStorage * ptr, ImGuiID key, bool val) {
    toIm(ptr)->SetBool(key, val);
}

float ig_CImGuiStorage_GetFloat(const CImGuiStorage * ptr, ImGuiID key, float default_val) {
    return toIm(ptr)->GetFloat(key, default_val);
}

void ig_CImGuiStorage_SetFloat(CImGuiStorage * ptr, ImGuiID key, float val) {
    toIm(ptr)->SetFloat(key, val);
}

void * ig_CImGuiStorage_GetVoidPtr(const CImGuiStorage * ptr, ImGuiID key) {
    return toIm(ptr)->GetVoidPtr(key);
}

void ig_CImGuiStorage_SetVoidPtr(CImGuiStorage * ptr, ImGuiID key, void* val) {
    toIm(ptr)->SetVoidPtr(key, val);
}


int * ig_CImGuiStorage_GetIntRef(CImGuiStorage * ptr, ImGuiID key, int default_val) {
    return toIm(ptr)->GetIntRef(key, default_val);
}

bool * ig_CImGuiStorage_GetBoolRef(CImGuiStorage * ptr, ImGuiID key, bool default_val) {
    return toIm(ptr)->GetBoolRef(key, default_val);
}

float * ig_CImGuiStorage_GetFloatRef(CImGuiStorage * ptr, ImGuiID key, float default_val) {
    return toIm(ptr)->GetFloatRef(key, default_val);
}

void ** ig_CImGuiStorage_GetVoidPtrRef(CImGuiStorage * ptr, ImGuiID key, void* default_val) {
    return toIm(ptr)->GetVoidPtrRef(key, default_val);
}


void ig_CImGuiStorage_SetAllInt(CImGuiStorage * ptr, int val) {
    toIm(ptr)->SetAllInt(val);
}


void ig_CImGuiStorage_BuildSortByKey(CImGuiStorage * ptr) {
    toIm(ptr)->BuildSortByKey();
}



CImGuiStyle * ig_CImGuiStyle_init() {
    return toCIm(new ImGuiStyle);
}

void ig_CImGuiStyle_deinit(CImGuiStyle * ptr) {
    delete toIm(ptr);
}

void ig_CImGuiStyle_ScaleAllSizes(CImGuiStyle * ptr, float scale_factor) {
    toIm(ptr)->ScaleAllSizes(scale_factor);
}



char * ig_CImGuiTextBuffer_EmptyString() {
    return ImGuiTextBuffer::EmptyString;
}

CImGuiTextBuffer * ig_CImGuiTextBuffer_init() {
    return toCIm(new ImGuiTextBuffer);
}

void ig_CImGuiTextBuffer_deinit(CImGuiTextBuffer * ptr) {
    delete toIm(ptr);
}

char ig_CImGuiTextBuffer_subscript(const CImGuiTextBuffer * ptr, int i) {
    return (*toIm(ptr))[i];
}

const char * ig_CImGuiTextBuffer_Begin(const CImGuiTextBuffer * ptr) {
    return toIm(ptr)->begin();
}

const char * ig_CImGuiTextBuffer_End(const CImGuiTextBuffer * ptr) {
    return toIm(ptr)->end();
}

int ig_CImGuiTextBuffer_Size(const CImGuiTextBuffer * ptr) {
    return toIm(ptr)->size();
}

bool ig_CImGuiTextBuffer_Empty(const CImGuiTextBuffer * ptr) {
    return toIm(ptr)->empty();
}

void ig_CImGuiTextBuffer_Clear(CImGuiTextBuffer * ptr) {
    toIm(ptr)->clear();
}

void ig_CImGuiTextBuffer_Reserve(CImGuiTextBuffer * ptr, int capacity) {
    toIm(ptr)->reserve(capacity);
}

const char * ig_CImGuiTextBuffer_CStr(const CImGuiTextBuffer * ptr) {
    return toIm(ptr)->c_str();
}

void ig_CImGuiTextBuffer_Append(CImGuiTextBuffer * ptr, const char * str, const char * str_end) {
    toIm(ptr)->append(str, str_end);
}

void ig_CImGuiTextBuffer_AppendF(CImGuiTextBuffer * ptr, const char * fmt, va_list args) {
    toIm(ptr)->appendfv(fmt, args);
}



CImGuiTextFilter * ig_CImGuiTextFilter_init(const char * default_filter) {
    return toCIm(new ImGuiTextFilter(default_filter));
}

void ig_CImGuiTextFilter_deinit(CImGuiTextFilter * ptr) {
    delete toIm(ptr);
}

bool ig_CImGuiTextFilter_Draw(CImGuiTextFilter * ptr, const char * label, float width) {
    return toIm(ptr)->Draw(label, width);
}

bool ig_CImGuiTextFilter_PassFilter(const CImGuiTextFilter * ptr, const char * text, const char * text_end) {
    return toIm(ptr)->PassFilter(text, text_end);
}

void ig_CImGuiTextFilter_Build(CImGuiTextFilter * ptr) {
    toIm(ptr)->Build();
}

void ig_CImGuiTextFilter_Clear(CImGuiTextFilter * ptr) {
    toIm(ptr)->Clear();
}

bool ig_CImGuiTextFilter_IsActive(const CImGuiTextFilter * ptr) {
    return toIm(ptr)->IsActive();
}



CImGuiViewport * ig_CImGuiViewport_init() {
    return toCIm(new ImGuiViewport);
}

void ig_CImGuiViewport_deinit(CImGuiViewport * ptr) {
    delete toIm(ptr);
}

CImVec2 * ig_CImGuiViewport_GetWorkPos(CImGuiViewport * ptr) {
    return toCImPtr(toIm(ptr)->GetWorkPos());
}

CImVec2 * ig_CImGuiViewport_GetWorkSize(CImGuiViewport * ptr) {
    return toCImPtr(toIm(ptr)->GetWorkSize());
}



CImGuiWindowClass * ig_CImGuiWindowClass_init() {
    return toCIm(new ImGuiWindowClass);
}

void ig_CImGuiWindowClass_deinit(CImGuiWindowClass * ptr) {
    delete toIm(ptr);
}



CImFontAtlasCustomRect * ig_CImFontAtlasCustomRect_init() {
    return toCIm(new ImFontAtlasCustomRect);
}

void ig_CImFontAtlasCustomRect_deinit(CImFontAtlasCustomRect * ptr) {
    delete toIm(ptr);
}

bool ig_CImFontAtlasCustomRect_IsPacked(const CImFontAtlasCustomRect * ptr) {
    return toIm(ptr)->IsPacked();
}

