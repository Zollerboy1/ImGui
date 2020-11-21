//
//  cimgui_internal.cpp
//  
//
//  Created by Josef Zoller on 17.11.20.
//

#include "cimgui_internal.h"

#include <cppimgui.hpp>

#include "asserts_internal.h"

#include "conversions.h"
#include "conversions_internal.h"

CImGuiWindow * igiGetCurrentWindowRead() {
    return toCIm(ImGui::GetCurrentWindowRead());
}

CImGuiWindow * igiGetCurrentWindow() {
    return toCIm(ImGui::GetCurrentWindow());
}

CImGuiWindow * igiFindWindowByID(CImGuiID id) {
    return toCIm(ImGui::FindWindowByID(id));
}

CImGuiWindow * igiFindWindowByName(const char * name) {
    return toCIm(ImGui::FindWindowByName(name));
}

void igiUpdateWindowParentAndRootLinks(CImGuiWindow * window, CImGuiWindowFlags flags, CImGuiWindow * parent_window) {
    ImGui::UpdateWindowParentAndRootLinks(toIm(window), flags, toIm(parent_window));
}

CImVec2 igiCalcWindowExpectedSize(CImGuiWindow * window) {
    return toCIm(ImGui::CalcWindowExpectedSize(toIm(window)));
}

bool igiIsWindowChildOf(CImGuiWindow * window, CImGuiWindow * potential_parent) {
    return ImGui::IsWindowChildOf(toIm(window), toIm(potential_parent));
}

bool igiIsWindowNavFocusable(CImGuiWindow * window) {
    return ImGui::IsWindowNavFocusable(toIm(window));
}

CImRect igiGetWindowAllowedExtentRect(CImGuiWindow * window) {
    return toCIm(ImGui::GetWindowAllowedExtentRect(toIm(window)));
}

void igiSetWindowPos(CImGuiWindow * window, CImVec2 pos, CImGuiCond cond) {
    ImGui::SetWindowPos(toIm(window), toIm(pos), cond);
}

void igiSetWindowSize(CImGuiWindow * window, CImVec2 size, CImGuiCond cond) {
    ImGui::SetWindowSize(toIm(window), toIm(size), cond);
}

void igiSetWindowCollapsed(CImGuiWindow * window, bool collapsed, CImGuiCond cond) {
    ImGui::SetWindowCollapsed(toIm(window), collapsed, cond);
}

void igiSetWindowHitTestHole(CImGuiWindow * window, CImVec2 pos, CImVec2 size) {
    ImGui::SetWindowHitTestHole(toIm(window), toIm(pos), toIm(size));
}


void igiFocusWindow(CImGuiWindow * window) {
    ImGui::FocusWindow(toIm(window));
}

void igiFocusTopMostWindowUnderOne(CImGuiWindow * under_this_window, CImGuiWindow * ignore_window) {
    ImGui::FocusTopMostWindowUnderOne(toIm(under_this_window), toIm(ignore_window));
}

void igiBringWindowToFocusFront(CImGuiWindow * window) {
    ImGui::BringWindowToFocusFront(toIm(window));
}

void igiBringWindowToDisplayFront(CImGuiWindow * window) {
    ImGui::BringWindowToDisplayFront(toIm(window));
}

void igiBringWindowToDisplayBack(CImGuiWindow * window) {
    ImGui::BringWindowToDisplayBack(toIm(window));
}


void igiSetCurrentFont(CImFont * font) {
    ImGui::SetCurrentFont(toIm(font));
}

CImFont * igiGetDefaultFont() {
    return toCIm(ImGui::GetDefaultFont());
}

CImDrawList * igiGetForegroundDrawList(CImGuiWindow * window) {
    return toCIm(ImGui::GetForegroundDrawList(toIm(window)));
}


void igiInitialize(CImGuiConcreteContext * context) {
    ImGui::Initialize(toIm(context));
}

void igiShutdown(CImGuiConcreteContext * context) {
    ImGui::Shutdown(toIm(context));
}


void igiUpdateHoveredWindowAndCaptureFlags() {
    ImGui::UpdateHoveredWindowAndCaptureFlags();
}

void igiStartMouseMovingWindow(CImGuiWindow * window) {
    ImGui::StartMouseMovingWindow(toIm(window));
}

void igiStartMouseMovingWindowOrNode(CImGuiWindow * window, CImGuiDockNode * node, bool undock_floating_node) {
    ImGui::StartMouseMovingWindowOrNode(toIm(window), toIm(node), undock_floating_node);
}

void igiUpdateMouseMovingWindowNewFrame() {
    ImGui::UpdateMouseMovingWindowNewFrame();
}

void igiUpdateMouseMovingWindowEndFrame() {
    ImGui::UpdateMouseMovingWindowEndFrame();
}


void igiTranslateWindowsInViewport(CImGuiViewportP * viewport, CImVec2 old_pos, CImVec2 new_pos) {
    ImGui::TranslateWindowsInViewport(toIm(viewport), toIm(old_pos), toIm(new_pos));
}

void igiScaleWindowsInViewport(CImGuiViewportP * viewport, float scale) {
    ImGui::ScaleWindowsInViewport(toIm(viewport), scale);
}

void igiDestroyPlatformWindow(CImGuiViewportP * viewport) {
    ImGui::DestroyPlatformWindow(toIm(viewport));
}

void igiShowViewportThumbnails() {
    ImGui::ShowViewportThumbnails();
}


void igiMarkIniSettingsDirty() {
    ImGui::MarkIniSettingsDirty();
}

void igiMarkIniSettingsDirtyWindow(CImGuiWindow * window) {
    ImGui::MarkIniSettingsDirty(toIm(window));
}

void igiClearIniSettings() {
    ImGui::ClearIniSettings();
}

CImGuiWindowSettings * igiCreateNewWindowSettings(const char * name) {
    return toCIm(ImGui::CreateNewWindowSettings(name));
}

CImGuiWindowSettings * igiFindWindowSettings(CImGuiID id) {
    return toCIm(ImGui::FindWindowSettings(id));
}

CImGuiWindowSettings * igiFindOrCreateWindowSettings(const char * name) {
    return toCIm(ImGui::FindOrCreateWindowSettings(name));
}

CImGuiSettingsHandler * igiFindSettingsHandler(const char * type_name) {
    return toCIm(ImGui::FindSettingsHandler(type_name));
}


void igiSetNextWindowScroll(CImVec2 scroll) {
    ImGui::SetNextWindowScroll(toIm(scroll));
}

void igiSetScrollX(CImGuiWindow * window, float scroll_x) {
    ImGui::SetScrollX(toIm(window), scroll_x);
}

void igiSetScrollY(CImGuiWindow * window, float scroll_y) {
    ImGui::SetScrollY(toIm(window), scroll_y);
}

void igiSetScrollFromPosX(CImGuiWindow * window, float local_x, float center_x_ratio) {
    ImGui::SetScrollFromPosX(toIm(window), local_x, center_x_ratio);
}

void igiSetScrollFromPosY(CImGuiWindow * window, float local_y, float center_y_ratio) {
    ImGui::SetScrollFromPosY(toIm(window), local_y, center_y_ratio);
}

CImVec2 igiScrollToBringRectIntoView(CImGuiWindow * window, CImRect item_rect) {
    return toCIm(ImGui::ScrollToBringRectIntoView(toIm(window), toIm(item_rect)));
}


CImGuiID igiGetItemID() {
    return ImGui::GetItemID();
}

CImGuiItemStatusFlags igiGetItemStatusFlags() {
    return ImGui::GetItemStatusFlags();
}

CImGuiID igiGetActiveID() {
    return ImGui::GetActiveID();
}

CImGuiID igiGetFocusID() {
    return ImGui::GetFocusID();
}

void igiSetActiveID(CImGuiID id, CImGuiWindow * window) {
    ImGui::SetActiveID(id, toIm(window));
}

void igiSetFocusID(CImGuiID id, CImGuiWindow * window) {
    ImGui::SetFocusID(id, toIm(window));
}

void igiClearActiveID() {
    ImGui::ClearActiveID();
}

CImGuiID igiGetHoveredID() {
    return ImGui::GetHoveredID();
}

void igiSetHoveredID(CImGuiID id) {
    ImGui::SetHoveredID(id);
}

void igiKeepAliveID(CImGuiID id) {
    ImGui::KeepAliveID(id);
}

void igiMarkItemEdited(CImGuiID id) {
    ImGui::MarkItemEdited(id);
}

void igiPushOverrideID(CImGuiID id) {
    ImGui::PushOverrideID(id);
}

CImGuiID igiGetIDWithSeed(const char * str_id_begin, const char * str_id_end, CImGuiID seed) {
    return ImGui::GetIDWithSeed(str_id_begin, str_id_end, seed);
}


void igiItemSize(CImVec2 size, float text_baseline_y) {
    ImGui::ItemSize(toIm(size), text_baseline_y);
}

void igiItemSizeBox(CImRect bb, float text_baseline_y) {
    ImGui::ItemSize(toIm(bb), text_baseline_y);
}

bool igiItemAdd(CImRect bb, CImGuiID id, const CImRect * nav_bb) {
    return ImGui::ItemAdd(toIm(bb), id, toIm(nav_bb));
}

bool igiItemHoverable(CImRect bb, CImGuiID id) {
    return ImGui::ItemHoverable(toIm(bb), id);
}

bool igiIsClippedEx(CImRect bb, CImGuiID id, bool clip_even_when_logged) {
    return ImGui::IsClippedEx(toIm(bb), id, clip_even_when_logged);
}

void igiSetLastItemData(CImGuiWindow * window, CImGuiID item_id, CImGuiItemStatusFlags status_flags, CImRect item_rect) {
    ImGui::SetLastItemData(toIm(window), item_id, status_flags, toIm(item_rect));
}

bool igiFocusableItemRegister(CImGuiWindow * window, CImGuiID id) {
    return ImGui::FocusableItemRegister(toIm(window), id);
}

void igiFocusableItemUnregister(CImGuiWindow * window) {
    ImGui::FocusableItemUnregister(toIm(window));
}

CImVec2 igiCalcItemSize(CImVec2 size, float default_w, float default_h) {
    return toCIm(ImGui::CalcItemSize(toIm(size), default_w, default_h));
}

float igiCalcWrapWidthForPos(CImVec2 pos, float wrap_pos_x) {
    return ImGui::CalcWrapWidthForPos(toIm(pos), wrap_pos_x);
}

void igiPushMultiItemsWidths(int components, float width_full) {
    ImGui::PushMultiItemsWidths(components, width_full);
}

void igiPushItemFlag(CImGuiItemFlags option, bool enabled) {
    ImGui::PushItemFlag(option, enabled);
}

void igiPopItemFlag() {
    ImGui::PopItemFlag();
}

bool igiIsItemToggledSelection() {
    return ImGui::IsItemToggledSelection();
}

CImVec2 igiGetContentRegionMaxAbs() {
    return toCIm(ImGui::GetContentRegionMaxAbs());
}

void igiShrinkWidths(CImGuiShrinkWidthItem * items, int count, float width_excess) {
    ImGui::ShrinkWidths(toIm(items), count, width_excess);
}


void igiLogBegin(CImGuiLogType type, int auto_open_depth) {
    ImGui::LogBegin((ImGuiLogType)type, auto_open_depth);
}

void igiLogToBuffer(int auto_open_depth) {
    ImGui::LogToBuffer(auto_open_depth);
}


bool igiBeginChildEx(const char * name, CImGuiID id, CImVec2 size_arg, bool border, CImGuiWindowFlags flags) {
    return ImGui::BeginChildEx(name, id, toIm(size_arg), border, flags);
}

void igiOpenPopupEx(CImGuiID id, CImGuiPopupFlags popup_flags) {
    ImGui::OpenPopupEx(id, popup_flags);
}

void igiClosePopupToLevel(int remaining, bool restore_focus_to_window_under_popup) {
    ImGui::ClosePopupToLevel(remaining, restore_focus_to_window_under_popup);
}

void igiClosePopupsOverWindow(CImGuiWindow * ref_window, bool restore_focus_to_window_under_popup) {
    ImGui::ClosePopupsOverWindow(toIm(ref_window), restore_focus_to_window_under_popup);
}

bool igiIsPopupOpen(CImGuiID id, CImGuiPopupFlags popup_flags) {
    return ImGui::IsPopupOpen(id, popup_flags);
}

bool igiBeginPopupEx(CImGuiID id, CImGuiWindowFlags extra_flags) {
    return ImGui::BeginPopupEx(id, extra_flags);
}

void igiBeginTooltipEx(CImGuiWindowFlags extra_flags, CImGuiTooltipFlags tooltip_flags) {
    ImGui::BeginTooltipEx(extra_flags, tooltip_flags);
}

CImGuiWindow * igiGetTopMostPopupModal() {
    return toCIm(ImGui::GetTopMostPopupModal());
}

CImVec2 igiFindBestWindowPosForPopup(CImGuiWindow * window) {
    return toCIm(ImGui::FindBestWindowPosForPopup(toIm(window)));
}

CImVec2 igiFindBestWindowPosForPopupEx(CImVec2 ref_pos, CImVec2 size, CImGuiDir * last_dir, CImRect r_outer, CImRect r_avoid, CImGuiPopupPositionPolicy policy) {
    return toCIm(ImGui::FindBestWindowPosForPopupEx(toIm(ref_pos), toIm(size), last_dir, toIm(r_outer), toIm(r_avoid), (ImGuiPopupPositionPolicy)policy));
}

void igiNavInitWindow(CImGuiWindow * window, bool force_reinit) {
    ImGui::NavInitWindow(toIm(window), force_reinit);
}

bool igiNavMoveRequestButNoResultYet() {
    return ImGui::NavMoveRequestButNoResultYet();
}

void igiNavMoveRequestCancel() {
    ImGui::NavMoveRequestCancel();
}

void igiNavMoveRequestForward(CImGuiDir move_dir, CImGuiDir clip_dir, CImRect bb_rel, CImGuiNavMoveFlags move_flags) {
    ImGui::NavMoveRequestForward(move_dir, clip_dir, toIm(bb_rel), move_flags);
}

void igiNavMoveRequestTryWrapping(CImGuiWindow * window, CImGuiNavMoveFlags move_flags) {
    ImGui::NavMoveRequestTryWrapping(toIm(window), move_flags);
}

float igiGetNavInputAmount(CImGuiNavInput n, CImGuiInputReadMode mode) {
    return ImGui::GetNavInputAmount(n, (ImGuiInputReadMode)mode);
}

CImVec2 igiGetNavInputAmount2d(CImGuiNavDirSourceFlags dir_sources, CImGuiInputReadMode mode, float slow_factor, float fast_factor) {
    return toCIm(ImGui::GetNavInputAmount2d(dir_sources, (ImGuiInputReadMode)mode, slow_factor, fast_factor));
}

int igiCalcTypematicRepeatAmount(float t0, float t1, float repeat_delay, float repeat_rate) {
    return ImGui::CalcTypematicRepeatAmount(t0, t1, repeat_delay, repeat_rate);
}

void igiActivateItem(CImGuiID id) {
    ImGui::ActivateItem(id);
}

void igiSetNavID(CImGuiID id, int nav_layer, CImGuiID focus_scope_id) {
    ImGui::SetNavID(id, nav_layer, focus_scope_id);
}

void igiSetNavIDWithRectRel(CImGuiID id, int nav_layer, CImGuiID focus_scope_id, CImRect rect_rel) {
    ImGui::SetNavIDWithRectRel(id, nav_layer, focus_scope_id, toIm(rect_rel));
}


void igiPushFocusScope(CImGuiID id) {
    ImGui::PushFocusScope(id);
}

void igiPopFocusScope() {
    ImGui::PopFocusScope();
}

CImGuiID igiGetFocusScopeID() {
    return ImGui::GetFocusScopeID();
}


bool igiIsActiveIdUsingNavDir(CImGuiDir dir) {
    return ImGui::IsActiveIdUsingNavDir(dir);
}

bool igiIsActiveIdUsingNavInput(CImGuiNavInput input) {
    return ImGui::IsActiveIdUsingNavInput(input);
}

bool igiIsActiveIdUsingKey(CImGuiKey key) {
    return ImGui::IsActiveIdUsingKey(key);
}

bool igiIsMouseDragPastThreshold(CImGuiMouseButton button, float lock_threshold) {
    return ImGui::IsMouseDragPastThreshold(button, lock_threshold);
}

bool igiIsKeyPressedMap(CImGuiKey key, bool repeat) {
    return ImGui::IsKeyPressedMap(key, repeat);
}

bool igiIsNavInputDown(CImGuiNavInput n) {
    return ImGui::IsNavInputDown(n);
}

bool igiIsNavInputTest(CImGuiNavInput n, CImGuiInputReadMode rm) {
    return ImGui::IsNavInputTest(n, (ImGuiInputReadMode)rm);
}

CImGuiKeyModFlags igiGetMergedKeyModFlags() {
    return ImGui::GetMergedKeyModFlags();
}


void igiDockContextInitialize(CImGuiConcreteContext * ctx) {
    ImGui::DockContextInitialize(toIm(ctx));
}

void igiDockContextShutdown(CImGuiConcreteContext * ctx) {
    ImGui::DockContextShutdown(toIm(ctx));
}

void igiDockContextClearNodes(CImGuiConcreteContext * ctx, CImGuiID root_id, bool clear_settings_refs) {
    ImGui::DockContextClearNodes(toIm(ctx), root_id, clear_settings_refs);
}

void igiDockContextRebuildNodes(CImGuiConcreteContext * ctx) {
    ImGui::DockContextRebuildNodes(toIm(ctx));
}

void igiDockContextUpdateUndocking(CImGuiConcreteContext * ctx) {
    ImGui::DockContextUpdateUndocking(toIm(ctx));
}

void igiDockContextUpdateDocking(CImGuiConcreteContext * ctx) {
    ImGui::DockContextUpdateDocking(toIm(ctx));
}

CImGuiID igiDockContextGenNodeID(CImGuiConcreteContext * ctx) {
    return ImGui::DockContextGenNodeID(toIm(ctx));
}

void igiDockContextQueueDock(CImGuiConcreteContext * ctx, CImGuiWindow * target, CImGuiDockNode * target_node, CImGuiWindow * payload, CImGuiDir split_dir, float split_ratio, bool split_outer) {
    ImGui::DockContextQueueDock(toIm(ctx), toIm(target), toIm(target_node), toIm(payload), split_dir, split_ratio, split_outer);
}

void igiDockContextQueueUndockWindow(CImGuiConcreteContext * ctx, CImGuiWindow * window) {
    ImGui::DockContextQueueUndockWindow(toIm(ctx), toIm(window));
}

void igiDockContextQueueUndockNode(CImGuiConcreteContext * ctx, CImGuiDockNode * node) {
    ImGui::DockContextQueueUndockNode(toIm(ctx), toIm(node));
}

bool igiDockContextCalcDropPosForDocking(CImGuiWindow * target, CImGuiDockNode * target_node, CImGuiWindow * payload, CImGuiDir split_dir, bool split_outer, CImVec2 * out_pos) {
    return ImGui::DockContextCalcDropPosForDocking(toIm(target), toIm(target_node), toIm(payload), split_dir, split_outer, toIm(out_pos));
}

CImGuiDockNode * igiDockNodeGetRootNode(CImGuiDockNode * node) {
    return toCIm(ImGui::DockNodeGetRootNode(toIm(node)));
}

int igiDockNodeGetDepth(const CImGuiDockNode * node) {
    return ImGui::DockNodeGetDepth(toIm(node));
}

CImGuiDockNode * igiGetWindowDockNode() {
    return toCIm(ImGui::GetWindowDockNode());
}

bool igiGetWindowAlwaysWantOwnTabBar(CImGuiWindow * window) {
    return ImGui::GetWindowAlwaysWantOwnTabBar(toIm(window));
}

void igiBeginDocked(CImGuiWindow * window, bool * p_open) {
    ImGui::BeginDocked(toIm(window), p_open);
}

void igiBeginDockableDragDropSource(CImGuiWindow * window) {
    ImGui::BeginDockableDragDropSource(toIm(window));
}

void igiBeginDockableDragDropTarget(CImGuiWindow * window) {
    ImGui::BeginDockableDragDropTarget(toIm(window));
}

void igiSetWindowDock(CImGuiWindow * window, CImGuiID dock_id, CImGuiCond cond) {
    ImGui::SetWindowDock(toIm(window), dock_id, cond);
}


void igiDockBuilderDockWindow(const char * window_name, CImGuiID node_id) {
    ImGui::DockBuilderDockWindow(window_name, node_id);
}

CImGuiDockNode * igiDockBuilderGetNode(CImGuiID node_id) {
    return toCIm(ImGui::DockBuilderGetNode(node_id));
}

CImGuiDockNode * igiDockBuilderGetCentralNode(CImGuiID node_id) {
    return toCIm(ImGui::DockBuilderGetCentralNode(node_id));
}

CImGuiID igiDockBuilderAddNode(CImGuiID node_id, CImGuiDockNodeFlags flags) {
    return ImGui::DockBuilderAddNode(node_id, flags);
}

void igiDockBuilderRemoveNode(CImGuiID node_id) {
    ImGui::DockBuilderRemoveNode(node_id);
}

void igiDockBuilderRemoveNodeDockedWindows(CImGuiID node_id, bool clear_settings_refs) {
    ImGui::DockBuilderRemoveNodeDockedWindows(node_id, clear_settings_refs);
}

void igiDockBuilderRemoveNodeChildNodes(CImGuiID node_id) {
    ImGui::DockBuilderRemoveNodeChildNodes(node_id);
}

void igiDockBuilderSetNodePos(CImGuiID node_id, CImVec2 pos) {
    ImGui::DockBuilderSetNodePos(node_id, toIm(pos));
}

void igiDockBuilderSetNodeSize(CImGuiID node_id, CImVec2 size) {
    ImGui::DockBuilderSetNodeSize(node_id, toIm(size));
}

CImGuiID igiDockBuilderSplitNode(CImGuiID node_id, CImGuiDir split_dir, float size_ratio_for_node_at_dir, CImGuiID * out_id_at_dir, CImGuiID * out_id_at_opposite_dir) {
    return ImGui::DockBuilderSplitNode(node_id, split_dir, size_ratio_for_node_at_dir, out_id_at_dir, out_id_at_opposite_dir);
}

void igiDockBuilderCopyDockSpace(CImGuiID src_dockspace_id, CImGuiID dst_dockspace_id, CImVector_const_charPtr * in_window_remap_pairs) {
    ImGui::DockBuilderCopyDockSpace(src_dockspace_id, dst_dockspace_id, toIm(in_window_remap_pairs));
}

void igiDockBuilderCopyNode(CImGuiID src_node_id, CImGuiID dst_node_id, CImVector_CImGuiID * out_node_remap_pairs) {
    ImGui::DockBuilderCopyNode(src_node_id, dst_node_id, toIm(out_node_remap_pairs));
}

void igiDockBuilderCopyWindowSettings(const char * src_name, const char * dst_name) {
    ImGui::DockBuilderCopyWindowSettings(src_name, dst_name);
}

void igiDockBuilderFinish(CImGuiID node_id) {
    ImGui::DockBuilderFinish(node_id);
}


bool igiBeginDragDropTargetCustom(CImRect bb, CImGuiID id) {
    return ImGui::BeginDragDropTargetCustom(toIm(bb), id);
}

void igiClearDragDrop() {
    ImGui::ClearDragDrop();
}

bool igiIsDragDropPayloadBeingAccepted() {
    return ImGui::IsDragDropPayloadBeingAccepted();
}


void igiSetWindowClipRectBeforeSetChannel(CImGuiWindow * window, CImRect clip_rect) {
    ImGui::SetWindowClipRectBeforeSetChannel(toIm(window), toIm(clip_rect));
}

void igiBeginColumns(const char * str_id, int count, CImGuiColumnsFlags flags) {
    ImGui::BeginColumns(str_id, count, flags);
}

void igiEndColumns() {
    ImGui::EndColumns();
}

void igiPushColumnClipRect(int column_index) {
    ImGui::PushColumnClipRect(column_index);
}

void igiPushColumnsBackground() {
    ImGui::PushColumnsBackground();
}

void igiPopColumnsBackground() {
    ImGui::PopColumnsBackground();
}

CImGuiID igiGetColumnsID(const char * str_id, int count) {
    return ImGui::GetColumnsID(str_id, count);
}

CImGuiColumns * igiFindOrCreateColumns(CImGuiWindow * window, CImGuiID id) {
    return toCIm(ImGui::FindOrCreateColumns(toIm(window), id));
}

float igiGetColumnOffsetFromNorm(const CImGuiColumns * columns, float offset_norm) {
    return ImGui::GetColumnOffsetFromNorm(toIm(columns), offset_norm);
}

float igiGetColumnNormFromOffset(const CImGuiColumns * columns, float offset) {
    return ImGui::GetColumnNormFromOffset(toIm(columns), offset);
}


bool igiBeginTabBarEx(CImGuiTabBar * tab_bar, CImRect bb, CImGuiTabBarFlags flags, CImGuiDockNode * dock_node) {
    return ImGui::BeginTabBarEx(toIm(tab_bar), toIm(bb), flags, toIm(dock_node));
}

CImGuiTabItem * igiTabBarFindTabByID(CImGuiTabBar * tab_bar, CImGuiID tab_id) {
    return toCIm(ImGui::TabBarFindTabByID(toIm(tab_bar), tab_id));
}

CImGuiTabItem * igiTabBarFindMostRecentlySelectedTabForActiveWindow(CImGuiTabBar * tab_bar) {
    return toCIm(ImGui::TabBarFindMostRecentlySelectedTabForActiveWindow(toIm(tab_bar)));
}

void igiTabBarAddTab(CImGuiTabBar * tab_bar, CImGuiTabItemFlags tab_flags, CImGuiWindow * window) {
    ImGui::TabBarAddTab(toIm(tab_bar), tab_flags, toIm(window));
}

void igiTabBarRemoveTab(CImGuiTabBar * tab_bar, CImGuiID tab_id) {
    ImGui::TabBarRemoveTab(toIm(tab_bar), tab_id);
}

void igiTabBarCloseTab(CImGuiTabBar * tab_bar, CImGuiTabItem * tab) {
    ImGui::TabBarCloseTab(toIm(tab_bar), toIm(tab));
}

void igiTabBarQueueReorder(CImGuiTabBar * tab_bar, const CImGuiTabItem * tab, int dir) {
    ImGui::TabBarQueueReorder(toIm(tab_bar), toIm(tab), dir);
}

bool igiTabBarProcessReorder(CImGuiTabBar * tab_bar) {
    return ImGui::TabBarProcessReorder(toIm(tab_bar));
}

bool igiTabItemEx(CImGuiTabBar * tab_bar, const char * label, bool * p_open, CImGuiTabItemFlags flags, CImGuiWindow * docked_window) {
    return ImGui::TabItemEx(toIm(tab_bar), label, p_open, flags, toIm(docked_window));
}

CImVec2 igiTabItemCalcSize(const char * label, bool has_close_button) {
    return toCIm(ImGui::TabItemCalcSize(label, has_close_button));
}

void igiTabItemBackground(CImDrawList * draw_list, CImRect bb, CImGuiTabItemFlags flags, CImU32 col) {
    ImGui::TabItemBackground(toIm(draw_list), toIm(bb), flags, col);
}

bool igiTabItemLabelAndCloseButton(CImDrawList * draw_list, CImRect bb, CImGuiTabItemFlags flags, CImVec2 frame_padding, const char * label, CImGuiID tab_id, CImGuiID close_button_id, bool is_contents_visible) {
    return ImGui::TabItemLabelAndCloseButton(toIm(draw_list), toIm(bb), flags, toIm(frame_padding), label, tab_id, close_button_id, is_contents_visible);
}

void igiRenderText(CImVec2 pos, const char * text, const char * text_end, bool hide_text_after_hash) {
    ImGui::RenderText(toIm(pos), text, text_end, hide_text_after_hash);
}

void igiRenderTextWrapped(CImVec2 pos, const char * text, const char * text_end, float wrap_width) {
    ImGui::RenderTextWrapped(toIm(pos), text, text_end, wrap_width);
}

void igiRenderTextClipped(CImVec2 pos_min, CImVec2 pos_max, const char * text, const char * text_end, const CImVec2 * text_size_if_known, CImVec2 align, const CImRect * clip_rect) {
    ImGui::RenderTextClipped(toIm(pos_min), toIm(pos_max), text, text_end, toIm(text_size_if_known), toIm(align), toIm(clip_rect));
}

void igiRenderTextClippedEx(CImDrawList * draw_list, CImVec2 pos_min, CImVec2 pos_max, const char * text, const char * text_end, const CImVec2 * text_size_if_known, CImVec2 align, const CImRect * clip_rect) {
    ImGui::RenderTextClippedEx(toIm(draw_list), toIm(pos_min), toIm(pos_max), text, text_end, toIm(text_size_if_known), toIm(align), toIm(clip_rect));
}

void igiRenderTextEllipsis(CImDrawList * draw_list, CImVec2 pos_min, CImVec2 pos_max, float clip_max_x, float ellipsis_max_x, const char * text, const char * text_end, const CImVec2 * text_size_if_known) {
    ImGui::RenderTextEllipsis(toIm(draw_list), toIm(pos_min), toIm(pos_max), clip_max_x, ellipsis_max_x, text, text_end, toIm(text_size_if_known));
}

void igiRenderFrame(CImVec2 p_min, CImVec2 p_max, CImU32 fill_col, bool border, float rounding) {
    ImGui::RenderFrame(toIm(p_min), toIm(p_max), fill_col, border, rounding);
}

void igiRenderFrameBorder(CImVec2 p_min, CImVec2 p_max, float rounding) {
    ImGui::RenderFrameBorder(toIm(p_min), toIm(p_max), rounding);
}

void igiRenderColorRectWithAlphaCheckerboard(CImDrawList * draw_list, CImVec2 p_min, CImVec2 p_max, CImU32 fill_col, float grid_step, CImVec2 grid_off, float rounding, int rounding_corners_flags) {
    ImGui::RenderColorRectWithAlphaCheckerboard(toIm(draw_list), toIm(p_min), toIm(p_max), fill_col, grid_step, toIm(grid_off), rounding, rounding_corners_flags);
}

void igiRenderNavHighlight(CImRect bb, CImGuiID id, CImGuiNavHighlightFlags flags) {
    ImGui::RenderNavHighlight(toIm(bb), id, flags);
}

const char * igiFindRenderedTextEnd(const char * text, const char * text_end) {
    return ImGui::FindRenderedTextEnd(text, text_end);
}

void igiLogRenderedText(const CImVec2 * ref_pos, const char * text, const char * text_end) {
    ImGui::LogRenderedText(toIm(ref_pos), text, text_end);
}


void igiRenderArrow(CImDrawList * draw_list, CImVec2 pos, CImU32 col, CImGuiDir dir, float scale) {
    ImGui::RenderArrow(toIm(draw_list), toIm(pos), col, dir, scale);
}

void igiRenderBullet(CImDrawList * draw_list, CImVec2 pos, CImU32 col) {
    ImGui::RenderBullet(toIm(draw_list), toIm(pos), col);
}

void igiRenderCheckMark(CImDrawList * draw_list, CImVec2 pos, CImU32 col, float sz) {
    ImGui::RenderCheckMark(toIm(draw_list), toIm(pos), col, sz);
}

void igiRenderMouseCursor(CImDrawList * draw_list, CImVec2 pos, float scale, CImGuiMouseCursor mouse_cursor, CImU32 col_fill, CImU32 col_border, CImU32 col_shadow) {
    ImGui::RenderMouseCursor(toIm(draw_list), toIm(pos), scale, mouse_cursor, col_fill, col_border, col_shadow);
}

void igiRenderArrowPointingAt(CImDrawList * draw_list, CImVec2 pos, CImVec2 half_sz, CImGuiDir direction, CImU32 col) {
    ImGui::RenderArrowPointingAt(toIm(draw_list), toIm(pos), toIm(half_sz), direction, col);
}

void igiRenderArrowDockMenu(CImDrawList * draw_list, CImVec2 p_min, float sz, CImU32 col) {
    ImGui::RenderArrowDockMenu(toIm(draw_list), toIm(p_min), sz, col);
}

void igiRenderRectFilledRangeH(CImDrawList * draw_list, CImRect rect, CImU32 col, float x_start_norm, float x_end_norm, float rounding) {
    ImGui::RenderRectFilledRangeH(toIm(draw_list), toIm(rect), col, x_start_norm, x_end_norm, rounding);
}

void igiRenderRectFilledWithHole(CImDrawList * draw_list, CImRect outer, CImRect inner, CImU32 col, float rounding) {
    ImGui::RenderRectFilledWithHole(toIm(draw_list), toIm(outer), toIm(inner), col, rounding);
}


void igiTextEx(const char * text, const char * text_end, CImGuiTextFlags flags) {
    ImGui::TextEx(text, text_end, flags);
}

bool igiButtonEx(const char * label, CImVec2 size_arg, CImGuiButtonFlags flags) {
    return ImGui::ButtonEx(label, toIm(size_arg), flags);
}

bool igiCloseButton(CImGuiID id, CImVec2 pos) {
    return ImGui::CloseButton(id, toIm(pos));
}

bool igiCollapseButton(CImGuiID id, CImVec2 pos, CImGuiDockNode * dock_node) {
    return ImGui::CollapseButton(id, toIm(pos), toIm(dock_node));
}

bool igiArrowButtonEx(const char * str_id, CImGuiDir dir, CImVec2 size_arg, CImGuiButtonFlags flags) {
    return ImGui::ArrowButtonEx(str_id, dir, toIm(size_arg), flags);
}

void igiScrollbar(CImGuiAxis axis) {
    ImGui::Scrollbar((ImGuiAxis)axis);
}

bool igiScrollbarEx(CImRect bb, CImGuiID id, CImGuiAxis axis, float * p_scroll_v, float avail_v, float contents_v, CImDrawCornerFlags rounding_corners) {
    return ImGui::ScrollbarEx(toIm(bb), id, (ImGuiAxis)axis, p_scroll_v, avail_v, contents_v, rounding_corners);
}

bool igiImageButtonEx(CImGuiID id, CImTextureID texture_id, CImVec2 size, CImVec2 uv0, CImVec2 uv1, CImVec2 padding, CImVec4 bg_col, CImVec4 tint_col) {
    return ImGui::ImageButtonEx(id, texture_id, toIm(size), toIm(uv0), toIm(uv1), toIm(padding), toIm(bg_col), toIm(tint_col));
}

CImRect igiGetWindowScrollbarRect(CImGuiWindow * window, CImGuiAxis axis) {
    return toCIm(ImGui::GetWindowScrollbarRect(toIm(window), (ImGuiAxis)axis));
}

CImGuiID igiGetWindowScrollbarID(CImGuiWindow * window, CImGuiAxis axis) {
    return ImGui::GetWindowScrollbarID(toIm(window), (ImGuiAxis)axis);
}

CImGuiID igiGetWindowResizeID(CImGuiWindow * window, int n) {
    return ImGui::GetWindowResizeID(toIm(window), n);
}

void igiSeparatorEx(CImGuiSeparatorFlags flags) {
    return ImGui::SeparatorEx(flags);
}


bool igiButtonBehavior(CImRect bb, CImGuiID id, bool * out_hovered, bool * out_held, CImGuiButtonFlags flags) {
    return ImGui::ButtonBehavior(toIm(bb), id, out_hovered, out_held, flags);
}

bool igiDragBehavior(CImGuiID id, CImGuiDataType data_type, void * p_v, float v_speed, const void * p_min, const void * p_max, const char * format, CImGuiSliderFlags flags) {
    return ImGui::DragBehavior(id, data_type, p_v, v_speed, p_min, p_max, format, flags);
}

bool igiSliderBehavior(CImRect bb, CImGuiID id, CImGuiDataType data_type, void * p_v, const void * p_min, const void * p_max, const char * format, CImGuiSliderFlags flags, CImRect * out_grab_bb) {
    return ImGui::SliderBehavior(toIm(bb), id, data_type, p_v, p_min, p_max, format, flags, toIm(out_grab_bb));
}

bool igiSplitterBehavior(CImRect bb, CImGuiID id, CImGuiAxis axis, float * size1, float * size2, float min_size1, float min_size2, float hover_extend, float hover_visibility_delay) {
    return ImGui::SplitterBehavior(toIm(bb), id, (ImGuiAxis)axis, size1, size2, min_size1, min_size2, hover_extend, hover_visibility_delay);
}

bool igiTreeNodeBehavior(CImGuiID id, CImGuiTreeNodeFlags flags, const char * label, const char * label_end) {
    return ImGui::TreeNodeBehavior(id, flags, label, label_end);
}

bool igiTreeNodeBehaviorIsOpen(CImGuiID id, CImGuiTreeNodeFlags flags) {
    return ImGui::TreeNodeBehaviorIsOpen(id, flags);
}

void igiTreePushOverrideID(CImGuiID id) {
    ImGui::TreePushOverrideID(id);
}


const CImGuiDataTypeInfo * igiDataTypeGetInfo(CImGuiDataType data_type) {
    return toCIm(ImGui::DataTypeGetInfo(data_type));
}

int igiDataTypeFormatString(char * buf, int buf_size, CImGuiDataType data_type, const void * p_data, const char * format) {
    return ImGui::DataTypeFormatString(buf, buf_size, data_type, p_data, format);
}

void igiDataTypeApplyOp(CImGuiDataType data_type, int op, void * output, const void * arg_1, const void * arg_2) {
    ImGui::DataTypeApplyOp(data_type, op, output, arg_1, arg_2);
}

bool igiDataTypeApplyOpFromText(const char * buf, const char * initial_value_buf, CImGuiDataType data_type, void * p_data, const char * format) {
    return ImGui::DataTypeApplyOpFromText(buf, initial_value_buf, data_type, p_data, format);
}

int igiDataTypeCompare(CImGuiDataType data_type, const void * arg_1, const void * arg_2) {
    return ImGui::DataTypeCompare(data_type, arg_1, arg_2);
}

bool igiDataTypeClamp(CImGuiDataType data_type, void * p_data, const void * p_min, const void * p_max) {
    return ImGui::DataTypeClamp(data_type, p_data, p_min, p_max);
}


bool igiInputTextEx(const char * label, const char * hint, char * buf, int buf_size, CImVec2 size_arg, CImGuiInputTextFlags flags, CImGuiInputTextCallback callback, void * user_data) {
    static CImGuiInputTextCallback staticCallback = callback;

    return ImGui::InputTextEx(label, hint, buf, buf_size, toIm(size_arg), flags, [](ImGuiInputTextCallbackData * data) {
        return staticCallback(toCIm(data));
    }, user_data);
}

bool igiTempInputText(CImRect bb, CImGuiID id, const char * label, char * buf, int buf_size, CImGuiInputTextFlags flags) {
    return ImGui::TempInputText(toIm(bb), id, label, buf, buf_size, flags);
}

bool igiTempInputScalar(CImRect bb, CImGuiID id, const char * label, CImGuiDataType data_type, void * p_data, const char * format, const void * p_clamp_min, const void * p_clamp_max) {
    return ImGui::TempInputScalar(toIm(bb), id, label, data_type, p_data, format);
}

bool igiTempInputIsActive(CImGuiID id) {
    return ImGui::TempInputIsActive(id);
}

CImGuiInputTextState * igiGetInputTextState(CImGuiID id) {
    return toCIm(ImGui::GetInputTextState(id));
}


void igiColorTooltip(const char * text, const float * col, CImGuiColorEditFlags flags) {
    ImGui::ColorTooltip(text, col, flags);
}

void igiColorEditOptionsPopup(const float * col, CImGuiColorEditFlags flags) {
    ImGui::ColorEditOptionsPopup(col, flags);
}

void igiColorPickerOptionsPopup(const float * ref_col, CImGuiColorEditFlags flags) {
    ImGui::ColorPickerOptionsPopup(ref_col, flags);
}


int igiPlotEx(CImGuiPlotType plot_type, const char * label, float ( *values_getter)(void * data, int idx), void * data, int values_count, int values_offset, const char * overlay_text, float scale_min, float scale_max, CImVec2 frame_size);

void igiShadeVertsLinearColorGradientKeepAlpha(CImDrawList * draw_list, int vert_start_idx, int vert_end_idx, CImVec2 gradient_p0, CImVec2 gradient_p1, CImU32 col0, CImU32 col1) {
    ImGui::ShadeVertsLinearColorGradientKeepAlpha(toIm(draw_list), vert_start_idx, vert_end_idx, toIm(gradient_p0), toIm(gradient_p1), col0, col1);
}

void igiShadeVertsLinearUV(CImDrawList * draw_list, int vert_start_idx, int vert_end_idx, CImVec2 a, CImVec2 b, CImVec2 uv_a, CImVec2 uv_b, bool clamp) {
    ImGui::ShadeVertsLinearUV(toIm(draw_list), vert_start_idx, vert_end_idx, toIm(a), toIm(b), toIm(uv_a), toIm(uv_b), clamp);
}


void igiGcCompactTransientWindowBuffers(CImGuiWindow * window) {
    ImGui::GcCompactTransientWindowBuffers(toIm(window));
}

void igiGcAwakeTransientWindowBuffers(CImGuiWindow * window) {
    ImGui::GcAwakeTransientWindowBuffers(toIm(window));
}


void igiDebugDrawItemRect(CImU32 col) {
    ImGui::DebugDrawItemRect(col);
}

void igiDebugStartItemPicker() {
    ImGui::DebugStartItemPicker();
}


// MARK: - Member functions


CImRect * igi_CImRect_init() {
    return toCIm(new ImRect);
}

CImRect * igi_CImRect_initMinMax(CImVec2 min, CImVec2 max) {
    return toCIm(new ImRect(toIm(min), toIm(max)));
}

CImRect * igi_CImRect_initCImVec4(CImVec4 v) {
    return toCIm(new ImRect(toIm(v)));
}

CImRect * igi_CImRect_initFloat4(float x1, float y1, float x2, float y2) {
    return toCIm(new ImRect(x1, y1, x2, y2));
}

void igi_CImRect_deinit(CImRect * ptr) {
    delete toIm(ptr);
}


CImVec2 igi_CImRect_GetCenter(const CImRect * ptr) {
    return toCIm(toIm(ptr)->GetCenter());
}

CImVec2 igi_CImRect_GetSize(const CImRect * ptr) {
    return toCIm(toIm(ptr)->GetSize());
}

float igi_CImRect_GetWidth(const CImRect * ptr) {
    return toIm(ptr)->GetWidth();
}

float igi_CImRect_GetHeight(const CImRect * ptr) {
    return toIm(ptr)->GetHeight();
}

CImVec2 igi_CImRect_GetTL(const CImRect * ptr) {
    return toCIm(toIm(ptr)->GetTL());
}

CImVec2 igi_CImRect_GetTR(const CImRect * ptr) {
    return toCIm(toIm(ptr)->GetTR());
}

CImVec2 igi_CImRect_GetBL(const CImRect * ptr) {
    return toCIm(toIm(ptr)->GetBL());
}

CImVec2 igi_CImRect_GetBR(const CImRect * ptr) {
    return toCIm(toIm(ptr)->GetBR());
}

bool igi_CImRect_Contains(const CImRect * ptr, CImVec2 p) {
    return toIm(ptr)->Contains(toIm(p));
}

bool igi_CImRect_ContainsRect(const CImRect * ptr, CImRect r) {
    return toIm(ptr)->Contains(toIm(r));
}

bool igi_CImRect_Overlaps(const CImRect * ptr, CImRect r) {
    return toIm(ptr)->Overlaps(toIm(r));
}

void igi_CImRect_Add(CImRect * ptr, CImVec2 p) {
    toIm(ptr)->Add(toIm(p));
}

void igi_CImRect_AddRect(CImRect * ptr, CImRect r) {
    toIm(ptr)->Add(toIm(r));
}

void igi_CImRect_Expand(CImRect * ptr, const float amount) {
    toIm(ptr)->Expand(amount);
}

void igi_CImRect_ExpandVec2(CImRect * ptr, CImVec2 amount) {
    toIm(ptr)->Expand(toIm(amount));
}

void igi_CImRect_Translate(CImRect * ptr, CImVec2 d) {
    toIm(ptr)->Translate(toIm(d));
}

void igi_CImRect_TranslateX(CImRect * ptr, float dx) {
    toIm(ptr)->TranslateX(dx);
}

void igi_CImRect_TranslateY(CImRect * ptr, float dy) {
    toIm(ptr)->TranslateY(dy);
}

void igi_CImRect_ClipWith(CImRect * ptr, CImRect r) {
    toIm(ptr)->ClipWith(toIm(r));
}

void igi_CImRect_ClipWithFull(CImRect * ptr, CImRect r) {
    toIm(ptr)->ClipWithFull(toIm(r));
}

void igi_CImRect_Floor(CImRect * ptr) {
    toIm(ptr)->Floor();
}

bool igi_CImRect_IsInverted(const CImRect * ptr) {
    return toIm(ptr)->IsInverted();
}

CImVec4 igi_CImRect_ToVec4(const CImRect * ptr) {
    return toCIm(toIm(ptr)->ToVec4());
}



CImBitVector * igi_CImBitVector_init() {
    return toCIm(new ImBitVector);
}

void igi_CImBitVector_deinit(CImBitVector * ptr) {
    delete toIm(ptr);
}


void igi_CImBitVector_Create(CImBitVector * ptr, int sz) {
    toIm(ptr)->Create(sz);
}

void igi_CImBitVector_Clear(CImBitVector * ptr) {
    toIm(ptr)->Clear();
}

bool igi_CImBitVector_TestBit(const CImBitVector * ptr, int n) {
    return toIm(ptr)->TestBit(n);
}

void igi_CImBitVector_SetBit(CImBitVector * ptr, int n) {
    toIm(ptr)->SetBit(n);
}

void igi_CImBitVector_ClearBit(CImBitVector * ptr, int n) {
    toIm(ptr)->ClearBit(n);
}



CImPool_CImGuiTabBar * igi_CImPool_CImGuiTabBar_init() {
    return toCIm(new ImPool<ImGuiTabBar>);
}

void igi_CImPool_CImGuiTabBar_deinit(CImPool_CImGuiTabBar * ptr) {
    delete toIm(ptr);
}


CImGuiTabBar * igi_CImPool_CImGuiTabBar_GetByKey(CImPool_CImGuiTabBar * ptr, CImGuiID key) {
    return toCIm(toIm(ptr)->GetByKey(key));
}

CImGuiTabBar * igi_CImPool_CImGuiTabBar_GetByIndex(CImPool_CImGuiTabBar * ptr, CImPoolIdx n) {
    return toCIm(toIm(ptr)->GetByIndex(n));
}

CImPoolIdx igi_CImPool_CImGuiTabBar_GetIndex(const CImPool_CImGuiTabBar * ptr, const CImGuiTabBar * p) {
    return toIm(ptr)->GetIndex(toIm(p));
}

CImGuiTabBar * igi_CImPool_CImGuiTabBar_GetOrAddByKey(CImPool_CImGuiTabBar * ptr, CImGuiID key) {
    return toCIm(toIm(ptr)->GetOrAddByKey(key));
}

bool igi_CImPool_CImGuiTabBar_Contains(const CImPool_CImGuiTabBar * ptr, const CImGuiTabBar * p) {
    return toIm(ptr)->Contains(toIm(p));
}

void igi_CImPool_CImGuiTabBar_Clear(CImPool_CImGuiTabBar * ptr) {
    toIm(ptr)->Clear();
}

CImGuiTabBar * igi_CImPool_CImGuiTabBar_Add(CImPool_CImGuiTabBar * ptr) {
    return toCIm(toIm(ptr)->Add());
}

void igi_CImPool_CImGuiTabBar_Remove(CImPool_CImGuiTabBar * ptr, CImGuiID key, const CImGuiTabBar * p) {
    toIm(ptr)->Remove(key, toIm(p));
}

void igi_CImPool_CImGuiTabBar_RemoveIdx(CImPool_CImGuiTabBar * ptr, CImGuiID key, CImPoolIdx idx) {
    toIm(ptr)->Remove(key, idx);
}

void igi_CImPool_CImGuiTabBar_Reserve(CImPool_CImGuiTabBar * ptr, int capacity) {
    toIm(ptr)->Reserve(capacity);
}

int igi_CImPool_CImGuiTabBar_GetSize(const CImPool_CImGuiTabBar * ptr) {
    return toIm(ptr)->GetSize();
}



CImChunkStream_CImGuiWindowSettings * igi_CImChunkStream_CImGuiWindowSettings_init() {
    return toCIm(new ImChunkStream<ImGuiWindowSettings>);
}

void igi_CImChunkStream_CImGuiWindowSettings_deinit(CImChunkStream_CImGuiWindowSettings * ptr) {
    delete toIm(ptr);
}


void igi_CImChunkStream_CImGuiWindowSettings_clear(CImChunkStream_CImGuiWindowSettings * ptr) {
    toIm(ptr)->clear();
}

bool igi_CImChunkStream_CImGuiWindowSettings_empty(const CImChunkStream_CImGuiWindowSettings * ptr) {
    return toIm(ptr)->empty();
}

int igi_CImChunkStream_CImGuiWindowSettings_size(const CImChunkStream_CImGuiWindowSettings * ptr) {
    return toIm(ptr)->size();
}

CImGuiWindowSettings * igi_CImChunkStream_CImGuiWindowSettings_alloc_chunk(CImChunkStream_CImGuiWindowSettings * ptr, size_t sz) {
    return toCIm(toIm(ptr)->alloc_chunk(sz));
}

CImGuiWindowSettings * igi_CImChunkStream_CImGuiWindowSettings_begin(CImChunkStream_CImGuiWindowSettings * ptr) {
    return toCIm(toIm(ptr)->begin());
}

CImGuiWindowSettings * igi_CImChunkStream_CImGuiWindowSettings_next_chunk(CImChunkStream_CImGuiWindowSettings * ptr, CImGuiWindowSettings * p) {
    return toCIm(toIm(ptr)->next_chunk(toIm(p)));
}

int igi_CImChunkStream_CImGuiWindowSettings_chunk_size(CImChunkStream_CImGuiWindowSettings * ptr, const CImGuiWindowSettings * p) {
    return toIm(ptr)->chunk_size(toIm(p));
}

CImGuiWindowSettings * igi_CImChunkStream_CImGuiWindowSettings_end(CImChunkStream_CImGuiWindowSettings * ptr) {
    return toCIm(toIm(ptr)->end());
}

int igi_CImChunkStream_CImGuiWindowSettings_offset_from_ptr(CImChunkStream_CImGuiWindowSettings * ptr, const CImGuiWindowSettings * p) {
    return toIm(ptr)->offset_from_ptr(toIm(p));
}

CImGuiWindowSettings * igi_CImChunkStream_CImGuiWindowSettings_ptr_from_offset(CImChunkStream_CImGuiWindowSettings * ptr, int off) {
    return toCIm(toIm(ptr)->ptr_from_offset(off));
}



CImDrawDataBuilder * igi_CImDrawDataBuilder_init() {
    return toCIm(new ImDrawDataBuilder);
}

void igi_CImDrawDataBuilder_deinit(CImDrawDataBuilder * ptr) {
    delete toIm(ptr);
}


void igi_CImDrawDataBuilder_Clear(CImDrawDataBuilder * ptr) {
    toIm(ptr)->Clear();
}

void igi_CImDrawDataBuilder_ClearFreeMemory(CImDrawDataBuilder * ptr) {
    toIm(ptr)->ClearFreeMemory();
}

void igi_CImDrawDataBuilder_FlattenIntoSingleLayer(CImDrawDataBuilder * ptr) {
    toIm(ptr)->FlattenIntoSingleLayer();
}



CImGuiDataTypeTempStorage * igi_CImGuiDataTypeTempStorage_init() {
    return toCIm(new ImGuiDataTypeTempStorage);
}

void igi_CImGuiDataTypeTempStorage_deinit(CImGuiDataTypeTempStorage * ptr) {
    delete toIm(ptr);
}



CImGuiDataTypeInfo * igi_CImGuiDataTypeInfo_init() {
    return toCIm(new ImGuiDataTypeInfo);
}

void igi_CImGuiDataTypeInfo_deinit(CImGuiDataTypeInfo * ptr) {
    delete toIm(ptr);
}



CImGuiColorMod * igi_CImGuiColorMod_init() {
    return toCIm(new ImGuiColorMod);
}

void igi_CImGuiColorMod_deinit(CImGuiColorMod * ptr) {
    delete toIm(ptr);
}



CImGuiStyleMod * igi_CImGuiStyleMod_init(CImGuiStyleVar idx, int v) {
    return toCIm(new ImGuiStyleMod(idx, v));
}

CImGuiStyleMod * igi_CImGuiStyleMod_initWithFloat(CImGuiStyleVar idx, float v) {
    return toCIm(new ImGuiStyleMod(idx, v));
}

CImGuiStyleMod * igi_CImGuiStyleMod_initWithVec2(CImGuiStyleVar idx, CImVec2 v) {
    return toCIm(new ImGuiStyleMod(idx, toIm(v)));
}

void igi_CImGuiStyleMod_deinit(CImGuiStyleMod * ptr) {
    delete toIm(ptr);
}



CImGuiGroupData * igi_CImGuiGroupData_init() {
    return toCIm(new ImGuiGroupData);
}

void igi_CImGuiGroupData_deinit(CImGuiGroupData * ptr) {
    delete toIm(ptr);
}



CImGuiMenuColumns * igi_CImGuiMenuColumns_init() {
    return toCIm(new ImGuiMenuColumns);
}

void igi_CImGuiMenuColumns_deinit(CImGuiMenuColumns * ptr) {
    delete toIm(ptr);
}


void igi_CImGuiMenuColumns_Update(CImGuiMenuColumns * ptr, int count, float spacing, bool clear) {
    toIm(ptr)->Update(count, spacing, clear);
}

float igi_CImGuiMenuColumns_DeclColumns(CImGuiMenuColumns * ptr, float w0, float w1, float w2) {
    return toIm(ptr)->DeclColumns(w0, w1, w2);
}

float igi_CImGuiMenuColumns_CalcExtraSpace(const CImGuiMenuColumns * ptr, float avail_w) {
    return toIm(ptr)->CalcExtraSpace(avail_w);
}



CImGuiInputTextState * igi_CImGuiInputTextState_init() {
    return toCIm(new ImGuiInputTextState);
}

void igi_CImGuiInputTextState_deinit(CImGuiInputTextState * ptr) {
    delete toIm(ptr);
}


void igi_CImGuiInputTextState_ClearText(CImGuiInputTextState * ptr) {
    toIm(ptr)->ClearText();
}

void igi_CImGuiInputTextState_ClearFreeMemory(CImGuiInputTextState * ptr) {
    toIm(ptr)->ClearFreeMemory();
}

int igi_CImGuiInputTextState_GetUndoAvailCount(const CImGuiInputTextState * ptr) {
    return toIm(ptr)->GetUndoAvailCount();
}

int igi_CImGuiInputTextState_GetRedoAvailCount(const CImGuiInputTextState * ptr) {
    return toIm(ptr)->GetRedoAvailCount();
}

void igi_CImGuiInputTextState_OnKeyPressed(CImGuiInputTextState * ptr, int key) {
    toIm(ptr)->OnKeyPressed(key);
}


void igi_CImGuiInputTextState_CursorAnimReset(CImGuiInputTextState * ptr) {
    toIm(ptr)->CursorAnimReset();
}

void igi_CImGuiInputTextState_CursorClamp(CImGuiInputTextState * ptr) {
    toIm(ptr)->CursorClamp();
}

bool igi_CImGuiInputTextState_HasSelection(const CImGuiInputTextState * ptr) {
    return toIm(ptr)->HasSelection();
}

void igi_CImGuiInputTextState_ClearSelection(CImGuiInputTextState * ptr) {
    toIm(ptr)->ClearSelection();
}

void igi_CImGuiInputTextState_SelectAll(CImGuiInputTextState * ptr) {
    toIm(ptr)->SelectAll();
}



CImGuiPopupData * igi_CImGuiPopupData_init() {
    return toCIm(new ImGuiPopupData);
}

void igi_CImGuiPopupData_deinit(CImGuiPopupData * ptr) {
    delete toIm(ptr);
}



CImGuiNavMoveResult * igi_CImGuiNavMoveResult_init() {
    return toCIm(new ImGuiNavMoveResult);
}

void igi_CImGuiNavMoveResult_deinit(CImGuiNavMoveResult * ptr) {
    delete toIm(ptr);
}


void igi_CImGuiNavMoveResult_Clear(CImGuiNavMoveResult * ptr) {
    toIm(ptr)->Clear();
}



CImGuiNextWindowData * igi_CImGuiNextWindowData_init() {
    return toCIm(new ImGuiNextWindowData);
}

void igi_CImGuiNextWindowData_deinit(CImGuiNextWindowData * ptr) {
    delete toIm(ptr);
}


void igi_CImGuiNextWindowData_ClearFlags(CImGuiNextWindowData * ptr) {
    toIm(ptr)->ClearFlags();
}



CImGuiNextItemData * igi_CImGuiNextItemData_init() {
    return toCIm(new ImGuiNextItemData);
}

void igi_CImGuiNextItemData_deinit(CImGuiNextItemData * ptr) {
    delete toIm(ptr);
}


void igi_CImGuiNextItemData_ClearFlags(CImGuiNextItemData * ptr) {
    toIm(ptr)->ClearFlags();
}



CImGuiShrinkWidthItem * igi_CImGuiShrinkWidthItem_init() {
    return toCIm(new ImGuiShrinkWidthItem);
}

void igi_CImGuiShrinkWidthItem_deinit(CImGuiShrinkWidthItem * ptr) {
    delete toIm(ptr);
}



CImGuiPtrOrIndex * igi_CImGuiPtrOrIndex_initWithPtr(void * ptr) {
    return toCIm(new ImGuiPtrOrIndex(ptr));
}

CImGuiPtrOrIndex * igi_CImGuiPtrOrIndex_initWithIdx(void * idx) {
    return toCIm(new ImGuiPtrOrIndex(idx));
}

void igi_CImGuiPtrOrIndex_deinit(CImGuiPtrOrIndex * ptr) {
    delete toIm(ptr);
}



CImGuiColumnData * igi_CImGuiColumnData_init() {
    return toCIm(new ImGuiColumnData);
}

void igi_CImGuiColumnData_deinit(CImGuiColumnData * ptr) {
    delete toIm(ptr);
}



CImGuiColumns * igi_CImGuiColumns_init() {
    return toCIm(new ImGuiColumns);
}

void igi_CImGuiColumns_deinit(CImGuiColumns * ptr) {
    delete toIm(ptr);
}


void igi_CImGuiColumns_Clear(CImGuiColumns * ptr) {
    toIm(ptr)->Clear();
}



CImGuiDockNode * igi_CImGuiDockNode_init(CImGuiID id) {
    return toCIm(new ImGuiDockNode(id));
}

void igi_CImGuiDockNode_deinit(CImGuiDockNode * ptr) {
    delete toIm(ptr);
}


bool igi_CImGuiDockNode_IsRootNode(const CImGuiDockNode * ptr) {
    return toIm(ptr)->IsRootNode();
}

bool igi_CImGuiDockNode_IsDockSpace(const CImGuiDockNode * ptr) {
    return toIm(ptr)->IsDockSpace();
}

bool igi_CImGuiDockNode_IsFloatingNode(const CImGuiDockNode * ptr) {
    return toIm(ptr)->IsFloatingNode();
}

bool igi_CImGuiDockNode_IsCentralNode(const CImGuiDockNode * ptr) {
    return toIm(ptr)->IsCentralNode();
}

bool igi_CImGuiDockNode_IsHiddenTabBar(const CImGuiDockNode * ptr) {
    return toIm(ptr)->IsHiddenTabBar();
}

bool igi_CImGuiDockNode_IsNoTabBar(const CImGuiDockNode * ptr) {
    return toIm(ptr)->IsNoTabBar();
}

bool igi_CImGuiDockNode_IsSplitNode(const CImGuiDockNode * ptr) {
    return toIm(ptr)->IsSplitNode();
}

bool igi_CImGuiDockNode_IsLeafNode(const CImGuiDockNode * ptr) {
    return toIm(ptr)->IsLeafNode();
}

bool igi_CImGuiDockNode_IsEmpty(const CImGuiDockNode * ptr) {
    return toIm(ptr)->IsEmpty();
}

CImGuiDockNodeFlags igi_CImGuiDockNode_GetMergedFlags(const CImGuiDockNode * ptr) {
    return toIm(ptr)->GetMergedFlags();
}

CImRect igi_CImGuiDockNode_Rect(const CImGuiDockNode * ptr) {
    return toCIm(toIm(ptr)->Rect());
}



CImGuiDockContext * igi_CImGuiDockContext_init() {
    return toCIm(new ImGuiDockContext);
}

void igi_CImGuiDockContext_deinit(CImGuiDockContext * ptr) {
    delete toIm(ptr);
}



CImGuiViewportP * igi_CImGuiViewportP_init() {
    return toCIm(new ImGuiViewportP);
}

void igi_CImGuiViewportP_deinit(CImGuiViewportP * ptr) {
    delete toIm(ptr);
}


CImVec2 igi_CImGuiViewportP_GetWorkPos(CImGuiViewportP * ptr) {
    return toCIm(toIm(ptr)->GetWorkPos());
}

CImVec2 igi_CImGuiViewportP_GetWorkSize(CImGuiViewportP * ptr) {
    return toCIm(toIm(ptr)->GetWorkSize());
}


CImRect igi_CImGuiViewportP_GetMainRect(const CImGuiViewportP * ptr) {
    return toCIm(toIm(ptr)->GetMainRect());
}

CImRect igi_CImGuiViewportP_GetWorkRect(const CImGuiViewportP * ptr) {
    return toCIm(toIm(ptr)->GetWorkRect());
}

void igi_CImGuiViewportP_ClearRequestFlags(CImGuiViewportP * ptr) {
    toIm(ptr)->ClearRequestFlags();
}



CImGuiWindowSettings * igi_CImGuiWindowSettings_init() {
    return toCIm(new ImGuiWindowSettings);
}

void igi_CImGuiWindowSettings_deinit(CImGuiWindowSettings * ptr) {
    delete toIm(ptr);
}


char * igi_CImGuiWindowSettings_GetName(CImGuiWindowSettings * ptr) {
    return toIm(ptr)->GetName();
}


CImGuiSettingsHandler * igi_CImGuiSettingsHandler_init() {
    return toCIm(new ImGuiSettingsHandler);
}

void igi_CImGuiSettingsHandler_deinit(CImGuiSettingsHandler * ptr) {
    delete toIm(ptr);
}



CImGuiConcreteContext * igi_CImGuiConcreteContext_init(CImFontAtlas * shared_font_atlas) {
    return toCIm(new ImGuiContext(toIm(shared_font_atlas)));
}

void igi_CImGuiConcreteContext_deinit(CImGuiConcreteContext * ptr) {
    delete toIm(ptr);
}



CImGuiWindowTempData * igi_CImGuiWindowTempData_init() {
    return toCIm(new ImGuiWindowTempData);
}

void igi_CImGuiWindowTempData_deinit(CImGuiWindowTempData * ptr) {
    delete toIm(ptr);
}



CImGuiWindow * igi_CImGuiWindow_init(CImGuiConcreteContext * context, const char * name) {
    return toCIm(new ImGuiWindow(toIm(context), name));
}

void igi_CImGuiWindow_deinit(CImGuiWindow * ptr) {
    delete toIm(ptr);
}


CImGuiID igi_CImGuiWindow_GetIDString(CImGuiWindow * ptr, const char * str, const char * str_end) {
    return toIm(ptr)->GetID(str, str_end);
}

CImGuiID igi_CImGuiWindow_GetIDPtr(CImGuiWindow * ptr, const void * ptr2) {
    return toIm(ptr)->GetID(ptr2);
}

CImGuiID igi_CImGuiWindow_GetIDInt(CImGuiWindow * ptr, int n) {
    return toIm(ptr)->GetID(n);
}

CImGuiID igi_CImGuiWindow_GetIDNoKeepAliveString(CImGuiWindow * ptr, const char * str, const char * str_end) {
    return toIm(ptr)->GetIDNoKeepAlive(str, str_end);
}

CImGuiID igi_CImGuiWindow_GetIDNoKeepAlivePtr(CImGuiWindow * ptr, const void * ptr2) {
    return toIm(ptr)->GetIDNoKeepAlive(ptr2);
}

CImGuiID igi_CImGuiWindow_GetIDNoKeepAliveInt(CImGuiWindow * ptr, int n) {
    return toIm(ptr)->GetIDNoKeepAlive(n);
}

CImGuiID igi_CImGuiWindow_GetIDFromRectangle(CImGuiWindow * ptr, CImRect r_abs) {
    return toIm(ptr)->GetIDFromRectangle(toIm(r_abs));
}


CImRect igi_CImGuiWindow_Rect(const CImGuiWindow * ptr) {
    return toCIm(toIm(ptr)->Rect());
}

float igi_CImGuiWindow_CalcFontSize(const CImGuiWindow * ptr) {
    return toIm(ptr)->CalcFontSize();
}

float igi_CImGuiWindow_TitleBarHeight(const CImGuiWindow * ptr) {
    return toIm(ptr)->TitleBarHeight();
}

CImRect igi_CImGuiWindow_TitleBarRect(const CImGuiWindow * ptr) {
    return toCIm(toIm(ptr)->TitleBarRect());
}

float igi_CImGuiWindow_MenuBarHeight(const CImGuiWindow * ptr) {
    return toIm(ptr)->MenuBarHeight();
}

CImRect igi_CImGuiWindow_MenuBarRect(const CImGuiWindow * ptr) {
    return toCIm(toIm(ptr)->MenuBarRect());
}



CImGuiLastItemDataBackup * igi_CImGuiLastItemDataBackup_init() {
    return toCIm(new ImGuiLastItemDataBackup);
}

void igi_CImGuiLastItemDataBackup_deinit(CImGuiLastItemDataBackup * ptr) {
    delete toIm(ptr);
}


void igi_CImGuiLastItemDataBackup_Backup(CImGuiLastItemDataBackup * ptr) {
    toIm(ptr)->Backup();
}

void igi_CImGuiLastItemDataBackup_Restore(const CImGuiLastItemDataBackup * ptr) {
    toIm(ptr)->Restore();
}



CImGuiTabItem * igi_CImGuiTabItem_init() {
    return toCIm(new ImGuiTabItem);
}

void igi_CImGuiTabItem_deinit(CImGuiTabItem * ptr) {
    delete toIm(ptr);
}



CImGuiTabBar * igi_CImGuiTabBar_init() {
    return toCIm(new ImGuiTabBar);
}

void igi_CImGuiTabBar_deinit(CImGuiTabBar * ptr) {
    delete toIm(ptr);
}


int igi_CImGuiTabBar_GetTabOrder(const CImGuiTabBar * ptr, const CImGuiTabItem * tab) {
    return toIm(ptr)->GetTabOrder(toIm(tab));
}

const char * igi_CImGuiTabBar_GetTabName(const CImGuiTabBar * ptr, const CImGuiTabItem * tab) {
    return toIm(ptr)->GetTabName(toIm(tab));
}
