//
//  cimgui.h
//  
//
//  Created by Josef Zoller on 06.03.20.
//

#ifndef cimgui_h
#define cimgui_h

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#ifndef __cplusplus
    #include <stdarg.h>
    #include <stdbool.h>
#endif

#if defined(__clang__) || defined(__GNUC__)
    #define CIM_FMTLIST(FMT)             __attribute__((format(printf, FMT, 0)))
#else
    #define CIM_FMTLIST(FMT)
#endif

#include "typedefs.h"
#include "vectors.h"


#ifdef __cplusplus
extern "C" {
#endif

CImGuiContext * igCreateContext(CImFontAtlas * shared_font_atlas);
void igDestroyContext(CImGuiContext * ctx);
CImGuiContext * igGetCurrentContext();
void igSetCurrentContext(CImGuiContext * ctx);

CImGuiIO * igGetIO();
CImGuiStyle * igGetStyle();
void igNewFrame();
void igEndFrame();
void igRender();
CImDrawData * igGetDrawData();

void igShowDemoWindow(bool * p_open);
void igShowAboutWindow(bool * p_open);
void igShowMetricsWindow(bool * p_open);
void igShowStyleEditor(CImGuiStyle * ref);
bool igShowStyleSelector(const char * label);
void igShowFontSelector(const char * label);
void igShowUserGuide();
const char * igGetVersion();

void igStyleColorsDark(CImGuiStyle * dst);
void igStyleColorsClassic(CImGuiStyle * dst);
void igStyleColorsLight(CImGuiStyle * dst);

bool igBegin(const char * name, bool * p_open, CImGuiWindowFlags flags);
void igEnd();

bool igBeginChild(const char * str_id, CImVec2 size, bool border, CImGuiWindowFlags flags);
bool igBeginChildWithID(CImGuiID id, CImVec2 size, bool border, CImGuiWindowFlags flags);
void igEndChild();

bool igIsWindowAppearing();
bool igIsWindowCollapsed();
bool igIsWindowFocused(CImGuiFocusedFlags flags);
bool igIsWindowHovered(CImGuiHoveredFlags flags);
CImDrawList * igGetWindowDrawList();
float igGetWindowDpiScale();
CImGuiViewport * igGetWindowViewport();
CImVec2 igGetWindowPos();
CImVec2 igGetWindowSize();
float igGetWindowWidth();
float igGetWindowHeight();

void igSetNextWindowPos(CImVec2 pos, CImGuiCond cond, CImVec2 pivot);
void igSetNextWindowSize(CImVec2 size, CImGuiCond cond);
void igSetNextWindowSizeConstraints(CImVec2 size_min, CImVec2 size_max, CImGuiSizeCallback custom_callback, void * custom_callback_data);
void igSetNextWindowContentSize(CImVec2 size);
void igSetNextWindowCollapsed(bool collapsed, CImGuiCond cond);
void igSetNextWindowFocus();
void igSetNextWindowBgAlpha(float alpha);
void igSetNextWindowViewport(CImGuiID viewport_id);
void igSetWindowPos(CImVec2 pos, CImGuiCond cond);
void igSetWindowSize(CImVec2 size, CImGuiCond cond);
void igSetWindowCollapsed(bool collapsed, CImGuiCond cond);
void igSetWindowFocus();
void igSetWindowFontScale(float scale);
void igSetNamedWindowPos(const char * name, CImVec2 pos, CImGuiCond cond);
void igSetNamedWindowSize(const char * name, CImVec2 size, CImGuiCond cond);
void igSetNamedWindowCollapsed(const char * name, bool collapsed, CImGuiCond cond);
void igSetNamedWindowFocus(const char * name);

CImVec2 igGetContentRegionMax();
CImVec2 igGetContentRegionAvail();
CImVec2 igGetWindowContentRegionMin();
CImVec2 igGetWindowContentRegionMax();
float igGetWindowContentRegionWidth();

float igGetScrollX();
float igGetScrollY();
float igGetScrollMaxX();
float igGetScrollMaxY();
void igSetScrollX(float scroll_x);
void igSetScrollY(float scroll_y);
void igSetScrollHereX(float center_x_ratio);
void igSetScrollHereY(float center_y_ratio);
void igSetScrollFromPosX(float local_x, float center_x_ratio);
void igSetScrollFromPosY(float local_y, float center_y_ratio);

void igPushFont(CImFont * font);
void igPopFont();
void igPushStyleColor(CImGuiCol idx, CImU32 col);
void igPushStyleColorVec4(CImGuiCol idx, CImVec4 col);
void igPopStyleColor(int count);
void igPushStyleVar(CImGuiStyleVar idx, float val);
void igPushStyleVarVec2(CImGuiStyleVar idx, CImVec2 val);
void igPopStyleVar(int count);
CImVec4 igGetStyleColorVec4(CImGuiCol idx);

CImFont * igGetFont();
float igGetFontSize();
CImVec2 igGetFontTexUvWhitePixel();
CImU32 igGetColorWithIndexU32(CImGuiCol idx, float alpha_mul);
CImU32 igGetColorVec4U32(CImVec4 col);
CImU32 igGetColorU32(CImU32 col);

void igPushItemWidth(float item_width);
void igPopItemWidth();
void igSetNextItemWidth(float item_width);
float igCalcItemWidth();
void igPushTextWrapPos(float wrap_local_pos_x);
void igPopTextWrapPos();
void igPushAllowKeyboardFocus(bool allow_keyboard_focus);
void igPopAllowKeyboardFocus();
void igPushButtonRepeat(bool repeat);
void igPopButtonRepeat();

void igSeparator();
void igSameLine(float offset_from_start_x, float spacing);
void igNewLine();
void igSpacing();
void igDummy(CImVec2 size);
void igIndent(float indent_w);
void igUnindent(float indent_w);
void igBeginGroup();
void igEndGroup();
CImVec2 igGetCursorPos();
float igGetCursorPosX();
float igGetCursorPosY();
void igSetCursorPos(CImVec2 local_pos);
void igSetCursorPosX(float local_x);
void igSetCursorPosY(float local_y);
CImVec2 igGetCursorStartPos();
CImVec2 igGetCursorScreenPos();
void igSetCursorScreenPos(CImVec2 pos);
void igAlignTextToFramePadding();
float igGetTextLineHeight();
float igGetTextLineHeightWithSpacing();
float igGetFrameHeight();
float igGetFrameHeightWithSpacing();

void igPushIDBuffer(const char * str_id);
void igPushIDString(const char * str_id_begin, const char * str_id_end);
void igPushIDPointer(const void * ptr_id);
void igPushIDInt(int int_id);
void igPopID();
CImGuiID igGetIDBuffer(const char * str_id);
CImGuiID igGetIDString(const char * str_id_begin, const char * str_id_end);
CImGuiID igGetIDPointer(const void * ptr_id);

void igTextUnformatted(const char * text, const char * text_end);
void igText(const char * fmt);
void igTextV(const char * fmt, va_list args) CIM_FMTLIST(1);
void igTextColored(CImVec4 col, const char * fmt);
void igTextColoredV(CImVec4 col, const char * fmt, va_list args) CIM_FMTLIST(2);
void igTextDisabled(const char * fmt);
void igTextDisabledV(const char * fmt, va_list args) CIM_FMTLIST(1);
void igTextWrapped(const char * fmt);
void igTextWrappedV(const char * fmt, va_list args) CIM_FMTLIST(1);
void igLabelText(const char * label, const char * fmt);
void igLabelTextV(const char * label, const char * fmt, va_list args) CIM_FMTLIST(2);
void igBulletText(const char * fmt);
void igBulletTextV(const char * fmt, va_list args) CIM_FMTLIST(1);

bool igButton(const char * label, CImVec2 size);
bool igSmallButton(const char * label);
bool igInvisibleButton(const char * str_id, CImVec2 size, CImGuiButtonFlags flags);
bool igArrowButton(const char * str_id, CImGuiDir dir);
void igImage(CImTextureID user_texture_id, CImVec2 size, CImVec2 uv0, CImVec2 uv1, CImVec4 tint_col, CImVec4 border_col);
bool igImageButton(CImTextureID user_texture_id, CImVec2 size, CImVec2 uv0, CImVec2 uv1, int frame_padding, CImVec4 bg_col, CImVec4 tint_col);
bool igCheckbox(const char * label, bool * v);
bool igCheckboxFlags(const char * label, unsigned int * flags, unsigned int flags_value);
bool igRadioButton(const char * label, bool active);
bool igRadioButtonInt(const char * label, int * v, int v_button);
void igProgressBar(float fraction, CImVec2 size_arg, const char * overlay);
void igBullet();

bool igBeginCombo(const char * label, const char * preview_value, CImGuiComboFlags flags);
void igEndCombo();
bool igCombo(const char * label, int * current_item, const char * const items[], int items_count, int popup_max_height_in_items);
bool igComboZeroSeparated(const char * label, int * current_item, const char * items_separated_by_zeros, int popup_max_height_in_items);
bool igComboGetter(const char * label, int * current_item, bool (*items_getter)(void * data, int idx, const char ** out_text), void * data, int items_count, int popup_max_height_in_items);

bool igDragFloat(const char * label, float * v, float v_speed, float v_min, float v_max, const char * format, CImGuiSliderFlags flags);
bool igDragFloat2(const char * label, float v[2], float v_speed, float v_min, float v_max, const char * format, CImGuiSliderFlags flags);
bool igDragFloat3(const char * label, float v[3], float v_speed, float v_min, float v_max, const char * format, CImGuiSliderFlags flags);
bool igDragFloat4(const char * label, float v[4], float v_speed, float v_min, float v_max, const char * format, CImGuiSliderFlags flags);
bool igDragFloatRange2(const char * label, float * v_current_min, float * v_current_max, float v_speed, float v_min, float v_max, const char * format, const char * format_max, CImGuiSliderFlags flags);
bool igDragInt(const char * label, int * v, float v_speed, int v_min, int v_max, const char * format, CImGuiSliderFlags flags);
bool igDragInt2(const char * label, int v[2], float v_speed, int v_min, int v_max, const char * format, CImGuiSliderFlags flags);
bool igDragInt3(const char * label, int v[3], float v_speed, int v_min, int v_max, const char * format, CImGuiSliderFlags flags);
bool igDragInt4(const char * label, int v[4], float v_speed, int v_min, int v_max, const char * format, CImGuiSliderFlags flags);
bool igDragIntRange2(const char * label, int * v_current_min, int * v_current_max, float v_speed, int v_min, int v_max, const char * format, const char * format_max, CImGuiSliderFlags flags);
bool igDragScalar(const char * label, CImGuiDataType data_type, void * p_data, float v_speed, const void * p_min, const void * p_max, const char * format, CImGuiSliderFlags flags);
bool igDragScalarN(const char * label, CImGuiDataType data_type, void * p_data, int components, float v_speed, const void * p_min, const void * p_max, const char * format, CImGuiSliderFlags flags);

bool igSliderFloat(const char * label, float * v, float v_min, float v_max, const char * format, CImGuiSliderFlags flags);
bool igSliderFloat2(const char * label, float v[2], float v_min, float v_max, const char * format, CImGuiSliderFlags flags);
bool igSliderFloat3(const char * label, float v[3], float v_min, float v_max, const char * format, CImGuiSliderFlags flags);
bool igSliderFloat4(const char * label, float v[4], float v_min, float v_max, const char * format, CImGuiSliderFlags flags);
bool igSliderAngle(const char * label, float * v_rad, float v_degrees_min, float v_degrees_max, const char * format, CImGuiSliderFlags flags);
bool igSliderInt(const char * label, int * v, int v_min, int v_max, const char * format, CImGuiSliderFlags flags);
bool igSliderInt2(const char * label, int v[2], int v_min, int v_max, const char * format, CImGuiSliderFlags flags);
bool igSliderInt3(const char * label, int v[3], int v_min, int v_max, const char * format, CImGuiSliderFlags flags);
bool igSliderInt4(const char * label, int v[4], int v_min, int v_max, const char * format, CImGuiSliderFlags flags);
bool igSliderScalar(const char * label, CImGuiDataType data_type, void * p_data, const void * p_min, const void * p_max, const char * format, CImGuiSliderFlags flags);
bool igSliderScalarN(const char * label, CImGuiDataType data_type, void * p_data, int components, const void * p_min, const void * p_max, const char * format, CImGuiSliderFlags flags);
bool igVSliderFloat(const char * label, CImVec2 size, float * v, float v_min, float v_max, const char * format, CImGuiSliderFlags flags);
bool igVSliderInt(const char * label, CImVec2 size, int * v, int v_min, int v_max, const char * format, CImGuiSliderFlags flags);
bool igVSliderScalar(const char * label, CImVec2 size, CImGuiDataType data_type, void * p_data, const void * p_min, const void * p_max, const char * format, CImGuiSliderFlags flags);

bool igInputText(const char * label, char * buf, size_t buf_size, CImGuiInputTextFlags flags, CImGuiInputTextCallback callback, void * user_data);
bool igInputTextMultiline(const char * label, char * buf, size_t buf_size, CImVec2 size, CImGuiInputTextFlags flags, CImGuiInputTextCallback callback, void * user_data);
bool igInputTextWithHint(const char * label, const char * hint, char * buf, size_t buf_size, CImGuiInputTextFlags flags, CImGuiInputTextCallback callback, void * user_data);
bool igInputFloat(const char * label, float * v, float step, float step_fast, const char * format, CImGuiInputTextFlags flags);
bool igInputFloat2(const char * label, float v[2], const char * format, CImGuiInputTextFlags flags);
bool igInputFloat3(const char * label, float v[3], const char * format, CImGuiInputTextFlags flags);
bool igInputFloat4(const char * label, float v[4], const char * format, CImGuiInputTextFlags flags);
bool igInputInt(const char * label, int * v, int step, int step_fast, CImGuiInputTextFlags flags);
bool igInputInt2(const char * label, int v[2], CImGuiInputTextFlags flags);
bool igInputInt3(const char * label, int v[3], CImGuiInputTextFlags flags);
bool igInputInt4(const char * label, int v[4], CImGuiInputTextFlags flags);
bool igInputDouble(const char * label, double * v, double step, double step_fast, const char * format, CImGuiInputTextFlags flags);
bool igInputScalar(const char * label, CImGuiDataType data_type, void * p_data, const void * p_step, const void * p_step_fast, const char * format, CImGuiInputTextFlags flags);
bool igInputScalarN(const char * label, CImGuiDataType data_type, void * p_data, int components, const void * p_step, const void * p_step_fast, const char * format, CImGuiInputTextFlags flags);

bool igColorEdit3(const char * label, float col[3], CImGuiColorEditFlags flags);
bool igColorEdit4(const char * label, float col[4], CImGuiColorEditFlags flags);
bool igColorPicker3(const char * label, float col[3], CImGuiColorEditFlags flags);
bool igColorPicker4(const char * label, float col[4], CImGuiColorEditFlags flags, const float * ref_col);
bool igColorButton(const char * desc_id, CImVec4 col, CImGuiColorEditFlags flags, CImVec2 size);
void igSetColorEditOptions(CImGuiColorEditFlags flags);

bool igTreeNode(const char * label);
bool igTreeNodeString(const char * str_id, const char * fmt);
bool igTreeNodeStringV(const char * str_id, const char * fmt, va_list args) CIM_FMTLIST(2);
bool igTreeNodePointer(const void * ptr_id, const char * fmt);
bool igTreeNodePointerV(const void * ptr_id, const char * fmt, va_list args) CIM_FMTLIST(2);
bool igTreeNodeEx(const char * label, CImGuiTreeNodeFlags flags);
bool igTreeNodeExString(const char * str_id, CImGuiTreeNodeFlags flags, const char * fmt);
bool igTreeNodeExStringV(const char * str_id, CImGuiTreeNodeFlags flags, const char * fmt, va_list args) CIM_FMTLIST(3);
bool igTreeNodeExPointer(const void * ptr_id, CImGuiTreeNodeFlags flags, const char * fmt);
bool igTreeNodeExPointerV(const void * ptr_id, CImGuiTreeNodeFlags flags, const char * fmt, va_list args) CIM_FMTLIST(3);
void igTreePushString(const char * str_id);
void igTreePushPointer(const void * ptr_id);
void igTreePop();
float igGetTreeNodeToLabelSpacing();
bool igCollapsingHeader(const char * label, CImGuiTreeNodeFlags flags);
bool igCollapsingHeaderCloseButton(const char * label, bool * p_open, CImGuiTreeNodeFlags flags);
void igSetNextItemOpen(bool is_open, CImGuiCond cond);

bool igSelectable(const char * label, bool selected, CImGuiSelectableFlags flags, CImVec2 size);
bool igSelectablePointer(const char * label, bool * p_selected, CImGuiSelectableFlags flags, CImVec2 size);

bool igListBox(const char * label, int * current_item, const char * const items[], int items_count, int height_in_items);
bool igListBoxGetter(const char * label, int * current_item, bool (*items_getter)(void * data, int idx, const char ** out_text), void * data, int items_count, int height_in_items);
bool igListBoxHeader(const char * label, CImVec2 size);
bool igListBoxHeaderCount(const char * label, int items_count, int height_in_items);
void igListBoxFooter();

void igPlotLines(const char * label, const float * values, int values_count, int values_offset, const char * overlay_text, float scale_min, float scale_max, CImVec2 graph_size, int stride);
void igPlotLinesGetter(const char * label, float(*values_getter)(void * data, int idx), void * data, int values_count, int values_offset, const char * overlay_text, float scale_min, float scale_max, CImVec2 graph_size);
void igPlotHistogram(const char * label, const float * values, int values_count, int values_offset, const char * overlay_text, float scale_min, float scale_max, CImVec2 graph_size, int stride);
void igPlotHistogramGetter(const char * label, float(*values_getter)(void * data, int idx), void * data, int values_count, int values_offset, const char * overlay_text, float scale_min, float scale_max, CImVec2 graph_size);

void igValueBool(const char * prefix, bool b);
void igValueInt(const char * prefix, int v);
void igValueUnsigned(const char * prefix, unsigned int v);
void igValueFloat(const char * prefix, float v, const char * float_format);

bool igBeginMenuBar();
void igEndMenuBar();
bool igBeginMainMenuBar();
void igEndMainMenuBar();
bool igBeginMenu(const char * label, bool enabled);
void igEndMenu();
bool igMenuItem(const char * label, const char * shortcut, bool selected, bool enabled);
bool igMenuItemPointer(const char * label, const char * shortcut, bool * p_selected, bool enabled);

void igBeginTooltip();
void igEndTooltip();
void igSetTooltip(const char * fmt);
void igSetTooltipV(const char * fmt, va_list args) CIM_FMTLIST(1);

bool igBeginPopup(const char * str_id, CImGuiWindowFlags flags);
bool igBeginPopupModal(const char * name, bool * p_open, CImGuiWindowFlags flags);
void igEndPopup();
void igOpenPopup(const char * str_id, CImGuiPopupFlags popup_flags);
void igOpenPopupOnItemClick(const char * str_id, CImGuiPopupFlags popup_flags);
void igCloseCurrentPopup();
bool igBeginPopupContextItem(const char * str_id, CImGuiPopupFlags popup_flags);
bool igBeginPopupContextWindow(const char * str_id, CImGuiPopupFlags popup_flags);
bool igBeginPopupContextVoid(const char * str_id, CImGuiPopupFlags popup_flags);
bool igIsPopupOpen(const char * str_id, CImGuiPopupFlags popup_flags);

void igColumns(int count, const char * id, bool border);
void igNextColumn();
int igGetColumnIndex();
float igGetColumnWidth(int column_index);
void igSetColumnWidth(int column_index, float width);
float igGetColumnOffset(int column_index);
void igSetColumnOffset(int column_index, float offset_x);
int igGetColumnsCount();

bool igBeginTabBar(const char * str_id, CImGuiTabBarFlags flags);
void igEndTabBar();
bool igBeginTabItem(const char * label, bool * p_open, CImGuiTabItemFlags flags);
void igEndTabItem();
bool igTabItemButton(const char * label, CImGuiTabItemFlags flags);
void igSetTabItemClosed(const char * tab_or_docked_window_label);

void igDockSpace(CImGuiID id, CImVec2 size, CImGuiDockNodeFlags flags, const CImGuiWindowClass * window_class);
CImGuiID igDockSpaceOverViewport(CImGuiViewport * viewport, CImGuiDockNodeFlags flags, const CImGuiWindowClass * window_class);
void igSetNextWindowDockID(CImGuiID dock_id, CImGuiCond cond);
void igSetNextWindowClass(const CImGuiWindowClass * window_class);
CImGuiID igGetWindowDockID();
bool igIsWindowDocked();

void igLogToTTY(int auto_open_depth);
void igLogToFile(int auto_open_depth, const char * filename);
void igLogToClipboard(int auto_open_depth);
void igLogFinish();
void igLogButtons();

bool igBeginDragDropSource(CImGuiDragDropFlags flags);
bool igSetDragDropPayload(const char * type, const void * data, size_t sz, CImGuiCond cond);
void igEndDragDropSource();
bool igBeginDragDropTarget();
const CImGuiPayload * igAcceptDragDropPayload(const char * type, CImGuiDragDropFlags flags);
void igEndDragDropTarget();
const CImGuiPayload * igGetDragDropPayload();

void igPushClipRect(CImVec2 clip_rect_min, CImVec2 clip_rect_max, bool intersect_with_current_clip_rect);
void igPopClipRect();

void igSetItemDefaultFocus();
void igSetKeyboardFocusHere(int offset);

bool igIsItemHovered(CImGuiHoveredFlags flags);
bool igIsItemActive();
bool igIsItemFocused();
bool igIsItemClicked(CImGuiMouseButton mouse_button);
bool igIsItemVisible();
bool igIsItemEdited();
bool igIsItemActivated();
bool igIsItemDeactivated();
bool igIsItemDeactivatedAfterEdit();
bool igIsItemToggledOpen();
bool igIsAnyItemHovered();
bool igIsAnyItemActive();
bool igIsAnyItemFocused();
CImVec2 igGetItemRectMin();
CImVec2 igGetItemRectMax();
CImVec2 igGetItemRectSize();
void igSetItemAllowOverlap();

bool igIsRectWithSizeVisible(CImVec2 size);
bool igIsRectVisible(CImVec2 rect_min, CImVec2 rect_max);
double igGetTime();
int igGetFrameCount();
CImDrawList * igGetBackgroundDrawList();
CImDrawList * igGetForegroundDrawList();
CImDrawList * igGetBackgroundDrawListViewport(CImGuiViewport * viewport);
CImDrawList * igGetForegroundDrawListViewport(CImGuiViewport * viewport);
CImDrawListSharedData * igGetDrawListSharedData();
const char * igGetStyleColorName(CImGuiCol idx);
void igSetStateStorage(CImGuiStorage * storage);
CImGuiStorage * igGetStateStorage();
void igCalcListClipping(int items_count, float items_height, int * out_items_display_start, int * out_items_display_end);
bool igBeginChildFrame(CImGuiID id, CImVec2 size, CImGuiWindowFlags flags);
void igEndChildFrame();

CImVec2 igCalcTextSize(const char * text, const char * text_end, bool hide_text_after_double_hash, float wrap_width);

CImVec4 igColorConvertU32ToFloat4(CImU32 in);
CImU32 igColorConvertFloat4ToU32(CImVec4 in);
void igColorConvertRGBtoHSV(float r, float g, float b, float * out_h, float * out_s, float * out_v);
void igColorConvertHSVtoRGB(float h, float s, float v, float * out_r, float * out_g, float * out_b);

int igGetKeyIndex(CImGuiKey imgui_key);
bool igIsKeyDown(int user_key_index);
bool igIsKeyPressed(int user_key_index, bool repeat);
bool igIsKeyReleased(int user_key_index);
int igGetKeyPressedAmount(int key_index, float repeat_delay, float rate);
void igCaptureKeyboardFromApp(bool want_capture_keyboard_value);

bool igIsMouseDown(CImGuiMouseButton button);
bool igIsMouseClicked(CImGuiMouseButton button, bool repeat);
bool igIsMouseReleased(CImGuiMouseButton button);
bool igIsMouseDoubleClicked(CImGuiMouseButton button);
bool igIsMouseHoveringRect(CImVec2 r_min, CImVec2 r_max, bool clip);
bool igIsMousePosValid(const CImVec2 * mouse_pos);
bool igIsAnyMouseDown();
CImVec2 igGetMousePos();
CImVec2 igGetMousePosOnOpeningCurrentPopup();
bool igIsMouseDragging(CImGuiMouseButton button, float lock_threshold);
CImVec2 igGetMouseDragDelta(CImGuiMouseButton button, float lock_threshold);
void igResetMouseDragDelta(CImGuiMouseButton button);
CImGuiMouseCursor igGetMouseCursor();
void igSetMouseCursor(CImGuiMouseCursor cursor_type);
void igCaptureMouseFromApp(bool want_capture_mouse_value);

const char * igGetClipboardText();
void igSetClipboardText(const char * text);

void igLoadIniSettingsFromDisk(const char * ini_filename);
void igLoadIniSettingsFromMemory(const char * ini_data, size_t ini_size);
void igSaveIniSettingsToDisk(const char * ini_filename);
const char * igSaveIniSettingsToMemory(size_t * out_ini_size);

bool igDebugCheckVersionAndDataLayout(const char * version_str, size_t sz_io, size_t sz_style, size_t sz_vec2, size_t sz_vec4, size_t sz_drawvert, size_t sz_drawidx);
bool igCheckVersion();

void igSetAllocatorFunctions(void * (*alloc_func)(size_t sz, void * user_data), void (*free_func)(void * ptr, void * user_data), void * user_data);
void * igMemAlloc(size_t size);
void igMemFree(void * ptr);

CImGuiPlatformIO * igGetPlatformIO();
CImGuiViewport * igGetMainViewport();
void igUpdatePlatformWindows();
void igRenderPlatformWindowsDefault(void * platform_render_arg, void * renderer_render_arg);
void igDestroyPlatformWindows();
CImGuiViewport * igFindViewportByID(CImGuiID id);
CImGuiViewport * igFindViewportByPlatformHandle(void * platform_handle);



enum CImGuiCol_ {
    CImGuiCol_Text,
    CImGuiCol_TextDisabled,
    CImGuiCol_WindowBg,
    CImGuiCol_ChildBg,
    CImGuiCol_PopupBg,
    CImGuiCol_Border,
    CImGuiCol_BorderShadow,
    CImGuiCol_FrameBg,
    CImGuiCol_FrameBgHovered,
    CImGuiCol_FrameBgActive,
    CImGuiCol_TitleBg,
    CImGuiCol_TitleBgActive,
    CImGuiCol_TitleBgCollapsed,
    CImGuiCol_MenuBarBg,
    CImGuiCol_ScrollbarBg,
    CImGuiCol_ScrollbarGrab,
    CImGuiCol_ScrollbarGrabHovered,
    CImGuiCol_ScrollbarGrabActive,
    CImGuiCol_CheckMark,
    CImGuiCol_SliderGrab,
    CImGuiCol_SliderGrabActive,
    CImGuiCol_Button,
    CImGuiCol_ButtonHovered,
    CImGuiCol_ButtonActive,
    CImGuiCol_Header,
    CImGuiCol_HeaderHovered,
    CImGuiCol_HeaderActive,
    CImGuiCol_Separator,
    CImGuiCol_SeparatorHovered,
    CImGuiCol_SeparatorActive,
    CImGuiCol_ResizeGrip,
    CImGuiCol_ResizeGripHovered,
    CImGuiCol_ResizeGripActive,
    CImGuiCol_Tab,
    CImGuiCol_TabHovered,
    CImGuiCol_TabActive,
    CImGuiCol_TabUnfocused,
    CImGuiCol_TabUnfocusedActive,
    CImGuiCol_DockingPreview,
    CImGuiCol_DockingEmptyBg,
    CImGuiCol_PlotLines,
    CImGuiCol_PlotLinesHovered,
    CImGuiCol_PlotHistogram,
    CImGuiCol_PlotHistogramHovered,
    CImGuiCol_TextSelectedBg,
    CImGuiCol_DragDropTarget,
    CImGuiCol_NavHighlight,
    CImGuiCol_NavWindowingHighlight,
    CImGuiCol_NavWindowingDimBg,
    CImGuiCol_ModalWindowDimBg,
    CImGuiCol_COUNT
#ifndef IMGUI_DISABLE_OBSOLETE_FUNCTIONS
    , CImGuiCol_ModalWindowDarkening = CImGuiCol_ModalWindowDimBg
#endif
};

enum CImGuiCond_ {
    CImGuiCond_None = 0,
    CImGuiCond_Always = 1 << 0,
    CImGuiCond_Once = 1 << 1,
    CImGuiCond_FirstUseEver = 1 << 2,
    CImGuiCond_Appearing = 1 << 3
};

enum CImGuiDataType_ {
    CImGuiDataType_S8,
    CImGuiDataType_U8,
    CImGuiDataType_S16,
    CImGuiDataType_U16,
    CImGuiDataType_S32,
    CImGuiDataType_U32,
    CImGuiDataType_S64,
    CImGuiDataType_U64,
    CImGuiDataType_Float,
    CImGuiDataType_Double,
    CImGuiDataType_COUNT
};

enum CImGuiDir_ {
    CImGuiDir_None = -1,
    CImGuiDir_Left = 0,
    CImGuiDir_Right = 1,
    CImGuiDir_Up = 2,
    CImGuiDir_Down = 3,
    CImGuiDir_COUNT
};

enum CImGuiKey_ {
    CImGuiKey_Tab,
    CImGuiKey_LeftArrow,
    CImGuiKey_RightArrow,
    CImGuiKey_UpArrow,
    CImGuiKey_DownArrow,
    CImGuiKey_PageUp,
    CImGuiKey_PageDown,
    CImGuiKey_Home,
    CImGuiKey_End,
    CImGuiKey_Insert,
    CImGuiKey_Delete,
    CImGuiKey_Backspace,
    CImGuiKey_Space,
    CImGuiKey_Enter,
    CImGuiKey_Escape,
    CImGuiKey_KeyPadEnter,
    CImGuiKey_A,
    CImGuiKey_C,
    CImGuiKey_V,
    CImGuiKey_X,
    CImGuiKey_Y,
    CImGuiKey_Z,
    CImGuiKey_COUNT
};

enum CImGuiNavInput_ {
    CImGuiNavInput_Activate,
    CImGuiNavInput_Cancel,
    CImGuiNavInput_Input,
    CImGuiNavInput_Menu,
    CImGuiNavInput_DpadLeft,
    CImGuiNavInput_DpadRight,
    CImGuiNavInput_DpadUp,
    CImGuiNavInput_DpadDown,
    CImGuiNavInput_LStickLeft,
    CImGuiNavInput_LStickRight,
    CImGuiNavInput_LStickUp,
    CImGuiNavInput_LStickDown,
    CImGuiNavInput_FocusPrev,
    CImGuiNavInput_FocusNext,
    CImGuiNavInput_TweakSlow,
    CImGuiNavInput_TweakFast,
    
    //Internal
    CImGuiNavInput_KeyMenu_,
    CImGuiNavInput_KeyLeft_,
    CImGuiNavInput_KeyRight_,
    CImGuiNavInput_KeyUp_,
    CImGuiNavInput_KeyDown_,
    CImGuiNavInput_COUNT,
    CImGuiNavInput_InternalStart_ = CImGuiNavInput_KeyMenu_
};

enum CImGuiMouseButton_ {
    CImGuiMouseButton_Left = 0,
    CImGuiMouseButton_Right = 1,
    CImGuiMouseButton_Middle = 2,
    CImGuiMouseButton_COUNT = 5
};

enum CImGuiMouseCursor_ {
    CImGuiMouseCursor_None = -1,
    CImGuiMouseCursor_Arrow = 0,
    CImGuiMouseCursor_TextInput,
    CImGuiMouseCursor_ResizeAll,
    CImGuiMouseCursor_ResizeNS,
    CImGuiMouseCursor_ResizeEW,
    CImGuiMouseCursor_ResizeNESW,
    CImGuiMouseCursor_ResizeNWSE,
    CImGuiMouseCursor_Hand,
    CImGuiMouseCursor_NotAllowed,
    CImGuiMouseCursor_COUNT
#ifndef IMGUI_DISABLE_OBSOLETE_FUNCTIONS
    , CImGuiMouseCursor_Count_ = CImGuiMouseCursor_COUNT
#endif
};

enum CImGuiStyleVar_ {
    CImGuiStyleVar_Alpha,
    CImGuiStyleVar_WindowPadding,
    CImGuiStyleVar_WindowRounding,
    CImGuiStyleVar_WindowBorderSize,
    CImGuiStyleVar_WindowMinSize,
    CImGuiStyleVar_WindowTitleAlign,
    CImGuiStyleVar_ChildRounding,
    CImGuiStyleVar_ChildBorderSize,
    CImGuiStyleVar_PopupRounding,
    CImGuiStyleVar_PopupBorderSize,
    CImGuiStyleVar_FramePadding,
    CImGuiStyleVar_FrameRounding,
    CImGuiStyleVar_FrameBorderSize,
    CImGuiStyleVar_ItemSpacing,
    CImGuiStyleVar_ItemInnerSpacing,
    CImGuiStyleVar_IndentSpacing,
    CImGuiStyleVar_ScrollbarSize,
    CImGuiStyleVar_ScrollbarRounding,
    CImGuiStyleVar_GrabMinSize,
    CImGuiStyleVar_GrabRounding,
    CImGuiStyleVar_TabRounding,
    CImGuiStyleVar_ButtonTextAlign,
    CImGuiStyleVar_SelectableTextAlign,
    CImGuiStyleVar_COUNT
#ifndef IMGUI_DISABLE_OBSOLETE_FUNCTIONS
    , CImGuiStyleVar_Count_ = CImGuiStyleVar_COUNT
#endif
};

enum CImDrawCornerFlags_ {
    CImDrawCornerFlags_None = 0,
    CImDrawCornerFlags_TopLeft = 1 << 0,
    CImDrawCornerFlags_TopRight = 1 << 1,
    CImDrawCornerFlags_BotLeft = 1 << 2,
    CImDrawCornerFlags_BotRight = 1 << 3,
    CImDrawCornerFlags_Top = CImDrawCornerFlags_TopLeft | CImDrawCornerFlags_TopRight,
    CImDrawCornerFlags_Bot = CImDrawCornerFlags_BotLeft | CImDrawCornerFlags_BotRight,
    CImDrawCornerFlags_Left = CImDrawCornerFlags_TopLeft | CImDrawCornerFlags_BotLeft,
    CImDrawCornerFlags_Right = CImDrawCornerFlags_TopRight | CImDrawCornerFlags_BotRight,
    CImDrawCornerFlags_All = 0xF
};

enum CImDrawListFlags_ {
    CImDrawListFlags_None = 0,
    CImDrawListFlags_AntiAliasedLines = 1 << 0,
    CImDrawListFlags_AntiAliasedLinesUseTex = 1 << 1,
    CImDrawListFlags_AntiAliasedFill = 1 << 2,
    CImDrawListFlags_AllowVtxOffset = 1 << 3
};

enum CImFontAtlasFlags_ {
    CImFontAtlasFlags_None = 0,
    CImFontAtlasFlags_NoPowerOfTwoHeight = 1 << 0,
    CImFontAtlasFlags_NoMouseCursors = 1 << 1,
    CImFontAtlasFlags_NoBakedLines = 1 << 2
};

enum CImGuiBackendFlags_ {
    CImGuiBackendFlags_None = 0,
    CImGuiBackendFlags_HasGamepad = 1 << 0,
    CImGuiBackendFlags_HasMouseCursors = 1 << 1,
    CImGuiBackendFlags_HasSetMousePos = 1 << 2,
    CImGuiBackendFlags_RendererHasVtxOffset = 1 << 3,
    CImGuiBackendFlags_PlatformHasViewports = 1 << 10,
    CImGuiBackendFlags_HasMouseHoveredViewport = 1 << 11,
    CImGuiBackendFlags_RendererHasViewports = 1 << 12
};

enum CImGuiButtonFlags_ {
    CImGuiButtonFlags_None = 0,
    CImGuiButtonFlags_MouseButtonLeft = 1 << 0,
    CImGuiButtonFlags_MouseButtonRight = 1 << 1,
    CImGuiButtonFlags_MouseButtonMiddle = 1 << 2,

    // [Internal]
    CImGuiButtonFlags_MouseButtonMask_ = CImGuiButtonFlags_MouseButtonLeft | CImGuiButtonFlags_MouseButtonRight | CImGuiButtonFlags_MouseButtonMiddle,
    CImGuiButtonFlags_MouseButtonDefault_ = CImGuiButtonFlags_MouseButtonLeft
};

enum CImGuiColorEditFlags_ {
    CImGuiColorEditFlags_None = 0,
    CImGuiColorEditFlags_NoAlpha = 1 << 1,
    CImGuiColorEditFlags_NoPicker = 1 << 2,
    CImGuiColorEditFlags_NoOptions = 1 << 3,
    CImGuiColorEditFlags_NoSmallPreview = 1 << 4,
    CImGuiColorEditFlags_NoInputs = 1 << 5,
    CImGuiColorEditFlags_NoTooltip = 1 << 6,
    CImGuiColorEditFlags_NoLabel = 1 << 7,
    CImGuiColorEditFlags_NoSidePreview = 1 << 8,
    CImGuiColorEditFlags_NoDragDrop = 1 << 9,
    CImGuiColorEditFlags_NoBorder = 1 << 10,
    CImGuiColorEditFlags_AlphaBar = 1 << 16,
    CImGuiColorEditFlags_AlphaPreview = 1 << 17,
    CImGuiColorEditFlags_AlphaPreviewHalf = 1 << 18,
    CImGuiColorEditFlags_HDR = 1 << 19,
    CImGuiColorEditFlags_DisplayRGB = 1 << 20,
    CImGuiColorEditFlags_DisplayHSV = 1 << 21,
    CImGuiColorEditFlags_DisplayHex = 1 << 22,
    CImGuiColorEditFlags_Uint8 = 1 << 23,
    CImGuiColorEditFlags_Float = 1 << 24,
    CImGuiColorEditFlags_PickerHueBar = 1 << 25,
    CImGuiColorEditFlags_PickerHueWheel = 1 << 26,
    CImGuiColorEditFlags_InputRGB = 1 << 27,
    CImGuiColorEditFlags_InputHSV = 1 << 28,
    CImGuiColorEditFlags__OptionsDefault = CImGuiColorEditFlags_Uint8 | CImGuiColorEditFlags_DisplayRGB | CImGuiColorEditFlags_InputRGB | CImGuiColorEditFlags_PickerHueBar,

    //Internal
    CImGuiColorEditFlags__DisplayMask    = CImGuiColorEditFlags_DisplayRGB | CImGuiColorEditFlags_DisplayHSV | CImGuiColorEditFlags_DisplayHex,
    CImGuiColorEditFlags__DataTypeMask   = CImGuiColorEditFlags_Uint8 | CImGuiColorEditFlags_Float,
    CImGuiColorEditFlags__PickerMask     = CImGuiColorEditFlags_PickerHueWheel | CImGuiColorEditFlags_PickerHueBar,
    CImGuiColorEditFlags__InputMask      = CImGuiColorEditFlags_InputRGB | CImGuiColorEditFlags_InputHSV
#ifndef IMGUI_DISABLE_OBSOLETE_FUNCTIONS
    , CImGuiColorEditFlags_RGB = CImGuiColorEditFlags_DisplayRGB, CImGuiColorEditFlags_HSV = CImGuiColorEditFlags_DisplayHSV, CImGuiColorEditFlags_HEX = CImGuiColorEditFlags_DisplayHex
#endif
};

enum CImGuiConfigFlags_ {
    CImGuiConfigFlags_None = 0,
    CImGuiConfigFlags_NavEnableKeyboard = 1 << 0,
    CImGuiConfigFlags_NavEnableGamepad = 1 << 1,
    CImGuiConfigFlags_NavEnableSetMousePos = 1 << 2,
    CImGuiConfigFlags_NavNoCaptureKeyboard = 1 << 3,
    CImGuiConfigFlags_NoMouse = 1 << 4,
    CImGuiConfigFlags_NoMouseCursorChange = 1 << 5,
    CImGuiConfigFlags_DockingEnable = 1 << 6,
    CImGuiConfigFlags_ViewportsEnable = 1 << 10,
    CImGuiConfigFlags_DpiEnableScaleViewports = 1 << 14,
    CImGuiConfigFlags_DpiEnableScaleFonts = 1 << 15,
    CImGuiConfigFlags_IsSRGB = 1 << 20,
    CImGuiConfigFlags_IsTouchScreen = 1 << 21
};

enum CImGuiComboFlags_ {
    CImGuiComboFlags_None = 0,
    CImGuiComboFlags_PopupAlignLeft = 1 << 0,
    CImGuiComboFlags_HeightSmall = 1 << 1,
    CImGuiComboFlags_HeightRegular = 1 << 2,
    CImGuiComboFlags_HeightLarge = 1 << 3,
    CImGuiComboFlags_HeightLargest = 1 << 4,
    CImGuiComboFlags_NoArrowButton = 1 << 5,
    CImGuiComboFlags_NoPreview = 1 << 6,
    CImGuiComboFlags_HeightMask_ = CImGuiComboFlags_HeightSmall | CImGuiComboFlags_HeightRegular | CImGuiComboFlags_HeightLarge | CImGuiComboFlags_HeightLargest
};

enum CImGuiDockNodeFlags_ {
    CImGuiDockNodeFlags_None = 0,
    CImGuiDockNodeFlags_KeepAliveOnly = 1 << 0,
    CImGuiDockNodeFlags_NoDockingInCentralNode = 1 << 2,
    CImGuiDockNodeFlags_PassthruCentralNode = 1 << 3,
    CImGuiDockNodeFlags_NoSplit = 1 << 4,
    CImGuiDockNodeFlags_NoResize = 1 << 5,
    CImGuiDockNodeFlags_AutoHideTabBar = 1 << 6
};

enum CImGuiDragDropFlags_ {
    CImGuiDragDropFlags_None = 0,
    CImGuiDragDropFlags_SourceNoPreviewTooltip = 1 << 0,
    CImGuiDragDropFlags_SourceNoDisableHover = 1 << 1,
    CImGuiDragDropFlags_SourceNoHoldToOpenOthers = 1 << 2,
    CImGuiDragDropFlags_SourceAllowNullID = 1 << 3,
    CImGuiDragDropFlags_SourceExtern = 1 << 4,
    CImGuiDragDropFlags_SourceAutoExpirePayload = 1 << 5,
    CImGuiDragDropFlags_AcceptBeforeDelivery = 1 << 10,
    CImGuiDragDropFlags_AcceptNoDrawDefaultRect = 1 << 11,
    CImGuiDragDropFlags_AcceptNoPreviewTooltip = 1 << 12,
    CImGuiDragDropFlags_AcceptPeekOnly = CImGuiDragDropFlags_AcceptBeforeDelivery | CImGuiDragDropFlags_AcceptNoDrawDefaultRect
};

enum CImGuiFocusedFlags_ {
    CImGuiFocusedFlags_None = 0,
    CImGuiFocusedFlags_ChildWindows = 1 << 0,
    CImGuiFocusedFlags_RootWindow = 1 << 1,
    CImGuiFocusedFlags_AnyWindow = 1 << 2,
    CImGuiFocusedFlags_RootAndChildWindows = CImGuiFocusedFlags_RootWindow | CImGuiFocusedFlags_ChildWindows
};

enum CImGuiHoveredFlags_ {
    CImGuiHoveredFlags_None = 0,
    CImGuiHoveredFlags_ChildWindows = 1 << 0,
    CImGuiHoveredFlags_RootWindow = 1 << 1,
    CImGuiHoveredFlags_AnyWindow = 1 << 2,
    CImGuiHoveredFlags_AllowWhenBlockedByPopup = 1 << 3,
    //CImGuiHoveredFlags_AllowWhenBlockedByModal = 1 << 4,
    CImGuiHoveredFlags_AllowWhenBlockedByActiveItem = 1 << 5,
    CImGuiHoveredFlags_AllowWhenOverlapped = 1 << 6,
    CImGuiHoveredFlags_AllowWhenDisabled = 1 << 7,
    CImGuiHoveredFlags_RectOnly = CImGuiHoveredFlags_AllowWhenBlockedByPopup | CImGuiHoveredFlags_AllowWhenBlockedByActiveItem | CImGuiHoveredFlags_AllowWhenOverlapped,
    CImGuiHoveredFlags_RootAndChildWindows = CImGuiHoveredFlags_RootWindow | CImGuiHoveredFlags_ChildWindows
};

enum CImGuiInputTextFlags_ {
    CImGuiInputTextFlags_None = 0,
    CImGuiInputTextFlags_CharsDecimal = 1 << 0,
    CImGuiInputTextFlags_CharsHexadecimal = 1 << 1,
    CImGuiInputTextFlags_CharsUppercase = 1 << 2,
    CImGuiInputTextFlags_CharsNoBlank = 1 << 3,
    CImGuiInputTextFlags_AutoSelectAll = 1 << 4,
    CImGuiInputTextFlags_EnterReturnsTrue = 1 << 5,
    CImGuiInputTextFlags_CallbackCompletion = 1 << 6,
    CImGuiInputTextFlags_CallbackHistory = 1 << 7,
    CImGuiInputTextFlags_CallbackAlways = 1 << 8,
    CImGuiInputTextFlags_CallbackCharFilter = 1 << 9,
    CImGuiInputTextFlags_AllowTabInput = 1 << 10,
    CImGuiInputTextFlags_CtrlEnterForNewLine = 1 << 11,
    CImGuiInputTextFlags_NoHorizontalScroll = 1 << 12,
    CImGuiInputTextFlags_AlwaysInsertMode = 1 << 13,
    CImGuiInputTextFlags_ReadOnly = 1 << 14,
    CImGuiInputTextFlags_Password = 1 << 15,
    CImGuiInputTextFlags_NoUndoRedo = 1 << 16,
    CImGuiInputTextFlags_CharsScientific = 1 << 17,
    CImGuiInputTextFlags_CallbackResize = 1 << 18,
    CImGuiInputTextFlags_CallbackEdit = 1 << 19,
    
    //Internal
    CImGuiInputTextFlags_Multiline = 1 << 20,
    CImGuiInputTextFlags_NoMarkEdited = 1 << 21
};

enum CImGuiKeyModFlags_ {
    CImGuiKeyModFlags_None = 0,
    CImGuiKeyModFlags_Ctrl = 1 << 0,
    CImGuiKeyModFlags_Shift = 1 << 1,
    CImGuiKeyModFlags_Alt = 1 << 2,
    CImGuiKeyModFlags_Super = 1 << 3
};

enum CImGuiPopupFlags_ {
    CImGuiPopupFlags_None = 0,
    CImGuiPopupFlags_MouseButtonLeft = 0,
    CImGuiPopupFlags_MouseButtonRight = 1,
    CImGuiPopupFlags_MouseButtonMiddle = 2,
    CImGuiPopupFlags_MouseButtonMask_ = 0x1F,
    CImGuiPopupFlags_MouseButtonDefault_ = 1,
    CImGuiPopupFlags_NoOpenOverExistingPopup = 1 << 5,
    CImGuiPopupFlags_NoOpenOverItems = 1 << 6,
    CImGuiPopupFlags_AnyPopupId = 1 << 7,
    CImGuiPopupFlags_AnyPopupLevel = 1 << 8,
    CImGuiPopupFlags_AnyPopup = CImGuiPopupFlags_AnyPopupId | CImGuiPopupFlags_AnyPopupLevel
};

enum CImGuiSelectableFlags_ {
    CImGuiSelectableFlags_None = 0,
    CImGuiSelectableFlags_DontClosePopups = 1 << 0,
    CImGuiSelectableFlags_SpanAllColumns = 1 << 1,
    CImGuiSelectableFlags_AllowDoubleClick = 1 << 2,
    CImGuiSelectableFlags_Disabled = 1 << 3,
    CImGuiSelectableFlags_AllowItemOverlap = 1 << 4
};

enum CImGuiSliderFlags_ {
    CImGuiSliderFlags_None = 0,
    CImGuiSliderFlags_AlwaysClamp = 1 << 4,
    CImGuiSliderFlags_Logarithmic = 1 << 5,
    CImGuiSliderFlags_NoRoundToFormat = 1 << 6,
    CImGuiSliderFlags_NoInput = 1 << 7,
    CImGuiSliderFlags_InvalidMask_ = 0x7000000F

#ifndef IMGUI_DISABLE_OBSOLETE_FUNCTIONS
    , CImGuiSliderFlags_ClampOnInput = CImGuiSliderFlags_AlwaysClamp
#endif
};

enum CImGuiTabBarFlags_ {
    CImGuiTabBarFlags_None = 0,
    CImGuiTabBarFlags_Reorderable = 1 << 0,
    CImGuiTabBarFlags_AutoSelectNewTabs = 1 << 1,
    CImGuiTabBarFlags_TabListPopupButton = 1 << 2,
    CImGuiTabBarFlags_NoCloseWithMiddleMouseButton = 1 << 3,
    CImGuiTabBarFlags_NoTabListScrollingButtons = 1 << 4,
    CImGuiTabBarFlags_NoTooltip = 1 << 5,
    CImGuiTabBarFlags_FittingPolicyResizeDown = 1 << 6,
    CImGuiTabBarFlags_FittingPolicyScroll = 1 << 7,
    CImGuiTabBarFlags_FittingPolicyMask_ = CImGuiTabBarFlags_FittingPolicyResizeDown | CImGuiTabBarFlags_FittingPolicyScroll,
    CImGuiTabBarFlags_FittingPolicyDefault_ = CImGuiTabBarFlags_FittingPolicyResizeDown
};

enum CImGuiTabItemFlags_ {
    CImGuiTabItemFlags_None = 0,
    CImGuiTabItemFlags_UnsavedDocument = 1 << 0,
    CImGuiTabItemFlags_SetSelected = 1 << 1,
    CImGuiTabItemFlags_NoCloseWithMiddleMouseButton = 1 << 2,
    CImGuiTabItemFlags_NoPushId = 1 << 3,
    CImGuiTabItemFlags_NoTooltip = 1 << 4,
    CImGuiTabItemFlags_NoReorder = 1 << 5,
    CImGuiTabItemFlags_Leading = 1 << 6,
    CImGuiTabItemFlags_Trailing = 1 << 7
};

enum CImGuiTreeNodeFlags_ {
    CImGuiTreeNodeFlags_None = 0,
    CImGuiTreeNodeFlags_Selected = 1 << 0,
    CImGuiTreeNodeFlags_Framed = 1 << 1,
    CImGuiTreeNodeFlags_AllowItemOverlap = 1 << 2,
    CImGuiTreeNodeFlags_NoTreePushOnOpen = 1 << 3,
    CImGuiTreeNodeFlags_NoAutoOpenOnLog = 1 << 4,
    CImGuiTreeNodeFlags_DefaultOpen = 1 << 5,
    CImGuiTreeNodeFlags_OpenOnDoubleClick = 1 << 6,
    CImGuiTreeNodeFlags_OpenOnArrow = 1 << 7,
    CImGuiTreeNodeFlags_Leaf = 1 << 8,
    CImGuiTreeNodeFlags_Bullet = 1 << 9,
    CImGuiTreeNodeFlags_FramePadding = 1 << 10,
    CImGuiTreeNodeFlags_SpanAvailWidth = 1 << 11,
    CImGuiTreeNodeFlags_SpanFullWidth = 1 << 12,
    CImGuiTreeNodeFlags_NavLeftJumpsBackHere = 1 << 13,
    //CImGuiTreeNodeFlags_NoScrollOnOpen = 1 << 14,
    CImGuiTreeNodeFlags_CollapsingHeader = CImGuiTreeNodeFlags_Framed | CImGuiTreeNodeFlags_NoTreePushOnOpen | CImGuiTreeNodeFlags_NoAutoOpenOnLog
};

enum CImGuiViewportFlags_ {
    CImGuiViewportFlags_None = 0,
    CImGuiViewportFlags_NoDecoration = 1 << 0,
    CImGuiViewportFlags_NoTaskBarIcon = 1 << 1,
    CImGuiViewportFlags_NoFocusOnAppearing = 1 << 2,
    CImGuiViewportFlags_NoFocusOnClick = 1 << 3,
    CImGuiViewportFlags_NoInputs = 1 << 4,
    CImGuiViewportFlags_NoRendererClear = 1 << 5,
    CImGuiViewportFlags_TopMost = 1 << 6,
    CImGuiViewportFlags_Minimized = 1 << 7,
    CImGuiViewportFlags_NoAutoMerge = 1 << 8,
    CImGuiViewportFlags_CanHostOtherWindows = 1 << 9
};

enum CImGuiWindowFlags_ {
    CImGuiWindowFlags_None = 0,
    CImGuiWindowFlags_NoTitleBar = 1 << 0,
    CImGuiWindowFlags_NoResize = 1 << 1,
    CImGuiWindowFlags_NoMove = 1 << 2,
    CImGuiWindowFlags_NoScrollbar = 1 << 3,
    CImGuiWindowFlags_NoScrollWithMouse = 1 << 4,
    CImGuiWindowFlags_NoCollapse = 1 << 5,
    CImGuiWindowFlags_AlwaysAutoResize = 1 << 6,
    CImGuiWindowFlags_NoBackground = 1 << 7,
    CImGuiWindowFlags_NoSavedSettings = 1 << 8,
    CImGuiWindowFlags_NoMouseInputs = 1 << 9,
    CImGuiWindowFlags_MenuBar = 1 << 10,
    CImGuiWindowFlags_HorizontalScrollbar = 1 << 11,
    CImGuiWindowFlags_NoFocusOnAppearing = 1 << 12,
    CImGuiWindowFlags_NoBringToFrontOnFocus = 1 << 13,
    CImGuiWindowFlags_AlwaysVerticalScrollbar = 1 << 14,
    CImGuiWindowFlags_AlwaysHorizontalScrollbar = 1<< 15,
    CImGuiWindowFlags_AlwaysUseWindowPadding = 1 << 16,
    CImGuiWindowFlags_NoNavInputs = 1 << 18,
    CImGuiWindowFlags_NoNavFocus = 1 << 19,
    CImGuiWindowFlags_UnsavedDocument = 1 << 20,
    CImGuiWindowFlags_NoDocking = 1 << 21,

    CImGuiWindowFlags_NoNav = CImGuiWindowFlags_NoNavInputs | CImGuiWindowFlags_NoNavFocus,
    CImGuiWindowFlags_NoDecoration = CImGuiWindowFlags_NoTitleBar | CImGuiWindowFlags_NoResize | CImGuiWindowFlags_NoScrollbar | CImGuiWindowFlags_NoCollapse,
    CImGuiWindowFlags_NoInputs = CImGuiWindowFlags_NoMouseInputs | CImGuiWindowFlags_NoNavInputs | CImGuiWindowFlags_NoNavFocus,

    //Internal
    CImGuiWindowFlags_NavFlattened = 1 << 23,
    CImGuiWindowFlags_ChildWindow = 1 << 24,
    CImGuiWindowFlags_Tooltip = 1 << 25,
    CImGuiWindowFlags_Popup = 1 << 26,
    CImGuiWindowFlags_Modal = 1 << 27,
    CImGuiWindowFlags_ChildMenu = 1 << 28,
    CImGuiWindowFlags_DockNodeHost = 1 << 29
};


struct CImDrawChannel {
    CImVector_CImDrawCmd _CmdBuffer;
    CImVector_CImDrawIdx _IdxBuffer;
};

CImDrawChannel * ig_CImDrawChannel_init();
void ig_CImDrawChannel_deinit(const CImDrawChannel * ptr);


struct CImDrawCmd {
    unsigned int ElemCount;
    CImVec4 ClipRect;
    CImTextureID TextureId;
    unsigned int VtxOffset;
    unsigned int IdxOffset;
    CImDrawCallback UserCallback;
    void * UserCallbackData;
};

CImDrawCmd * ig_CImDrawCmd_init();
void ig_CImDrawCmd_deinit(const CImDrawCmd * ptr);


struct CImDrawData {
    bool Valid;
    CImDrawList ** CmdLists;
    int CmdListsCount;
    int TotalIdxCount;
    int TotalVtxCount;
    CImVec2 DisplayPos;
    CImVec2 DisplaySize;
    CImVec2 FramebufferScale;
    CImGuiViewport * OwnerViewport;
};

CImDrawData * ig_CImDrawData_init();
void ig_CImDrawData_deinit(const CImDrawData * ptr);
void ig_CImDrawData_Clear(CImDrawData * ptr);
void ig_CImDrawData_DeIndexAllBuffers(CImDrawData * ptr);
void ig_CImDrawData_ScaleClipRects(CImDrawData * ptr, CImVec2 fb_scale);


struct CImDrawListSplitter {
    int _Current;
    int _Count;
    CImVector_CImDrawChannel _Channels;
};

CImDrawListSplitter * ig_CImDrawListSplitter_init();
void ig_CImDrawListSplitter_deinit(const CImDrawListSplitter * ptr);
void ig_CImDrawListSplitter_Clear(CImDrawListSplitter * ptr);
void ig_CImDrawListSplitter_ClearFreeMemory(CImDrawListSplitter * ptr);
void ig_CImDrawListSplitter_Split(CImDrawListSplitter * ptr, CImDrawList * draw_list, int count);
void ig_CImDrawListSplitter_Merge(CImDrawListSplitter * ptr, CImDrawList * draw_list);
void ig_CImDrawListSplitter_SetCurrentChannel(CImDrawListSplitter * ptr, CImDrawList * draw_list, int channel_idx);


struct CImDrawList {
    CImVector_CImDrawCmd CmdBuffer;
    CImVector_CImDrawIdx IdxBuffer;
    CImVector_CImDrawVert VtxBuffer;
    CImDrawListFlags Flags;
    const CImDrawListSharedData * _Data;
    const char * _OwnerName;
    unsigned int _VtxCurrentIdx;
    CImDrawVert * _VtxWritePtr;
    CImDrawIdx * _IdxWritePtr;
    CImVector_CImVec4 _ClipRectStack;
    CImVector_CImTextureID _TextureIdStack;
    CImVector_CImVec2 _Path;
    CImDrawCmd _CmdHeader;
    CImDrawListSplitter _Splitter;
};

CImDrawList * ig_CImDrawList_init(const CImDrawListSharedData * shared_data);
void ig_CImDrawList_deinit(const CImDrawList * ptr);
void ig_CImDrawList_PushClipRectFullScreen(CImDrawList * ptr);
void ig_CImDrawList_PopClipRect(CImDrawList * ptr);
void ig_CImDrawList_PushTextureID(CImDrawList * ptr, CImTextureID texture_id);
void ig_CImDrawList_PopTextureID(CImDrawList * ptr);
CImVec2 ig_CImDrawList_GetClipRectMin(const CImDrawList * ptr);
CImVec2 ig_CImDrawList_GetClipRectMax(const CImDrawList * ptr);

void ig_CImDrawList_AddLine(CImDrawList * ptr, CImVec2 p1, CImVec2 p2, CImU32 col, float thickness);
void ig_CImDrawList_AddRect(CImDrawList * ptr, CImVec2 p_min, CImVec2 p_max, CImU32 col, float rounding, CImDrawCornerFlags rounding_corners, float thickness);
void ig_CImDrawList_AddRectFilled(CImDrawList * ptr, CImVec2 p_min, CImVec2 p_max, CImU32 col, float rounding, CImDrawCornerFlags rounding_corners);
void ig_CImDrawList_AddRectFilledMultiColor(CImDrawList * ptr, CImVec2 p_min, CImVec2 p_max, CImU32 col_upr_left, CImU32 col_upr_right, CImU32 col_bot_right, CImU32 col_bot_left);
void ig_CImDrawList_AddQuad(CImDrawList * ptr, CImVec2 p1, CImVec2 p2, CImVec2 p3, CImVec2 p4, CImU32 col, float thickness);
void ig_CImDrawList_AddQuadFilled(CImDrawList * ptr, CImVec2 p1, CImVec2 p2, CImVec2 p3, CImVec2 p4, CImU32 col);
void ig_CImDrawList_AddTriangle(CImDrawList * ptr, CImVec2 p1, CImVec2 p2, CImVec2 p3, CImU32 col, float thickness);
void ig_CImDrawList_AddTriangleFilled(CImDrawList * ptr, CImVec2 p1, CImVec2 p2, CImVec2 p3, CImU32 col);
void ig_CImDrawList_AddCircle(CImDrawList * ptr, CImVec2 center, float radius, CImU32 col, int num_segments, float thickness);
void ig_CImDrawList_AddCircleFilled(CImDrawList * ptr, CImVec2 center, float radius, CImU32 col, int num_segments);
void ig_CImDrawList_AddNgon(CImDrawList * ptr, CImVec2 center, float radius, CImU32 col, int num_segments, float thickness);
void ig_CImDrawList_AddNgonFilled(CImDrawList * ptr, CImVec2 center, float radius, CImU32 col, int num_segments);
void ig_CImDrawList_AddText(CImDrawList * ptr, CImVec2 pos, CImU32 col, const char * text_begin, const char * text_end);
void ig_CImDrawList_AddTextWithFont(CImDrawList * ptr, const CImFont * font, float font_size, CImVec2 pos, CImU32 col, const char * text_begin, const char * text_end, float wrap_width, const CImVec4 * cpu_fine_clip_rect);
void ig_CImDrawList_AddPolyline(CImDrawList * ptr, const CImVec2 * points, int num_points, CImU32 col, bool closed, float thickness);
void ig_CImDrawList_AddConvexPolyFilled(CImDrawList * ptr, const CImVec2 * points, int num_points, CImU32 col);
void ig_CImDrawList_AddBezierCurve(CImDrawList * ptr, CImVec2 p1, CImVec2 p2, CImVec2 p3, CImVec2 p4, CImU32 col, float thickness, int num_segments);

void ig_CImDrawList_AddImage(CImDrawList * ptr, CImTextureID user_texture_id, CImVec2 p_min, CImVec2 p_max, CImVec2 uv_min, CImVec2 uv_max, CImU32 col);
void ig_CImDrawList_AddImageQuad(CImDrawList * ptr, CImTextureID user_texture_id, CImVec2 p1, CImVec2 p2, CImVec2 p3, CImVec2 p4, CImVec2 uv1, CImVec2 uv2, CImVec2 uv3, CImVec2 uv4, CImU32 col);
void ig_CImDrawList_AddImageRounded(CImDrawList * ptr, CImTextureID user_texture_id, CImVec2 p_min, CImVec2 p_max, CImVec2 uv_min, CImVec2 uv_max, CImU32 col, float rounding, CImDrawCornerFlags rounding_corners);

void ig_CImDrawList_PathClear(CImDrawList * ptr);
void ig_CImDrawList_PathLineTo(CImDrawList * ptr, CImVec2 pos);
void ig_CImDrawList_PathLineToMergeDuplicate(CImDrawList * ptr, CImVec2 pos);
void ig_CImDrawList_PathFillConvex(CImDrawList * ptr, CImU32 col);
void ig_CImDrawList_PathStroke(CImDrawList * ptr, CImU32 col, bool closed, float thickness);
void ig_CImDrawList_PathArcTo(CImDrawList * ptr, CImVec2 center, float radius, float a_min, float a_max, int num_segments);
void ig_CImDrawList_PathArcToFast(CImDrawList * ptr, CImVec2 center, float radius, int a_min_of_12, int a_max_of_12);
void ig_CImDrawList_PathBezierCurveTo(CImDrawList * ptr, CImVec2 p2, CImVec2 p3, CImVec2 p4, int num_segments);
void ig_CImDrawList_PathRect(CImDrawList * ptr, CImVec2 rect_min, CImVec2 rect_max, float rounding, CImDrawCornerFlags rounding_corners);

void ig_CImDrawList_AddCallback(CImDrawList * ptr, CImDrawCallback callback, void * callback_data);
void ig_CImDrawList_AddDrawCmd(CImDrawList * ptr);
CImDrawList * ig_CImDrawList_CloneOutput(const CImDrawList * ptr);

void ig_CImDrawList_ChannelsSplit(CImDrawList * ptr, int count);
void ig_CImDrawList_ChannelsMerge(CImDrawList * ptr);
void ig_CImDrawList_ChannelsSetCurrent(CImDrawList * ptr, int n);


struct CImDrawListSharedData {
    CImVec2 TexUvWhitePixel;
    CImFont * Font;
    float FontSize;
    float CurveTessellationTol;
    float CircleSegmentMaxError;
    CImVec4 ClipRectFullscreen;
    CImDrawListFlags InitialFlags;
    CImVec2 ArcFastVtx[12];
    CImU8 CircleSegmentCounts[64];
    const CImVec4 * TexUvLines;
};

CImDrawListSharedData * ig_CImDrawListSharedData_init();
void ig_CImDrawListSharedData_deinit(const CImDrawListSharedData * ptr);
void ig_CImDrawListSharedData_SetCircleSegmentMaxError(CImDrawListSharedData * ptr, float max_error);


struct CImDrawVert {
    CImVec2 pos;
    CImVec2 uv;
    CImU32 col;
};

CImDrawVert * ig_CImDrawVert_init();
void ig_CImDrawVert_deinit(const CImDrawVert * ptr);


struct CImFont {
    CImVector_float IndexAdvanceX;
    float FallbackAdvanceX;
    float FontSize;
    CImVector_CImWchar IndexLookup;
    CImVector_CImFontGlyph Glyphs;
    const CImFontGlyph * FallbackGlyph;
    CImFontAtlas * ContainerAtlas;
    const CImFontConfig * ConfigData;
    short ConfigDataCount;
    CImWchar FallbackChar;
    CImWchar EllipsisChar;
    bool DirtyLookupTables;
    float Scale;
    float Ascent, Descent;
    int MetricsTotalSurface;
    CImU8 Used4kPagesMap[(CIM_UNICODE_CODEPOINT_MAX+1)/4096/8];
};

CImFont * ig_CImFont_init();
void ig_CImFont_deinit(const CImFont * ptr);
const CImFontGlyph * ig_CImFont_FindGlyph(const CImFont * ptr, CImWchar c);
const CImFontGlyph * ig_CImFont_FindGlyphNoFallback(const CImFont * ptr, CImWchar c);
float ig_CImFont_GetCharAdvance(const CImFont * ptr, CImWchar c);
bool ig_CImFont_IsLoaded(const CImFont * ptr);
const char * ig_CImFont_GetDebugName(const CImFont * ptr);

CImVec2 ig_CImFont_CalcTextSizeA(const CImFont * ptr, float size, float max_width, float wrap_width, const char * text_begin, const char * text_end, const char ** remaining);
const char * ig_CImFont_CalcWordWrapPositionA(const CImFont * ptr, float scale, const char * text, const char * text_end, float wrap_width);
void ig_CImFont_RenderChar(const CImFont * ptr, CImDrawList * draw_list, float size, CImVec2 pos, CImU32 col, CImWchar c);
void ig_CImFont_RenderText(const CImFont * ptr, CImDrawList * draw_list, float size, CImVec2 pos, CImU32 col, CImVec4 clip_rect, const char * text_begin, const char * text_end, float wrap_width, bool cpu_fine_clip);


struct CImFontAtlas {
    bool Locked;
    CImFontAtlasFlags Flags;
    CImTextureID TexID;
    int TexDesiredWidth;
    int TexGlyphPadding;
    unsigned char * TexPixelsAlpha8;
    unsigned int * TexPixelsRGBA32;
    int TexWidth;
    int TexHeight;
    CImVec2 TexUvScale;
    CImVec2 TexUvWhitePixel;
    CImVector_CImFontPtr Fonts;
    CImVector_CImFontAtlasCustomRect CustomRects;
    CImVector_CImFontConfig ConfigData;
    CImVec4 TexUvLines[CIM_DRAWLIST_TEX_LINES_WIDTH_MAX + 1];
    int PackIdMouseCursors;
    int PackIdLines;
};

CImFontAtlas * ig_CImFontAtlas_init();
void ig_CImFontAtlas_deinit(const CImFontAtlas * ptr);
CImFont * ig_CImFontAtlas_AddFont(CImFontAtlas * ptr, const CImFontConfig * font_cfg);
CImFont * ig_CImFontAtlas_AddFontDefault(CImFontAtlas * ptr, const CImFontConfig * font_cfg);
CImFont * ig_CImFontAtlas_AddFontFromFileTTF(CImFontAtlas * ptr, const char * filename, float size_pixels, const CImFontConfig * font_cfg, const CImWchar * glyph_ranges);
CImFont * ig_CImFontAtlas_AddFontFromMemoryTTF(CImFontAtlas * ptr, void * font_data, int font_size, float size_pixels, const CImFontConfig * font_cfg, const CImWchar * glyph_ranges);
CImFont * ig_CImFontAtlas_AddFontFromMemoryCompressedTTF(CImFontAtlas * ptr, const void * compressed_font_data, int compressed_font_size, float size_pixels, const CImFontConfig * font_cfg, const CImWchar * glyph_ranges);
CImFont * ig_CImFontAtlas_AddFontFromMemoryCompressedBase85TTF(CImFontAtlas * ptr, const char * compressed_font_data_base85, float size_pixels, const CImFontConfig * font_cfg, const CImWchar * glyph_ranges);
void ig_CImFontAtlas_ClearInputData(CImFontAtlas * ptr);
void ig_CImFontAtlas_ClearTexData(CImFontAtlas * ptr);
void ig_CImFontAtlas_ClearFonts(CImFontAtlas * ptr);
void ig_CImFontAtlas_Clear(CImFontAtlas * ptr);

bool ig_CImFontAtlas_Build(CImFontAtlas * ptr);
void ig_CImFontAtlas_GetTexDataAsAlpha8(CImFontAtlas * ptr, unsigned char ** out_pixels, int * out_width, int * out_height, int * out_bytes_per_pixel);
void ig_CImFontAtlas_GetTexDataAsRGBA32(CImFontAtlas * ptr, unsigned char ** out_pixels, int * out_width, int * out_height, int * out_bytes_per_pixel);
bool ig_CImFontAtlas_IsBuilt(const CImFontAtlas * ptr);
void ig_CImFontAtlas_SetTexID(CImFontAtlas * ptr, CImTextureID id);

const CImWchar * ig_CImFontAtlas_GetGlyphRangesDefault(CImFontAtlas * ptr);
const CImWchar * ig_CImFontAtlas_GetGlyphRangesKorean(CImFontAtlas * ptr);
const CImWchar * ig_CImFontAtlas_GetGlyphRangesJapanese(CImFontAtlas * ptr);
const CImWchar * ig_CImFontAtlas_GetGlyphRangesChineseFull(CImFontAtlas * ptr);
const CImWchar * ig_CImFontAtlas_GetGlyphRangesChineseSimplifiedCommon(CImFontAtlas * ptr);
const CImWchar * ig_CImFontAtlas_GetGlyphRangesCyrillic(CImFontAtlas * ptr);
const CImWchar * ig_CImFontAtlas_GetGlyphRangesThai(CImFontAtlas * ptr);
const CImWchar * ig_CImFontAtlas_GetGlyphRangesVietnamese(CImFontAtlas * ptr);

int ig_CImFontAtlas_AddCustomRectRegular(CImFontAtlas * ptr, int width, int height);
int ig_CImFontAtlas_AddCustomRectFontGlyph(CImFontAtlas * ptr, CImFont * font, CImWchar id, int width, int height, float advance_x, CImVec2 offset);
CImFontAtlasCustomRect * ig_CImFontAtlas_GetCustomRectByIndex(CImFontAtlas * ptr, int index);


struct CImFontConfig {
    void * FontData;
    int FontDataSize;
    bool FontDataOwnedByAtlas;
    int FontNo;
    float SizePixels;
    int OversampleH;
    int OversampleV;
    bool PixelSnapH;
    CImVec2 GlyphExtraSpacing;
    CImVec2 GlyphOffset;
    const CImWchar * GlyphRanges;
    float GlyphMinAdvanceX;
    float GlyphMaxAdvanceX;
    bool MergeMode;
    unsigned int RasterizerFlags;
    float RasterizerMultiply;
    CImWchar EllipsisChar;
    char Name[40];
    CImFont * DstFont;
};

CImFontConfig * ig_CImFontConfig_init();
void ig_CImFontConfig_deinit(const CImFontConfig * ptr);


struct CImFontGlyph {
    unsigned int Codepoint : 31;
    unsigned int Visible : 1;
    float AdvanceX;
    float X0, Y0, X1, Y1;
    float U0, V0, U1, V1;
};

CImFontGlyph * ig_CImFontGlyph_init();
void ig_CImFontGlyph_deinit(const CImFontGlyph * ptr);


struct CImFontGlyphRangesBuilder {
    CImVector_CImU32 UsedChars;
};

CImFontGlyphRangesBuilder * ig_CImFontGlyphRangesBuilder_init();
void ig_CImFontGlyphRangesBuilder_deinit(const CImFontGlyphRangesBuilder * ptr);
void ig_CImFontGlyphRangesBuilder_Clear(CImFontGlyphRangesBuilder * ptr);
bool ig_CImFontGlyphRangesBuilder_GetBit(const CImFontGlyphRangesBuilder * ptr, size_t n);
void ig_CImFontGlyphRangesBuilder_SetBit(CImFontGlyphRangesBuilder * ptr, size_t n);
void ig_CImFontGlyphRangesBuilder_AddChar(CImFontGlyphRangesBuilder * ptr, CImWchar c);
void ig_CImFontGlyphRangesBuilder_AddText(CImFontGlyphRangesBuilder * ptr, const char * text, const char * text_end);
void ig_CImFontGlyphRangesBuilder_AddRanges(CImFontGlyphRangesBuilder * ptr, const CImWchar * ranges);
void ig_CImFontGlyphRangesBuilder_BuildRanges(CImFontGlyphRangesBuilder * ptr, CImVector_CImWchar * out_ranges);


struct CImColor {
    CImVec4 Value;
};

CImColor * ig_CImColor_init();
CImColor * ig_CImColor_initInt(int r, int g, int b, int a);
CImColor * ig_CImColor_initRGBA(CImU32 rgba);
CImColor * ig_CImColor_initFloat(float r, float g, float b, float a);
CImColor * ig_CImColor_initVec(CImVec4 col);
CImColor * ig_CImColor_initHSV(float h, float s, float v, float a);
void ig_CImColor_deinit(const CImColor * ptr);
CImU32 ig_CImColor_GetCImU32(const CImColor * ptr);
CImVec4 ig_CImColor_GetCImVec4(const CImColor * ptr);
void ig_CImColor_SetHSV(CImColor * ptr, float h, float s, float v, float a);


struct CImGuiIO {
    CImGuiConfigFlags ConfigFlags;
    CImGuiBackendFlags BackendFlags;
    CImVec2 DisplaySize;
    float DeltaTime;
    float IniSavingRate;
    const char * IniFilename;
    const char * LogFilename;
    float MouseDoubleClickTime;
    float MouseDoubleClickMaxDist;
    float MouseDragThreshold;
    int KeyMap[CImGuiKey_COUNT];
    float KeyRepeatDelay;
    float KeyRepeatRate;
    void * UserData;
    CImFontAtlas * Fonts;
    float FontGlobalScale;
    bool FontAllowUserScaling;
    CImFont * FontDefault;
    CImVec2 DisplayFramebufferScale;
    bool ConfigDockingNoSplit;
    bool ConfigDockingWithShift;
    bool ConfigDockingAlwaysTabBar;
    bool ConfigDockingTransparentPayload;
    bool ConfigViewportsNoAutoMerge;
    bool ConfigViewportsNoTaskBarIcon;
    bool ConfigViewportsNoDecoration;
    bool ConfigViewportsNoDefaultParent;
    bool MouseDrawCursor;
    bool ConfigMacOSXBehaviors;
    bool ConfigInputTextCursorBlink;
    bool ConfigWindowsResizeFromEdges;
    bool ConfigWindowsMoveFromTitleBarOnly;
    float ConfigWindowsMemoryCompactTimer;
    const char * BackendPlatformName;
    const char * BackendRendererName;
    void * BackendPlatformUserData;
    void * BackendRendererUserData;
    void * BackendLanguageUserData;
    const char * (*GetClipboardTextFn)(void * user_data);
    void (*SetClipboardTextFn)(void * user_data, const char * text);
    void * ClipboardUserData;
#ifndef IMGUI_DISABLE_OBSOLETE_FUNCTIONS
    void (*RenderDrawListsFn)(ImDrawData * data);
#else
    void * RenderDrawListsFnUnused;
#endif
    CImVec2 MousePos;
    bool MouseDown[5];
    float MouseWheel;
    float MouseWheelH;
    CImGuiID MouseHoveredViewport;
    bool KeyCtrl;
    bool KeyShift;
    bool KeyAlt;
    bool KeySuper;
    bool KeysDown[512];
    float NavInputs[CImGuiNavInput_COUNT];
    bool WantCaptureMouse;
    bool WantCaptureKeyboard;
    bool WantTextInput;
    bool WantSetMousePos;
    bool WantSaveIniSettings;
    bool NavActive;
    bool NavVisible;
    float Framerate;
    int MetricsRenderVertices;
    int MetricsRenderIndices;
    int MetricsRenderWindows;
    int MetricsActiveWindows;
    int MetricsActiveAllocations;
    CImVec2 MouseDelta;

    CImVec2 MousePosPrev;
    CImVec2 MouseClickedPos[5];
    double MouseClickedTime[5];
    bool MouseClicked[5];
    bool MouseDoubleClicked[5];
    bool MouseReleased[5];
    bool MouseDownOwned[5];
    bool MouseDownWasDoubleClick[5];
    float MouseDownDuration[5];
    float MouseDownDurationPrev[5];
    CImVec2 MouseDragMaxDistanceAbs[5];
    float MouseDragMaxDistanceSqr[5];
    float KeysDownDuration[512];
    float KeysDownDurationPrev[512];
    float NavInputsDownDuration[CImGuiNavInput_COUNT];
    float NavInputsDownDurationPrev[CImGuiNavInput_COUNT];
    CImWchar16 InputQueueSurrogate;
    CImVector_CImWchar InputQueueCharacters;
};

CImGuiIO * ig_CImGuiIO_init();
void ig_CImGuiIO_deinit(const CImGuiIO * ptr);
void ig_CImGuiIO_AddInputCharacter(CImGuiIO * ptr, unsigned int c);
void ig_CImGuiIO_AddInputCharacterUTF16(CImGuiIO * ptr, CImWchar16 c);
void ig_CImGuiIO_AddInputCharactersUTF8(CImGuiIO * ptr, const char * str);
void ig_CImGuiIO_ClearInputCharacters(CImGuiIO * ptr);


struct CImGuiInputTextCallbackData {
    CImGuiInputTextFlags EventFlag;
    CImGuiInputTextFlags Flags;
    void * UserData;
    CImWchar EventChar;
    CImGuiKey EventKey;
    char * Buf;
    int BufTextLen;
    int BufSize;
    bool BufDirty;
    int CursorPos;
    int SelectionStart;
    int SelectionEnd;
};

CImGuiInputTextCallbackData * ig_CImGuiInputTextCallbackData_init();
void ig_CImGuiInputTextCallbackData_deinit(const CImGuiInputTextCallbackData * ptr);
void ig_CImGuiInputTextCallbackData_DeleteChars(CImGuiInputTextCallbackData * ptr, int pos, int bytes_count);
void ig_CImGuiInputTextCallbackData_InsertChars(CImGuiInputTextCallbackData * ptr, int pos, const char * text, const char * text_end);
bool ig_CImGuiInputTextCallbackData_HasSelection(const CImGuiInputTextCallbackData * ptr);


struct CImGuiListClipper {
    int DisplayStart, DisplayEnd;
    int ItemsCount;

    //Internal
    int StepNo;
    float ItemsHeight;
    float StartPosY;
};

CImGuiListClipper * ig_CImGuiListClipper_init(int items_count, float items_height);
void ig_CImGuiListClipper_deinit(const CImGuiListClipper * ptr);
bool ig_CImGuiListClipper_Step(CImGuiListClipper * ptr);
void ig_CImGuiListClipper_Begin(CImGuiListClipper * ptr, int items_count, float items_height);
void ig_CImGuiListClipper_End(CImGuiListClipper * ptr);


struct CImGuiOnceUponAFrame {
    int RefFrame;
};

CImGuiOnceUponAFrame * ig_CImGuiOnceUponAFrame_init();
void ig_CImGuiOnceUponAFrame_deinit(const CImGuiOnceUponAFrame * ptr);
bool ig_CImGuiOnceUponAFrame_bool(const CImGuiOnceUponAFrame * ptr);


struct CImGuiPayload {
    void * Data;
    int DataSize;
    
    //Internal
    CImGuiID SourceId;
    CImGuiID SourceParentId;
    int DataFrameCount;
    char DataType[32+1];
    bool Preview;
    bool Delivery;
};

CImGuiPayload * ig_CImGuiPayload_init();
void ig_CImGuiPayload_deinit(const CImGuiPayload * ptr);
void ig_CImGuiPayload_Clear(CImGuiPayload * ptr);
bool ig_CImGuiPayload_IsDataType(const CImGuiPayload * ptr, const char* type);
bool ig_CImGuiPayload_IsPreview(const CImGuiPayload * ptr);
bool ig_CImGuiPayload_IsDelivery(const CImGuiPayload * ptr);


struct CImGuiPlatformIO {
    void (*Platform_CreateWindow)(ImGuiViewport * vp);
    void (*Platform_DestroyWindow)(ImGuiViewport * vp);
    void (*Platform_ShowWindow)(ImGuiViewport * vp);
    void (*Platform_SetWindowPos)(ImGuiViewport * vp, ImVec2 pos);
    ImVec2 (*Platform_GetWindowPos)(ImGuiViewport * vp);
    void (*Platform_SetWindowSize)(ImGuiViewport * vp, ImVec2 size);
    ImVec2 (*Platform_GetWindowSize)(ImGuiViewport * vp);
    void (*Platform_SetWindowFocus)(ImGuiViewport * vp);
    bool (*Platform_GetWindowFocus)(ImGuiViewport * vp);
    bool (*Platform_GetWindowMinimized)(ImGuiViewport * vp);
    void (*Platform_SetWindowTitle)(ImGuiViewport * vp, const char * str);
    void (*Platform_SetWindowAlpha)(ImGuiViewport * vp, float alpha);
    void (*Platform_UpdateWindow)(ImGuiViewport * vp);
    void (*Platform_RenderWindow)(ImGuiViewport * vp, void * render_arg);
    void (*Platform_SwapBuffers)(ImGuiViewport * vp, void * render_arg);
    float (*Platform_GetWindowDpiScale)(ImGuiViewport * vp);
    void (*Platform_OnChangedViewport)(ImGuiViewport * vp);
    void (*Platform_SetImeInputPos)(ImGuiViewport * vp, ImVec2 pos);
    int (*Platform_CreateVkSurface)(ImGuiViewport * vp, CImU64 vk_inst, const void * vk_allocators, CImU64 * out_vk_surface);
    void (*Renderer_CreateWindow)(ImGuiViewport * vp);
    void (*Renderer_DestroyWindow)(ImGuiViewport * vp);
    void (*Renderer_SetWindowSize)(ImGuiViewport * vp, ImVec2 size);
    void (*Renderer_RenderWindow)(ImGuiViewport * vp, void * render_arg);
    void (*Renderer_SwapBuffers)(ImGuiViewport * vp, void * render_arg);
    
    CImVector_CImGuiPlatformMonitor Monitors;
    CImGuiViewport * MainViewport;
    CImVector_CImGuiViewportPtr Viewports;
};

CImGuiPlatformIO * ig_CImGuiPlatformIO_init();
void ig_CImGuiPlatformIO_deinit(const CImGuiPlatformIO * ptr);


struct CImGuiPlatformMonitor {
    CImVec2 MainPos, MainSize;
    CImVec2 WorkPos, WorkSize;
    float DpiScale;
};

CImGuiPlatformMonitor * ig_CImGuiPlatformMonitor_init();
void ig_CImGuiPlatformMonitor_deinit(const CImGuiPlatformMonitor * ptr);


struct CImGuiSizeCallbackData {
    void * UserData;
    CImVec2 Pos;
    CImVec2 CurrentSize;
    CImVec2 DesiredSize;
};

CImGuiSizeCallbackData * ig_CImGuiSizeCallbackData_init();
void ig_CImGuiSizeCallbackData_deinit(const CImGuiSizeCallbackData * ptr);


struct CImGuiStorage {
    CImVector_CImGuiStoragePair Data;
};

CImGuiStorage * ig_CImGuiStorage_init();
void ig_CImGuiStorage_deinit(const CImGuiStorage * ptr);
void ig_CImGuiStorage_Clear(CImGuiStorage * ptr);
int ig_CImGuiStorage_GetInt(const CImGuiStorage * ptr, CImGuiID key, int default_val);
void ig_CImGuiStorage_SetInt(CImGuiStorage * ptr, CImGuiID key, int val);
bool ig_CImGuiStorage_GetBool(const CImGuiStorage * ptr, CImGuiID key, bool default_val);
void ig_CImGuiStorage_SetBool(CImGuiStorage * ptr, CImGuiID key, bool val);
float ig_CImGuiStorage_GetFloat(const CImGuiStorage * ptr, CImGuiID key, float default_val);
void ig_CImGuiStorage_SetFloat(CImGuiStorage * ptr, CImGuiID key, float val);
void * ig_CImGuiStorage_GetVoidPtr(const CImGuiStorage * ptr, CImGuiID key);
void ig_CImGuiStorage_SetVoidPtr(CImGuiStorage * ptr, CImGuiID key, void* val);

int * ig_CImGuiStorage_GetIntRef(CImGuiStorage * ptr, CImGuiID key, int default_val);
bool * ig_CImGuiStorage_GetBoolRef(CImGuiStorage * ptr, CImGuiID key, bool default_val);
float * ig_CImGuiStorage_GetFloatRef(CImGuiStorage * ptr, CImGuiID key, float default_val);
void ** ig_CImGuiStorage_GetVoidPtrRef(CImGuiStorage * ptr, CImGuiID key, void* default_val);

void ig_CImGuiStorage_SetAllInt(CImGuiStorage * ptr, int val);

void ig_CImGuiStorage_BuildSortByKey(CImGuiStorage * ptr);


struct CImGuiStyle {
    float Alpha;
    CImVec2 WindowPadding;
    float WindowRounding;
    float WindowBorderSize;
    CImVec2 WindowMinSize;
    CImVec2 WindowTitleAlign;
    CImGuiDir WindowMenuButtonPosition;
    float ChildRounding;
    float ChildBorderSize;
    float PopupRounding;
    float PopupBorderSize;
    CImVec2 FramePadding;
    float FrameRounding;
    float FrameBorderSize;
    CImVec2 ItemSpacing;
    CImVec2 ItemInnerSpacing;
    CImVec2 TouchExtraPadding;
    float IndentSpacing;
    float ColumnsMinSpacing;
    float ScrollbarSize;
    float ScrollbarRounding;
    float GrabMinSize;
    float GrabRounding;
    float LogSliderDeadzone;
    float TabRounding;
    float TabBorderSize;
    float TabMinWidthForCloseButton;
    CImGuiDir ColorButtonPosition;
    CImVec2 ButtonTextAlign;
    CImVec2 SelectableTextAlign;
    CImVec2 DisplayWindowPadding;
    CImVec2 DisplaySafeAreaPadding;
    float MouseCursorScale;
    bool AntiAliasedLines;
    bool AntiAliasedLinesUseTex;
    bool AntiAliasedFill;
    float CurveTessellationTol;
    float CircleSegmentMaxError;
    CImVec4 Colors[CImGuiCol_COUNT];
};

CImGuiStyle * ig_CImGuiStyle_init();
void ig_CImGuiStyle_deinit(const CImGuiStyle * ptr);
void ig_CImGuiStyle_ScaleAllSizes(CImGuiStyle * ptr, float scale_factor);


struct CImGuiTextBuffer {
    CImVector_char Buf;
};

char * ig_CImGuiTextBuffer_EmptyString();
CImGuiTextBuffer * ig_CImGuiTextBuffer_init();
void ig_CImGuiTextBuffer_deinit(const CImGuiTextBuffer * ptr);
char ig_CImGuiTextBuffer_subscript(const CImGuiTextBuffer * ptr, int i);
const char * ig_CImGuiTextBuffer_Begin(const CImGuiTextBuffer * ptr);
const char * ig_CImGuiTextBuffer_End(const CImGuiTextBuffer * ptr);
int ig_CImGuiTextBuffer_Size(const CImGuiTextBuffer * ptr);
bool ig_CImGuiTextBuffer_Empty(const CImGuiTextBuffer * ptr);
void ig_CImGuiTextBuffer_Clear(CImGuiTextBuffer * ptr);
void ig_CImGuiTextBuffer_Reserve(CImGuiTextBuffer * ptr, int capacity);
const char * ig_CImGuiTextBuffer_CStr(const CImGuiTextBuffer * ptr);
void ig_CImGuiTextBuffer_Append(CImGuiTextBuffer * ptr, const char * str, const char * str_end);
void ig_CImGuiTextBuffer_AppendF(CImGuiTextBuffer * ptr, const char * fmt);
void ig_CImGuiTextBuffer_AppendFV(CImGuiTextBuffer * ptr, const char * fmt, va_list args) CIM_FMTLIST(2);


struct CImGuiTextFilter {
    char InputBuf[256];
    CImVector_CImGuiTextRange Filters;
    int CountGrep;
};

CImGuiTextFilter * ig_CImGuiTextFilter_init(const char * default_filter);
void ig_CImGuiTextFilter_deinit(const CImGuiTextFilter * ptr);
bool ig_CImGuiTextFilter_Draw(CImGuiTextFilter * ptr, const char * label, float width);
bool ig_CImGuiTextFilter_PassFilter(const CImGuiTextFilter * ptr, const char * text, const char * text_end);
void ig_CImGuiTextFilter_Build(CImGuiTextFilter * ptr);
void ig_CImGuiTextFilter_Clear(CImGuiTextFilter * ptr);
bool ig_CImGuiTextFilter_IsActive(const CImGuiTextFilter * ptr);


struct CImGuiViewport {
    CImGuiID ID;
    CImGuiViewportFlags Flags;
    CImVec2 Pos;
    CImVec2 Size;
    CImVec2 WorkOffsetMin;
    CImVec2 WorkOffsetMax;
    float DpiScale;
    CImDrawData * DrawData;
    CImGuiID ParentViewportId;
    void * RendererUserData;
    void * PlatformUserData;
    void * PlatformHandle;
    void * PlatformHandleRaw;
    bool PlatformRequestMove;
    bool PlatformRequestResize;
    bool PlatformRequestClose;
};

CImGuiViewport * ig_CImGuiViewport_init();
void ig_CImGuiViewport_deinit(const CImGuiViewport * ptr);
CImVec2 ig_CImGuiViewport_GetWorkPos(CImGuiViewport * ptr);
CImVec2 ig_CImGuiViewport_GetWorkSize(CImGuiViewport * ptr);


struct CImGuiWindowClass {
    CImGuiID ClassId;
    CImGuiID ParentViewportId;
    CImGuiViewportFlags ViewportFlagsOverrideSet;
    CImGuiViewportFlags ViewportFlagsOverrideClear;
    CImGuiDockNodeFlags DockNodeFlagsOverrideSet;
    CImGuiDockNodeFlags DockNodeFlagsOverrideClear;
    bool DockingAlwaysTabBar;
    bool DockingAllowUnclassed;
};

CImGuiWindowClass * ig_CImGuiWindowClass_init();
void ig_CImGuiWindowClass_deinit(const CImGuiWindowClass * ptr);


struct CImFontAtlasCustomRect {
    unsigned int ID;
    unsigned short Width, Height;
    unsigned short X, Y;
    float GlyphAdvanceX;
    CImVec2 GlyphOffset;
    CImFont * Font;
};

CImFontAtlasCustomRect * ig_CImFontAtlasCustomRect_init();
void ig_CImFontAtlasCustomRect_deinit(const CImFontAtlasCustomRect * ptr);
bool ig_CImFontAtlasCustomRect_IsPacked(const CImFontAtlasCustomRect * ptr);

#ifdef __cplusplus
}
#endif

#endif //cimgui_h
