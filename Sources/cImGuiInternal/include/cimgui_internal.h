//
//  cimgui_internal.h
//
//
//  Created by Josef Zoller on 17.11.20.
//

#ifndef cimgui_internal_h
#define cimgui_internal_h

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

#include "cimgui.h"

#include "typedefs_internal.h"
#include "vectors_internal.h"


#ifdef __cplusplus
extern "C" {
#endif

struct CImRect {
    CImVec2 Min;
    CImVec2 Max;
};


CImGuiConcreteContext * igiGetCurrentContext();


CImGuiWindow * igiGetCurrentWindowRead();
CImGuiWindow * igiGetCurrentWindow();
CImGuiWindow * igiFindWindowByID(CImGuiID id);
CImGuiWindow * igiFindWindowByName(const char * name);
void igiUpdateWindowParentAndRootLinks(CImGuiWindow * window, CImGuiWindowFlags flags, CImGuiWindow * parent_window);
CImVec2 igiCalcWindowExpectedSize(CImGuiWindow * window);
bool igiIsWindowChildOf(CImGuiWindow * window, CImGuiWindow * potential_parent);
bool igiIsWindowNavFocusable(CImGuiWindow * window);
CImRect igiGetWindowAllowedExtentRect(CImGuiWindow * window);
void igiSetWindowPos(CImGuiWindow * window, CImVec2 pos, CImGuiCond cond);
void igiSetWindowSize(CImGuiWindow * window, CImVec2 size, CImGuiCond cond);
void igiSetWindowCollapsed(CImGuiWindow * window, bool collapsed, CImGuiCond cond);
void igiSetWindowHitTestHole(CImGuiWindow * window, CImVec2 pos, CImVec2 size);

void igiFocusWindow(CImGuiWindow * window);
void igiFocusTopMostWindowUnderOne(CImGuiWindow * under_this_window, CImGuiWindow * ignore_window);
void igiBringWindowToFocusFront(CImGuiWindow * window);
void igiBringWindowToDisplayFront(CImGuiWindow * window);
void igiBringWindowToDisplayBack(CImGuiWindow * window);

void igiSetCurrentFont(CImFont * font);
CImFont * igiGetDefaultFont();
CImDrawList * igiGetForegroundDrawList(CImGuiWindow * window);

void igiInitialize(CImGuiConcreteContext * context);
void igiShutdown(CImGuiConcreteContext * context);

void igiUpdateHoveredWindowAndCaptureFlags();
void igiStartMouseMovingWindow(CImGuiWindow * window);
void igiStartMouseMovingWindowOrNode(CImGuiWindow * window, CImGuiDockNode * node, bool undock_floating_node);
void igiUpdateMouseMovingWindowNewFrame();
void igiUpdateMouseMovingWindowEndFrame();

void igiTranslateWindowsInViewport(CImGuiViewportP * viewport, CImVec2 old_pos, CImVec2 new_pos);
void igiScaleWindowsInViewport(CImGuiViewportP * viewport, float scale);
void igiDestroyPlatformWindow(CImGuiViewportP * viewport);
void igiShowViewportThumbnails();

void igiMarkIniSettingsDirty();
void igiMarkIniSettingsDirtyWindow(CImGuiWindow * window);
void igiClearIniSettings();
CImGuiWindowSettings * igiCreateNewWindowSettings(const char * name);
CImGuiWindowSettings * igiFindWindowSettings(CImGuiID id);
CImGuiWindowSettings * igiFindOrCreateWindowSettings(const char * name);
CImGuiSettingsHandler * igiFindSettingsHandler(const char * type_name);

void igiSetNextWindowScroll(CImVec2 scroll);
void igiSetScrollX(CImGuiWindow * window, float scroll_x);
void igiSetScrollY(CImGuiWindow * window, float scroll_y);
void igiSetScrollFromPosX(CImGuiWindow * window, float local_x, float center_x_ratio);
void igiSetScrollFromPosY(CImGuiWindow * window, float local_y, float center_y_ratio);
CImVec2 igiScrollToBringRectIntoView(CImGuiWindow * window, CImRect item_rect);

CImGuiID igiGetItemID();
CImGuiItemStatusFlags igiGetItemStatusFlags();
CImGuiID igiGetActiveID();
CImGuiID igiGetFocusID();
void igiSetActiveID(CImGuiID id, CImGuiWindow * window);
void igiSetFocusID(CImGuiID id, CImGuiWindow * window);
void igiClearActiveID();
CImGuiID igiGetHoveredID();
void igiSetHoveredID(CImGuiID id);
void igiKeepAliveID(CImGuiID id);
void igiMarkItemEdited(CImGuiID id);
void igiPushOverrideID(CImGuiID id);
CImGuiID igiGetIDWithSeed(const char * str_id_begin, const char * str_id_end, CImGuiID seed);

void igiItemSize(CImVec2 size, float text_baseline_y);
void igiItemSizeBox(CImRect bb, float text_baseline_y);
bool igiItemAdd(CImRect bb, CImGuiID id, const CImRect * nav_bb);
bool igiItemHoverable(CImRect bb, CImGuiID id);
bool igiIsClippedEx(CImRect bb, CImGuiID id, bool clip_even_when_logged);
void igiSetLastItemData(CImGuiWindow * window, CImGuiID item_id, CImGuiItemStatusFlags status_flags, CImRect item_rect);
bool igiFocusableItemRegister(CImGuiWindow * window, CImGuiID id);
void igiFocusableItemUnregister(CImGuiWindow * window);
CImVec2 igiCalcItemSize(CImVec2 size, float default_w, float default_h);
float igiCalcWrapWidthForPos(CImVec2 pos, float wrap_pos_x);
void igiPushMultiItemsWidths(int components, float width_full);
void igiPushItemFlag(CImGuiItemFlags option, bool enabled);
void igiPopItemFlag();
bool igiIsItemToggledSelection();
CImVec2 igiGetContentRegionMaxAbs();
void igiShrinkWidths(CImGuiShrinkWidthItem * items, int count, float width_excess);

void igiLogBegin(CImGuiLogType type, int auto_open_depth);
void igiLogToBuffer(int auto_open_depth);

bool igiBeginChildEx(const char * name, CImGuiID id, CImVec2 size_arg, bool border, CImGuiWindowFlags flags);
void igiOpenPopupEx(CImGuiID id, CImGuiPopupFlags popup_flags);
void igiClosePopupToLevel(int remaining, bool restore_focus_to_window_under_popup);
void igiClosePopupsOverWindow(CImGuiWindow * ref_window, bool restore_focus_to_window_under_popup);
bool igiIsPopupOpen(CImGuiID id, CImGuiPopupFlags popup_flags);
bool igiBeginPopupEx(CImGuiID id, CImGuiWindowFlags extra_flags);
void igiBeginTooltipEx(CImGuiWindowFlags extra_flags, CImGuiTooltipFlags tooltip_flags);
CImGuiWindow * igiGetTopMostPopupModal();
CImVec2 igiFindBestWindowPosForPopup(CImGuiWindow * window);
CImVec2 igiFindBestWindowPosForPopupEx(CImVec2 ref_pos, CImVec2 size, CImGuiDir * last_dir, CImRect r_outer, CImRect r_avoid, CImGuiPopupPositionPolicy policy);

void igiNavInitWindow(CImGuiWindow * window, bool force_reinit);
bool igiNavMoveRequestButNoResultYet();
void igiNavMoveRequestCancel();
void igiNavMoveRequestForward(CImGuiDir move_dir, CImGuiDir clip_dir, CImRect bb_rel, CImGuiNavMoveFlags move_flags);
void igiNavMoveRequestTryWrapping(CImGuiWindow * window, CImGuiNavMoveFlags move_flags);
float igiGetNavInputAmount(CImGuiNavInput n, CImGuiInputReadMode mode);
CImVec2 igiGetNavInputAmount2d(CImGuiNavDirSourceFlags dir_sources, CImGuiInputReadMode mode, float slow_factor, float fast_factor);
int igiCalcTypematicRepeatAmount(float t0, float t1, float repeat_delay, float repeat_rate);
void igiActivateItem(CImGuiID id);
void igiSetNavID(CImGuiID id, int nav_layer, CImGuiID focus_scope_id);
void igiSetNavIDWithRectRel(CImGuiID id, int nav_layer, CImGuiID focus_scope_id, CImRect rect_rel);

void igiPushFocusScope(CImGuiID id);
void igiPopFocusScope();
CImGuiID igiGetFocusScopeID();

bool igiIsActiveIdUsingNavDir(CImGuiDir dir);
bool igiIsActiveIdUsingNavInput(CImGuiNavInput input);
bool igiIsActiveIdUsingKey(CImGuiKey key);
bool igiIsMouseDragPastThreshold(CImGuiMouseButton button, float lock_threshold);
bool igiIsKeyPressedMap(CImGuiKey key, bool repeat);
bool igiIsNavInputDown(CImGuiNavInput n);
bool igiIsNavInputTest(CImGuiNavInput n, CImGuiInputReadMode rm);
CImGuiKeyModFlags igiGetMergedKeyModFlags();

void igiDockContextInitialize(CImGuiConcreteContext * ctx);
void igiDockContextShutdown(CImGuiConcreteContext * ctx);
void igiDockContextClearNodes(CImGuiConcreteContext * ctx, CImGuiID root_id, bool clear_settings_refs);
void igiDockContextRebuildNodes(CImGuiConcreteContext * ctx);
void igiDockContextUpdateUndocking(CImGuiConcreteContext * ctx);
void igiDockContextUpdateDocking(CImGuiConcreteContext * ctx);
CImGuiID igiDockContextGenNodeID(CImGuiConcreteContext * ctx);
void igiDockContextQueueDock(CImGuiConcreteContext * ctx, CImGuiWindow * target, CImGuiDockNode * target_node, CImGuiWindow * payload, CImGuiDir split_dir, float split_ratio, bool split_outer);
void igiDockContextQueueUndockWindow(CImGuiConcreteContext * ctx, CImGuiWindow * window);
void igiDockContextQueueUndockNode(CImGuiConcreteContext * ctx, CImGuiDockNode * node);
bool igiDockContextCalcDropPosForDocking(CImGuiWindow * target, CImGuiDockNode * target_node, CImGuiWindow * payload, CImGuiDir split_dir, bool split_outer, CImVec2 * out_pos);
CImGuiDockNode * igiDockNodeGetRootNode(CImGuiDockNode * node);
int igiDockNodeGetDepth(const CImGuiDockNode * node);
CImGuiDockNode * igiGetWindowDockNode();
bool igiGetWindowAlwaysWantOwnTabBar(CImGuiWindow * window);
void igiBeginDocked(CImGuiWindow * window, bool * p_open);
void igiBeginDockableDragDropSource(CImGuiWindow * window);
void igiBeginDockableDragDropTarget(CImGuiWindow * window);
void igiSetWindowDock(CImGuiWindow * window, CImGuiID dock_id, CImGuiCond cond);

void igiDockBuilderDockWindow(const char * window_name, CImGuiID node_id);
CImGuiDockNode * igiDockBuilderGetNode(CImGuiID node_id);
CImGuiDockNode * igiDockBuilderGetCentralNode(CImGuiID node_id);
CImGuiID igiDockBuilderAddNode(CImGuiID node_id, CImGuiDockNodeFlags flags);
void igiDockBuilderRemoveNode(CImGuiID node_id);
void igiDockBuilderRemoveNodeDockedWindows(CImGuiID node_id, bool clear_settings_refs);
void igiDockBuilderRemoveNodeChildNodes(CImGuiID node_id);
void igiDockBuilderSetNodePos(CImGuiID node_id, CImVec2 pos);
void igiDockBuilderSetNodeSize(CImGuiID node_id, CImVec2 size);
CImGuiID igiDockBuilderSplitNode(CImGuiID node_id, CImGuiDir split_dir, float size_ratio_for_node_at_dir, CImGuiID * out_id_at_dir, CImGuiID * out_id_at_opposite_dir);
void igiDockBuilderCopyDockSpace(CImGuiID src_dockspace_id, CImGuiID dst_dockspace_id, CImVector_const_charPtr * in_window_remap_pairs);
void igiDockBuilderCopyNode(CImGuiID src_node_id, CImGuiID dst_node_id, CImVector_CImGuiID * out_node_remap_pairs);
void igiDockBuilderCopyWindowSettings(const char * src_name, const char * dst_name);
void igiDockBuilderFinish(CImGuiID node_id);

bool igiBeginDragDropTargetCustom(CImRect bb, CImGuiID id);
void igiClearDragDrop();
bool igiIsDragDropPayloadBeingAccepted();

void igiSetWindowClipRectBeforeSetChannel(CImGuiWindow * window, CImRect clip_rect);
void igiBeginColumns(const char * str_id, int count, CImGuiColumnsFlags flags);
void igiEndColumns();
void igiPushColumnClipRect(int column_index);
void igiPushColumnsBackground();
void igiPopColumnsBackground();
CImGuiID igiGetColumnsID(const char * str_id, int count);
CImGuiColumns * igiFindOrCreateColumns(CImGuiWindow * window, CImGuiID id);
float igiGetColumnOffsetFromNorm(const CImGuiColumns * columns, float offset_norm);
float igiGetColumnNormFromOffset(const CImGuiColumns * columns, float offset);

bool igiBeginTabBarEx(CImGuiTabBar * tab_bar, CImRect bb, CImGuiTabBarFlags flags, CImGuiDockNode * dock_node);
CImGuiTabItem * igiTabBarFindTabByID(CImGuiTabBar * tab_bar, CImGuiID tab_id);
CImGuiTabItem * igiTabBarFindMostRecentlySelectedTabForActiveWindow(CImGuiTabBar * tab_bar);
void igiTabBarAddTab(CImGuiTabBar * tab_bar, CImGuiTabItemFlags tab_flags, CImGuiWindow * window);
void igiTabBarRemoveTab(CImGuiTabBar * tab_bar, CImGuiID tab_id);
void igiTabBarCloseTab(CImGuiTabBar * tab_bar, CImGuiTabItem * tab);
void igiTabBarQueueReorder(CImGuiTabBar * tab_bar, const CImGuiTabItem * tab, int dir);
bool igiTabBarProcessReorder(CImGuiTabBar * tab_bar);
bool igiTabItemEx(CImGuiTabBar * tab_bar, const char * label, bool * p_open, CImGuiTabItemFlags flags, CImGuiWindow * docked_window);
CImVec2 igiTabItemCalcSize(const char * label, bool has_close_button);
void igiTabItemBackground(CImDrawList * draw_list, CImRect bb, CImGuiTabItemFlags flags, CImU32 col);
bool igiTabItemLabelAndCloseButton(CImDrawList * draw_list, CImRect bb, CImGuiTabItemFlags flags, CImVec2 frame_padding, const char * label, CImGuiID tab_id, CImGuiID close_button_id, bool is_contents_visible);

void igiRenderText(CImVec2 pos, const char * text, const char * text_end, bool hide_text_after_hash);
void igiRenderTextWrapped(CImVec2 pos, const char * text, const char * text_end, float wrap_width);
void igiRenderTextClipped(CImVec2 pos_min, CImVec2 pos_max, const char * text, const char * text_end, const CImVec2 * text_size_if_known, CImVec2 align, const CImRect * clip_rect);
void igiRenderTextClippedEx(CImDrawList * draw_list, CImVec2 pos_min, CImVec2 pos_max, const char * text, const char * text_end, const CImVec2 * text_size_if_known, CImVec2 align, const CImRect * clip_rect);
void igiRenderTextEllipsis(CImDrawList * draw_list, CImVec2 pos_min, CImVec2 pos_max, float clip_max_x, float ellipsis_max_x, const char * text, const char * text_end, const CImVec2 * text_size_if_known);
void igiRenderFrame(CImVec2 p_min, CImVec2 p_max, CImU32 fill_col, bool border, float rounding);
void igiRenderFrameBorder(CImVec2 p_min, CImVec2 p_max, float rounding);
void igiRenderColorRectWithAlphaCheckerboard(CImDrawList * draw_list, CImVec2 p_min, CImVec2 p_max, CImU32 fill_col, float grid_step, CImVec2 grid_off, float rounding, int rounding_corners_flags);
void igiRenderNavHighlight(CImRect bb, CImGuiID id, CImGuiNavHighlightFlags flags);
const char * igiFindRenderedTextEnd(const char * text, const char * text_end);
void igiLogRenderedText(const CImVec2 * ref_pos, const char * text, const char * text_end);

void igiRenderArrow(CImDrawList * draw_list, CImVec2 pos, CImU32 col, CImGuiDir dir, float scale);
void igiRenderBullet(CImDrawList * draw_list, CImVec2 pos, CImU32 col);
void igiRenderCheckMark(CImDrawList * draw_list, CImVec2 pos, CImU32 col, float sz);
void igiRenderMouseCursor(CImDrawList * draw_list, CImVec2 pos, float scale, CImGuiMouseCursor mouse_cursor, CImU32 col_fill, CImU32 col_border, CImU32 col_shadow);
void igiRenderArrowPointingAt(CImDrawList * draw_list, CImVec2 pos, CImVec2 half_sz, CImGuiDir direction, CImU32 col);
void igiRenderArrowDockMenu(CImDrawList * draw_list, CImVec2 p_min, float sz, CImU32 col);
void igiRenderRectFilledRangeH(CImDrawList * draw_list, CImRect rect, CImU32 col, float x_start_norm, float x_end_norm, float rounding);
void igiRenderRectFilledWithHole(CImDrawList * draw_list, CImRect outer, CImRect inner, CImU32 col, float rounding);

void igiTextEx(const char * text, const char * text_end, CImGuiTextFlags flags);
bool igiButtonEx(const char * label, CImVec2 size_arg, CImGuiButtonFlags flags);
bool igiCloseButton(CImGuiID id, CImVec2 pos);
bool igiCollapseButton(CImGuiID id, CImVec2 pos, CImGuiDockNode * dock_node);
bool igiArrowButtonEx(const char * str_id, CImGuiDir dir, CImVec2 size_arg, CImGuiButtonFlags flags);
void igiScrollbar(CImGuiAxis axis);
bool igiScrollbarEx(CImRect bb, CImGuiID id, CImGuiAxis axis, float * p_scroll_v, float avail_v, float contents_v, CImDrawCornerFlags rounding_corners);
bool igiImageButtonEx(CImGuiID id, CImTextureID texture_id, CImVec2 size, CImVec2 uv0, CImVec2 uv1, CImVec2 padding, CImVec4 bg_col, CImVec4 tint_col);
CImRect igiGetWindowScrollbarRect(CImGuiWindow * window, CImGuiAxis axis);
CImGuiID igiGetWindowScrollbarID(CImGuiWindow * window, CImGuiAxis axis);
CImGuiID igiGetWindowResizeID(CImGuiWindow * window, int n);
void igiSeparatorEx(CImGuiSeparatorFlags flags);

bool igiButtonBehavior(CImRect bb, CImGuiID id, bool * out_hovered, bool * out_held, CImGuiButtonFlags flags);
bool igiDragBehavior(CImGuiID id, CImGuiDataType data_type, void * p_v, float v_speed, const void * p_min, const void * p_max, const char * format, CImGuiSliderFlags flags);
bool igiSliderBehavior(CImRect bb, CImGuiID id, CImGuiDataType data_type, void * p_v, const void * p_min, const void * p_max, const char * format, CImGuiSliderFlags flags, CImRect * out_grab_bb);
bool igiSplitterBehavior(CImRect bb, CImGuiID id, CImGuiAxis axis, float * size1, float * size2, float min_size1, float min_size2, float hover_extend, float hover_visibility_delay);
bool igiTreeNodeBehavior(CImGuiID id, CImGuiTreeNodeFlags flags, const char * label, const char * label_end);
bool igiTreeNodeBehaviorIsOpen(CImGuiID id, CImGuiTreeNodeFlags flags);
void igiTreePushOverrideID(CImGuiID id);

const CImGuiDataTypeInfo * igiDataTypeGetInfo(CImGuiDataType data_type);
int igiDataTypeFormatString(char * buf, int buf_size, CImGuiDataType data_type, const void * p_data, const char * format);
void igiDataTypeApplyOp(CImGuiDataType data_type, int op, void * output, const void * arg_1, const void * arg_2);
bool igiDataTypeApplyOpFromText(const char * buf, const char * initial_value_buf, CImGuiDataType data_type, void * p_data, const char * format);
int igiDataTypeCompare(CImGuiDataType data_type, const void * arg_1, const void * arg_2);
bool igiDataTypeClamp(CImGuiDataType data_type, void * p_data, const void * p_min, const void * p_max);

bool igiInputTextEx(const char * label, const char * hint, char * buf, int buf_size, CImVec2 size_arg, CImGuiInputTextFlags flags, CImGuiInputTextCallback callback, void * user_data);
bool igiTempInputText(CImRect bb, CImGuiID id, const char * label, char * buf, int buf_size, CImGuiInputTextFlags flags);
bool igiTempInputScalar(CImRect bb, CImGuiID id, const char * label, CImGuiDataType data_type, void * p_data, const char * format, const void * p_clamp_min, const void * p_clamp_max);
bool igiTempInputIsActive(CImGuiID id);
CImGuiInputTextState * igiGetInputTextState(CImGuiID id);

void igiColorTooltip(const char * text, const float * col, CImGuiColorEditFlags flags);
void igiColorEditOptionsPopup(const float * col, CImGuiColorEditFlags flags);
void igiColorPickerOptionsPopup(const float * ref_col, CImGuiColorEditFlags flags);

int igiPlotEx(CImGuiPlotType plot_type, const char * label, float ( *values_getter)(void * data, int idx), void * data, int values_count, int values_offset, const char * overlay_text, float scale_min, float scale_max, CImVec2 frame_size);

void igiShadeVertsLinearColorGradientKeepAlpha(CImDrawList * draw_list, int vert_start_idx, int vert_end_idx, CImVec2 gradient_p0, CImVec2 gradient_p1, CImU32 col0, CImU32 col1);
void igiShadeVertsLinearUV(CImDrawList * draw_list, int vert_start_idx, int vert_end_idx, CImVec2 a, CImVec2 b, CImVec2 uv_a, CImVec2 uv_b, bool clamp);

void igiGcCompactTransientWindowBuffers(CImGuiWindow * window);
void igiGcAwakeTransientWindowBuffers(CImGuiWindow * window);

void igiDebugDrawItemRect(CImU32 col);
void igiDebugStartItemPicker();


enum CImGuiButtonFlagsPrivate_ {
    CImGuiButtonFlags_PressedOnClick = 1 << 4,
    CImGuiButtonFlags_PressedOnClickRelease = 1 << 5,
    CImGuiButtonFlags_PressedOnClickReleaseAnywhere = 1 << 6,
    CImGuiButtonFlags_PressedOnRelease = 1 << 7,
    CImGuiButtonFlags_PressedOnDoubleClick = 1 << 8,
    CImGuiButtonFlags_PressedOnDragDropHold = 1 << 9,
    CImGuiButtonFlags_Repeat = 1 << 10,
    CImGuiButtonFlags_FlattenChildren = 1 << 11,
    CImGuiButtonFlags_AllowItemOverlap = 1 << 12,
    CImGuiButtonFlags_DontClosePopups = 1 << 13,
    CImGuiButtonFlags_Disabled = 1 << 14,
    CImGuiButtonFlags_AlignTextBaseLine = 1 << 15,
    CImGuiButtonFlags_NoKeyModifiers = 1 << 16,
    CImGuiButtonFlags_NoHoldingActiveId = 1 << 17,
    CImGuiButtonFlags_NoNavFocus = 1 << 18,
    CImGuiButtonFlags_NoHoveredOnFocus = 1 << 19,
    CImGuiButtonFlags_PressedOnMask_ = CImGuiButtonFlags_PressedOnClick | CImGuiButtonFlags_PressedOnClickRelease | CImGuiButtonFlags_PressedOnClickReleaseAnywhere | CImGuiButtonFlags_PressedOnRelease | CImGuiButtonFlags_PressedOnDoubleClick | CImGuiButtonFlags_PressedOnDragDropHold,
    CImGuiButtonFlags_PressedOnDefault_ = CImGuiButtonFlags_PressedOnClickRelease
};

enum CImGuiColumnsFlags_ {
    CImGuiColumnsFlags_None = 0,
    CImGuiColumnsFlags_NoBorder = 1 << 0,
    CImGuiColumnsFlags_NoResize = 1 << 1,
    CImGuiColumnsFlags_NoPreserveWidths = 1 << 2,
    CImGuiColumnsFlags_NoForceWithinWindow = 1 << 3,
    CImGuiColumnsFlags_GrowParentContentsSize = 1 << 4
};

enum CImGuiDataAuthority_ {
    CImGuiDataAuthority_Auto,
    CImGuiDataAuthority_DockNode,
    CImGuiDataAuthority_Window
};

enum CImGuiDataTypePrivate_ {
    CImGuiDataType_String = CImGuiDataType_COUNT + 1,
    CImGuiDataType_Pointer,
    CImGuiDataType_ID
};

enum CImGuiDockNodeFlagsPrivate_ {
    CImGuiDockNodeFlags_DockSpace = 1 << 10,
    CImGuiDockNodeFlags_CentralNode = 1 << 11,
    CImGuiDockNodeFlags_NoTabBar = 1 << 12,
    CImGuiDockNodeFlags_HiddenTabBar = 1 << 13,
    CImGuiDockNodeFlags_NoWindowMenuButton = 1 << 14,
    CImGuiDockNodeFlags_NoCloseButton = 1 << 15,
    CImGuiDockNodeFlags_NoDocking = 1 << 16,
    CImGuiDockNodeFlags_NoDockingSplitMe = 1 << 17,
    CImGuiDockNodeFlags_NoDockingSplitOther = 1 << 18,
    CImGuiDockNodeFlags_NoDockingOverMe = 1 << 19,
    CImGuiDockNodeFlags_NoDockingOverOther = 1 << 20,
    CImGuiDockNodeFlags_NoResizeX = 1 << 21,
    CImGuiDockNodeFlags_NoResizeY = 1 << 22,
    CImGuiDockNodeFlags_SharedFlagsInheritMask_ = ~0,
    CImGuiDockNodeFlags_NoResizeFlagsMask_ = CImGuiDockNodeFlags_NoResize | CImGuiDockNodeFlags_NoResizeX | CImGuiDockNodeFlags_NoResizeY,
    CImGuiDockNodeFlags_LocalFlagsMask_ = CImGuiDockNodeFlags_NoSplit | CImGuiDockNodeFlags_NoResizeFlagsMask_ | CImGuiDockNodeFlags_AutoHideTabBar | CImGuiDockNodeFlags_DockSpace | CImGuiDockNodeFlags_CentralNode | CImGuiDockNodeFlags_NoTabBar | CImGuiDockNodeFlags_HiddenTabBar | CImGuiDockNodeFlags_NoWindowMenuButton | CImGuiDockNodeFlags_NoCloseButton | CImGuiDockNodeFlags_NoDocking,
    CImGuiDockNodeFlags_LocalFlagsTransferMask_ = CImGuiDockNodeFlags_LocalFlagsMask_ & ~CImGuiDockNodeFlags_DockSpace,
    CImGuiDockNodeFlags_SavedFlagsMask_ = CImGuiDockNodeFlags_NoResizeFlagsMask_ | CImGuiDockNodeFlags_DockSpace | CImGuiDockNodeFlags_CentralNode | CImGuiDockNodeFlags_NoTabBar | CImGuiDockNodeFlags_HiddenTabBar | CImGuiDockNodeFlags_NoWindowMenuButton | CImGuiDockNodeFlags_NoCloseButton | CImGuiDockNodeFlags_NoDocking
};

enum CImGuiItemFlags_ {
    CImGuiItemFlags_None = 0,
    CImGuiItemFlags_NoTabStop = 1 << 0,
    CImGuiItemFlags_ButtonRepeat = 1 << 1,
    CImGuiItemFlags_Disabled = 1 << 2,
    CImGuiItemFlags_NoNav = 1 << 3,
    CImGuiItemFlags_NoNavDefaultFocus = 1 << 4,
    CImGuiItemFlags_SelectableDontClosePopup = 1 << 5,
    CImGuiItemFlags_MixedValue = 1 << 6,
    CImGuiItemFlags_ReadOnly = 1 << 7,
    CImGuiItemFlags_Default_ = 0
};

enum CImGuiItemStatusFlags_ {
    CImGuiItemStatusFlags_None = 0,
    CImGuiItemStatusFlags_HoveredRect = 1 << 0,
    CImGuiItemStatusFlags_HasDisplayRect = 1 << 1,
    CImGuiItemStatusFlags_Edited = 1 << 2,
    CImGuiItemStatusFlags_ToggledSelection = 1 << 3,
    CImGuiItemStatusFlags_ToggledOpen = 1 << 4,
    CImGuiItemStatusFlags_HasDeactivated = 1 << 5,
    CImGuiItemStatusFlags_Deactivated = 1 << 6
};

enum CImGuiLayoutType_ {
    CImGuiLayoutType_Horizontal = 0,
    CImGuiLayoutType_Vertical = 1
};

enum CImGuiNavHighlightFlags_ {
    CImGuiNavHighlightFlags_None = 0,
    CImGuiNavHighlightFlags_TypeDefault = 1 << 0,
    CImGuiNavHighlightFlags_TypeThin = 1 << 1,
    CImGuiNavHighlightFlags_AlwaysDraw = 1 << 2,
    CImGuiNavHighlightFlags_NoRounding = 1 << 3
};

enum CImGuiNavDirSourceFlags_ {
    CImGuiNavDirSourceFlags_None = 0,
    CImGuiNavDirSourceFlags_Keyboard = 1 << 0,
    CImGuiNavDirSourceFlags_PadDPad = 1 << 1,
    CImGuiNavDirSourceFlags_PadLStick = 1 << 2
};

enum CImGuiNavMoveFlags_ {
    CImGuiNavMoveFlags_None = 0,
    CImGuiNavMoveFlags_LoopX = 1 << 0,
    CImGuiNavMoveFlags_LoopY = 1 << 1,
    CImGuiNavMoveFlags_WrapX = 1 << 2,
    CImGuiNavMoveFlags_WrapY = 1 << 3,
    CImGuiNavMoveFlags_AllowCurrentNavId = 1 << 4,
    CImGuiNavMoveFlags_AlsoScoreVisibleSet = 1 << 5,
    CImGuiNavMoveFlags_ScrollToEdge = 1 << 6
};

enum CImGuiNextItemDataFlags_ {
    CImGuiNextItemDataFlags_None = 0,
    CImGuiNextItemDataFlags_HasWidth = 1 << 0,
    CImGuiNextItemDataFlags_HasOpen = 1 << 1
};

enum CImGuiNextWindowDataFlags_ {
    CImGuiNextWindowDataFlags_None = 0,
    CImGuiNextWindowDataFlags_HasPos = 1 << 0,
    CImGuiNextWindowDataFlags_HasSize = 1 << 1,
    CImGuiNextWindowDataFlags_HasContentSize = 1 << 2,
    CImGuiNextWindowDataFlags_HasCollapsed = 1 << 3,
    CImGuiNextWindowDataFlags_HasSizeConstraint = 1 << 4,
    CImGuiNextWindowDataFlags_HasFocus = 1 << 5,
    CImGuiNextWindowDataFlags_HasBgAlpha = 1 << 6,
    CImGuiNextWindowDataFlags_HasScroll = 1 << 7,
    CImGuiNextWindowDataFlags_HasViewport = 1 << 8,
    CImGuiNextWindowDataFlags_HasDock = 1 << 9,
    CImGuiNextWindowDataFlags_HasWindowClass = 1 << 10
};

enum CImGuiSliderFlagsPrivate_ {
    CImGuiSliderFlags_Vertical = 1 << 20,
    CImGuiSliderFlags_ReadOnly = 1 << 21
};

enum CImGuiSelectableFlagsPrivate_ {
    CImGuiSelectableFlags_NoHoldingActiveID = 1 << 20,
    CImGuiSelectableFlags_SelectOnClick = 1 << 21,
    CImGuiSelectableFlags_SelectOnRelease = 1 << 22,
    CImGuiSelectableFlags_SpanAvailWidth = 1 << 23,
    CImGuiSelectableFlags_DrawHoveredWhenHeld = 1 << 24,
    CImGuiSelectableFlags_SetNavIdOnHover = 1 << 25,
    CImGuiSelectableFlags_NoPadWithHalfSpacing = 1 << 26
};

enum CImGuiSeparatorFlags_ {
    CImGuiSeparatorFlags_None = 0,
    CImGuiSeparatorFlags_Horizontal = 1 << 0,
    CImGuiSeparatorFlags_Vertical = 1 << 1,
    CImGuiSeparatorFlags_SpanAllColumns = 1 << 2
};

enum CImGuiTextFlags_ {
    CImGuiTextFlags_None = 0,
    CImGuiTextFlags_NoWidthForLargeClippedText = 1 << 0
};

enum CImGuiTabBarFlagsPrivate_ {
    CImGuiTabBarFlags_DockNode = 1 << 20,
    CImGuiTabBarFlags_IsFocused = 1 << 21,
    CImGuiTabBarFlags_SaveSettings = 1 << 22
};

enum CImGuiTabItemFlagsPrivate_ {
    CImGuiTabItemFlags_NoCloseButton = 1 << 20,
    CImGuiTabItemFlags_Button = 1 << 21,
    CImGuiTabItemFlags_Unsorted = 1 << 22,
    CImGuiTabItemFlags_Preview = 1 << 23
};

enum CImGuiTooltipFlags_ {
    CImGuiTooltipFlags_None = 0,
    CImGuiTooltipFlags_OverridePreviousTooltip = 1 << 0
};

enum CImGuiTreeNodeFlagsPrivate_ {
    CImGuiTreeNodeFlags_ClipLabelForTrailingButton = 1 << 20
};



struct CImStbUndoRecord {
    int where;
    int insert_length;
    int delete_length;
    int char_storage;
};

struct CImStbUndoState {
    CImStbUndoRecord undo_rec[99];
    CImWchar undo_char[999];
    short undo_point, redo_point;
    int undo_char_point, redo_char_point;
};

struct CImStbTexteditState {
    int cursor;
    int select_start;
    int select_end;
    unsigned char insert_mode;
    int row_count_per_page;

    unsigned char cursor_at_end_of_line;
    unsigned char initialized;
    unsigned char has_preferred_x;
    unsigned char single_line;
    unsigned char padding1, padding2, padding3;
    float preferred_x;
    CImStbUndoState undostate;
};

struct CImStbTexteditRow {
    float x0, x1;
    float baseline_y_delta;
    float ymin, ymax;
    int num_chars;
};



CImRect * igi_CImRect_init();
CImRect * igi_CImRect_initMinMax(CImVec2 min, CImVec2 max);
CImRect * igi_CImRect_initCImVec4(CImVec4 v);
CImRect * igi_CImRect_initFloat4(float x1, float y1, float x2, float y2);
void igi_CImRect_deinit(const CImRect * ptr);

CImVec2 igi_CImRect_GetCenter(const CImRect * ptr);
CImVec2 igi_CImRect_GetSize(const CImRect * ptr);
float igi_CImRect_GetWidth(const CImRect * ptr);
float igi_CImRect_GetHeight(const CImRect * ptr);
CImVec2 igi_CImRect_GetTL(const CImRect * ptr);
CImVec2 igi_CImRect_GetTR(const CImRect * ptr);
CImVec2 igi_CImRect_GetBL(const CImRect * ptr);
CImVec2 igi_CImRect_GetBR(const CImRect * ptr);
bool igi_CImRect_Contains(const CImRect * ptr, CImVec2 p);
bool igi_CImRect_ContainsRect(const CImRect * ptr, CImRect r);
bool igi_CImRect_Overlaps(const CImRect * ptr, CImRect r);
void igi_CImRect_Add(CImRect * ptr, CImVec2 p);
void igi_CImRect_AddRect(CImRect * ptr, CImRect r);
void igi_CImRect_Expand(CImRect * ptr, const float amount);
void igi_CImRect_ExpandVec2(CImRect * ptr, CImVec2 amount);
void igi_CImRect_Translate(CImRect * ptr, CImVec2 d);
void igi_CImRect_TranslateX(CImRect * ptr, float dx);
void igi_CImRect_TranslateY(CImRect * ptr, float dy);
void igi_CImRect_ClipWith(CImRect * ptr, CImRect r);
void igi_CImRect_ClipWithFull(CImRect * ptr, CImRect r);
void igi_CImRect_Floor(CImRect * ptr);
bool igi_CImRect_IsInverted(const CImRect * ptr);
CImVec4 igi_CImRect_ToVec4(const CImRect * ptr);


struct CImBitVector {
    CImVector_CImU32 Storage;
};

CImBitVector * igi_CImBitVector_init();
void igi_CImBitVector_deinit(const CImBitVector * ptr);

void igi_CImBitVector_Create(CImBitVector * ptr, int sz);
void igi_CImBitVector_Clear(CImBitVector * ptr);
bool igi_CImBitVector_TestBit(const CImBitVector * ptr, int n);
void igi_CImBitVector_SetBit(CImBitVector * ptr, int n);
void igi_CImBitVector_ClearBit(CImBitVector * ptr, int n);


struct CImPool_CImGuiTabBar {
    CImVector_CImGuiTabBar Buf;
    CImGuiStorage Map;
    CImPoolIdx FreeIdx;
};

CImPool_CImGuiTabBar * igi_CImPool_CImGuiTabBar_init();
void igi_CImPool_CImGuiTabBar_deinit(const CImPool_CImGuiTabBar * ptr);

CImGuiTabBar * igi_CImPool_CImGuiTabBar_GetByKey(CImPool_CImGuiTabBar * ptr, CImGuiID key);
CImGuiTabBar * igi_CImPool_CImGuiTabBar_GetByIndex(CImPool_CImGuiTabBar * ptr, CImPoolIdx n);
CImPoolIdx igi_CImPool_CImGuiTabBar_GetIndex(const CImPool_CImGuiTabBar * ptr, const CImGuiTabBar * p);
CImGuiTabBar * igi_CImPool_CImGuiTabBar_GetOrAddByKey(CImPool_CImGuiTabBar * ptr, CImGuiID key);
bool igi_CImPool_CImGuiTabBar_Contains(const CImPool_CImGuiTabBar * ptr, const CImGuiTabBar * p);
void igi_CImPool_CImGuiTabBar_Clear(CImPool_CImGuiTabBar * ptr);
CImGuiTabBar * igi_CImPool_CImGuiTabBar_Add(CImPool_CImGuiTabBar * ptr);
void igi_CImPool_CImGuiTabBar_Remove(CImPool_CImGuiTabBar * ptr, CImGuiID key, const CImGuiTabBar * p);
void igi_CImPool_CImGuiTabBar_RemoveIdx(CImPool_CImGuiTabBar * ptr, CImGuiID key, CImPoolIdx idx);
void igi_CImPool_CImGuiTabBar_Reserve(CImPool_CImGuiTabBar * ptr, int capacity);
int igi_CImPool_CImGuiTabBar_GetSize(const CImPool_CImGuiTabBar * ptr);


struct CImChunkStream_CImGuiWindowSettings {
    CImVector_char Buf;
};

CImChunkStream_CImGuiWindowSettings * igi_CImChunkStream_CImGuiWindowSettings_init();
void igi_CImChunkStream_CImGuiWindowSettings_deinit(const CImChunkStream_CImGuiWindowSettings * ptr);

void igi_CImChunkStream_CImGuiWindowSettings_clear(CImChunkStream_CImGuiWindowSettings * ptr);
bool igi_CImChunkStream_CImGuiWindowSettings_empty(const CImChunkStream_CImGuiWindowSettings * ptr);
int igi_CImChunkStream_CImGuiWindowSettings_size(const CImChunkStream_CImGuiWindowSettings * ptr);
CImGuiWindowSettings * igi_CImChunkStream_CImGuiWindowSettings_alloc_chunk(CImChunkStream_CImGuiWindowSettings * ptr, size_t sz);
CImGuiWindowSettings * igi_CImChunkStream_CImGuiWindowSettings_begin(CImChunkStream_CImGuiWindowSettings * ptr);
CImGuiWindowSettings * igi_CImChunkStream_CImGuiWindowSettings_next_chunk(CImChunkStream_CImGuiWindowSettings * ptr, CImGuiWindowSettings * p);
int igi_CImChunkStream_CImGuiWindowSettings_chunk_size(CImChunkStream_CImGuiWindowSettings * ptr, const CImGuiWindowSettings * p);
CImGuiWindowSettings * igi_CImChunkStream_CImGuiWindowSettings_end(CImChunkStream_CImGuiWindowSettings * ptr);
int igi_CImChunkStream_CImGuiWindowSettings_offset_from_ptr(CImChunkStream_CImGuiWindowSettings * ptr, const CImGuiWindowSettings * p);
CImGuiWindowSettings * igi_CImChunkStream_CImGuiWindowSettings_ptr_from_offset(CImChunkStream_CImGuiWindowSettings * ptr, int off);


struct CImDrawDataBuilder {
    CImVector_CImDrawListPtr Layers[2];
};

CImDrawDataBuilder * igi_CImDrawDataBuilder_init();
void igi_CImDrawDataBuilder_deinit(const CImDrawDataBuilder * ptr);

void igi_CImDrawDataBuilder_Clear(CImDrawDataBuilder * ptr);
void igi_CImDrawDataBuilder_ClearFreeMemory(CImDrawDataBuilder * ptr);
void igi_CImDrawDataBuilder_FlattenIntoSingleLayer(CImDrawDataBuilder * ptr);


struct CImGuiDataTypeTempStorage {
    CImU8 Data[8];
};

CImGuiDataTypeTempStorage * igi_CImGuiDataTypeTempStorage_init();
void igi_CImGuiDataTypeTempStorage_deinit(const CImGuiDataTypeTempStorage * ptr);


struct CImGuiDataTypeInfo {
    size_t Size;
    const char * Name;
    const char * PrintFmt;
    const char * ScanFmt;
};

CImGuiDataTypeInfo * igi_CImGuiDataTypeInfo_init();
void igi_CImGuiDataTypeInfo_deinit(const CImGuiDataTypeInfo * ptr);


struct CImGuiColorMod {
    CImGuiCol Col;
    CImVec4 BackupValue;
};

CImGuiColorMod * igi_CImGuiColorMod_init();
void igi_CImGuiColorMod_deinit(const CImGuiColorMod * ptr);


struct CImGuiStyleMod {
    CImGuiStyleVar   VarIdx;
    union {
        int BackupInt[2];
        float BackupFloat[2];
    };
};

CImGuiStyleMod * igi_CImGuiStyleMod_init(CImGuiStyleVar idx, int v);
CImGuiStyleMod * igi_CImGuiStyleMod_initWithFloat(CImGuiStyleVar idx, float v);
CImGuiStyleMod * igi_CImGuiStyleMod_initWithVec2(CImGuiStyleVar idx, CImVec2 v);
void igi_CImGuiStyleMod_deinit(const CImGuiStyleMod * ptr);


struct CImGuiGroupData {
    CImVec2 BackupCursorPos;
    CImVec2 BackupCursorMaxPos;
    CImVec1 BackupIndent;
    CImVec1 BackupGroupOffset;
    CImVec2 BackupCurrLineSize;
    float BackupCurrLineTextBaseOffset;
    CImGuiID BackupActiveIdIsAlive;
    bool BackupActiveIdPreviousFrameIsAlive;
    bool EmitItem;
};

CImGuiGroupData * igi_CImGuiGroupData_init();
void igi_CImGuiGroupData_deinit(const CImGuiGroupData * ptr);


struct CImGuiMenuColumns {
    float Spacing;
    float Width, NextWidth;
    float Pos[3], NextWidths[3];
};

CImGuiMenuColumns * igi_CImGuiMenuColumns_init();
void igi_CImGuiMenuColumns_deinit(const CImGuiMenuColumns * ptr);

void igi_CImGuiMenuColumns_Update(CImGuiMenuColumns * ptr, int count, float spacing, bool clear);
float igi_CImGuiMenuColumns_DeclColumns(CImGuiMenuColumns * ptr, float w0, float w1, float w2);
float igi_CImGuiMenuColumns_CalcExtraSpace(const CImGuiMenuColumns * ptr, float avail_w);


struct CImGuiInputTextState {
    CImGuiID ID;
    int CurLenW, CurLenA;
    CImVector_CImWchar TextW;
    CImVector_char TextA;
    CImVector_char InitialTextA;
    bool TextAIsValid;
    int BufCapacityA;
    float ScrollX;
    CImStbTexteditState Stb;
    float CursorAnim;
    bool CursorFollow;
    bool SelectedAllMouseLock;
    bool Edited;
    CImGuiInputTextFlags UserFlags;
    CImGuiInputTextCallback UserCallback;
    void * UserCallbackData;
};

CImGuiInputTextState * igi_CImGuiInputTextState_init();
void igi_CImGuiInputTextState_deinit(const CImGuiInputTextState * ptr);

void igi_CImGuiInputTextState_ClearText(CImGuiInputTextState * ptr);
void igi_CImGuiInputTextState_ClearFreeMemory(CImGuiInputTextState * ptr);
int igi_CImGuiInputTextState_GetUndoAvailCount(const CImGuiInputTextState * ptr);
int igi_CImGuiInputTextState_GetRedoAvailCount(const CImGuiInputTextState * ptr);
void igi_CImGuiInputTextState_OnKeyPressed(CImGuiInputTextState * ptr, int key);

void igi_CImGuiInputTextState_CursorAnimReset(CImGuiInputTextState * ptr);
void igi_CImGuiInputTextState_CursorClamp(CImGuiInputTextState * ptr);
bool igi_CImGuiInputTextState_HasSelection(const CImGuiInputTextState * ptr);
void igi_CImGuiInputTextState_ClearSelection(CImGuiInputTextState * ptr);
void igi_CImGuiInputTextState_SelectAll(CImGuiInputTextState * ptr);


struct CImGuiPopupData {
    CImGuiID PopupId;
    CImGuiWindow * Window;
    CImGuiWindow * SourceWindow;
    int OpenFrameCount;
    CImGuiID OpenParentId;
    CImVec2 OpenPopupPos;
    CImVec2 OpenMousePos;
};

CImGuiPopupData * igi_CImGuiPopupData_init();
void igi_CImGuiPopupData_deinit(const CImGuiPopupData * ptr);


struct CImGuiNavMoveResult {
    CImGuiWindow * Window;
    CImGuiID ID;
    CImGuiID FocusScopeId;
    float DistBox;
    float DistCenter;
    float DistAxial;
    CImRect RectRel;
};

CImGuiNavMoveResult * igi_CImGuiNavMoveResult_init();
void igi_CImGuiNavMoveResult_deinit(const CImGuiNavMoveResult * ptr);

void igi_CImGuiNavMoveResult_Clear(CImGuiNavMoveResult * ptr);


struct CImGuiNextWindowData {
    CImGuiNextWindowDataFlags Flags;
    CImGuiCond PosCond;
    CImGuiCond SizeCond;
    CImGuiCond CollapsedCond;
    CImGuiCond DockCond;
    CImVec2 PosVal;
    CImVec2 PosPivotVal;
    CImVec2 SizeVal;
    CImVec2 ContentSizeVal;
    CImVec2 ScrollVal;
    bool PosUndock;
    bool CollapsedVal;
    CImRect SizeConstraintRect;
    CImGuiSizeCallback SizeCallback;
    void * SizeCallbackUserData;
    float BgAlphaVal;
    CImGuiID ViewportId;
    CImGuiID DockId;
    CImGuiWindowClass WindowClass;
    CImVec2 MenuBarOffsetMinVal;
};

CImGuiNextWindowData * igi_CImGuiNextWindowData_init();
void igi_CImGuiNextWindowData_deinit(const CImGuiNextWindowData * ptr);

void igi_CImGuiNextWindowData_ClearFlags(CImGuiNextWindowData * ptr);


struct CImGuiNextItemData {
    CImGuiNextItemDataFlags Flags;
    float Width;
    CImGuiID FocusScopeId;
    CImGuiCond OpenCond;
    bool OpenVal;
};

CImGuiNextItemData * igi_CImGuiNextItemData_init();
void igi_CImGuiNextItemData_deinit(const CImGuiNextItemData * ptr);

void igi_CImGuiNextItemData_ClearFlags(CImGuiNextItemData * ptr);


struct CImGuiShrinkWidthItem {
    int Index;
    float Width;
};

CImGuiShrinkWidthItem * igi_CImGuiShrinkWidthItem_init();
void igi_CImGuiShrinkWidthItem_deinit(const CImGuiShrinkWidthItem * ptr);


struct CImGuiPtrOrIndex {
    void * Ptr;
    int Index;
};

CImGuiPtrOrIndex * igi_CImGuiPtrOrIndex_initWithPtr(void * ptr);
CImGuiPtrOrIndex * igi_CImGuiPtrOrIndex_initWithIdx(void * idx);
void igi_CImGuiPtrOrIndex_deinit(const CImGuiPtrOrIndex * ptr);


struct CImGuiColumnData {
    float OffsetNorm;
    float OffsetNormBeforeResize;
    CImGuiColumnsFlags Flags;
    CImRect ClipRect;
};

CImGuiColumnData * igi_CImGuiColumnData_init();
void igi_CImGuiColumnData_deinit(const CImGuiColumnData * ptr);


struct CImGuiColumns {
    CImGuiID ID;
    CImGuiColumnsFlags Flags;
    bool IsFirstFrame;
    bool IsBeingResized;
    int Current;
    int Count;
    float OffMinX, OffMaxX;
    float LineMinY, LineMaxY;
    float HostCursorPosY;
    float HostCursorMaxPosX;
    CImRect HostInitialClipRect;
    CImRect HostBackupClipRect;
    CImRect HostBackupParentWorkRect;
    CImVector_CImGuiColumnData Columns;
    CImDrawListSplitter Splitter;
};

CImGuiColumns * igi_CImGuiColumns_init();
void igi_CImGuiColumns_deinit(const CImGuiColumns * ptr);

void igi_CImGuiColumns_Clear(CImGuiColumns * ptr);


struct CImGuiDockNode {
    CImGuiID ID;
    CImGuiDockNodeFlags SharedFlags;
    CImGuiDockNodeFlags LocalFlags;
    CImGuiDockNode * ParentNode;
    CImGuiDockNode * ChildNodes[2];
    CImVector_CImGuiWindowPtr Windows;
    CImGuiTabBar * TabBar;
    CImVec2 Pos;
    CImVec2 Size;
    CImVec2 SizeRef;
    CImGuiAxis SplitAxis;
    CImGuiWindowClass WindowClass;

    CImGuiDockNodeState State;
    CImGuiWindow * HostWindow;
    CImGuiWindow * VisibleWindow;
    CImGuiDockNode * CentralNode;
    CImGuiDockNode * OnlyNodeWithWindows;
    int LastFrameAlive;
    int LastFrameActive;
    int LastFrameFocused;
    CImGuiID LastFocusedNodeId;
    CImGuiID SelectedTabId;
    CImGuiID WantCloseTabId;
    CImGuiDataAuthority AuthorityForPos: 3;
    CImGuiDataAuthority AuthorityForSize: 3;
    CImGuiDataAuthority AuthorityForViewport: 3;
    bool IsVisible: 1;
    bool IsFocused: 1;
    bool HasCloseButton: 1;
    bool HasWindowMenuButton: 1;
    bool EnableCloseButton: 1;
    bool WantCloseAll: 1;
    bool WantLockSizeOnce: 1;
    bool WantMouseMove: 1;
    bool WantHiddenTabBarUpdate: 1;
    bool WantHiddenTabBarToggle: 1;
    bool MarkedForPosSizeWrite: 1;
};

CImGuiDockNode * igi_CImGuiDockNode_init(CImGuiID id);
void igi_CImGuiDockNode_deinit(const CImGuiDockNode * ptr);

bool igi_CImGuiDockNode_IsRootNode(const CImGuiDockNode * ptr);
bool igi_CImGuiDockNode_IsDockSpace(const CImGuiDockNode * ptr);
bool igi_CImGuiDockNode_IsFloatingNode(const CImGuiDockNode * ptr);
bool igi_CImGuiDockNode_IsCentralNode(const CImGuiDockNode * ptr);
bool igi_CImGuiDockNode_IsHiddenTabBar(const CImGuiDockNode * ptr);
bool igi_CImGuiDockNode_IsNoTabBar(const CImGuiDockNode * ptr);
bool igi_CImGuiDockNode_IsSplitNode(const CImGuiDockNode * ptr);
bool igi_CImGuiDockNode_IsLeafNode(const CImGuiDockNode * ptr);
bool igi_CImGuiDockNode_IsEmpty(const CImGuiDockNode * ptr);
CImGuiDockNodeFlags igi_CImGuiDockNode_GetMergedFlags(const CImGuiDockNode * ptr);
CImRect igi_CImGuiDockNode_Rect(const CImGuiDockNode * ptr);


struct CImGuiDockContext {
    CImGuiStorage Nodes;
    CImVector_CImGuiDockRequest Requests;
    CImVector_CImGuiDockNodeSettings NodesSettings;
    bool WantFullRebuild;
};

CImGuiDockContext * igi_CImGuiDockContext_init();
void igi_CImGuiDockContext_deinit(const CImGuiDockContext * ptr);


struct CImGuiViewportP {
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
    
    int Idx;
    int LastFrameActive;
    int LastFrameDrawLists[2];
    int LastFrontMostStampCount;
    CImGuiID LastNameHash;
    CImVec2 LastPos;
    float Alpha;
    float LastAlpha;
    short PlatformMonitor;
    bool PlatformWindowCreated;
    CImGuiWindow * Window;
    CImDrawList * DrawLists[2];
    CImDrawData DrawDataP;
    CImDrawDataBuilder DrawDataBuilder;
    CImVec2 LastPlatformPos;
    CImVec2 LastPlatformSize;
    CImVec2 LastRendererSize;
    CImVec2 CurrWorkOffsetMin;
    CImVec2 CurrWorkOffsetMax;
};

CImGuiViewportP * igi_CImGuiViewportP_init();
void igi_CImGuiViewportP_deinit(const CImGuiViewportP * ptr);

CImVec2 igi_CImGuiViewportP_GetWorkPos(CImGuiViewportP * ptr);
CImVec2 igi_CImGuiViewportP_GetWorkSize(CImGuiViewportP * ptr);

CImRect igi_CImGuiViewportP_GetMainRect(const CImGuiViewportP * ptr);
CImRect igi_CImGuiViewportP_GetWorkRect(const CImGuiViewportP * ptr);
void igi_CImGuiViewportP_ClearRequestFlags(CImGuiViewportP * ptr);


struct CImGuiWindowSettings {
    CImGuiID ID;
    CImVec2ih Pos;
    CImVec2ih Size;
    CImVec2ih ViewportPos;
    CImGuiID ViewportId;
    CImGuiID DockId;
    CImGuiID ClassId;
    short DockOrder;
    bool Collapsed;
    bool WantApply;
};

CImGuiWindowSettings * igi_CImGuiWindowSettings_init();
void igi_CImGuiWindowSettings_deinit(const CImGuiWindowSettings * ptr);

char * igi_CImGuiWindowSettings_GetName(CImGuiWindowSettings * ptr);


struct CImGuiSettingsHandler {
    const char * TypeName;
    CImGuiID TypeHash;
    void (*ClearAllFn)(ImGuiContext * ctx, ImGuiSettingsHandler * handler);
    void (*ReadInitFn)(ImGuiContext * ctx, ImGuiSettingsHandler * handler);
    void * (*ReadOpenFn)(ImGuiContext * ctx, ImGuiSettingsHandler * handler, const char * name);
    void (*ReadLineFn)(ImGuiContext * ctx, ImGuiSettingsHandler * handler, void * entry, const char * line);
    void (*ApplyAllFn)(ImGuiContext * ctx, ImGuiSettingsHandler * handler);
    void (*WriteAllFn)(ImGuiContext * ctx, ImGuiSettingsHandler * handler, ImGuiTextBuffer * out_buf);
    void * UserData;
};

CImGuiSettingsHandler * igi_CImGuiSettingsHandler_init();
void igi_CImGuiSettingsHandler_deinit(const CImGuiSettingsHandler * ptr);


struct CImGuiConcreteContext {
    bool Initialized;
    bool FontAtlasOwnedByContext;
    CImGuiIO IO;
    CImGuiPlatformIO PlatformIO;
    CImGuiStyle Style;
    CImGuiConfigFlags ConfigFlagsCurrFrame;
    CImGuiConfigFlags ConfigFlagsLastFrame;
    CImFont * Font;
    float FontSize;
    float FontBaseSize;
    CImDrawListSharedData DrawListSharedData;
    double Time;
    int FrameCount;
    int FrameCountEnded;
    int FrameCountPlatformEnded;
    int FrameCountRendered;
    bool WithinFrameScope;
    bool WithinFrameScopeWithImplicitWindow;
    bool WithinEndChild;
    bool TestEngineHookItems;
    CImGuiID TestEngineHookIdInfo;
    void * TestEngine;

    // Windows state
    CImVector_CImGuiWindowPtr Windows;
    CImVector_CImGuiWindowPtr WindowsFocusOrder;
    CImVector_CImGuiWindowPtr WindowsTempSortBuffer;
    CImVector_CImGuiWindowPtr CurrentWindowStack;
    CImGuiStorage WindowsById;
    int WindowsActiveCount;
    CImGuiWindow * CurrentWindow;
    CImGuiWindow * HoveredWindow;
    CImGuiWindow * HoveredRootWindow;
    CImGuiWindow * HoveredWindowUnderMovingWindow;
    CImGuiDockNode * HoveredDockNode;
    CImGuiWindow * MovingWindow;
    CImGuiWindow * WheelingWindow;
    CImVec2 WheelingWindowRefMousePos;
    float WheelingWindowTimer;

    // Item/widgets state and tracking information
    CImGuiID HoveredId;
    CImGuiID HoveredIdPreviousFrame;
    bool HoveredIdAllowOverlap;
    bool HoveredIdDisabled;
    float HoveredIdTimer;
    float HoveredIdNotActiveTimer;
    CImGuiID ActiveId;
    CImGuiID ActiveIdIsAlive;
    float ActiveIdTimer;
    bool ActiveIdIsJustActivated;
    bool ActiveIdAllowOverlap;
    bool ActiveIdNoClearOnFocusLoss;
    bool ActiveIdHasBeenPressedBefore;
    bool ActiveIdHasBeenEditedBefore;
    bool ActiveIdHasBeenEditedThisFrame;
    CImU32 ActiveIdUsingNavDirMask;
    CImU32 ActiveIdUsingNavInputMask;
    CImU64 ActiveIdUsingKeyInputMask;
    CImVec2 ActiveIdClickOffset;
    CImGuiWindow * ActiveIdWindow;
    CImGuiInputSource ActiveIdSource;
    int ActiveIdMouseButton;
    CImGuiID ActiveIdPreviousFrame;
    bool ActiveIdPreviousFrameIsAlive;
    bool ActiveIdPreviousFrameHasBeenEditedBefore;
    CImGuiWindow * ActiveIdPreviousFrameWindow;
    CImGuiID LastActiveId;
    float LastActiveIdTimer;

    // Next window/item data
    CImGuiNextWindowData NextWindowData;
    CImGuiNextItemData NextItemData;

    // Shared stacks
    CImVector_CImGuiColorMod ColorModifiers;
    CImVector_CImGuiStyleMod StyleModifiers;
    CImVector_CImFontPtr FontStack;
    CImVector_CImGuiPopupData OpenPopupStack;
    CImVector_CImGuiPopupData BeginPopupStack;

    // Viewports
    CImVector_CImGuiViewportPPtr Viewports;
    float CurrentDpiScale;
    CImGuiViewportP * CurrentViewport;
    CImGuiViewportP * MouseViewport;
    CImGuiViewportP * MouseLastHoveredViewport;
    int ViewportFrontMostStampCount;

    // Gamepad/keyboard Navigation
    CImGuiWindow * NavWindow;
    CImGuiID NavId;
    CImGuiID NavFocusScopeId;
    CImGuiID NavActivateId;
    CImGuiID NavActivateDownId;
    CImGuiID NavActivatePressedId;
    CImGuiID NavInputId;
    CImGuiID NavJustTabbedId;
    CImGuiID NavJustMovedToId;
    CImGuiID NavJustMovedToFocusScopeId;
    CImGuiKeyModFlags NavJustMovedToKeyMods;
    CImGuiID NavNextActivateId;
    CImGuiInputSource NavInputSource;
    CImRect NavScoringRect;
    int NavScoringCount;
    CImGuiNavLayer NavLayer;
    int NavIdTabCounter;
    bool NavIdIsAlive;
    bool NavMousePosDirty;
    bool NavDisableHighlight;
    bool NavDisableMouseHover;
    bool NavAnyRequest;
    bool NavInitRequest;
    bool NavInitRequestFromMove;
    CImGuiID NavInitResultId;
    CImRect NavInitResultRectRel;
    bool NavMoveRequest;
    CImGuiNavMoveFlags NavMoveRequestFlags;
    CImGuiNavForward NavMoveRequestForward;
    CImGuiKeyModFlags NavMoveRequestKeyMods;
    CImGuiDir NavMoveDir, NavMoveDirLast;
    CImGuiDir NavMoveClipDir;
    CImGuiNavMoveResult NavMoveResultLocal;
    CImGuiNavMoveResult NavMoveResultLocalVisibleSet;
    CImGuiNavMoveResult NavMoveResultOther;
    CImGuiWindow * NavWrapRequestWindow;
    CImGuiNavMoveFlags NavWrapRequestFlags;

    // Navigation: Windowing (CTRL+TAB for list, or Menu button + keys or directional pads to move/resize)
    CImGuiWindow * NavWindowingTarget;
    CImGuiWindow * NavWindowingTargetAnim;
    CImGuiWindow * NavWindowingListWindow;
    float NavWindowingTimer;
    float NavWindowingHighlightAlpha;
    bool NavWindowingToggleLayer;

    // Legacy Focus/Tabbing system (older than Nav, active even if Nav is disabled, misnamed. FIXME-NAV: This needs a redesign!)
    CImGuiWindow * FocusRequestCurrWindow;
    CImGuiWindow * FocusRequestNextWindow;
    int FocusRequestCurrCounterRegular;
    int FocusRequestCurrCounterTabStop;
    int FocusRequestNextCounterRegular;
    int FocusRequestNextCounterTabStop;
    bool FocusTabPressed;

    // Render
    float DimBgRatio;
    CImGuiMouseCursor MouseCursor;

    // Drag and Drop
    bool DragDropActive;
    bool DragDropWithinSource;
    bool DragDropWithinTarget;
    CImGuiDragDropFlags DragDropSourceFlags;
    int DragDropSourceFrameCount;
    int DragDropMouseButton;
    CImGuiPayload DragDropPayload;
    CImRect DragDropTargetRect;
    CImGuiID DragDropTargetId;
    CImGuiDragDropFlags DragDropAcceptFlags;
    float DragDropAcceptIdCurrRectSurface;
    CImGuiID DragDropAcceptIdCurr;
    CImGuiID DragDropAcceptIdPrev;
    int DragDropAcceptFrameCount;
    CImGuiID DragDropHoldJustPressedId;
    CImVector_unsigned_char DragDropPayloadBufHeap;
    unsigned char DragDropPayloadBufLocal[16];

    // Tab bars
    CImGuiTabBar * CurrentTabBar;
    CImPool_CImGuiTabBar TabBars;
    CImVector_CImGuiPtrOrIndex CurrentTabBarStack;
    CImVector_CImGuiShrinkWidthItem ShrinkWidthBuffer;

    // Widget state
    CImVec2 LastValidMousePos;
    CImGuiInputTextState InputTextState;
    CImFont InputTextPasswordFont;
    CImGuiID TempInputId;
    CImGuiColorEditFlags ColorEditOptions;
    float ColorEditLastHue;
    float ColorEditLastSat;
    float ColorEditLastColor[3];
    CImVec4 ColorPickerRef;
    float SliderCurrentAccum;
    bool SliderCurrentAccumDirty;
    bool DragCurrentAccumDirty;
    float DragCurrentAccum;
    float DragSpeedDefaultRatio;
    float ScrollbarClickDeltaToGrabCenter;
    int TooltipOverrideCount;
    CImVector_char ClipboardHandlerData;
    CImVector_CImGuiID MenusIdSubmittedThisFrame;

    // Platform support
    CImVec2 PlatformImePos;
    CImVec2 PlatformImeLastPos;
    CImGuiViewportP * PlatformImePosViewport;
    char PlatformLocaleDecimalPoint;

    // Extensions
    // FIXME: We could provide an API to register one slot in an array held in ImGuiContext?
    CImGuiDockContext DockContext;

    // Settings
    bool SettingsLoaded;
    float SettingsDirtyTimer;
    CImGuiTextBuffer SettingsIniData;
    CImVector_CImGuiSettingsHandler SettingsHandlers;
    CImChunkStream_CImGuiWindowSettings SettingsWindows;

    // Capture/Logging
    bool LogEnabled;
    CImGuiLogType LogType;
    CImFileHandle LogFile;
    CImGuiTextBuffer LogBuffer;
    float LogLinePosY;
    bool LogLineFirstItem;
    int LogDepthRef;
    int LogDepthToExpand;
    int LogDepthToExpandDefault;

    // Debug Tools
    bool DebugItemPickerActive;
    CImGuiID DebugItemPickerBreakId;

    // Misc
    float FramerateSecPerFrame[120];
    int FramerateSecPerFrameIdx;
    float FramerateSecPerFrameAccum;
    int WantCaptureMouseNextFrame;
    int WantCaptureKeyboardNextFrame;
    int WantTextInputNextFrame;
    char TempBuffer[1024 * 3 + 1];
};

CImGuiConcreteContext * igi_CImGuiConcreteContext_init(CImFontAtlas * shared_font_atlas);
void igi_CImGuiConcreteContext_deinit(const CImGuiConcreteContext * ptr);


struct CImGuiWindowTempData {
    // Layout
    CImVec2 CursorPos;
    CImVec2 CursorPosPrevLine;
    CImVec2 CursorStartPos;
    CImVec2 CursorMaxPos;
    CImVec2 CurrLineSize;
    CImVec2 PrevLineSize;
    float CurrLineTextBaseOffset;
    float PrevLineTextBaseOffset;
    CImVec1 Indent;
    CImVec1 ColumnsOffset;
    CImVec1 GroupOffset;

    // Last item status
    CImGuiID LastItemId;
    CImGuiItemStatusFlags LastItemStatusFlags;
    CImRect LastItemRect;
    CImRect LastItemDisplayRect;

    // Keyboard/Gamepad navigation
    CImGuiNavLayer NavLayerCurrent;
    int NavLayerActiveMask;
    int NavLayerActiveMaskNext;
    CImGuiID NavFocusScopeIdCurrent;
    bool NavHideHighlightOneFrame;
    bool NavHasScroll;

    // Miscellaneous
    bool MenuBarAppending;
    CImVec2 MenuBarOffset;
    CImGuiMenuColumns MenuColumns;
    int TreeDepth;
    CImU32 TreeJumpToParentOnPopMask;
    CImVector_CImGuiWindowPtr ChildWindows;
    CImGuiStorage * StateStorage;
    CImGuiColumns * CurrentColumns;
    CImGuiLayoutType LayoutType;
    CImGuiLayoutType ParentLayoutType;
    int FocusCounterRegular;
    int FocusCounterTabStop;

    // Local parameters stacks
    CImGuiItemFlags ItemFlags;
    float ItemWidth;
    float TextWrapPos;
    CImVector_CImGuiItemFlags ItemFlagsStack;
    CImVector_float ItemWidthStack;
    CImVector_float TextWrapPosStack;
    CImVector_CImGuiGroupData GroupStack;
    short StackSizesBackup[6];
};

CImGuiWindowTempData * igi_CImGuiWindowTempData_init();
void igi_CImGuiWindowTempData_deinit(const CImGuiWindowTempData * ptr);


struct CImGuiWindow {
    char * Name;
    CImGuiID ID;
    CImGuiWindowFlags Flags, FlagsPreviousFrame;
    CImGuiWindowClass WindowClass;
    CImGuiViewportP * Viewport;
    CImGuiID ViewportId;
    CImVec2 ViewportPos;
    int ViewportAllowPlatformMonitorExtend;
    CImVec2 Pos;
    CImVec2 Size;
    CImVec2 SizeFull;
    CImVec2 ContentSize;
    CImVec2 ContentSizeExplicit;
    CImVec2 WindowPadding;
    float WindowRounding;
    float WindowBorderSize;
    int NameBufLen;
    CImGuiID MoveId;
    CImGuiID ChildId;
    CImVec2 Scroll;
    CImVec2 ScrollMax;
    CImVec2 ScrollTarget;
    CImVec2 ScrollTargetCenterRatio;
    CImVec2 ScrollTargetEdgeSnapDist;
    CImVec2 ScrollbarSizes;
    bool ScrollbarX, ScrollbarY;
    bool ViewportOwned;
    bool Active;
    bool WasActive;
    bool WriteAccessed;
    bool Collapsed;
    bool WantCollapseToggle;
    bool SkipItems;
    bool Appearing;
    bool Hidden;
    bool IsFallbackWindow;
    bool HasCloseButton;
    signed char ResizeBorderHeld;
    short BeginCount;
    short BeginOrderWithinParent;
    short BeginOrderWithinContext;
    CImGuiID PopupId;
    CImS8 AutoFitFramesX,  AutoFitFramesY;
    CImS8 AutoFitChildAxises;
    bool AutoFitOnlyGrows;
    CImGuiDir AutoPosLastDirection;
    int HiddenFramesCanSkipItems;
    int HiddenFramesCannotSkipItems;
    CImGuiCond SetWindowPosAllowFlags;
    CImGuiCond SetWindowSizeAllowFlags;
    CImGuiCond SetWindowCollapsedAllowFlags;
    CImGuiCond SetWindowDockAllowFlags;
    CImVec2 SetWindowPosVal;
    CImVec2 SetWindowPosPivot;

    CImVector_CImGuiID IDStack;
    CImGuiWindowTempData DC;

    CImRect OuterRectClipped;
    CImRect InnerRect;
    CImRect InnerClipRect;
    CImRect WorkRect;
    CImRect ParentWorkRect;
    CImRect ClipRect;
    CImRect ContentRegionRect;
    CImVec2ih HitTestHoleSize;
    CImVec2ih HitTestHoleOffset;

    int LastFrameActive;
    int LastFrameJustFocused;
    float LastTimeActive;
    float ItemWidthDefault;
    CImGuiStorage StateStorage;
    CImVector_CImGuiColumns ColumnsStorage;
    float FontWindowScale;
    float FontDpiScale;
    int SettingsOffset;

    CImDrawList * DrawList;
    CImDrawList DrawListInst;
    CImGuiWindow * ParentWindow;
    CImGuiWindow * RootWindow;
    CImGuiWindow * RootWindowDockStop;
    CImGuiWindow * RootWindowForTitleBarHighlight;
    CImGuiWindow * RootWindowForNav;

    CImGuiWindow * NavLastChildNavWindow;
    CImGuiID NavLastIds[CImGuiNavLayer_COUNT];
    CImRect NavRectRel[CImGuiNavLayer_COUNT];

    bool MemoryCompacted;
    int MemoryDrawListIdxCapacity;
    int MemoryDrawListVtxCapacity;

    // Docking
    CImGuiDockNode * DockNode;
    CImGuiDockNode * DockNodeAsHost;
    CImGuiID DockId;
    CImGuiItemStatusFlags DockTabItemStatusFlags;
    CImRect DockTabItemRect;
    short DockOrder;
    bool DockIsActive: 1;
    bool DockTabIsVisible: 1;
    bool DockTabWantClose: 1;
};

CImGuiWindow * igi_CImGuiWindow_init(CImGuiConcreteContext * context, const char * name);
void igi_CImGuiWindow_deinit(const CImGuiWindow * ptr);

CImGuiID igi_CImGuiWindow_GetIDString(CImGuiWindow * ptr, const char * str, const char * str_end);
CImGuiID igi_CImGuiWindow_GetIDPtr(CImGuiWindow * ptr, const void * ptr2);
CImGuiID igi_CImGuiWindow_GetIDInt(CImGuiWindow * ptr, int n);
CImGuiID igi_CImGuiWindow_GetIDNoKeepAliveString(CImGuiWindow * ptr, const char * str, const char * str_end);
CImGuiID igi_CImGuiWindow_GetIDNoKeepAlivePtr(CImGuiWindow * ptr, const void * ptr2);
CImGuiID igi_CImGuiWindow_GetIDNoKeepAliveInt(CImGuiWindow * ptr, int n);
CImGuiID igi_CImGuiWindow_GetIDFromRectangle(CImGuiWindow * ptr, CImRect r_abs);

CImRect igi_CImGuiWindow_Rect(const CImGuiWindow * ptr);
float igi_CImGuiWindow_CalcFontSize(const CImGuiWindow * ptr);
float igi_CImGuiWindow_TitleBarHeight(const CImGuiWindow * ptr);
CImRect igi_CImGuiWindow_TitleBarRect(const CImGuiWindow * ptr);
float igi_CImGuiWindow_MenuBarHeight(const CImGuiWindow * ptr);
CImRect igi_CImGuiWindow_MenuBarRect(const CImGuiWindow * ptr);


struct CImGuiLastItemDataBackup {
    CImGuiID LastItemId;
    CImGuiItemStatusFlags LastItemStatusFlags;
    CImRect LastItemRect;
    CImRect LastItemDisplayRect;
};

CImGuiLastItemDataBackup * igi_CImGuiLastItemDataBackup_init();
void igi_CImGuiLastItemDataBackup_deinit(const CImGuiLastItemDataBackup * ptr);

void igi_CImGuiLastItemDataBackup_Backup(CImGuiLastItemDataBackup * ptr);
void igi_CImGuiLastItemDataBackup_Restore(const CImGuiLastItemDataBackup * ptr);


struct CImGuiTabItem {
    CImGuiID ID;
    CImGuiTabItemFlags Flags;
    CImGuiWindow * Window;
    int LastFrameVisible;
    int LastFrameSelected;
    float Offset;
    float Width;
    float ContentWidth;
    CImS16 NameOffset;
    CImS8 BeginOrder;
    CImS8 IndexDuringLayout;
    bool WantClose;
};

CImGuiTabItem * igi_CImGuiTabItem_init();
void igi_CImGuiTabItem_deinit(const CImGuiTabItem * ptr);


struct CImGuiTabBar {
    CImVector_CImGuiTabItem Tabs;
    CImGuiID ID;
    CImGuiID SelectedTabId;
    CImGuiID NextSelectedTabId;
    CImGuiID VisibleTabId;
    int CurrFrameVisible;
    int PrevFrameVisible;
    CImRect BarRect;
    float LastTabContentHeight;
    float WidthAllTabs;
    float WidthAllTabsIdeal;
    float ScrollingAnim;
    float ScrollingTarget;
    float ScrollingTargetDistToVisibility;
    float ScrollingSpeed;
    float ScrollingRectMinX;
    float ScrollingRectMaxX;
    CImGuiTabBarFlags Flags;
    CImGuiID ReorderRequestTabId;
    CImS8 ReorderRequestDir;
    CImS8 TabsActiveCount;
    bool WantLayout;
    bool VisibleTabWasSubmitted;
    bool TabsAddedNew;
    short LastTabItemIdx;
    CImVec2 FramePadding;
    CImGuiTextBuffer TabsNames;
};

CImGuiTabBar * igi_CImGuiTabBar_init();
void igi_CImGuiTabBar_deinit(const CImGuiTabBar * ptr);

int igi_CImGuiTabBar_GetTabOrder(const CImGuiTabBar * ptr, const CImGuiTabItem * tab);
const char * igi_CImGuiTabBar_GetTabName(const CImGuiTabBar * ptr, const CImGuiTabItem * tab);


#ifdef __cplusplus
}
#endif

#endif /* cimgui_internal_h */
