@_exported import cImGuiInternal

import ImGui

extension ImGui {
    public enum Internal {
        @inlinable
        public static func getCurrentWindowRead() -> UnsafeMutablePointer<CImGuiWindow> {
            igiGetCurrentWindowRead()
        }

        @inlinable
        public static func getCurrentWindow() -> UnsafeMutablePointer<CImGuiWindow> {
            igiGetCurrentWindow()
        }

        @inlinable
        public static func findWindow(byID id: CImGuiID) -> UnsafeMutablePointer<CImGuiWindow> {
            igiFindWindowByID(id)
        }

        @inlinable
        public static func findWindow(byName name: String) -> UnsafeMutablePointer<CImGuiWindow> {
            igiFindWindowByName(name)
        }

        @inlinable
        public static func updateWindowParentAndRootLinks(window: UnsafeMutablePointer<CImGuiWindow>, flags: ImGuiWindowFlags, parent_window: UnsafeMutablePointer<CImGuiWindow>) {
            igiUpdateWindowParentAndRootLinks(window, flags.rawValue, parent_window)
        }

        @inlinable
        public static func calcWindowExpectedSize(window: UnsafeMutablePointer<CImGuiWindow>) -> CImVec2 {
            igiCalcWindowExpectedSize(window)
        }

        @inlinable
        public static func isWindowChildOf(window: UnsafeMutablePointer<CImGuiWindow>, potential_parent: UnsafeMutablePointer<CImGuiWindow>) -> Bool {
            igiIsWindowChildOf(window, potential_parent)
        }

        @inlinable
        public static func isWindowNavFocusable(window: UnsafeMutablePointer<CImGuiWindow>) -> Bool {
            igiIsWindowNavFocusable(window)
        }

        @inlinable
        public static func getWindowAllowedExtentRect(window: UnsafeMutablePointer<CImGuiWindow>) -> CImRect {
            igiGetWindowAllowedExtentRect(window)
        }

        @inlinable
        public static func setWindowPos(window: UnsafeMutablePointer<CImGuiWindow>, pos: CImVec2, cond: ImGuiCondition = .none) {
            igiSetWindowPos(window, pos, cond.rawValue)
        }

        @inlinable
        public static func setWindowSize(window: UnsafeMutablePointer<CImGuiWindow>, size: CImVec2, cond: ImGuiCondition = .none) {
            igiSetWindowSize(window, size, cond.rawValue)
        }

        @inlinable
        public static func setWindowCollapsed(window: UnsafeMutablePointer<CImGuiWindow>, collapsed: Bool, cond: ImGuiCondition = .none) {
            igiSetWindowCollapsed(window, collapsed, cond.rawValue)
        }

        @inlinable
        public static func setWindowHitTestHole(window: UnsafeMutablePointer<CImGuiWindow>, pos: CImVec2, size: CImVec2) {
            igiSetWindowHitTestHole(window, pos, size)
        }


        // Windows: Display Order and Focus Order
        @inlinable
        public static func focusWindow(window: UnsafeMutablePointer<CImGuiWindow>) {
            igiFocusWindow(window)
        }

        @inlinable
        public static func focusTopMostWindowUnderOne(under_this_window: UnsafeMutablePointer<CImGuiWindow>, ignore_window: UnsafeMutablePointer<CImGuiWindow>) {
            igiFocusTopMostWindowUnderOne(under_this_window, ignore_window)
        }

        @inlinable
        public static func bringWindowToFocusFront(window: UnsafeMutablePointer<CImGuiWindow>) {
            igiBringWindowToFocusFront(window)
        }

        @inlinable
        public static func bringWindowToDisplayFront(window: UnsafeMutablePointer<CImGuiWindow>) {
            igiBringWindowToDisplayFront(window)
        }

        @inlinable
        public static func bringWindowToDisplayBack(window: UnsafeMutablePointer<CImGuiWindow>) {
            igiBringWindowToDisplayBack(window)
        }


        // Fonts, drawing
        @inlinable
        public static func setCurrentFont(font: UnsafeMutablePointer<CImFont>) {
            igiSetCurrentFont(font)
        }

        @inlinable
        public static func getDefaultFont() -> UnsafeMutablePointer<CImFont> {
            igiGetDefaultFont()
        }

        @inlinable
        public static func getForegroundDrawList(window: UnsafeMutablePointer<CImGuiWindow>) -> UnsafeMutablePointer<CImDrawList> {
            igiGetForegroundDrawList(window)
        }


        // Init
        @inlinable
        public static func initialize(context: UnsafeMutablePointer<CImGuiConcreteContext>) {
            igiInitialize(context)
        }

        @inlinable
        public static func shutdown(context: UnsafeMutablePointer<CImGuiConcreteContext>) {
            igiShutdown(context)
        }


        // NewFrame
        @inlinable
        public static func updateHoveredWindowAndCaptureFlags() {
            igiUpdateHoveredWindowAndCaptureFlags()
        }

        @inlinable
        public static func startMouseMovingWindow(window: UnsafeMutablePointer<CImGuiWindow>) {
            igiStartMouseMovingWindow(window)
        }

        @inlinable
        public static func startMouseMovingWindowOrNode(window: UnsafeMutablePointer<CImGuiWindow>, node: UnsafeMutablePointer<CImGuiDockNode>, undock_floating_node: Bool) {
            igiStartMouseMovingWindowOrNode(window, node, undock_floating_node)
        }

        @inlinable
        public static func updateMouseMovingWindowNewFrame() {
            igiUpdateMouseMovingWindowNewFrame()
        }

        @inlinable
        public static func updateMouseMovingWindowEndFrame() {
            igiUpdateMouseMovingWindowEndFrame()
        }


        // Viewports
        @inlinable
        public static func translateWindowsInViewport(viewport: UnsafeMutablePointer<CImGuiViewportP>, old_pos: CImVec2, new_pos: CImVec2) {
            igiTranslateWindowsInViewport(viewport, old_pos, new_pos)
        }

        @inlinable
        public static func scaleWindowsInViewport(viewport: UnsafeMutablePointer<CImGuiViewportP>, scale: Float) {
            igiScaleWindowsInViewport(viewport, scale)
        }

        @inlinable
        public static func destroyPlatformWindow(viewport: UnsafeMutablePointer<CImGuiViewportP>) {
            igiDestroyPlatformWindow(viewport)
        }

        @inlinable
        public static func showViewportThumbnails() {
            igiShowViewportThumbnails()
        }


        // Settings
        @inlinable
        public static func markIniSettingsDirty() {
            igiMarkIniSettingsDirty()
        }

        @inlinable
        public static func markIniSettingsDirty(window: UnsafeMutablePointer<CImGuiWindow>) {
            igiMarkIniSettingsDirtyWindow(window)
        }

        @inlinable
        public static func clearIniSettings() {
            igiClearIniSettings()
        }

        @inlinable
        public static func createNewWindowSettings(name: String) -> UnsafeMutablePointer<CImGuiWindowSettings> {
            igiCreateNewWindowSettings(name)
        }

        @inlinable
        public static func findWindowSettings(id: CImGuiID) -> UnsafeMutablePointer<CImGuiWindowSettings> {
            igiFindWindowSettings(id)
        }

        @inlinable
        public static func findOrCreateWindowSettings(name: String) -> UnsafeMutablePointer<CImGuiWindowSettings> {
            igiFindOrCreateWindowSettings(name)
        }

        @inlinable
        public static func findSettingsHandler(type_name: String) -> UnsafeMutablePointer<CImGuiSettingsHandler> {
            igiFindSettingsHandler(type_name)
        }


        // Scrolling
        @inlinable
        public static func setNextWindowScroll(scroll: CImVec2) {
            igiSetNextWindowScroll(scroll)
        }

        @inlinable
        public static func setScrollX(window: UnsafeMutablePointer<CImGuiWindow>, scroll_x: Float) {
            igiSetScrollX(window, scroll_x)
        }

        @inlinable
        public static func setScrollY(window: UnsafeMutablePointer<CImGuiWindow>, scroll_y: Float) {
            igiSetScrollY(window, scroll_y)
        }

        @inlinable
        public static func setScrollFromPosX(window: UnsafeMutablePointer<CImGuiWindow>, local_x: Float, center_x_ratio: Float) {
            igiSetScrollFromPosX(window, local_x, center_x_ratio)
        }

        @inlinable
        public static func setScrollFromPosY(window: UnsafeMutablePointer<CImGuiWindow>, local_y: Float, center_y_ratio: Float) {
            igiSetScrollFromPosY(window, local_y, center_y_ratio)
        }

        @inlinable
        public static func scrollToBringRectIntoView(window: UnsafeMutablePointer<CImGuiWindow>, item_rect: CImRect) -> CImVec2 {
            igiScrollToBringRectIntoView(window, item_rect)
        }


        // Basic Accessors
        @inlinable
        public static func getItemID() -> CImGuiID {
            igiGetItemID()
        }

        @inlinable
        public static func getItemStatusFlags() -> CImGuiItemStatusFlags {
            igiGetItemStatusFlags()
        }

        @inlinable
        public static func getActiveID() -> CImGuiID {
            igiGetActiveID()
        }

        @inlinable
        public static func getFocusID() -> CImGuiID {
            igiGetFocusID()
        }

        @inlinable
        public static func setActiveID(id: CImGuiID, window: UnsafeMutablePointer<CImGuiWindow>) {
            igiSetActiveID(id, window)
        }

        @inlinable
        public static func setFocusID(id: CImGuiID, window: UnsafeMutablePointer<CImGuiWindow>) {
            igiSetFocusID(id, window)
        }

        @inlinable
        public static func clearActiveID() {
            igiClearActiveID()
        }

        @inlinable
        public static func getHoveredID() -> CImGuiID {
            igiGetHoveredID()
        }

        @inlinable
        public static func setHoveredID(id: CImGuiID) {
            igiSetHoveredID(id)
        }

        @inlinable
        public static func keepAliveID(id: CImGuiID) {
            igiKeepAliveID(id)
        }

        @inlinable
        public static func markItemEdited(id: CImGuiID) {
            igiMarkItemEdited(id)
        }

        @inlinable
        public static func pushOverrideID(id: CImGuiID) {
            igiPushOverrideID(id)
        }

        @inlinable
        public static func getIDWithSeed(str_id: String, seed: CImGuiID) -> CImGuiID {
            let count = str_id.utf8.count

            return str_id.withCString { pointer in
                igiGetIDWithSeed(pointer, pointer + count, seed)
            }
        }


        // Basic Helpers for widget code
        @inlinable
        public static func itemSize(size: CImVec2, text_baseline_y: Float = -1) {
            igiItemSize(size, text_baseline_y)
        }

        @inlinable
        public static func itemSize(bb: CImRect, text_baseline_y: Float = -1) {
            igiItemSizeBox(bb, text_baseline_y)
        }

        @inlinable
        public static func itemAdd(bb: CImRect, id: CImGuiID, nav_bb: UnsafePointer<CImRect>? = nil) -> Bool {
            igiItemAdd(bb, id, nav_bb)
        }

        @inlinable
        public static func itemHoverable(bb: CImRect, id: CImGuiID) -> Bool {
            igiItemHoverable(bb, id)
        }

        @inlinable
        public static func isClippedEx(bb: CImRect, id: CImGuiID, clip_even_when_logged: Bool) -> Bool {
            igiIsClippedEx(bb, id, clip_even_when_logged)
        }

        @inlinable
        public static func setLastItemData(window: UnsafeMutablePointer<CImGuiWindow>, item_id: CImGuiID, status_flags: CImGuiItemStatusFlags, item_rect: CImRect) {
            igiSetLastItemData(window, item_id, status_flags, item_rect)
        }

        @inlinable
        public static func focusableItemRegister(window: UnsafeMutablePointer<CImGuiWindow>, id: CImGuiID) -> Bool {
            igiFocusableItemRegister(window, id)
        }

        @inlinable
        public static func focusableItemUnregister(window: UnsafeMutablePointer<CImGuiWindow>) {
            igiFocusableItemUnregister(window)
        }

        @inlinable
        public static func calcItemSize(size: CImVec2, default_w: Float, default_h: Float) -> CImVec2 {
            igiCalcItemSize(size, default_w, default_h)
        }

        @inlinable
        public static func calcWrapWidthForPos(pos: CImVec2, wrap_pos_x: Float) -> Float {
            igiCalcWrapWidthForPos(pos, wrap_pos_x)
        }

        @inlinable
        public static func pushMultiItemsWidths(components: Int, width_full: Float) {
            igiPushMultiItemsWidths(Int32(components), width_full)
        }

        @inlinable
        public static func pushItemFlag(option: CImGuiItemFlags, enabled: Bool) {
            igiPushItemFlag(option, enabled)
        }

        @inlinable
        public static func popItemFlag() {
            igiPopItemFlag()
        }

        @inlinable
        public static func isItemToggledSelection() -> Bool {
            igiIsItemToggledSelection()
        }

        @inlinable
        public static func getContentRegionMaxAbs() -> CImVec2 {
            igiGetContentRegionMaxAbs()
        }

        @inlinable
        public static func shrinkWidths(items: UnsafeMutablePointer<CImGuiShrinkWidthItem>, count: Int, width_excess: Float) {
            igiShrinkWidths(items, Int32(count), width_excess)
        }


        // Logging/Capture
        @inlinable
        public static func logBegin(type: CImGuiLogType, auto_open_depth: Int) {
            igiLogBegin(type, Int32(auto_open_depth))
        }

        @inlinable
        public static func logToBuffer(auto_open_depth: Int = -1) {
            igiLogToBuffer(Int32(auto_open_depth))
        }


        // Popups, Modals, Tooltips
        @inlinable
        public static func beginChildEx(name: String, id: CImGuiID, size_arg: CImVec2, border: Bool, flags: ImGuiWindowFlags) -> Bool {
            igiBeginChildEx(name, id, size_arg, border, flags.rawValue)
        }

        @inlinable
        public static func openPopupEx(id: CImGuiID, popup_flags: ImGuiPopupFlags = []) {
            igiOpenPopupEx(id, popup_flags.rawValue)
        }

        @inlinable
        public static func closePopupToLevel(remaining: Int, restore_focus_to_window_under_popup: Bool) {
            igiClosePopupToLevel(Int32(remaining), restore_focus_to_window_under_popup)
        }

        @inlinable
        public static func closePopupsOverWindow(ref_window: UnsafeMutablePointer<CImGuiWindow>, restore_focus_to_window_under_popup: Bool) {
            igiClosePopupsOverWindow(ref_window, restore_focus_to_window_under_popup)
        }

        @inlinable
        public static func isPopupOpen(id: CImGuiID, popup_flags: ImGuiPopupFlags) -> Bool {
            igiIsPopupOpen(id, popup_flags.rawValue)
        }

        @inlinable
        public static func beginPopupEx(id: CImGuiID, extra_flags: ImGuiWindowFlags) -> Bool {
            igiBeginPopupEx(id, extra_flags.rawValue)
        }

        @inlinable
        public static func beginTooltipEx(extra_flags: CImGuiWindowFlags, tooltip_flags: CImGuiTooltipFlags) {
            igiBeginTooltipEx(extra_flags, tooltip_flags)
        }

        @inlinable
        public static func getTopMostPopupModal() -> UnsafeMutablePointer<CImGuiWindow> {
            igiGetTopMostPopupModal()
        }

        @inlinable
        public static func findBestWindowPosForPopup(window: UnsafeMutablePointer<CImGuiWindow>) -> CImVec2 {
            igiFindBestWindowPosForPopup(window)
        }

        @inlinable
        public static func findBestWindowPosForPopupEx(ref_pos: CImVec2, size: CImVec2, last_dir: UnsafeMutablePointer<ImGuiDirection>, r_outer: CImRect, r_avoid: CImRect, policy: CImGuiPopupPositionPolicy) -> CImVec2 {
            last_dir.withMemoryRebound(to: CImGuiDir.self, capacity: 1) { lastDirPointer in
                igiFindBestWindowPosForPopupEx(ref_pos, size, lastDirPointer, r_outer, r_avoid, policy)
            }
        }


        // Gamepad/Keyboard Navigation
        @inlinable
        public static func navInitWindow(window: UnsafeMutablePointer<CImGuiWindow>, force_reinit: Bool) {
            igiNavInitWindow(window, force_reinit)
        }

        @inlinable
        public static func navMoveRequestButNoResultYet() -> Bool {
            igiNavMoveRequestButNoResultYet()
        }

        @inlinable
        public static func navMoveRequestCancel() {
            igiNavMoveRequestCancel()
        }

        @inlinable
        public static func navMoveRequestForward(move_dir: ImGuiDirection, clip_dir: ImGuiDirection, bb_rel: CImRect, move_flags: CImGuiNavMoveFlags) {
            igiNavMoveRequestForward(move_dir.rawValue, clip_dir.rawValue, bb_rel, move_flags)
        }

        @inlinable
        public static func navMoveRequestTryWrapping(window: UnsafeMutablePointer<CImGuiWindow>, move_flags: CImGuiNavMoveFlags) {
            igiNavMoveRequestTryWrapping(window, move_flags)
        }

        @inlinable
        public static func getNavInputAmount(n: ImGuiNavInput, mode: CImGuiInputReadMode) -> Float {
            igiGetNavInputAmount(n.rawValue, mode)
        }

        @inlinable
        public static func getNavInputAmount2d(dir_sources: CImGuiNavDirSourceFlags, mode: CImGuiInputReadMode, slow_factor: Float = 0, fast_factor: Float = 0) -> CImVec2 {
            igiGetNavInputAmount2d(dir_sources, mode, slow_factor, fast_factor)
        }

        @inlinable
        public static func calcTypematicRepeatAmount(t0: Float, t1: Float, repeat_delay: Float, repeat_rate: Float) -> Int {
            Int(igiCalcTypematicRepeatAmount(t0, t1, repeat_delay, repeat_rate))
        }

        @inlinable
        public static func activateItem(id: CImGuiID) {
            igiActivateItem(id)
        }

        @inlinable
        public static func setNavID(id: CImGuiID, nav_layer: Int, focus_scope_id: CImGuiID) {
            igiSetNavID(id, Int32(nav_layer), focus_scope_id)
        }

        @inlinable
        public static func setNavIDWithRectRel(id: CImGuiID, nav_layer: Int, focus_scope_id: CImGuiID, rect_rel: CImRect) {
            igiSetNavIDWithRectRel(id, Int32(nav_layer), focus_scope_id, rect_rel)
        }


        // Focus Scope (WIP)
        // This is generally used to identify a selection set (multiple of which may be in the same window), as selection
        // patterns generally need to react (e.g. clear selection) when landing on an item of the set.
        @inlinable
        public static func pushFocusScope(id: CImGuiID) {
            igiPushFocusScope(id)
        }

        @inlinable
        public static func popFocusScope() {
            igiPopFocusScope()
        }

        @inlinable
        public static func getFocusScopeID() -> CImGuiID {
            igiGetFocusScopeID()
        }


        // Inputs
        // FIXME: Eventually we should aim to move e.g. IsActiveIdUsingKey() into IsKeyXXX functions.
        @inlinable
        public static func isActiveIdUsingNavDir(dir: ImGuiDirection) -> Bool {
            igiIsActiveIdUsingNavDir(dir.rawValue)
        }

        @inlinable
        public static func isActiveIdUsingNavInput(input: ImGuiNavInput) -> Bool {
            igiIsActiveIdUsingNavInput(input.rawValue)
        }

        @inlinable
        public static func isActiveIdUsingKey(key: ImGuiKey) -> Bool {
            igiIsActiveIdUsingKey(key.rawValue)
        }

        @inlinable
        public static func isMouseDragPastThreshold(button: ImGuiMouseButton, lock_threshold: Float = -1) -> Bool {
            igiIsMouseDragPastThreshold(button.rawValue, lock_threshold)
        }

        @inlinable
        public static func isKeyPressedMap(key: ImGuiKey, repeat: Bool = true) -> Bool {
            igiIsKeyPressedMap(key.rawValue, `repeat`)
        }

        @inlinable
        public static func isNavInputDown(n: ImGuiNavInput) -> Bool {
            igiIsNavInputDown(n.rawValue)
        }

        @inlinable
        public static func isNavInputTest(n: ImGuiNavInput, rm: CImGuiInputReadMode) -> Bool {
            igiIsNavInputTest(n.rawValue, rm)
        }

        @inlinable
        public static func getMergedKeyModFlags() -> CImGuiKeyModFlags {
            igiGetMergedKeyModFlags()
        }


        // Docking
        // (some functions are only declared in imgui.cpp, see Docking section)
        @inlinable
        public static func dockContextInitialize(ctx: UnsafeMutablePointer<CImGuiConcreteContext>) {
            igiDockContextInitialize(ctx)
        }

        @inlinable
        public static func dockContextShutdown(ctx: UnsafeMutablePointer<CImGuiConcreteContext>) {
            igiDockContextShutdown(ctx)
        }

        @inlinable
        public static func dockContextClearNodes(ctx: UnsafeMutablePointer<CImGuiConcreteContext>, root_id: CImGuiID, clear_settings_refs: Bool) {
            igiDockContextClearNodes(ctx, root_id, clear_settings_refs)
        }

        @inlinable
        public static func dockContextRebuildNodes(ctx: UnsafeMutablePointer<CImGuiConcreteContext>) {
            igiDockContextRebuildNodes(ctx)
        }

        @inlinable
        public static func dockContextUpdateUndocking(ctx: UnsafeMutablePointer<CImGuiConcreteContext>) {
            igiDockContextUpdateUndocking(ctx)
        }

        @inlinable
        public static func dockContextUpdateDocking(ctx: UnsafeMutablePointer<CImGuiConcreteContext>) {
            igiDockContextUpdateDocking(ctx)
        }

        @inlinable
        public static func dockContextGenNodeID(ctx: UnsafeMutablePointer<CImGuiConcreteContext>) -> CImGuiID {
            igiDockContextGenNodeID(ctx)
        }

        @inlinable
        public static func dockContextQueueDock(ctx: UnsafeMutablePointer<CImGuiConcreteContext>, target: UnsafeMutablePointer<CImGuiWindow>, target_node: UnsafeMutablePointer<CImGuiDockNode>, payload: UnsafeMutablePointer<CImGuiWindow>, split_dir: ImGuiDirection, split_ratio: Float, split_outer: Bool) {
            igiDockContextQueueDock(ctx, target, target_node, payload, split_dir.rawValue, split_ratio, split_outer)
        }

        @inlinable
        public static func dockContextQueueUndockWindow(ctx: UnsafeMutablePointer<CImGuiConcreteContext>, window: UnsafeMutablePointer<CImGuiWindow>) {
            igiDockContextQueueUndockWindow(ctx, window)
        }

        @inlinable
        public static func dockContextQueueUndockNode(ctx: UnsafeMutablePointer<CImGuiConcreteContext>, node: UnsafeMutablePointer<CImGuiDockNode>) {
            igiDockContextQueueUndockNode(ctx, node)
        }

        @inlinable
        public static func dockContextCalcDropPosForDocking(target: UnsafeMutablePointer<CImGuiWindow>, target_node: UnsafeMutablePointer<CImGuiDockNode>, payload: UnsafeMutablePointer<CImGuiWindow>, split_dir: ImGuiDirection, split_outer: Bool, out_pos: UnsafeMutablePointer<CImVec2>) -> Bool {
            igiDockContextCalcDropPosForDocking(target, target_node, payload, split_dir.rawValue, split_outer, out_pos)
        }

        @inlinable
        public static func dockNodeGetRootNode(node: UnsafeMutablePointer<CImGuiDockNode>) -> UnsafeMutablePointer<CImGuiDockNode> {
            igiDockNodeGetRootNode(node)
        }

        @inlinable
        public static func dockNodeGetDepth(node: UnsafePointer<CImGuiDockNode>) -> Int {
            Int(igiDockNodeGetDepth(node))
        }

        @inlinable
        public static func getWindowDockNode() -> UnsafeMutablePointer<CImGuiDockNode> {
            igiGetWindowDockNode()
        }

        @inlinable
        public static func getWindowAlwaysWantOwnTabBar(window: UnsafeMutablePointer<CImGuiWindow>) -> Bool {
            igiGetWindowAlwaysWantOwnTabBar(window)
        }

        @inlinable
        public static func beginDocked(window: UnsafeMutablePointer<CImGuiWindow>, p_open: UnsafeMutablePointer<Bool>) {
            igiBeginDocked(window, p_open)
        }

        @inlinable
        public static func beginDockableDragDropSource(window: UnsafeMutablePointer<CImGuiWindow>) {
            igiBeginDockableDragDropSource(window)
        }

        @inlinable
        public static func beginDockableDragDropTarget(window: UnsafeMutablePointer<CImGuiWindow>) {
            igiBeginDockableDragDropTarget(window)
        }

        @inlinable
        public static func setWindowDock(window: UnsafeMutablePointer<CImGuiWindow>, dock_id: CImGuiID, cond: ImGuiCondition) {
            igiSetWindowDock(window, dock_id, cond.rawValue)
        }


        // Docking - Builder function needs to be generally called before the node is used/submitted.
        // - The DockBuilderXXX functions are designed to _eventually_ become a public API, but it is too early to expose it and guarantee stability.
        // - Do not hold on UnsafeMutablePointer<CImGuiDockNode> pointers! They may be invalidated by any split/merge/remove operation and every frame.
        // - To create a DockSpace() node, make sure to set the ImGuiDockNodeFlags_DockSpace flag when calling DockBuilderAddNode().
        //   You can create dockspace nodes (attached to a window) _or_ Floating nodes (carry its own window) with this API.
        // - DockBuilderSplitNode() create 2 child nodes within 1 node. The initial node becomes a parent node.
        // - If you intend to split the node immediately after creation using DockBuilderSplitNode(), make sure
        //   to call DockBuilderSetNodeSize() beforehand. If you don't, the resulting split sizes may not be reliable.
        // - Call DockBuilderFinish() after you are done.
        @inlinable
        public static func dockBuilderDockWindow(window_name: String, node_id: CImGuiID) {
            igiDockBuilderDockWindow(window_name, node_id)
        }

        @inlinable
        public static func dockBuilderGetNode(node_id: CImGuiID) -> UnsafeMutablePointer<CImGuiDockNode> {
            igiDockBuilderGetNode(node_id)
        }

        @inlinable
        public static func dockBuilderGetCentralNode(node_id: CImGuiID) -> UnsafeMutablePointer<CImGuiDockNode> {
            igiDockBuilderGetCentralNode(node_id)
        }

        @inlinable
        public static func dockBuilderAddNode(node_id: CImGuiID = 0, flags: CImGuiDockNodeFlags = 0) -> CImGuiID {
            igiDockBuilderAddNode(node_id, flags)
        }

        @inlinable
        public static func dockBuilderRemoveNode(node_id: CImGuiID) {
            igiDockBuilderRemoveNode(node_id)
        }

        @inlinable
        public static func dockBuilderRemoveNodeDockedWindows(node_id: CImGuiID, clear_settings_refs: Bool = true) {
            igiDockBuilderRemoveNodeDockedWindows(node_id, clear_settings_refs)
        }

        @inlinable
        public static func dockBuilderRemoveNodeChildNodes(node_id: CImGuiID) {
            igiDockBuilderRemoveNodeChildNodes(node_id)
        }

        @inlinable
        public static func dockBuilderSetNodePos(node_id: CImGuiID, pos: CImVec2) {
            igiDockBuilderSetNodePos(node_id, pos)
        }

        @inlinable
        public static func dockBuilderSetNodeSize(node_id: CImGuiID, size: CImVec2) {
            igiDockBuilderSetNodeSize(node_id, size)
        }

        @inlinable
        public static func dockBuilderSplitNode(node_id: CImGuiID, split_dir: ImGuiDirection, size_ratio_for_node_at_dir: Float, out_id_at_dir: UnsafeMutablePointer<CImGuiID>, out_id_at_opposite_dir: UnsafeMutablePointer<CImGuiID>) -> CImGuiID {
            igiDockBuilderSplitNode(node_id, split_dir.rawValue, size_ratio_for_node_at_dir, out_id_at_dir, out_id_at_opposite_dir)
        }

        @inlinable
        public static func dockBuilderCopyDockSpace(src_dockspace_id: CImGuiID, dst_dockspace_id: CImGuiID, in_window_remap_pairs: UnsafeMutablePointer<CImVector_const_charPtr>) {
            igiDockBuilderCopyDockSpace(src_dockspace_id, dst_dockspace_id, in_window_remap_pairs)
        }

        @inlinable
        public static func dockBuilderCopyNode(src_node_id: CImGuiID, dst_node_id: CImGuiID, out_node_remap_pairs: UnsafeMutablePointer<CImVector_CImGuiID>) {
            igiDockBuilderCopyNode(src_node_id, dst_node_id, out_node_remap_pairs)
        }

        @inlinable
        public static func dockBuilderCopyWindowSettings(src_name: String, dst_name: String) {
            igiDockBuilderCopyWindowSettings(src_name, dst_name)
        }

        @inlinable
        public static func dockBuilderFinish(node_id: CImGuiID) {
            igiDockBuilderFinish(node_id)
        }


        // Drag and Drop
        @inlinable
        public static func beginDragDropTargetCustom(bb: CImRect, id: CImGuiID) -> Bool {
            igiBeginDragDropTargetCustom(bb, id)
        }

        @inlinable
        public static func clearDragDrop() {
            igiClearDragDrop()
        }

        @inlinable
        public static func isDragDropPayloadBeingAccepted() -> Bool {
            igiIsDragDropPayloadBeingAccepted()
        }


        // Internal Columns API (this is not exposed because we will encourage transitioning to the Tables API)
        @inlinable
        public static func setWindowClipRectBeforeSetChannel(window: UnsafeMutablePointer<CImGuiWindow>, clip_rect: CImRect) {
            igiSetWindowClipRectBeforeSetChannel(window, clip_rect)
        }

        @inlinable
        public static func beginColumns(str_id: String, count: Int, flags: CImGuiColumnsFlags = 0) {
            igiBeginColumns(str_id, Int32(count), flags)
        }

        @inlinable
        public static func endColumns() {
            igiEndColumns()
        }

        @inlinable
        public static func pushColumnClipRect(column_index: Int) {
            igiPushColumnClipRect(Int32(column_index))
        }

        @inlinable
        public static func pushColumnsBackground() {
            igiPushColumnsBackground()
        }

        @inlinable
        public static func popColumnsBackground() {
            igiPopColumnsBackground()
        }

        @inlinable
        public static func getColumnsID(str_id: String, count: Int) -> CImGuiID {
            igiGetColumnsID(str_id, Int32(count))
        }

        @inlinable
        public static func findOrCreateColumns(window: UnsafeMutablePointer<CImGuiWindow>, id: CImGuiID) -> UnsafeMutablePointer<CImGuiColumns> {
            igiFindOrCreateColumns(window, id)
        }

        @inlinable
        public static func getColumnOffsetFromNorm(columns: UnsafePointer<CImGuiColumns>, offset_norm: Float) -> Float {
            igiGetColumnOffsetFromNorm(columns, offset_norm)
        }

        @inlinable
        public static func getColumnNormFromOffset(columns: UnsafePointer<CImGuiColumns>, offset: Float) -> Float {
            igiGetColumnNormFromOffset(columns, offset)
        }


        // Tab Bars
        @inlinable
        public static func beginTabBarEx(tab_bar: UnsafeMutablePointer<CImGuiTabBar>, bb: CImRect, flags: ImGuiTabBarFlags, dock_node: UnsafeMutablePointer<CImGuiDockNode>) -> Bool {
            igiBeginTabBarEx(tab_bar, bb, flags.rawValue, dock_node)
        }

        @inlinable
        public static func tabBarFindTabByID(tab_bar: UnsafeMutablePointer<CImGuiTabBar>, tab_id: CImGuiID) -> UnsafeMutablePointer<CImGuiTabItem> {
            igiTabBarFindTabByID(tab_bar, tab_id)
        }

        @inlinable
        public static func tabBarFindMostRecentlySelectedTabForActiveWindow(tab_bar: UnsafeMutablePointer<CImGuiTabBar>) -> UnsafeMutablePointer<CImGuiTabItem> {
            igiTabBarFindMostRecentlySelectedTabForActiveWindow(tab_bar)
        }

        @inlinable
        public static func tabBarAddTab(tab_bar: UnsafeMutablePointer<CImGuiTabBar>, tab_flags: CImGuiTabItemFlags, window: UnsafeMutablePointer<CImGuiWindow>) {
            igiTabBarAddTab(tab_bar, tab_flags, window)
        }

        @inlinable
        public static func tabBarRemoveTab(tab_bar: UnsafeMutablePointer<CImGuiTabBar>, tab_id: CImGuiID) {
            igiTabBarRemoveTab(tab_bar, tab_id)
        }

        @inlinable
        public static func tabBarCloseTab(tab_bar: UnsafeMutablePointer<CImGuiTabBar>, tab: UnsafeMutablePointer<CImGuiTabItem>) {
            igiTabBarCloseTab(tab_bar, tab)
        }

        @inlinable
        public static func tabBarQueueReorder(tab_bar: UnsafeMutablePointer<CImGuiTabBar>, tab: UnsafePointer<CImGuiTabItem>, dir: Int) {
            igiTabBarQueueReorder(tab_bar, tab, Int32(dir))
        }

        @inlinable
        public static func tabBarProcessReorder(tab_bar: UnsafeMutablePointer<CImGuiTabBar>) -> Bool {
            igiTabBarProcessReorder(tab_bar)
        }

        @inlinable
        public static func tabItemEx(tab_bar: UnsafeMutablePointer<CImGuiTabBar>, label: String, p_open: UnsafeMutablePointer<Bool>, flags: ImGuiTabItemFlags, docked_window: UnsafeMutablePointer<CImGuiWindow>) -> Bool {
            igiTabItemEx(tab_bar, label, p_open, flags.rawValue, docked_window)
        }

        @inlinable
        public static func tabItemCalcSize(label: String, has_close_button: Bool) -> CImVec2 {
            igiTabItemCalcSize(label, has_close_button)
        }

        @inlinable
        public static func tabItemBackground(draw_list: UnsafeMutablePointer<CImDrawList>, bb: CImRect, flags: ImGuiTabItemFlags, col: CImU32) {
            igiTabItemBackground(draw_list, bb, flags.rawValue, col)
        }

        @inlinable
        public static func tabItemLabelAndCloseButton(draw_list: UnsafeMutablePointer<CImDrawList>, bb: CImRect, flags: ImGuiTabItemFlags, frame_padding: CImVec2, label: String, tab_id: CImGuiID, close_button_id: CImGuiID, is_contents_visible: Bool) -> Bool {
            igiTabItemLabelAndCloseButton(draw_list, bb, flags.rawValue, frame_padding, label, tab_id, close_button_id, is_contents_visible)
        }


        // Render helpers
        // AVOID USING OUTSIDE OF IMGUI.CPP! NOT FOR PUBLIC CONSUMPTION. THOSE FUNCTIONS ARE A MESS. THEIR SIGNATURE AND BEHAVIOR WILL CHANGE, THEY NEED TO BE REFACTORED INTO SOMETHING DECENT.
        // NB: All position are in absolute pixels coordinates (we are never using window coordinates internally)
        @inlinable
        public static func renderText(pos: CImVec2, text: String, hide_text_after_hash: Bool = true) {
            igiRenderText(pos, text, nil, hide_text_after_hash)
        }

        @inlinable
        public static func renderTextWrapped(pos: CImVec2, text: String, text_end: String, wrap_width: Float) {
            igiRenderTextWrapped(pos, text, text_end, wrap_width)
        }

        @inlinable
        public static func renderTextClipped(pos_min: CImVec2, pos_max: CImVec2, text: String, text_size_if_known: UnsafePointer<CImVec2>, align: CImVec2 = CImVec2(x: 0, y: 0), clip_rect: UnsafePointer<CImRect>? = nil) {
            let count = text.utf8.count

            text.withCString { pointer in
                igiRenderTextClipped(pos_min, pos_max, pointer, pointer + count, text_size_if_known, align, clip_rect)
            }
        }

        @inlinable
        public static func renderTextClippedEx(draw_list: UnsafeMutablePointer<CImDrawList>, pos_min: CImVec2, pos_max: CImVec2, text: String, text_size_if_known: UnsafePointer<CImVec2>, align: CImVec2 = CImVec2(x: 0, y: 0), clip_rect: UnsafePointer<CImRect>? = nil) {
            let count = text.utf8.count

            text.withCString { pointer in
                igiRenderTextClippedEx(draw_list, pos_min, pos_max, pointer, pointer + count, text_size_if_known, align, clip_rect)
            }
        }

        @inlinable
        public static func renderTextEllipsis(draw_list: UnsafeMutablePointer<CImDrawList>, pos_min: CImVec2, pos_max: CImVec2, clip_max_x: Float, ellipsis_max_x: Float, text: String, text_end: String, text_size_if_known: UnsafePointer<CImVec2>) {
            let count = text.utf8.count

            text.withCString { pointer in
                igiRenderTextEllipsis(draw_list, pos_min, pos_max, clip_max_x, ellipsis_max_x, pointer, pointer + count, text_size_if_known)
            }
        }

        @inlinable
        public static func renderFrame(p_min: CImVec2, p_max: CImVec2, fill_col: CImU32, border: Bool = true, rounding: Float = 0) {
            igiRenderFrame(p_min, p_max, fill_col, border, rounding)
        }

        @inlinable
        public static func renderFrameBorder(p_min: CImVec2, p_max: CImVec2, rounding: Float = 0) {
            igiRenderFrameBorder(p_min, p_max, rounding)
        }

        @inlinable
        public static func renderColorRectWithAlphaCheckerboard(draw_list: UnsafeMutablePointer<CImDrawList>, p_min: CImVec2, p_max: CImVec2, fill_col: CImU32, grid_step: Float, grid_off: CImVec2, rounding: Float = 0, rounding_corners_flags: Int = ~0) {
            igiRenderColorRectWithAlphaCheckerboard(draw_list, p_min, p_max, fill_col, grid_step, grid_off, rounding, Int32(rounding_corners_flags))
        }

        @inlinable
        public static func renderNavHighlight(bb: CImRect, id: CImGuiID, flags: CImGuiNavHighlightFlags = CImGuiNavHighlightFlags(CImGuiNavHighlightFlags_TypeDefault.rawValue)) {
            igiRenderNavHighlight(bb, id, flags)
        }

        @inlinable
        public static func findRenderedTextEnd(text: String) -> String {
            let count = text.utf8.count

            return text.withCString { pointer in
                String(cString: igiFindRenderedTextEnd(pointer, pointer + count))
            }
        }

        @inlinable
        public static func logRenderedText(ref_pos: UnsafePointer<CImVec2>, text: String, text_end: String? = nil) {
            igiLogRenderedText(ref_pos, text, text_end)
        }


        // Render helpers (those functions don't access any ImGui state!)
        @inlinable
        public static func renderArrow(draw_list: UnsafeMutablePointer<CImDrawList>, pos: CImVec2, col: CImU32, dir: ImGuiDirection, scale: Float = 1) {
            igiRenderArrow(draw_list, pos, col, dir.rawValue, scale)
        }

        @inlinable
        public static func renderBullet(draw_list: UnsafeMutablePointer<CImDrawList>, pos: CImVec2, col: CImU32) {
            igiRenderBullet(draw_list, pos, col)
        }

        @inlinable
        public static func renderCheckMark(draw_list: UnsafeMutablePointer<CImDrawList>, pos: CImVec2, col: CImU32, sz: Float) {
            igiRenderCheckMark(draw_list, pos, col, sz)
        }

        @inlinable
        public static func renderMouseCursor(draw_list: UnsafeMutablePointer<CImDrawList>, pos: CImVec2, scale: Float, mouse_cursor: ImGuiMouseCursor, col_fill: CImU32, col_border: CImU32, col_shadow: CImU32) {
            igiRenderMouseCursor(draw_list, pos, scale, mouse_cursor.rawValue, col_fill, col_border, col_shadow)
        }

        @inlinable
        public static func renderArrowPointingAt(draw_list: UnsafeMutablePointer<CImDrawList>, pos: CImVec2, half_sz: CImVec2, direction: ImGuiDirection, col: CImU32) {
            igiRenderArrowPointingAt(draw_list, pos, half_sz, direction.rawValue, col)
        }

        @inlinable
        public static func renderArrowDockMenu(draw_list: UnsafeMutablePointer<CImDrawList>, p_min: CImVec2, sz: Float, col: CImU32) {
            igiRenderArrowDockMenu(draw_list, p_min, sz, col)
        }

        @inlinable
        public static func renderRectFilledRangeH(draw_list: UnsafeMutablePointer<CImDrawList>, rect: CImRect, col: CImU32, x_start_norm: Float, x_end_norm: Float, rounding: Float) {
            igiRenderRectFilledRangeH(draw_list, rect, col, x_start_norm, x_end_norm, rounding)
        }

        @inlinable
        public static func renderRectFilledWithHole(draw_list: UnsafeMutablePointer<CImDrawList>, outer: CImRect, inner: CImRect, col: CImU32, rounding: Float) {
            igiRenderRectFilledWithHole(draw_list, outer, inner, col, rounding)
        }


        // Widgets
        @inlinable
        public static func textEx(text: String, flags: CImGuiTextFlags = 0) {
            let count = text.utf8.count

            text.withCString { pointer in
                igiTextEx(pointer, pointer + count, flags)
            }
        }

        @inlinable
        public static func buttonEx(label: String, size_arg: CImVec2 = CImVec2(x: 0, y: 0), flags: ImGuiButtonFlags = []) -> Bool {
            igiButtonEx(label, size_arg, flags.rawValue)
        }

        @inlinable
        public static func closeButton(id: CImGuiID, pos: CImVec2) -> Bool {
            igiCloseButton(id, pos)
        }

        @inlinable
        public static func collapseButton(id: CImGuiID, pos: CImVec2, dock_node: UnsafeMutablePointer<CImGuiDockNode>) -> Bool {
            igiCollapseButton(id, pos, dock_node)
        }

        @inlinable
        public static func arrowButtonEx(str_id: String, dir: ImGuiDirection, size_arg: CImVec2, flags: ImGuiButtonFlags = []) -> Bool {
            igiArrowButtonEx(str_id, dir.rawValue, size_arg, flags.rawValue)
        }

        @inlinable
        public static func scrollbar(axis: CImGuiAxis) {
            igiScrollbar(axis)
        }

        @inlinable
        public static func scrollbarEx(bb: CImRect, id: CImGuiID, axis: CImGuiAxis, p_scroll_v: UnsafeMutablePointer<Float>, avail_v: Float, contents_v: Float, rounding_corners: CImDrawCornerFlags) -> Bool {
            igiScrollbarEx(bb, id, axis, p_scroll_v, avail_v, contents_v, rounding_corners)
        }

        @inlinable
        public static func imageButtonEx(id: CImGuiID, texture_id: CImTextureID, size: CImVec2, uv0: CImVec2, uv1: CImVec2, padding: CImVec2, bg_col: CImVec4, tint_col: CImVec4) -> Bool {
            igiImageButtonEx(id, texture_id, size, uv0, uv1, padding, bg_col, tint_col)
        }

        @inlinable
        public static func getWindowScrollbarRect(window: UnsafeMutablePointer<CImGuiWindow>, axis: CImGuiAxis) -> CImRect {
            igiGetWindowScrollbarRect(window, axis)
        }

        @inlinable
        public static func getWindowScrollbarID(window: UnsafeMutablePointer<CImGuiWindow>, axis: CImGuiAxis) -> CImGuiID {
            igiGetWindowScrollbarID(window, axis)
        }

        @inlinable
        public static func getWindowResizeID(window: UnsafeMutablePointer<CImGuiWindow>, n: Int) -> CImGuiID {
            igiGetWindowResizeID(window, Int32(n))
        }
        
        @inlinable
        public static func separatorEx(flags: CImGuiSeparatorFlags) {
            igiSeparatorEx(flags)
        }


        // Widgets low-level behaviors
        @inlinable
        public static func buttonBehavior(bb: CImRect, id: CImGuiID, out_hovered: UnsafeMutablePointer<Bool>, out_held: UnsafeMutablePointer<Bool>, flags: ImGuiButtonFlags = []) -> Bool {
            igiButtonBehavior(bb, id, out_hovered, out_held, flags.rawValue)
        }

        @inlinable
        public static func dragBehavior<T: ImGuiDataType>(id: CImGuiID, p_v: inout T, v_speed: Float, p_min: T, p_max: T, format: String, flags: ImGuiSliderFlags) -> Bool {
            withUnsafeBytes(of: p_min) { minBuffer in
                withUnsafeBytes(of: p_max) { maxBuffer in
                    igiDragBehavior(id, T.dataType, &p_v, v_speed, minBuffer.baseAddress, maxBuffer.baseAddress, format, flags.rawValue)
                }
            }
        }

        @inlinable
        public static func sliderBehavior<T: ImGuiDataType>(bb: CImRect, id: CImGuiID, p_v: inout T, p_min: T, p_max: T, format: String, flags: ImGuiSliderFlags, out_grab_bb: UnsafeMutablePointer<CImRect>) -> Bool {
            withUnsafeBytes(of: p_min) { minBuffer in
                withUnsafeBytes(of: p_max) { maxBuffer in
                    igiSliderBehavior(bb, id, T.dataType, &p_v, minBuffer.baseAddress, maxBuffer.baseAddress, format, flags.rawValue, out_grab_bb)
                }
            }
        }

        @inlinable
        public static func splitterBehavior(bb: CImRect, id: CImGuiID, axis: CImGuiAxis, size1: inout Float, size2: inout Float, min_size1: Float, min_size2: Float, hover_extend: Float = 0, hover_visibility_delay: Float = 0) -> Bool {
            igiSplitterBehavior(bb, id, axis, &size1, &size2, min_size1, min_size2, hover_extend, hover_visibility_delay)
        }

        @inlinable
        public static func treeNodeBehavior(id: CImGuiID, flags: ImGuiTreeNodeFlags, label: String, label_end: String? = nil) -> Bool {
            igiTreeNodeBehavior(id, flags.rawValue, label, label_end)
        }

        @inlinable
        public static func treeNodeBehaviorIsOpen(id: CImGuiID, flags: ImGuiTreeNodeFlags = []) -> Bool {
            igiTreeNodeBehaviorIsOpen(id, flags.rawValue)
        }

        @inlinable
        public static func treePushOverrideID(id: CImGuiID) {
            igiTreePushOverrideID(id)
        }


        // Data type helpers
        @inlinable
        public static func dataTypeGetInfo<T: ImGuiDataType>(forType type: T.Type) -> UnsafePointer<CImGuiDataTypeInfo> {
            igiDataTypeGetInfo(T.dataType)
        }

        @inlinable
        public static func dataTypeFormatString<T: ImGuiDataType>(buf: inout String, buf_size: Int, p_data: T, format: String) -> Int {
            let cString = ContiguousArray<Int8>(unsafeUninitializedCapacity: buf_size) { cStringBuffer, initializedCount in
                initializedCount = withUnsafeBytes(of: p_data) { dataBuffer in
                    Int(igiDataTypeFormatString(cStringBuffer.baseAddress, Int32(buf_size), T.dataType, dataBuffer.baseAddress, format))
                }
            }

            cString.withUnsafeBufferPointer { buffer in
                buf = String(cString: buffer.baseAddress!)
            }

            return cString.count
        }

        @inlinable
        public static func dataTypeApplyOp<T: ImGuiDataType>(op: Int, output: inout T, arg_1: T, arg_2: T) {
            withUnsafeBytes(of: arg_1) { arg1Buffer in
                withUnsafeBytes(of: arg_2) { arg2Buffer in
                    igiDataTypeApplyOp(T.dataType, Int32(op), &output, arg1Buffer.baseAddress, arg2Buffer.baseAddress)
                }
            }
        }

        @inlinable
        public static func dataTypeApplyOpFromText<T: ImGuiDataType>(buf: String, initial_value_buf: String, p_data: inout T, format: String) -> Bool {
            igiDataTypeApplyOpFromText(buf, initial_value_buf, T.dataType, &p_data, format)
        }

        @inlinable
        public static func dataTypeCompare<T: ImGuiDataType>(arg_1: T, arg_2: T) -> Int {
            withUnsafeBytes(of: arg_1) { arg1Buffer in
                withUnsafeBytes(of: arg_2) { arg2Buffer in
                    Int(igiDataTypeCompare(T.dataType, arg1Buffer.baseAddress, arg2Buffer.baseAddress))
                }
            }
        }

        @inlinable
        public static func dataTypeClamp<T: ImGuiDataType>(p_data: inout T, p_min: T, p_max: T) -> Bool {
            withUnsafeBytes(of: p_min) { minBuffer in
                withUnsafeBytes(of: p_max) { maxBuffer in
                    igiDataTypeClamp(T.dataType, &p_data, minBuffer.baseAddress, maxBuffer.baseAddress)
                }
            }
        }
    }
}


private class InputTextBufferHolder {
    let bufferPointer: UnsafeMutablePointer<UnsafeMutableBufferPointer<Int8>>
    let originalBuffer: UnsafeMutableBufferPointer<Int8>

    init(bufferPointer: UnsafeMutablePointer<UnsafeMutableBufferPointer<Int8>>, originalBuffer: UnsafeMutableBufferPointer<Int8>) {
        self.bufferPointer = bufferPointer
        self.originalBuffer = originalBuffer
    }
}

private class InputTextCallbackHolder {
    let callback: (inout ImGuiInputTextCallbackData) -> Int
    let bufferPointer: UnsafeMutablePointer<UnsafeMutableBufferPointer<Int8>>
    let originalBuffer: UnsafeMutableBufferPointer<Int8>

    init(callback: @escaping (inout ImGuiInputTextCallbackData) -> Int, bufferPointer: UnsafeMutablePointer<UnsafeMutableBufferPointer<Int8>>, originalBuffer: UnsafeMutableBufferPointer<Int8>) {
        self.callback = callback
        self.bufferPointer = bufferPointer
        self.originalBuffer = originalBuffer
    }
}


private func inputTextCallback(dataPointer: UnsafeMutablePointer<CImGuiInputTextCallbackData>!) -> Int32 {
    let raw = UnsafeMutableRawPointer(dataPointer)!
    let bufferOffset = MemoryLayout<CImGuiInputTextCallbackData>.offset(of: \CImGuiInputTextCallbackData.Buf)!

    let buffer = raw.advanced(by: bufferOffset).assumingMemoryBound(to: UnsafeMutablePointer<Int8>.self)

    let data = ImGuiInputTextCallbackData(eventFlag: ImGuiInputTextFlags(rawValue: dataPointer[\.EventFlag].pointee),
                                          flags: ImGuiInputTextFlags(rawValue: dataPointer[\.Flags].pointee),
                                          _eventChar: dataPointer[\.EventChar],
                                          eventKey: dataPointer[\.EventKey].pointee,
                                          _buf: buffer,
                                          _bufTextLength: dataPointer[\CImGuiInputTextCallbackData.BufTextLen],
                                          _bufSize: dataPointer[\.BufSize].pointee,
                                          _bufDirty: dataPointer[\.BufDirty],
                                          _cursorPos: dataPointer[\.CursorPos],
                                          _selectionStart: dataPointer[\.SelectionStart],
                                          _selectionEnd: dataPointer[\.SelectionEnd])

    if data.eventFlag == .callbackResize {
        let bufferHolder = Unmanaged<InputTextBufferHolder>.fromOpaque(dataPointer.pointee.UserData).takeUnretainedValue()

        let oldBuffer = bufferHolder.bufferPointer.pointee

        assert(data._buf.pointee == oldBuffer.baseAddress)

        let oldCount = oldBuffer.count
        let newCount = Int(data._bufTextLength.pointee) + 1

        if oldCount < newCount {
            let newBuffer = UnsafeMutablePointer<Int8>.allocate(capacity: newCount)
            newBuffer.initialize(from: oldBuffer.baseAddress!, count: oldCount)
            newBuffer.advanced(by: oldCount).initialize(repeating: 0, count: newCount - oldCount)

            if oldBuffer.baseAddress != bufferHolder.originalBuffer.baseAddress {
                oldBuffer.baseAddress!.deinitialize(count: oldCount)
                oldBuffer.deallocate()
            }

            bufferHolder.bufferPointer.pointee = .init(start: newBuffer, count: newCount)

            data._buf.pointee = bufferHolder.bufferPointer.pointee.baseAddress!
        }
    }

    return 0
}

private func intermediateInputTextCallback(dataPointer: UnsafeMutablePointer<CImGuiInputTextCallbackData>!) -> Int32 {
    let callbackHolder = Unmanaged<InputTextCallbackHolder>.fromOpaque(dataPointer.pointee.UserData).takeUnretainedValue()

    let raw = UnsafeMutableRawPointer(dataPointer)!
    let bufferOffset = MemoryLayout<CImGuiInputTextCallbackData>.offset(of: \CImGuiInputTextCallbackData.Buf)!

    let buffer = raw.advanced(by: bufferOffset).assumingMemoryBound(to: UnsafeMutablePointer<Int8>.self)

    var data = ImGuiInputTextCallbackData(eventFlag: ImGuiInputTextFlags(rawValue: dataPointer[\.EventFlag].pointee),
                                          flags: ImGuiInputTextFlags(rawValue: dataPointer[\.Flags].pointee),
                                          _eventChar: dataPointer[\.EventChar],
                                          eventKey: dataPointer[\.EventKey].pointee,
                                          _buf: buffer,
                                          _bufTextLength: dataPointer[\CImGuiInputTextCallbackData.BufTextLen],
                                          _bufSize: dataPointer[\.BufSize].pointee,
                                          _bufDirty: dataPointer[\.BufDirty],
                                          _cursorPos: dataPointer[\.CursorPos],
                                          _selectionStart: dataPointer[\.SelectionStart],
                                          _selectionEnd: dataPointer[\.SelectionEnd])

    if data.eventFlag == .callbackResize {
        let oldBuffer = callbackHolder.bufferPointer.pointee

        assert(data._buf.pointee == oldBuffer.baseAddress)

        let oldCount = oldBuffer.count
        let newCount = Int(data._bufTextLength.pointee) + 1

        if oldCount < newCount {
            let newBuffer = UnsafeMutablePointer<Int8>.allocate(capacity: newCount)
            newBuffer.initialize(from: oldBuffer.baseAddress!, count: oldCount)
            newBuffer.advanced(by: oldCount).initialize(repeating: 0, count: newCount - oldCount)

            if oldBuffer.baseAddress != callbackHolder.originalBuffer.baseAddress {
                oldBuffer.baseAddress!.deinitialize(count: oldCount)
                oldBuffer.deallocate()
            }

            callbackHolder.bufferPointer.pointee = .init(start: newBuffer, count: newCount)

            data._buf.pointee = callbackHolder.bufferPointer.pointee.baseAddress!
        }

        return 0
    } else {
        return Int32(callbackHolder.callback(&data))
    }
}

extension ImGui.Internal {
    // InputText
    public static func inputTextEx(label: String, hint: String, string: inout String, size_arg: CImVec2, flags: ImGuiInputTextFlags) -> Bool {
        assert(flags.isDisjoint(with: .callbackResize))

        let flags = flags.union(.callbackResize)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                let bufferHolder = InputTextBufferHolder(bufferPointer: bufferPointer, originalBuffer: buffer)

                let bufferHolderPointer = Unmanaged.passUnretained(bufferHolder).toOpaque()

                return igiInputTextEx(label, hint, buffer.baseAddress, Int32(capacity), size_arg, flags.rawValue, inputTextCallback, bufferHolderPointer)
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    public static func inputTextEx(label: String, hint: String, string: inout String, size_arg: CImVec2, flags: ImGuiInputTextFlags, callback: @escaping (inout ImGuiInputTextCallbackData) -> Int) -> Bool {
        assert(flags.isDisjoint(with: .callbackResize))

        let flags = flags.union(.callbackResize)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                let callbackHolder = InputTextCallbackHolder(callback: callback, bufferPointer: bufferPointer, originalBuffer: buffer)

                let callbackHolderPointer = Unmanaged.passUnretained(callbackHolder).toOpaque()

                return igiInputTextEx(label, hint, buffer.baseAddress, Int32(capacity), size_arg, flags.rawValue, intermediateInputTextCallback, callbackHolderPointer)
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    @inlinable
    public static func tempInputText(bb: CImRect, id: CImGuiID, label: String, buf: inout String, buf_size: Int, flags: ImGuiInputTextFlags) -> Bool {
        var cString = buf.utf8CString
        cString.reserveCapacity(buf_size)

        return cString.withUnsafeMutableBufferPointer { buffer in
            let result = igiTempInputText(bb, id, label, buffer.baseAddress, Int32(buf_size), flags.rawValue)

            buf = String(cString: buffer.baseAddress!)

            return result
        }
    }

    @inlinable
    public static func tempInputScalar<T: ImGuiDataType>(bb: CImRect, id: CImGuiID, label: String, p_data: inout T, format: String, p_clamp_min: T? = nil, p_clamp_max: T? = nil) -> Bool {
        if let clampMin = p_clamp_min {
            if let clampMax = p_clamp_max {
                return withUnsafeBytes(of: clampMin) { clampMinBuffer in
                    withUnsafeBytes(of: clampMax) { clampMaxBuffer in
                        igiTempInputScalar(bb, id, label, T.dataType, &p_data, format, clampMinBuffer.baseAddress, clampMaxBuffer.baseAddress)
                    }
                }
            } else {
                return withUnsafeBytes(of: clampMin) { clampMinBuffer in
                    igiTempInputScalar(bb, id, label, T.dataType, &p_data, format, clampMinBuffer.baseAddress, nil)
                }
            }
        } else if let clampMax = p_clamp_max {
            return withUnsafeBytes(of: clampMax) { clampMaxBuffer in
                igiTempInputScalar(bb, id, label, T.dataType, &p_data, format, nil, clampMaxBuffer.baseAddress)
            }
        } else {
            return igiTempInputScalar(bb, id, label, T.dataType, &p_data, format, nil, nil)
        }
    }

    @inlinable
    public static func tempInputIsActive(id: CImGuiID) -> Bool {
        igiTempInputIsActive(id)
    }

    @inlinable
    public static func getInputTextState(id: CImGuiID) -> UnsafeMutablePointer<CImGuiInputTextState> {
        igiGetInputTextState(id)
    }


    // Color
    @inlinable
    public static func colorTooltip(text: String, col: UnsafePointer<Float>, flags: ImGuiColorEditFlags) {
        igiColorTooltip(text, col, flags.rawValue)
    }

    @inlinable
    public static func colorEditOptionsPopup(col: UnsafePointer<Float>, flags: ImGuiColorEditFlags) {
        igiColorEditOptionsPopup(col, flags.rawValue)
    }

    @inlinable
    public static func colorPickerOptionsPopup(ref_col: UnsafePointer<Float>, flags: ImGuiColorEditFlags) {
        igiColorPickerOptionsPopup(ref_col, flags.rawValue)
    }


    // Shade functions (write over already created vertices)
    @inlinable
    public static func shadeVertsLinearColorGradientKeepAlpha(draw_list: UnsafeMutablePointer<CImDrawList>, vert_start_idx: Int, vert_end_idx: Int, gradient_p0: CImVec2, gradient_p1: CImVec2, col0: CImU32, col1: CImU32) {
        igiShadeVertsLinearColorGradientKeepAlpha(draw_list, Int32(vert_start_idx), Int32(vert_end_idx), gradient_p0, gradient_p1, col0, col1)
    }

    @inlinable
    public static func shadeVertsLinearUV(draw_list: UnsafeMutablePointer<CImDrawList>, vert_start_idx: Int, vert_end_idx: Int, a: CImVec2, b: CImVec2, uv_a: CImVec2, uv_b: CImVec2, clamp: Bool) {
        igiShadeVertsLinearUV(draw_list, Int32(vert_start_idx), Int32(vert_end_idx), a, b, uv_a, uv_b, clamp)
    }


    // Garbage collection
    @inlinable
    public static func gcCompactTransientWindowBuffers(window: UnsafeMutablePointer<CImGuiWindow>) {
        igiGcCompactTransientWindowBuffers(window)
    }

    @inlinable
    public static func gcAwakeTransientWindowBuffers(window: UnsafeMutablePointer<CImGuiWindow>) {
        igiGcAwakeTransientWindowBuffers(window)
    }


    // Debug Tools
    @inlinable
    public static func debugDrawItemRect(col: CImU32 = 0xFF0000FF) {
        igiDebugDrawItemRect(col)
    }

    @inlinable
    public static func debugStartItemPicker() {
        igiDebugStartItemPicker()
    }
}
