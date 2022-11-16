@_exported import cImGui

public enum ImGui {
    @discardableResult
    @inlinable
    public static func createContext(withFontAtlas fontAtlas: UnsafeMutablePointer<CImFontAtlas>? = nil) -> ImGuiContext {
        .init(pointer: igCreateContext(fontAtlas))
    }

    @inlinable
    public static func destroyContext(_ context: ImGuiContext? = nil) {
        igDestroyContext(context?.pointer)
    }

    @inlinable
    public static func getCurrentContext() -> ImGuiContext {
        .init(pointer: igGetCurrentContext())
    }

    @inlinable
    public static func setCurrentContext(to context: ImGuiContext) {
        igSetCurrentContext(context.pointer)
    }

    @inlinable
    public static func checkVersion() -> Bool {
        igCheckVersion()
    }

    /// access the IO structure (mouse/keyboard/gamepad inputs, time, various configuration options/flags)
    @inlinable
    public static func getIO() -> UnsafeMutablePointer<CImGuiIO> {
        igGetIO()
    }

    /// access the Style structure (colors, sizes). Always use PushStyleCol(), PushStyleVar() to modify style mid-frame!
    @inlinable
    public static func getStyle() -> UnsafeMutablePointer<CImGuiStyle> {
        igGetStyle()
    }

    /// start a new Dear ImGui frame, you can submit any command from this point until Render()/EndFrame().
    @inlinable
    public static func newFrame() {
        igNewFrame()
    }

    /// ends the Dear ImGui frame. automatically called by Render(). If you don't need to render data (skipping rendering) you may call EndFrame() without Render()... but you'll have wasted CPU already! If you don't need to render, better to not create any windows and not call NewFrame() at all!
    @inlinable
    public static func endFrame() {
        igEndFrame()
    }

    /// ends the Dear ImGui frame, finalize the draw data. You can get call GetDrawData() to obtain it and run your rendering function (up to v1.60, this used to call io.RenderDrawListsFn(). Nowadays, we allow and prefer calling your render function yourself.)
    @inlinable
    public static func render() {
        igRender()
    }

    /// valid after Render() and until the next call to NewFrame(). this is what you have to render.
    @inlinable
    public static func getDrawData() -> UnsafeMutablePointer<CImDrawData> {
        igGetDrawData()
    }


    // Demo, Debug, Information
    /// create Demo window (previously called ShowTestWindow). demonstrate most ImGui features. call this to learn about the library! try to make it always available in your application!
    @inlinable
    public static func showDemoWindow(isOpen: inout Bool) {
        igShowDemoWindow(&isOpen)
    }

    /// create Demo window (previously called ShowTestWindow). demonstrate most ImGui features. call this to learn about the library! try to make it always available in your application!
    @inlinable
    public static func showDemoWindow() {
        igShowDemoWindow(nil)
    }

    /// create Debug/Metrics window. display Dear ImGui internals: draw commands (with individual draw calls and vertices), window list, basic internal state, etc.
    @inlinable
    public static func showMetricsWindow(isOpen: inout Bool) {
        igShowMetricsWindow(&isOpen)
    }

    /// create Debug/Metrics window. display Dear ImGui internals: draw commands (with individual draw calls and vertices), window list, basic internal state, etc.
    @inlinable
    public static func showMetricsWindow() {
        igShowMetricsWindow(nil)
    }

    /// create Debug Log window. display a simplified log of important dear imgui events.
    @inlinable
    public static func showDebugLogWindow(isOpen: inout Bool) {
        igShowDebugLogWindow(&isOpen)
    }

    /// create Debug Log window. display a simplified log of important dear imgui events.
    @inlinable
    public static func showDebugLogWindow() {
        igShowDebugLogWindow(nil)
    }

    /// create Stack Tool window. hover items with mouse to query information about the source of their unique ID.
    @inlinable
    public static func showStackToolWindow(isOpen: inout Bool) {
        igShowStackToolWindow(&isOpen)
    }

    /// create Stack Tool window. hover items with mouse to query information about the source of their unique ID.
    @inlinable
    public static func showStackToolWindow() {
        igShowStackToolWindow(nil)
    }

    /// create About window. display Dear ImGui version, credits and build/system information.
    @inlinable
    public static func showAboutWindow(isOpen: inout Bool) {
        igShowAboutWindow(&isOpen)
    }

    /// create About window. display Dear ImGui version, credits and build/system information.
    @inlinable
    public static func showAboutWindow() {
        igShowAboutWindow(nil)
    }

    /// add style editor block (not a window). you can pass in a reference ImGuiStyle structure to compare to, revert to and save to (else it uses the default style)
    @inlinable
    public static func showStyleEditor(referencingStyle style: UnsafeMutablePointer<CImGuiStyle>? = nil) {
        igShowStyleEditor(style)
    }

    /// add style selector block (not a window), essentially a combo listing the default styles.
    @discardableResult
    @inlinable
    public static func showStyleSelector(withLabel label: String) -> Bool {
        igShowStyleSelector(label)
    }

    /// add font selector block (not a window), essentially a combo listing the loaded fonts.
    @inlinable
    public static func showFontSelector(withLabel label: String) {
        igShowFontSelector(label)
    }

    /// add basic help/info block (not a window): how to manipulate ImGui as a end-user (mouse/keyboard controls).
    @inlinable
    public static func showUserGuide() {
        igShowUserGuide()
    }

    /// get the compiled version string e.g. "1.23" (essentially the compiled value for IMGUI_VERSION)
    @inlinable
    public static func getVersion() -> String {
        String(cString: igGetVersion())
    }


    // Styles
    /// new, recommended style (default)
    @inlinable
    public static func styleColorsDark(of style: UnsafeMutablePointer<CImGuiStyle>? = nil) {
        igStyleColorsDark(style)
    }

    /// best used with borders and a custom, thicker font
    @inlinable
    public static func styleColorsLight(of style: UnsafeMutablePointer<CImGuiStyle>? = nil) {
        igStyleColorsLight(style)
    }

    /// classic imgui style
    @inlinable
    public static func styleColorsClassic(of style: UnsafeMutablePointer<CImGuiStyle>? = nil) {
        igStyleColorsClassic(style)
    }


    // Windows
    /// - push window to the stack and start appending to it.
    /// - Shows a window-closing widget in the upper-right corner of the window,
    ///   which clicking will set the boolean to false when clicked.
    /// - You may append multiple times to the same window during the same frame by calling Begin()/End() pairs multiple times.
    ///   Some information such as 'flags' or 'p_open' will only be considered by the first call to Begin().
    /// - returns false to indicate the window is collapsed or fully clipped, so you may early out and omit submitting
    ///   anything to the window. Always call a matching End() for each Begin() call, regardless of its value!
    ///   [Important: due to legacy reason, this is inconsistent with most other functions such as BeginMenu/EndMenu,
    ///    BeginPopup/EndPopup, etc. where the EndXXX call should only be called if the corresponding BeginXXX function
    ///    returned true. Begin and BeginChild are the only odd ones out. Will be fixed in a future update.]
    /// - Note that the bottom of window stack always contains a window called "Debug".
    @discardableResult
    @inlinable
    public static func begin(withName name: String, isOpen: inout Bool, withFlags flags: ImGuiWindowFlags = []) -> Bool {
        igBegin(name, &isOpen, flags.rawValue)
    }

    /// - push window to the stack and start appending to it.
    /// - You may append multiple times to the same window during the same frame by calling Begin()/End() pairs multiple times.
    ///   Some information such as 'flags' or 'p_open' will only be considered by the first call to Begin().
    /// - Begin() false to indicate the window is collapsed or fully clipped, so you may early out and omit submitting
    ///   anything to the window. Always call a matching End() for each Begin() call, regardless of its value!
    ///   [Important: due to legacy reason, this is inconsistent with most other functions such as BeginMenu/EndMenu,
    ///    BeginPopup/EndPopup, etc. where the EndXXX call should only be called if the corresponding BeginXXX function
    ///    returned true. Begin and BeginChild are the only odd ones out. Will be fixed in a future update.]
    /// - Note that the bottom of window stack always contains a window called "Debug".
    @discardableResult
    @inlinable
    public static func begin(withName name: String, flags: ImGuiWindowFlags = []) -> Bool {
        igBegin(name, nil, flags.rawValue)
    }

    /// - pop window from the stack.
    /// - You may append multiple times to the same window during the same frame by calling begin()/end() pairs multiple times.
    /// - Always call a matching end() for each begin() call, regardless of its value!
    ///   [Important: due to legacy reason, this is inconsistent with most other functions such as BeginMenu/EndMenu,
    ///    BeginPopup/EndPopup, etc. where the EndXXX call should only be called if the corresponding BeginXXX function
    ///    returned true. Begin and BeginChild are the only odd ones out. Will be fixed in a future update.]
    /// - Note that the bottom of window stack always contains a window called "Debug".
    @inlinable
    public static func end() {
        igEnd()
    }


    // Child Windows
    /// - Use child windows to begin into a self-contained independent scrolling/clipping regions within a host window. Child windows can embed their own child.
    /// - For each independent axis of 'size': ==0: use remaining host window size / >0: fixed size / <0: use remaining window size minus abs(size) / Each axis can use a different mode, e.g. ImVec2(0,400).
    /// - BeginChild() returns false to indicate the window is collapsed or fully clipped, so you may early out and omit submitting anything to the window.
    ///   Always call a matching EndChild() for each BeginChild() call, regardless of its value [as with Begin: this is due to legacy reason and inconsistent with most BeginXXX functions apart from the regular Begin() which behaves like BeginChild().]
    @discardableResult
    @inlinable
    public static func beginChild(withID id: String, size: CImVec2 = CImVec2(x: 0, y: 0), hasBorder: Bool = false, withFlags flags: ImGuiWindowFlags = []) -> Bool {
        igBeginChild(id, size, hasBorder, flags.rawValue)
    }

    /// - Use child windows to begin into a self-contained independent scrolling/clipping regions within a host window. Child windows can embed their own child.
    /// - For each independent axis of 'size': ==0: use remaining host window size / >0: fixed size / <0: use remaining window size minus abs(size) / Each axis can use a different mode, e.g. ImVec2(0,400).
    /// - BeginChild() returns false to indicate the window is collapsed or fully clipped, so you may early out and omit submitting anything to the window.
    ///   Always call a matching EndChild() for each BeginChild() call, regardless of its value [as with Begin: this is due to legacy reason and inconsistent with most BeginXXX functions apart from the regular Begin() which behaves like BeginChild().]
    @inlinable
    public static func beginChild(withID id: CImGuiID, size: CImVec2 = CImVec2(x: 0, y: 0), hasBorder: Bool = false, withFlags flags: ImGuiWindowFlags = []) -> Bool {
        igBeginChildWithID(id, size, hasBorder, flags.rawValue)
    }

    /// - Use child windows to begin into a self-contained independent scrolling/clipping regions within a host window. Child windows can embed their own child.
    /// - For each independent axis of 'size': ==0: use remaining host window size / >0: fixed size / <0: use remaining window size minus abs(size) / Each axis can use a different mode, e.g. ImVec2(0,400).
    /// - Always call a matching EndChild() for each BeginChild() call, regardless of its value [as with Begin: this is due to legacy reason and inconsistent with most BeginXXX functions apart from the regular Begin() which behaves like BeginChild().]
    @inlinable
    public static func endChild() {
        igEndChild()
    }


    // Windows Utilities
    /// - 'current window' = the window we are appending into while inside a Begin()/End() block. 'next window' = next window we will Begin() into.
    @inlinable
    public static func isWindowAppearing() -> Bool {
        igIsWindowAppearing()
    }

    /// - 'current window' = the window we are appending into while inside a Begin()/End() block. 'next window' = next window we will Begin() into.
    @inlinable
    public static func isWindowCollapsed() -> Bool {
        igIsWindowCollapsed()
    }

    /// is current window focused? or its root/child, depending on flags. see flags for options.
    @inlinable
    public static func isWindowFocused(withFlags flags: ImGuiFocusedFlags = []) -> Bool {
        igIsWindowFocused(flags.rawValue)
    }

    /// is current window hovered (and typically: not blocked by a popup/modal)? see flags for options. NB: If you are trying to check whether your mouse should be dispatched to imgui or to your app, you should use the 'io.WantCaptureMouse' boolean for that! Please read the FAQ!
    @inlinable
    public static func isWindowHovered(withFlags flags: ImGuiHoveredFlags = []) -> Bool {
        igIsWindowHovered(flags.rawValue)
    }

    /// get draw list associated to the current window, to append your own drawing primitives
    @inlinable
    public static func getWindowDrawList() -> UnsafeMutablePointer<CImDrawList> {
        igGetWindowDrawList()
    }

    /// get DPI scale currently associated to the current window's viewport.
    @inlinable
    public static func getWindowDpiScale() -> Float {
        igGetWindowDpiScale()
    }

    /// get current window position in screen space (useful if you want to do your own drawing via the DrawList API)
    @inlinable
    public static func getWindowPos() -> CImVec2 {
        igGetWindowPos()
    }

    /// get current window size
    @inlinable
    public static func getWindowSize() -> CImVec2 {
        igGetWindowSize()
    }

    /// get current window width (shortcut for GetWindowSize().x)
    @inlinable
    public static func getWindowWidth() -> Float {
        igGetWindowWidth()
    }

    /// get current window height (shortcut for GetWindowSize().y)
    @inlinable
    public static func getWindowHeight() -> Float {
        igGetWindowHeight()
    }


    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window position. call before Begin(). use pivot=(0.5f,0.5f) to center on given point, etc.
    @inlinable
    public static func setNextWindowPosition(to position: CImVec2, withCondition condition: ImGuiCondition = .none, pivot: CImVec2 = CImVec2(x: 0, y: 0)) {
        igSetNextWindowPos(position, condition.rawValue, pivot)
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window size. set axis to 0 to force an auto-fit on this axis. call before Begin()
    @inlinable
    public static func setNextWindowSize(to size: CImVec2, withCondition condition: ImGuiCondition = .none) {
        igSetNextWindowSize(size, condition.rawValue)
    }

    private class SizeCallbackHolder {
        let callback: (inout ImGuiSizeCallbackData) -> ()

        init(callback:  @escaping (inout ImGuiSizeCallbackData) -> ()) {
            self.callback = callback
        }
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window size limits. use -1,-1 on either X/Y axis to preserve the current size. Sizes will be rounded down. Use callback to apply non-trivial programmatic constraints.
    @inlinable
    public static func setNextWindowSizeConstraints(min: CImVec2, max: CImVec2) {
        igSetNextWindowSizeConstraints(min, max, nil, nil)
    }

    private static var sizeCallbackHolder: SizeCallbackHolder?

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window size limits. use -1,-1 on either X/Y axis to preserve the current size. Sizes will be rounded down. Use callback to apply non-trivial programmatic constraints.
    public static func setNextWindowSizeConstraints(min: CImVec2, max: CImVec2, withCustomCallback callback: @escaping (inout ImGuiSizeCallbackData) -> ()) {
        Self.sizeCallbackHolder = SizeCallbackHolder(callback: callback)

        igSetNextWindowSizeConstraints(min, max, { (dataPointer: UnsafeMutablePointer<CImGuiSizeCallbackData>!) in
            let callbackHolder = Self.sizeCallbackHolder!

            var data = ImGuiSizeCallbackData(position: dataPointer[\.Pos].pointee, currentSize: dataPointer[\.CurrentSize].pointee, _desiredSize: dataPointer[\.DesiredSize])

            callbackHolder.callback(&data)
        }, nil)
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window content size (~ scrollable client area, which enforce the range of scrollbars). Not including window decorations (title bar, menu bar, etc.) nor WindowPadding. set an axis to 0 to leave it automatic. call before Begin()
    @inlinable
    public static func setNextWindowContentSize(to size: CImVec2) {
        igSetNextWindowContentSize(size)
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window collapsed state. call before Begin()
    @inlinable
    public static func setNextWindowCollapsed(_ isCollapsed: Bool, withCondition condition: ImGuiCondition = .none) {
        igSetNextWindowCollapsed(isCollapsed, condition.rawValue)
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window to be focused / top-most. call before Begin()
    @inlinable
    public static func setNextWindowFocus() {
        igSetNextWindowFocus()
    }

    /// set next window scrolling value (use < 0.0f to not affect a given axis).
    @inlinable
    public static func setNextWindowScroll(to scroll: CImVec2) {
        igSetNextWindowScroll(scroll)
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window background color alpha. helper to easily override the Alpha component of ImGuiCol_WindowBg/ChildBg/PopupBg. you may also use ImGuiWindowFlags_NoBackground.
    @inlinable
    public static func setNextWindowBgAlpha(to alpha: Float) {
        igSetNextWindowBgAlpha(alpha)
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window viewport
    @inlinable
    public static func setNextWindowViewport(withID id: CImGuiID) {
        igSetNextWindowViewport(id)
    }

    /// (not recommended) set current window position - call within Begin()/End(). prefer using SetNextWindowPos(), as this may incur tearing and side-effects.
    @inlinable
    public static func setWindowPosition(to position: CImVec2, withCondition condition: ImGuiCondition = .none) {
        igSetWindowPos(position, condition.rawValue)
    }

    /// (not recommended) set current window size - call within Begin()/End(). set to ImVec2(0, 0) to force an auto-fit. prefer using SetNextWindowSize(), as this may incur tearing and minor side-effects.
    @inlinable
    public static func setWindowSize(to size: CImVec2, withCondition condition: ImGuiCondition = .none) {
        igSetWindowSize(size, condition.rawValue)
    }

    /// (not recommended) set current window collapsed state. prefer using SetNextWindowCollapsed().
    @inlinable
    public static func setWindowCollapsed(_ isCollapsed: Bool, withCondition condition: ImGuiCondition = .none) {
        igSetWindowCollapsed(isCollapsed, condition.rawValue)
    }

    /// (not recommended) set current window to be focused / top-most. prefer using SetNextWindowFocus().
    @inlinable
    public static func setWindowFocus() {
        igSetWindowFocus()
    }

    /// set font scale. Adjust IO.FontGlobalScale if you want to scale all windows. This is an old API! For correct scaling, prefer to reload font + rebuild ImFontAtlas + call style.ScaleAllSizes().
    @inlinable
    public static func setWindowFontScale(to scale: Float) {
        igSetWindowFontScale(scale)
    }

    /// set named window position.
    @inlinable
    public static func setWindowPosition(name: String, to position: CImVec2, withCondition condition: ImGuiCondition = .none) {
        igSetNamedWindowPos(name, position, condition.rawValue)
    }

    /// set named window size. set axis to 0 to force an auto-fit on this axis.
    @inlinable
    public static func setWindowSize(name: String, to size: CImVec2, withCondition condition: ImGuiCondition = .none) {
        igSetNamedWindowSize(name, size, condition.rawValue)
    }

    /// set named window collapsed state
    @inlinable
    public static func setWindowCollapsed(name: String, isCollapsed: Bool, withCondition condition: ImGuiCondition = .none) {
        igSetNamedWindowCollapsed(name, isCollapsed, condition.rawValue)
    }

    /// set named window to be focused / top-most. use NULL to remove focus.
    @inlinable
    public static func setWindowFocus(name: String) {
        igSetNamedWindowFocus(name)
    }


    // Content region
    // - Those functions are bound to be redesigned soon (they are confusing, incomplete and values in local window coordinates which increases confusion)
    /// == GetContentRegionMax() - GetCursorPos()
    @inlinable
    public static func getContentRegionAvail() -> CImVec2 {
        igGetContentRegionAvail()
    }

    /// current content boundaries (typically window boundaries including scrolling, or current column boundaries), in windows coordinates
    @inlinable
    public static func getContentRegionMax() -> CImVec2 {
        igGetContentRegionMax()
    }

    /// content boundaries min (roughly (0,0)-Scroll), in window coordinates
    @inlinable
    public static func getWindowContentRegionMin() -> CImVec2 {
        igGetWindowContentRegionMin()
    }

    /// content boundaries max (roughly (0,0)+Size-Scroll) where Size can be override with SetNextWindowContentSize(), in window coordinates
    @inlinable
    public static func getWindowContentRegionMax() -> CImVec2 {
        igGetWindowContentRegionMax()
    }

    // Windows Scrolling
    /// get scrolling amount [0..GetScrollMaxX()]
    @inlinable
    public static func getScrollX() -> Float {
        igGetScrollX()
    }

    /// get scrolling amount [0..GetScrollMaxY()]
    @inlinable
    public static func getScrollY() -> Float {
        igGetScrollY()
    }

    /// set scrolling amount [0..GetScrollMaxX()]
    @inlinable
    public static func setScrollX(to scrollX: Float) {
        igSetScrollX(scrollX)
    }

    /// set scrolling amount [0..GetScrollMaxY()]
    @inlinable
    public static func setScrollY(to scrollY: Float) {
        igSetScrollY(scrollY)
    }

    /// get maximum scrolling amount ~~ ContentSize.x - WindowSize.x
    @inlinable
    public static func getScrollMaxX() -> Float {
        igGetScrollMaxX()
    }

    /// get maximum scrolling amount ~~ ContentSize.y - WindowSize.y
    @inlinable
    public static func getScrollMaxY() -> Float {
        igGetScrollMaxY()
    }

    /// adjust scrolling amount to make current cursor position visible. center_x_ratio=0.0: left, 0.5: center, 1.0: right. When using to make a "default/current item" visible, consider using SetItemDefaultFocus() instead.
    @inlinable
    public static func setScrollHereX(centerXRatio: Float = 0.5) {
        igSetScrollHereX(centerXRatio)
    }

    /// adjust scrolling amount to make current cursor position visible. center_y_ratio=0.0: top, 0.5: center, 1.0: bottom. When using to make a "default/current item" visible, consider using SetItemDefaultFocus() instead.
    @inlinable
    public static func setScrollHereY(centerYRatio: Float = 0.5) {
        igSetScrollHereY(centerYRatio)
    }

    /// adjust scrolling amount to make given position visible. Generally GetCursorStartPos() + offset to compute a valid position.
    @inlinable
    public static func setScrollFromPosX(localX: Float, centerXRatio: Float = 0.5) {
        igSetScrollFromPosX(localX, centerXRatio)
    }

    /// adjust scrolling amount to make given position visible. Generally GetCursorStartPos() + offset to compute a valid position.
    @inlinable
    public static func setScrollFromPosY(localY: Float, centerYRatio: Float = 0.5) {
        igSetScrollFromPosY(localY, centerYRatio)
    }


    // Parameters stacks (shared)
    /// use NULL as a shortcut to push default font
    @inlinable
    public static func pushFont(font: UnsafeMutablePointer<CImFont>) {
        igPushFont(font)
    }

    @inlinable
    public static func popFont() {
        igPopFont()
    }

    @inlinable
    public static func pushStyleColor(withIndex index: ImGuiColor, color: CImU32) {
        igPushStyleColor(index.rawValue, color)
    }

    @inlinable
    public static func pushStyleColor(withIndex index: ImGuiColor, color: CImVec4) {
        igPushStyleColorVec4(index.rawValue, color)
    }

    @inlinable
    public static func popStyleColor(count: Int = 1) {
        igPopStyleColor(Int32(count))
    }

    @inlinable
    public static func pushStyleVar(withIndex index: ImGuiStyleVar, value: Float) {
        igPushStyleVar(index.rawValue, value)
    }

    @inlinable
    public static func pushStyleVar(withIndex index: ImGuiStyleVar, value: CImVec2) {
        igPushStyleVarVec2(index.rawValue, value)
    }

    @inlinable
    public static func popStyleVar(count: Int = 1) {
        igPopStyleVar(Int32(count))
    }

    /// allow focusing using TAB/Shift-TAB, enabled by default but you can disable it for certain widgets
    @inlinable
    public static func pushAllowKeyboardFocus(_ allow: Bool) {
        igPushAllowKeyboardFocus(allow)
    }

    @inlinable
    public static func popAllowKeyboardFocus() {
        igPopAllowKeyboardFocus()
    }

    /// in 'repeat' mode, Button*() functions repeated true in a typematic manner (using io.KeyRepeatDelay/io.KeyRepeatRate setting). Note that you can call IsItemActive() after any Button() to tell if the button is held in the current frame.
    @inlinable
    public static func pushButtonRepeat(_ repeat: Bool) {
        igPushButtonRepeat(`repeat`)
    }

    @inlinable
    public static func popButtonRepeat() {
        igPopButtonRepeat()
    }


    // Parameters stacks (current window)
    /// push width of items for common large "item+label" widgets. >0: width in pixels, <0 align xx pixels to the right of window (so -1 always align width to the right side). 0 = default to ~2/3 of windows width,
    @inlinable
    public static func pushItemWidth(_ width: Float) {
        igPushItemWidth(width)
    }

    @inlinable
    public static func popItemWidth() {
        igPopItemWidth()
    }

    /// set width of the _next_ common large "item+label" widget. >0: width in pixels, <0 align xx pixels to the right of window (so -1 always align width to the right side)
    @inlinable
    public static func setNextItemWidth(to width: Float) {
        igSetNextItemWidth(width)
    }

    /// width of item given pushed settings and current cursor position. NOT necessarily the width of last item unlike most 'Item' functions.
    @inlinable
    public static func calcItemWidth() -> Float {
        igCalcItemWidth()
    }

    /// push word-wrapping position for Text*() commands. < 0: no wrapping; 0: wrap to end of window (or column); > 0: wrap at 'wrap_pos_x' position in window local space
    @inlinable
    public static func pushTextWrapPosition(_ localWrapPositionX: Float = 0) {
        igPushTextWrapPos(localWrapPositionX)
    }

    @inlinable
    public static func popTextWrapPos() {
        igPopTextWrapPos()
    }

    /// get current font
    @inlinable
    public static func getFont() -> UnsafeMutablePointer<CImFont> {
        igGetFont()
    }

    /// get current font size (= height in pixels) of current font with current scale applied
    @inlinable
    public static func getFontSize() -> Float {
        igGetFontSize()
    }

    /// get UV coordinate for a while pixel, useful to draw custom shapes via the ImDrawList API
    @inlinable
    public static func getFontTexUvWhitePixel() -> CImVec2 {
        igGetFontTexUvWhitePixel()
    }

    /// retrieve given style color with style alpha applied and optional extra alpha multiplier
    @inlinable
    public static func getColorU32(withIndex index: ImGuiColor, alphaMul: Float = 1) -> CImU32 {
        igGetColorWithIndexU32(index.rawValue, alphaMul)
    }

    /// retrieve given color with style alpha applied
    @inlinable
    public static func getColorU32(from color: CImVec4) -> CImU32 {
        igGetColorVec4U32(color)
    }

    /// retrieve given color with style alpha applied
    @inlinable
    public static func getColorU32(from color: CImU32) -> CImU32 {
        igGetColorU32(color)
    }

    /// retrieve style color as stored in ImGuiStyle structure. use to feed back into PushStyleColor(), otherwise use GetColorU32() to get style color with style alpha baked in.
    @inlinable
    public static func getStyleColorVec4(withIndex index: ImGuiColor) -> CImVec4 {
        igGetStyleColorVec4(index.rawValue)
    }


    // Cursor / Layout
    // - By "cursor" we mean the current output position.
    // - The typical widget behavior is to output themselves at the current cursor position, then move the cursor one line down.
    // - You can call SameLine() between widgets to undo the last carriage and output at the right of the preceding widget.
    // - Attention! We currently have inconsistencies between window-local and absolute positions we will aim to fix with future API:
    //    Window-local coordinates:   SameLine(), GetCursorPos(), SetCursorPos(), GetCursorStartPos(), GetContentRegionMax(), UnsafeMutablePointer<GetWindowContentRegion>(), PushTextWrapPos()
    //    Absolute coordinate:        GetCursorScreenPos(), SetCursorScreenPos(), all ImDrawList:: functions.
    /// separator, generally horizontal. inside a menu bar or in horizontal layout mode, this becomes a vertical separator.
    @inlinable
    public static func separator() {
        igSeparator()
    }

    /// call between widgets or groups to layout them horizontally. X position given in window coordinates.
    @inlinable
    public static func sameLine(withOffsetFromStartX offset: Float = 0, spacing: Float = -1) {
        igSameLine(offset, spacing)
    }

    /// undo a SameLine() or force a new line when in an horizontal-layout context.
    @inlinable
    public static func newLine() {
        igNewLine()
    }

    /// add vertical spacing.
    @inlinable
    public static func spacing() {
        igSpacing()
    }

    /// add a dummy item of given size. unlike InvisibleButton(), Dummy() won't take the mouse click or be navigable into.
    @inlinable
    public static func dummy(withSize size: CImVec2) {
        igDummy(size)
    }

    /// move content position toward the right, by style.IndentSpacing or indent_w if != 0
    @inlinable
    public static func indent(by indentWidth: Float = 0) {
        igIndent(indentWidth)
    }

    /// move content position back to the left, by style.IndentSpacing or indent_w if != 0
    @inlinable
    public static func unindent(by indentWidth: Float = 0) {
        igUnindent(indentWidth)
    }

    /// lock horizontal starting position
    @inlinable
    public static func beginGroup() {
        igBeginGroup()
    }

    /// unlock horizontal starting position + capture the whole group bounding box into one "item" (so you can use IsItemHovered() or layout primitives such as SameLine() on whole group, etc.)
    @inlinable
    public static func endGroup() {
        igEndGroup()
    }

    /// cursor position in window coordinates (relative to window position)
    @inlinable
    public static func getCursorPosition() -> CImVec2 {
        igGetCursorPos()
    }

    ///   (some functions are using window-relative coordinates, such as: GetCursorPos, GetCursorStartPos, GetContentRegionMax, etc: UnsafeMutablePointer<GetWindowContentRegion>.
    @inlinable
    public static func getCursorPositionX() -> Float {
        igGetCursorPosX()
    }

    ///    other functions such as GetCursorScreenPos or everything in ImDrawList::
    @inlinable
    public static func getCursorPositionY() -> Float {
        igGetCursorPosY()
    }

    ///    are using the main, absolute coordinate system.
    @inlinable
    public static func setCursorPosition(to localPosition: CImVec2) {
        igSetCursorPos(localPosition)
    }

    ///    GetWindowPos() + GetCursorPos() == GetCursorScreenPos() etc.)
    @inlinable
    public static func setCursorPositionX(to localX: Float) {
        igSetCursorPosX(localX)
    }

    @inlinable
    public static func setCursorPositionY(to localY: Float) {
        igSetCursorPosY(localY)
    }

    /// initial cursor position in window coordinates
    @inlinable
    public static func getCursorStartPosition() -> CImVec2 {
        igGetCursorStartPos()
    }

    /// cursor position in absolute screen coordinates (0..io.DisplaySize) or natural OS coordinates when using multiple viewport. Useful to work with ImDrawList API.
    @inlinable
    public static func getCursorScreenPosition() -> CImVec2 {
        igGetCursorScreenPos()
    }

    /// cursor position in absolute screen coordinates (0..io.DisplaySize) or natural OS coordinates when using multiple viewport.
    @inlinable
    public static func setCursorScreenPosition(to position: CImVec2) {
        igSetCursorScreenPos(position)
    }

    /// vertically align upcoming text baseline to FramePadding.y so that it will align properly to regularly framed items (call if you have text on a line before a framed item)
    @inlinable
    public static func alignTextToFramePadding() {
        igAlignTextToFramePadding()
    }

    /// ~ FontSize
    @inlinable
    public static func getTextLineHeight() -> Float {
        igGetTextLineHeight()
    }

    /// ~ FontSize + style.ItemSpacing.y (distance in pixels between 2 consecutive lines of text)
    @inlinable
    public static func getTextLineHeightWithSpacing() -> Float {
        igGetTextLineHeightWithSpacing()
    }

    /// ~ FontSize + style.FramePadding.y * 2
    @inlinable
    public static func getFrameHeight() -> Float {
        igGetFrameHeight()
    }

    /// ~ FontSize + style.FramePadding.y * 2 + style.ItemSpacing.y (distance in pixels between 2 consecutive lines of framed widgets)
    @inlinable
    public static func getFrameHeightWithSpacing() -> Float {
        igGetFrameHeightWithSpacing()
    }


    // ID stack/scopes
    // - Read the FAQ for more details about how ID are handled in dear imgui. If you are creating widgets in a loop you most
    //   likely want to push a unique identifier (e.g. object pointer, loop index) to uniquely differentiate them.
    // - The resulting ID are hashes of the entire stack.
    // - You can also use the "Label##foobar" syntax within widget label to distinguish them from each others.
    // - In this header file we use the "label"/"name" terminology to denote a string that will be displayed and used as an ID,
    //   whereas "str_id" denote a string that is only used as an ID and not normally displayed.
    /// push string into the ID stack (will hash string).
    @inlinable
    public static func pushID<S: StringProtocol>(_ string: S) {
        string.withCString { pointer in
            igPushIDBuffer(pointer)
        }
    }

    /// push pointer into the ID stack (will hash pointer).
    @inlinable
    public static func pushID(_ pointer: UnsafeRawPointer) {
        igPushIDPointer(pointer)
    }

    /// push integer into the ID stack (will hash integer).
    @inlinable
    public static func pushID(_ int: Int) {
        igPushIDInt(Int32(int))
    }

    /// pop from the ID stack.
    @inlinable
    public static func popID() {
        igPopID()
    }

    /// calculate unique ID (hash of whole ID stack + given parameter). e.g. if you want to query into ImGuiStorage yourself
    @inlinable
    public static func getID<S: StringProtocol>(for string: S) -> CImGuiID {
        string.withCString { pointer in
            igGetIDBuffer(pointer)
        }
    }

    @inlinable
    public static func getID(for pointer: UnsafeRawPointer) -> CImGuiID {
        igGetIDPointer(pointer)
    }


    // Widgets: Text
    /// raw text without formatting. Roughly equivalent to Text("%s", text) but: A) doesn't require null terminated string if 'text_end' is specified, B) it's faster, no memory copy is done, no buffer size limits, recommended for long chunks of text.
    @inlinable
    public static func textUnformatted(string: String) {
        igTextUnformatted(string, nil)
    }

    /// formatted text
    @inlinable
    public static func text(format: String, _ values: CVarArg...) {
        withVaList(values) { pointer in
            igTextV(format, pointer)
        }
    }

    /// shortcut for PushStyleColor(ImGuiCol_Text, col); Text(fmt, ...); PopStyleColor();
    @inlinable
    public static func textColored(withColor color: CImVec4, format: String, _ values: CVarArg...) {
        withVaList(values) { pointer in
            igTextColoredV(color, format, pointer)
        }
    }

    /// shortcut for PushStyleColor(ImGuiCol_Text, style.Colors[ImGuiCol_TextDisabled]); Text(fmt, ...); PopStyleColor();
    @inlinable
    public static func textDisabled(format: String, _ values: CVarArg...) {
        withVaList(values) { pointer in
            igTextDisabledV(format, pointer)
        }
    }

    /// shortcut for PushTextWrapPos(0); Text(fmt, ...); PopTextWrapPos();. Note that this won't work on an auto-resizing window if there's no other widgets to extend the window width, yoy may need to set a size using SetNextWindowSize().
    @inlinable
    public static func textWrapped(format: String, _ values: CVarArg...) {
        withVaList(values) { pointer in
            igTextWrappedV(format, pointer)
        }
    }

    /// display text+label aligned the same way as value+label widgets
    @inlinable
    public static func labelText(withLabel label: String, format: String, _ values: CVarArg...) {
        withVaList(values) { pointer in
            igLabelTextV(label, format, pointer)
        }
    }

    /// shortcut for Bullet()+Text()
    @inlinable
    public static func bulletText(format: String, _ values: CVarArg...) {
        withVaList(values) { pointer in
            igBulletTextV(format, pointer)
        }
    }


    // Widgets: Main
    // - Most widgets true when the value has been changed or when pressed/selected
    // - You may also use one of the many IsItemXXX functions (e.g. IsItemActive, IsItemHovered, etc.) to query widget state.
    /// button
    @inlinable
    public static func button(withLabel label: String, withSize size: CImVec2 = CImVec2(x: 0, y: 0)) -> Bool {
        igButton(label, size)
    }

    /// button with FramePadding=(0,0) to easily embed within text
    @inlinable
    public static func smallButton(withLabel label: String) -> Bool {
        igSmallButton(label)
    }

    /// flexible button behavior without the visuals, frequently useful to build custom behaviors using the public api (along with IsItemActive, IsItemHovered, etc.)
    @inlinable
    public static func invisibleButton(withID stringID: String, size: CImVec2, flags: ImGuiButtonFlags = []) -> Bool {
        igInvisibleButton(stringID, size, flags.rawValue)
    }

    /// square button with an arrow shape
    @inlinable
    public static func arrowButton(withID stringID: String, direction: ImGuiDirection) -> Bool {
        igArrowButton(stringID, direction.rawValue)
    }

    @discardableResult
    @inlinable
    public static func checkbox(withLabel label: String, isChecked: inout Bool) -> Bool {
        igCheckbox(label, &isChecked)
    }

    @discardableResult
    @inlinable
    public static func checkboxFlags(withLabel label: String, flags: inout Int32, flagValue: Int32) -> Bool {
        igCheckboxFlags(label, &flags, flagValue)
    }

    @discardableResult
    @inlinable
    public static func checkboxFlags(withLabel label: String, flags: inout UInt32, flagValue: UInt32) -> Bool {
        igCheckboxFlagsUnsigned(label, &flags, flagValue)
    }

    /// use with e.g. if (RadioButton("one", my_value==1)) { my_value = 1; }
    @inlinable
    public static func radioButton(withLabel label: String, isActive: Bool) -> Bool {
        igRadioButton(label, isActive)
    }

    /// shortcut to handle the above pattern when value is an integer
    @discardableResult
    @inlinable
    public static func radioButton(withLabel label: String, value: inout Int32, buttonValue: Int32) -> Bool {
        igRadioButtonInt(label, &value, buttonValue)
    }

    /// size_arg (for each axis) < 0.0f: align to end, 0.0f: auto, > 0.0f: specified size
    @inlinable
    public static func progressBar(fraction: Float, withSizeArg sizeArg: CImVec2 = CImVec2(x: -.leastNormalMagnitude, y: 0), overlay: String? = nil) {
        igProgressBar(fraction, sizeArg, overlay)
    }

    /// draw a small circle + keep the cursor on the same line. advance cursor x position by GetTreeNodeToLabelSpacing(), same distance that TreeNode() uses
    @inlinable
    public static func bullet() {
        igBullet()
    }


    @inlinable
    public static func image(withTextureID textureID: CImTextureID?, size: CImVec2, uv0: CImVec2 = CImVec2(x: 0, y: 0), uv1: CImVec2 = CImVec2(x: 1, y: 1), tintColor: CImVec4 = CImVec4(x: 1, y: 1, z: 1, w: 1), borderColor: CImVec4 = CImVec4(x: 0, y: 0, z: 0, w: 0)) {
        igImage(textureID, size, uv0, uv1, tintColor, borderColor)
    }

    @inlinable
    public static func imageButton(withStringID stringID: String, textureID: CImTextureID?, size: CImVec2, uv0: CImVec2 = CImVec2(x: 0, y: 0),  uv1: CImVec2 = CImVec2(x: 1, y: 1), backgroundColor: CImVec4 = CImVec4(x: 0, y: 0, z: 0, w: 0), tintColor: CImVec4 = CImVec4(x: 1, y: 1, z: 1, w: 1)) -> Bool {
        igImageButton(stringID, textureID, size, uv0, uv1, backgroundColor, tintColor)
    }


    // Widgets: Combo Box
    // - The BeginCombo()/EndCombo() api allows you to manage your contents and selection state however you want it, by creating e.g. Selectable() items.
    // - The old Combo() api are helpers over BeginCombo()/EndCombo() which are kept available for convenience purpose.
    @discardableResult
    @inlinable
    public static func beginCombo(withLabel label: String, previewValue: String, flags: ImGuiComboFlags = []) -> Bool {
        igBeginCombo(label, previewValue, flags.rawValue)
    }

    /// only call EndCombo() if BeginCombo() returns true!
    @inlinable
    public static func endCombo() {
        igEndCombo()
    }

    /// maxPopupHeight in items
    @discardableResult
    @inlinable
    public static func combo(withLabel label: String, currentItem: inout Int32, items: [String], maxPopupHeight: Int = -1) -> Bool {
        withArrayOfCStrings(items) { pointers in
            igCombo(label, &currentItem, pointers, Int32(pointers.count), Int32(maxPopupHeight))
        }
    }

    /// Separate items with \0 within a string, end item-list with \0\0. e.g. "One\0Two\0Three\0"
    /// maxPopupHeight in items
    @discardableResult
    @inlinable
    public static func combo(withLabel label: String, currentItem: inout Int32, items: String, maxPopupHeight: Int = -1) -> Bool {
        igComboZeroSeparated(label, &currentItem, items, Int32(maxPopupHeight))
    }


    // Widgets: Drag Sliders
    // - CTRL+Click on any drag box to turn them into an input box. Manually input values aren't clamped and can go off-bounds.
    // - For all the Float2/Float3/Float4/Int2/Int3/Int4 versions of every functions, note that a 'float v[X]' function argument is the same as 'v: float*', the array syntax is just a way to document the number of elements that are expected to be accessible. You can pass address of your first element out of a contiguous set, e.g. &myvector.x
    // - Adjust format string to decorate the value with a prefix, a suffix, or adapt the editing and display precision e.g. "%.3f" -> 1.234; "%5.2f secs" -> 01.23 secs; "Biscuit: %" -> Biscuit: 1; etc.
    // - Format string may also be set to NULL or use the default format ("%f" or "%d").
    // - Speed are per-pixel of mouse movement (v_speed=0.2f: mouse needs to move by 5 pixels to increase value by 1). For gamepad/keyboard navigation, minimum speed is Max(v_speed, minimum_step_at_given_precision).
    // - Use v_min < v_max to clamp edits to given limits. Note that CTRL+Click manual input can override those limits.
    // - Use v_max = FLT_MAX / INT_MAX etc to avoid clamping to a maximum, same with v_min = -FLT_MAX / INT_MIN to avoid clamping to a minimum.
    // - We use the same sets of flags for DragXXX() and SliderXXX() functions as the features are the same and it makes it easier to swap them.
    // - Legacy: Pre-1.78 there are DragXXX() function signatures that takes a final `float power=1' argument instead of the `ImGuiSliderFlags flags=0' argument.
    //   If you get a warning converting a float to ImGuiSliderFlags, read https://github.com/ocornut/imgui/issues/3361
    /// If v_min >= v_max we have no bound
    @discardableResult
    @inlinable
    public static func dragFloat(withLabel label: String, value: inout Float, speed: Float = 1, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: ImGuiSliderFlags = []) -> Bool {
        igDragFloat(label, &value, speed, minValue, maxValue, format, flags.rawValue)
    }

    @discardableResult
    @inlinable
    public static func dragFloat2<T: MutablePointerProvider>(withLabel label: String, values: inout T, speed: Float = 1, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: ImGuiSliderFlags = []) -> Bool where T.Value == Float {
        precondition(values.valueCount >= 2)

        return values.withUnsafeMutablePointer { pointer in
            return igDragFloat2(label, pointer, speed, minValue, maxValue, format, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func dragFloat3<T: MutablePointerProvider>(withLabel label: String, values: inout T, speed: Float = 1, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: ImGuiSliderFlags = []) -> Bool where T.Value == Float {
        precondition(values.valueCount >= 3)

        return values.withUnsafeMutablePointer { pointer in
            igDragFloat3(label, pointer, speed, minValue, maxValue, format, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func dragFloat4<T: MutablePointerProvider>(withLabel label: String, values: inout T, speed: Float = 1, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: ImGuiSliderFlags = []) -> Bool where T.Value == Float {
        precondition(values.valueCount >= 4)

        return values.withUnsafeMutablePointer { pointer in
            igDragFloat4(label, pointer, speed, minValue, maxValue, format, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func dragFloatRange2(withLabel label: String, currentMinValue: inout Float, currentMaxValue: inout Float, speed: Float = 1, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", formatMax: String? = nil, flags: ImGuiSliderFlags = []) -> Bool {
        igDragFloatRange2(label, &currentMinValue, &currentMaxValue, speed, minValue, maxValue, format, formatMax, flags.rawValue)
    }

    /// If v_min >= v_max we have no bound
    @discardableResult
    @inlinable
    public static func dragInt(withLabel label: String, value: inout Int32, speed: Float = 1, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: ImGuiSliderFlags = []) -> Bool {
        igDragInt(label, &value, speed, minValue, maxValue, format, flags.rawValue)
    }

    @discardableResult
    @inlinable
    public static func dragInt2<T: MutablePointerProvider>(withLabel label: String, values: inout T, speed: Float = 1, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: ImGuiSliderFlags = []) -> Bool where T.Value == Int32 {
        precondition(values.valueCount >= 2)

        return values.withUnsafeMutablePointer { pointer in
            igDragInt2(label, pointer, speed, minValue, maxValue, format, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func dragInt3<T: MutablePointerProvider>(withLabel label: String, values: inout T, speed: Float = 1, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: ImGuiSliderFlags = []) -> Bool where T.Value == Int32 {
        precondition(values.valueCount >= 3)

        return values.withUnsafeMutablePointer { pointer in
            igDragInt3(label, pointer, speed, minValue, maxValue, format, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func dragInt4<T: MutablePointerProvider>(withLabel label: String, values: inout T, speed: Float = 1, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: ImGuiSliderFlags = []) -> Bool where T.Value == Int32 {
        precondition(values.valueCount >= 4)

        return values.withUnsafeMutablePointer { pointer in
            igDragInt4(label, pointer, speed, minValue, maxValue, format, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func dragIntRange2(withLabel label: String, currentMinValue: inout Int32, currentMaxValue: inout Int32, speed: Float = 1, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", formatMax: String? = nil, flags: ImGuiSliderFlags = []) -> Bool {
        igDragIntRange2(label, &currentMinValue, &currentMaxValue, speed, minValue, maxValue, format, formatMax, flags.rawValue)
    }

    @discardableResult
    @inlinable
    public static func dragScalar<T: ImGuiDataType>(withLabel label: String, value: inout T, speed: Float = 1, minValue: T? = nil, maxValue: T? = nil, format: String? = nil, flags: ImGuiSliderFlags = []) -> Bool {
        withUnsafeBytes(of: minValue) { minBuffer in
            withUnsafeBytes(of: maxValue) { maxBuffer in
                igDragScalar(label, T.dataType, &value, speed, UnsafeMutableRawPointer(mutating: minBuffer.baseAddress), UnsafeMutableRawPointer(mutating: maxBuffer.baseAddress), format, flags.rawValue)
            }
        }
    }

    @discardableResult
    @inlinable
    public static func dragScalarN<T: MutablePointerProvider>(withLabel label: String, values: inout T, speed: Float = 1, minValue: T.Value? = nil, maxValue: T.Value? = nil, format: String? = nil, flags: ImGuiSliderFlags = []) -> Bool where T.Value: ImGuiDataType {
        let count = values.valueCount

        precondition(count > 0)

        return values.withUnsafeMutablePointer { pointer in
            withUnsafeBytes(of: minValue) { minBuffer in
                withUnsafeBytes(of: maxValue) { maxBuffer in
                    igDragScalarN(label, T.Value.dataType, pointer, Int32(count), speed, UnsafeMutableRawPointer(mutating: minBuffer.baseAddress), UnsafeMutableRawPointer(mutating: maxBuffer.baseAddress), format, flags.rawValue)
                }
            }
        }
    }


    // Widgets: Regular Sliders
    // - CTRL+Click on any slider to turn them into an input box. Manually input values aren't clamped and can go off-bounds.
    // - Adjust format string to decorate the value with a prefix, a suffix, or adapt the editing and display precision e.g. "%.3f" -> 1.234; "%5.2f secs" -> 01.23 secs; "Biscuit: %" -> Biscuit: 1; etc.
    // - Format string may also be set to NULL or use the default format ("%f" or "%d").
    // - Legacy: Pre-1.78 there are SliderXXX() function signatures that takes a final `float power=1' argument instead of the `ImGuiSliderFlags flags=0' argument.
    //   If you get a warning converting a float to ImGuiSliderFlags, read https://github.com/ocornut/imgui/issues/3361
    /// adjust format to decorate the value with a prefix or a suffix for in-slider labels or unit display.
    @discardableResult
    @inlinable
    public static func sliderFloat(withLabel label: String, value: inout Float, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: ImGuiSliderFlags = []) -> Bool {
        igSliderFloat(label, &value, minValue, maxValue, format, flags.rawValue)
    }

    @discardableResult
    @inlinable
    public static func sliderFloat2<T: MutablePointerProvider>(withLabel label: String, values: inout T, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: ImGuiSliderFlags = []) -> Bool where T.Value == Float {
        precondition(values.valueCount >= 2)

        return values.withUnsafeMutablePointer { pointer in
            igSliderFloat2(label, pointer, minValue, maxValue, format, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func sliderFloat3<T: MutablePointerProvider>(withLabel label: String, values: inout T, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: ImGuiSliderFlags = []) -> Bool where T.Value == Float {
        precondition(values.valueCount >= 3)

        return values.withUnsafeMutablePointer { pointer in
            igSliderFloat3(label, pointer, minValue, maxValue, format, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func sliderFloat4<T: MutablePointerProvider>(withLabel label: String, values: inout T, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: ImGuiSliderFlags = []) -> Bool where T.Value == Float {
        precondition(values.valueCount >= 4)

        return values.withUnsafeMutablePointer { pointer in
            igSliderFloat4(label, pointer, minValue, maxValue, format, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func sliderAngle(withLabel label: String, valueInRadians value: inout Float, minValueInDegrees minValue: Float = -360, maxValueInDegrees maxValue: Float = 360, format: String = "%.0f deg", flags: ImGuiSliderFlags = []) -> Bool {
        igSliderAngle(label, &value, minValue, maxValue, format, flags.rawValue)
    }

    @discardableResult
    @inlinable
    public static func sliderInt(withLabel label: String, value: inout Int32, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: ImGuiSliderFlags = []) -> Bool {
        igSliderInt(label, &value, minValue, maxValue, format, flags.rawValue)
    }

    @discardableResult
    @inlinable
    public static func sliderInt2<T: MutablePointerProvider>(withLabel label: String, values: inout T, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: ImGuiSliderFlags = []) -> Bool where T.Value == Int32 {
        precondition(values.valueCount >= 2)

        return values.withUnsafeMutablePointer { pointer in
            igSliderInt2(label, pointer, minValue, maxValue, format, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func sliderInt3<T: MutablePointerProvider>(withLabel label: String, values: inout T, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: ImGuiSliderFlags = []) -> Bool where T.Value == Int32 {
        precondition(values.valueCount >= 3)

        return values.withUnsafeMutablePointer { pointer in
            igSliderInt3(label, pointer, minValue, maxValue, format, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func sliderInt4<T: MutablePointerProvider>(withLabel label: String, values: inout T, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: ImGuiSliderFlags = []) -> Bool where T.Value == Int32 {
        precondition(values.valueCount >= 4)

        return values.withUnsafeMutablePointer { pointer in
            igSliderInt4(label, pointer, minValue, maxValue, format, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func sliderScalar<T: ImGuiDataType>(withLabel label: String, value: inout T, minValue: T? = nil, maxValue: T? = nil, format: String? = nil, flags: ImGuiSliderFlags = []) -> Bool {
        withUnsafeBytes(of: minValue) { minBuffer in
            withUnsafeBytes(of: maxValue) { maxBuffer in
                igSliderScalar(label, T.dataType, &value, UnsafeMutableRawPointer(mutating: minBuffer.baseAddress), UnsafeMutableRawPointer(mutating: maxBuffer.baseAddress), format, flags.rawValue)
            }
        }
    }

    @discardableResult
    @inlinable
    public static func sliderScalarN<T: MutablePointerProvider>(withLabel label: String, values: inout T, minValue: T.Value? = nil, maxValue: T.Value? = nil, format: String? = nil, flags: ImGuiSliderFlags = []) -> Bool where T.Value: ImGuiDataType {
        let count = values.valueCount

        precondition(count > 0)

        return values.withUnsafeMutablePointer { pointer in
            withUnsafeBytes(of: minValue) { minBuffer in
                withUnsafeBytes(of: maxValue) { maxBuffer in
                    igSliderScalarN(label, T.Value.dataType, pointer, Int32(count), UnsafeMutableRawPointer(mutating: minBuffer.baseAddress), UnsafeMutableRawPointer(mutating: maxBuffer.baseAddress), format, flags.rawValue)
                }
            }
        }
    }

    @discardableResult
    @inlinable
    public static func vSliderFloat(withLabel label: String, size: CImVec2, value: inout Float, minValue: Float, maxValue: Float, format: String = "%.3f", flags: ImGuiSliderFlags = []) -> Bool {
        igVSliderFloat(label, size, &value, minValue, maxValue, format, flags.rawValue)
    }

    @discardableResult
    @inlinable
    public static func vSliderInt(withLabel label: String, size: CImVec2, value: inout Int32, minValue: Int32, maxValue: Int32, format: String = "%d", flags: ImGuiSliderFlags = []) -> Bool {
        igVSliderInt(label, size, &value, minValue, maxValue, format, flags.rawValue)
    }

    @discardableResult
    @inlinable
    public static func vSliderScalar<T: ImGuiDataType>(withLabel label: String, size: CImVec2, value: inout T, minValue: T, maxValue: T, format: String? = nil, flags: ImGuiSliderFlags = []) -> Bool {
        withUnsafeBytes(of: minValue) { minBuffer in
            withUnsafeBytes(of: maxValue) { maxBuffer in
                igVSliderScalar(label, size, T.dataType, &value, UnsafeMutableRawPointer(mutating: minBuffer.baseAddress), UnsafeMutableRawPointer(mutating: maxBuffer.baseAddress), format, flags.rawValue)
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

extension ImGui {
    // Widgets: Input with Keyboard
    // - If you want to use InputText() with std::string or any custom dynamic string type, see misc/cpp/imgui_stdlib.h and comments in imgui_demo.cpp.
    // - Most of the ImGuiInputTextFlags flags are only useful for InputText() and not for InputFloatX, InputIntX, InputDouble etc.
    @discardableResult
    public static func inputText(withLabel label: String, string: inout String, flags: ImGuiInputTextFlags = []) -> Bool {
        assert(flags.isDisjoint(with: .callbackResize))

        let flags = flags.union(.callbackResize)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                let bufferHolder = InputTextBufferHolder(bufferPointer: bufferPointer, originalBuffer: buffer)

                let bufferHolderPointer = Unmanaged.passUnretained(bufferHolder).toOpaque()

                return igInputText(label, buffer.baseAddress, capacity, flags.rawValue, inputTextCallback, bufferHolderPointer)
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    @discardableResult
    public static func inputText(withLabel label: String, string: inout String, flags: ImGuiInputTextFlags = [], callback: @escaping (inout ImGuiInputTextCallbackData) -> Int) -> Bool {
        assert(flags.isDisjoint(with: .callbackResize))

        let flags = flags.union(.callbackResize)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                let callbackHolder = InputTextCallbackHolder(callback: callback, bufferPointer: bufferPointer, originalBuffer: buffer)

                let callbackHolderPointer = Unmanaged.passUnretained(callbackHolder).toOpaque()

                return igInputText(label, buffer.baseAddress, capacity, flags.rawValue, intermediateInputTextCallback, callbackHolderPointer)
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    @discardableResult
    public static func inputTextMultiline(withLabel label: String, string: inout String, size: CImVec2 = CImVec2(x: 0, y: 0), flags: ImGuiInputTextFlags = []) -> Bool {
        assert(flags.isDisjoint(with: .callbackResize))

        let flags = flags.union(.callbackResize)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                let bufferHolder = InputTextBufferHolder(bufferPointer: bufferPointer, originalBuffer: buffer)

                let bufferHolderPointer = Unmanaged.passUnretained(bufferHolder).toOpaque()

                return igInputTextMultiline(label, buffer.baseAddress, capacity, size, flags.rawValue, inputTextCallback, bufferHolderPointer)
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    @discardableResult
    public static func inputTextMultiline(withLabel label: String, string: inout String, size: CImVec2 = CImVec2(x: 0, y: 0), flags: ImGuiInputTextFlags = [], callback: @escaping (inout ImGuiInputTextCallbackData) -> Int) -> Bool {
        assert(flags.isDisjoint(with: .callbackResize))

        let flags = flags.union(.callbackResize)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                let callbackHolder = InputTextCallbackHolder(callback: callback, bufferPointer: bufferPointer, originalBuffer: buffer)

                let callbackHolderPointer = Unmanaged.passUnretained(callbackHolder).toOpaque()

                return igInputTextMultiline(label, buffer.baseAddress, capacity, size, flags.rawValue, intermediateInputTextCallback, callbackHolderPointer)
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    @discardableResult
    public static func inputTextWithHint(withLabel label: String, hint: String, string: inout String, flags: ImGuiInputTextFlags = []) -> Bool {
        assert(flags.isDisjoint(with: .callbackResize))

        let flags = flags.union(.callbackResize)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                let bufferHolder = InputTextBufferHolder(bufferPointer: bufferPointer, originalBuffer: buffer)

                let bufferHolderPointer = Unmanaged.passUnretained(bufferHolder).toOpaque()

                return igInputTextWithHint(label, hint, buffer.baseAddress, capacity, flags.rawValue, inputTextCallback, bufferHolderPointer)
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    @discardableResult
    public static func inputTextWithHint(withLabel label: String, hint: String, string: inout String, flags: ImGuiInputTextFlags = [], callback: @escaping (inout ImGuiInputTextCallbackData) -> Int) -> Bool {
        assert(flags.isDisjoint(with: .callbackResize))

        let flags = flags.union(.callbackResize)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                let callbackHolder = InputTextCallbackHolder(callback: callback, bufferPointer: bufferPointer, originalBuffer: buffer)

                let callbackHolderPointer = Unmanaged.passUnretained(callbackHolder).toOpaque()

                return igInputTextWithHint(label, hint, buffer.baseAddress, capacity, flags.rawValue, intermediateInputTextCallback, callbackHolderPointer)
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    @discardableResult
    @inlinable
    public static func inputFloat(withLabel label: String, value: inout Float, step: Float = 0, fastStep: Float = 0, format: String = "%.3f", flags: ImGuiInputTextFlags = []) -> Bool {
        igInputFloat(label, &value, step, fastStep, format, flags.rawValue)
    }

    @discardableResult
    @inlinable
    public static func inputFloat2<T: MutablePointerProvider>(withLabel label: String, values: inout T, format: String = "%.3f", flags: ImGuiInputTextFlags = []) -> Bool where T.Value == Float {
        precondition(values.valueCount >= 2)

        return values.withUnsafeMutablePointer { pointer in
            igInputFloat2(label, pointer, format, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func inputFloat3<T: MutablePointerProvider>(withLabel label: String, values: inout T, format: String = "%.3f", flags: ImGuiInputTextFlags = []) -> Bool where T.Value == Float {
        precondition(values.valueCount >= 3)

        return values.withUnsafeMutablePointer { pointer in
            igInputFloat3(label, pointer, format, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func inputFloat4<T: MutablePointerProvider>(withLabel label: String, values: inout T, format: String = "%.3f", flags: ImGuiInputTextFlags = []) -> Bool where T.Value == Float {
        precondition(values.valueCount >= 4)

        return values.withUnsafeMutablePointer { pointer in
            igInputFloat4(label, pointer, format, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func inputInt(withLabel label: String, value: inout Int32, step: Int32 = 1, fastStep: Int32 = 100, flags: ImGuiInputTextFlags = []) -> Bool {
        igInputInt(label, &value, step, fastStep, flags.rawValue)
    }

    @discardableResult
    @inlinable
    public static func inputInt2<T: MutablePointerProvider>(withLabel label: String, values: inout T, flags: ImGuiInputTextFlags = []) -> Bool where T.Value == Int32 {
        precondition(values.valueCount >= 2)

        return values.withUnsafeMutablePointer { pointer in
            igInputInt2(label, pointer, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func inputInt3<T: MutablePointerProvider>(withLabel label: String, values: inout T, flags: ImGuiInputTextFlags = []) -> Bool where T.Value == Int32 {
        precondition(values.valueCount >= 3)

        return values.withUnsafeMutablePointer { pointer in
            igInputInt3(label, pointer, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func inputInt4<T: MutablePointerProvider>(withLabel label: String, values: inout T, flags: ImGuiInputTextFlags = []) -> Bool where T.Value == Int32 {
        precondition(values.valueCount >= 4)

        return values.withUnsafeMutablePointer { pointer in
            igInputInt4(label, pointer, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func inputDouble(withLabel label: String, value: inout Double, step: Double = 0, fastStep: Double = 0, format: String = "%.6f", flags: ImGuiInputTextFlags = []) -> Bool {
        igInputDouble(label, &value, step, fastStep, format, flags.rawValue)
    }

    @discardableResult
    @inlinable
    public static func inputScalar<T: ImGuiDataType>(withLabel label: String, value: inout T, step: T? = nil, fastStep: T? = nil, format: String? = nil, flags: ImGuiInputTextFlags = []) -> Bool {
        withUnsafeBytes(of: step) { stepBuffer in
            withUnsafeBytes(of: fastStep) { fastStepBuffer in
                igInputScalar(label, T.dataType, &value, UnsafeMutableRawPointer(mutating: stepBuffer.baseAddress), UnsafeMutableRawPointer(mutating: fastStepBuffer.baseAddress), format, flags.rawValue)
            }
        }
    }

    @discardableResult
    @inlinable
    public static func inputScalarN<T: MutablePointerProvider>(withLabel label: String, values: inout T, step: T.Value? = nil, fastStep: T.Value? = nil, format: String? = nil, flags: ImGuiInputTextFlags = []) -> Bool where T.Value: ImGuiDataType {
        let count = values.valueCount

        precondition(count > 0)

        return values.withUnsafeMutablePointer { pointer in
            withUnsafeBytes(of: step) { stepBuffer in
                withUnsafeBytes(of: fastStep) { fastStepBuffer in
                    igInputScalarN(label, T.Value.dataType, pointer, Int32(count), UnsafeMutableRawPointer(mutating: stepBuffer.baseAddress), UnsafeMutableRawPointer(mutating: fastStepBuffer.baseAddress), format, flags.rawValue)
                }
            }
        }
    }


    // Widgets: Color Editor/Picker (tip: the functions: UnsafeMutablePointer<ColorEdit> have a little colored preview square that can be left-clicked to open a picker, and right-clicked to open an option menu.)
    // - Note that in C++ a 'float v[X]' function argument is the _same_ as 'v: UnsafeMutablePointer<float>', the array syntax is just a way to document the number of elements that are expected to be accessible.
    // - You can pass the address of a first float element out of a contiguous structure, e.g. &myvector.x
    @discardableResult
    @inlinable
    public static func colorEdit3<T: MutablePointerProvider>(withLabel label: String, color: inout T, flags: ImGuiColorEditFlags = []) -> Bool where T.Value == Float {
        precondition(color.valueCount >= 3)

        return color.withUnsafeMutablePointer { pointer in
            igColorEdit3(label, pointer, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func colorEdit4<T: MutablePointerProvider>(withLabel label: String, color: inout T, flags: ImGuiColorEditFlags = []) -> Bool where T.Value == Float {
        precondition(color.valueCount >= 4)

        return color.withUnsafeMutablePointer { pointer in
            igColorEdit4(label, pointer, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func colorPicker3<T: MutablePointerProvider>(withLabel label: String, color: inout T, flags: ImGuiColorEditFlags = []) -> Bool where T.Value == Float {
        precondition(color.valueCount >= 3)

        return color.withUnsafeMutablePointer { pointer in
            igColorPicker3(label, pointer, flags.rawValue)
        }
    }

    @discardableResult
    @inlinable
    public static func colorPicker4<T: MutablePointerProvider>(withLabel label: String, color: inout T, flags: ImGuiColorEditFlags = []) -> Bool where T.Value == Float {
        precondition(color.valueCount >= 4)

        return color.withUnsafeMutablePointer { pointer in
            igColorPicker4(label, pointer, flags.rawValue, nil)
        }
    }

    @discardableResult
    @inlinable
    public static func colorPicker4<T: MutablePointerProvider, U: PointerProvider>(withLabel label: String, color: inout T, flags: ImGuiColorEditFlags = [], referenceColor: U) -> Bool where T.Value == Float, U.Value == Float {
        precondition(color.valueCount >= 4)
        precondition(referenceColor.valueCount >= 4)

        return color.withUnsafeMutablePointer { pointer in
            referenceColor.withUnsafePointer { referencePointer in
                igColorPicker4(label, pointer, flags.rawValue, referencePointer)
            }
        }
    }

    /// display a colored square/button, hover for details, true when pressed.
    @inlinable
    public static func colorButton(withID id: String, color: CImVec4, flags: ImGuiColorEditFlags = [], size: CImVec2 = CImVec2(x: 0, y: 0)) -> Bool {
        igColorButton(id, color, flags.rawValue, size)
    }

    /// initialize current options (generally on application startup) if you want to select a default format, picker type, etc. User will be able to change many settings, unless you pass the _NoOptions flag to your calls.
    @inlinable
    public static func setColorEditOptions(flags: ImGuiColorEditFlags) {
        igSetColorEditOptions(flags.rawValue)
    }


    // Widgets: Trees
    // - TreeNode functions true when the node is open, in which case you need to also call TreePop() when you are finished displaying the tree node contents.
    @inlinable
    public static func treeNode(withLabel label: String) -> Bool {
        igTreeNode(label)
    }

    /// helper variation to easily decorelate the id from the displayed string. Read the FAQ about why and how to use ID. to align arbitrary text at the same level as a TreeNode() you can use Bullet().
    @inlinable
    public static func treeNode(withID id: String, format: String, _ values: CVarArg...) -> Bool {
        withVaList(values) { pointer in
            igTreeNodeStringV(id, format, pointer)
        }
    }

    /// "
    @inlinable
    public static func treeNode(withID id: UnsafeRawPointer?, format: String, _ values: CVarArg...) -> Bool {
        withVaList(values) { pointer in
            igTreeNodePointerV(id, format, pointer)
        }
    }

    @discardableResult
    @inlinable
    public static func treeNodeEx(withLabel label: String, flags: ImGuiTreeNodeFlags = []) -> Bool {
        igTreeNodeEx(label, flags.rawValue)
    }

    @discardableResult
    @inlinable
    public static func treeNodeEx(withID id: String, flags: ImGuiTreeNodeFlags, format: String, _ values: CVarArg...) -> Bool {
        withVaList(values) { pointer in
            igTreeNodeExStringV(id, flags.rawValue, format, pointer)
        }
    }

    @discardableResult
    @inlinable
    public static func treeNodeEx(withID id: UnsafeRawPointer?, flags: ImGuiTreeNodeFlags, format: String, _ values: CVarArg...) -> Bool {
        withVaList(values) { pointer in
            igTreeNodeExPointerV(id, flags.rawValue, format, pointer)
        }
    }

    /// ~ Indent()+PushId(). Already called by TreeNode() when returning true, but you can call TreePush/TreePop yourself if desired.
    @inlinable
    public static func treePush(withID id: String) {
        igTreePushString(id)
    }

    /// "
    @inlinable
    public static func treePush(withID id: UnsafeRawPointer?) {
        igTreePushPointer(id)
    }

    /// ~ Unindent()+PopId()
    @inlinable
    public static func treePop() {
        igTreePop()
    }

    /// horizontal distance preceding label when using UnsafeMutablePointer<TreeNode>() or Bullet() == (g.FontSize + style.FramePadding.2: UnsafeMutablePointer<x>) for a regular unframed TreeNode
    @inlinable
    public static func getTreeNodeToLabelSpacing() -> Float {
        igGetTreeNodeToLabelSpacing()
    }

    /// if returning 'true' the header is open. doesn't indent nor push on ID stack. user doesn't have to call TreePop().
    @inlinable
    public static func collapsingHeader(withLabel label: String, flags: ImGuiTreeNodeFlags = []) -> Bool {
        igCollapsingHeader(label, flags.rawValue)
    }

    /// when 'p_open' isn't NULL, display an additional small close button on upper right of the header
    @discardableResult
    @inlinable
    public static func collapsingHeader(withLabel label: String, isVisible: inout Bool, flags: ImGuiTreeNodeFlags = []) -> Bool {
        igCollapsingHeaderCloseButton(label, &isVisible, flags.rawValue)
    }

    /// set next TreeNode/CollapsingHeader open state.
    @inlinable
    public static func setNextItemOpen(isOpen: Bool, withCondition condition: ImGuiCondition = .none) {
        igSetNextItemOpen(isOpen, condition.rawValue)
    }


    // Widgets: Selectables
    // - A selectable highlights when hovered, and can display another color when selected.
    // - Neighbors selectable extend their highlight bounds in order to leave no gap between them. This is so a series of selected Selectable appear contiguous.
    /// "bool selected" carry the selection state (read-only). Selectable() is clicked is returns true so you can modify your selection state. size.x==0.0: use remaining width, size.x>0.0: specify width. size.y==0.0: use label height, size.y>0.0: specify height
    @inlinable
    public static func selectable(withLabel label: String, isSelected: Bool = false, flags: ImGuiSelectableFlags = [], size: CImVec2 = CImVec2(x: 0, y: 0)) -> Bool {
        igSelectable(label, isSelected, flags.rawValue, size)
    }

    /// "p_selected: UnsafeMutablePointer<bool>" point to the selection state (read-write), as a convenient helper.
    @discardableResult
    @inlinable
    public static func selectable(withLabel label: String, isSelected: inout Bool, flags: ImGuiSelectableFlags = [], size: CImVec2 = CImVec2(x: 0, y: 0)) -> Bool {
        igSelectablePointer(label, &isSelected, flags.rawValue, size)
    }


    // Widgets: List Boxes
    /// open a framed scrolling region
    @inlinable
    public static func beginListBox(withLabel label: String, size: CImVec2 = .init(x: 0, y: 0)) -> Bool {
        igBeginListBox(label, size)
    }

    /// only call EndListBox() if BeginListBox() returned true!
    @inlinable
    public static func endListBox() {
        igEndListBox()
    }

    /// height in items
    @discardableResult
    @inlinable
    public static func listBox(withLabel label: String, currentItem: inout Int32, items: [String], height: Int = -1) -> Bool {
        withArrayOfCStrings(items) { pointers in
            igListBox(label, &currentItem, pointers, Int32(pointers.count), Int32(height))
        }
    }


    // Widgets: Data Plotting
    @inlinable
    public static func plotLines(withLabel label: String, values: [Float], valueOffset: Int = 0, overlayText: String? = nil, scaleMin: Float = Float.greatestFiniteMagnitude, scaleMax: Float = Float.greatestFiniteMagnitude, graphSize: CImVec2 = CImVec2(x: 0, y: 0), stride: Int = MemoryLayout<Float>.size) {
        igPlotLines(label, values, Int32(values.count), Int32(valueOffset), overlayText, scaleMin, scaleMax, graphSize, Int32(stride))
    }

    @inlinable
    public static func plotHistogram(withLabel label: String, values: [Float], valueOffset: Int = 0, overlayText: String? = nil, scaleMin: Float = Float.greatestFiniteMagnitude, scaleMax: Float = Float.greatestFiniteMagnitude, graphSize: CImVec2 = CImVec2(x: 0, y: 0), stride: Int = MemoryLayout<Float>.size) {
        igPlotHistogram(label, values, Int32(values.count), Int32(valueOffset), overlayText, scaleMin, scaleMax, graphSize, Int32(stride))
    }


    // Widgets: Value() Helpers.
    // - Those are merely shortcut to calling Text() with a format string. Output single value in "name: value" format (tip: freely declare more in your code to handle your types. you can add functions to the ImGui namespace)
    @inlinable
    public static func value(withPrefix prefix: String, value: Bool) {
        igValueBool(prefix, value)
    }

    @inlinable
    public static func value(withPrefix prefix: String, value: Int) {
        igValueInt(prefix, Int32(value))
    }

    @inlinable
    public static func value(withPrefix prefix: String, value: UInt) {
        igValueUnsigned(prefix, UInt32(value))
    }

    @inlinable
    public static func value(withPrefix prefix: String, value: Float, format: String? = nil) {
        igValueFloat(prefix, value, format)
    }


    // Widgets: Menus
    // - Use BeginMenuBar() on a window ImGuiWindowFlags_MenuBar to append to its menu bar.
    // - Use BeginMainMenuBar() to create a menu bar at the top of the screen and append to it.
    // - Use BeginMenu() to create a menu. You can call BeginMenu() multiple time with the same identifier to append more items to it.
    /// append to menu-bar of current window (requires ImGuiWindowFlags_MenuBar flag set on parent window).
    @inlinable
    public static func beginMenuBar() -> Bool {
        igBeginMenuBar()
    }

    /// only call EndMenuBar() if BeginMenuBar() returns true!
    @inlinable
    public static func endMenuBar() {
        igEndMenuBar()
    }

    /// create and append to a full screen menu-bar.
    @inlinable
    public static func beginMainMenuBar() -> Bool {
        igBeginMainMenuBar()
    }

    /// only call EndMainMenuBar() if BeginMainMenuBar() returns true!
    @inlinable
    public static func endMainMenuBar() {
        igEndMainMenuBar()
    }

    /// create a sub-menu entry. only call EndMenu() if this returns true!
    @inlinable
    public static func beginMenu(withLabel label: String, isEnabled: Bool = true) -> Bool {
        igBeginMenu(label, isEnabled)
    }

    /// only call EndMenu() if BeginMenu() returns true!
    @inlinable
    public static func endMenu() {
        igEndMenu()
    }

    /// true when activated. shortcuts are displayed for convenience but not processed by ImGui at the moment
    @inlinable
    public static func menuItem(withLabel label: String, shortcut: String? = nil, isSelected: Bool = false, isEnabled: Bool = true) -> Bool {
        igMenuItem(label, shortcut, isSelected, isEnabled)
    }

    /// true when activated + toggle (*p_selected) if p_selected != NULL
    @discardableResult
    @inlinable
    public static func menuItem(withLabel label: String, shortcut: String, isSelected: inout Bool, isEnabled: Bool = true) -> Bool {
        igMenuItemPointer(label, shortcut, &isSelected, isEnabled)
    }


    // Tooltips
    // - Tooltip are windows following the mouse which do not take focus away.
    /// begin/append a tooltip window. to create full-featured tooltip (with any kind of items).
    @inlinable
    public static func beginTooltip() {
        igBeginTooltip()
    }

    @inlinable
    public static func endTooltip() {
        igEndTooltip()
    }

    /// set a text-only tooltip, typically use with ImGui::IsItemHovered(). override any previous call to SetTooltip().
    @inlinable
    public static func setTooltip(format: String, _ values: CVarArg...) {
        withVaList(values) { pointer in
            igSetTooltipV(format, pointer)
        }
    }


    // Popups, Modals
    //  - They block normal mouse hovering detection (and therefore most mouse interactions) behind them.
    //  - If not modal: they can be closed by clicking anywhere outside them, or by pressing ESCAPE.
    //  - Their visibility state (~bool) is held internally instead of being held by the programmer as we are used to with regular Begin*() calls.
    //  - The 3 properties above are related: we need to retain popup visibility state in the library because popups may be closed as any time.
    //  - You can bypass the hovering restriction by using ImGuiHoveredFlags_AllowWhenBlockedByPopup when calling IsItemHovered() or IsWindowHovered().
    //  - IMPORTANT: Popup identifiers are relative to the current ID stack, so OpenPopup and BeginPopup generally needs to be at the same level of the stack.
    //    This is sometimes leading to confusing mistakes. May rework this in the future.
    // Popups: begin/end functions
    //  - BeginPopup(): query popup state, if open start appending into the window. Call EndPopup() afterwards. ImGuiWindowFlags are forwarded to the window.
    //  - BeginPopupModal(): block every interactions behind the window, cannot be closed by user, add a dimming background, has a title bar.
    /// true if the popup is open, and you can start outputting to it.
    @inlinable
    public static func beginPopup(withID id: String, flags: ImGuiWindowFlags = []) -> Bool {
        igBeginPopup(id, flags.rawValue)
    }

    /// true if the modal is open, and you can start outputting to it.
    @inlinable
    public static func beginPopupModal(withName name: String, flags: ImGuiWindowFlags = []) -> Bool {
        igBeginPopupModal(name, nil, flags.rawValue)
    }

    /// true if the modal is open, and you can start outputting to it.
    @inlinable
    public static func beginPopupModal(withName name: String, isOpen: inout Bool, flags: ImGuiWindowFlags = []) -> Bool {
        igBeginPopupModal(name, &isOpen, flags.rawValue)
    }

    /// only call EndPopup() if BeginPopupXXX() returns true!
    @inlinable
    public static func endPopup() {
        igEndPopup()
    }

    // Popups: open/close functions
    //  - OpenPopup(): set popup state to open. ImGuiPopupFlags are available for opening options.
    //  - If not modal: they can be closed by clicking anywhere outside them, or by pressing ESCAPE.
    //  - CloseCurrentPopup(): use inside the BeginPopup()/EndPopup() scope to close manually.
    //  - CloseCurrentPopup() is called by default by Selectable()/MenuItem() when activated (FIXME: need some options).
    //  - Use ImGuiPopupFlags_NoOpenOverExistingPopup to avoid opening a popup if there's already one at the same level. This is equivalent to e.g. testing for !IsAnyPopupOpen() prior to OpenPopup().
    /// call to mark popup as open (don't call every frame!).
    @inlinable
    public static func openPopup(withID id: String, flags: ImGuiPopupFlags = []) {
        igOpenPopup(id, flags.rawValue)
    }

    /// call to mark popup as open (don't call every frame!).
    @inlinable
    public static func openPopup(withID id: CImGuiID, flags: ImGuiPopupFlags = []) {
        igOpenPopupWithID(id, flags.rawValue)
    }

    /// helper to open popup when clicked on last item. true when just opened. (note: actually triggers on the mouse _released_ event to be consistent with popup behaviors)
    @inlinable
    public static func openPopupOnItemClick(withID id: String? = nil, flags: ImGuiPopupFlags = .mouseButtonRight) {
        igOpenPopupOnItemClick(id, flags.rawValue)
    }

    /// manually close the popup we have begin-ed into.
    @inlinable
    public static func closeCurrentPopup() {
        igCloseCurrentPopup()
    }

    // Popups: open+begin combined functions helpers
    //  - Helpers to do OpenPopup+BeginPopup where the Open action is triggered by e.g. hovering an item and right-clicking.
    //  - They are convenient to easily create context menus, hence the name.
    //  - IMPORTANT: Notice that BeginPopupContextXXX takes ImGuiPopupFlags just like OpenPopup() and unlike BeginPopup(). For full consistency, we may add ImGuiWindowFlags to the BeginPopupContextXXX functions in the future.
    //  - IMPORTANT: we exceptionally default their flags to 1 (== ImGuiPopupFlags_MouseButtonRight) for backward compatibility with older API taking 'int mouse_button = 1' parameter, so if you add other flags remember to re-add the ImGuiPopupFlags_MouseButtonRight.
    /// open+begin popup when clicked on last item. if you can pass a NULL str_id only if the previous item had an id. If you want to use that on a non-interactive item such as Text() you need to pass in an explicit ID here. read comments in .cpp!
    @inlinable
    public static func beginPopupContextItem(withID id: String? = nil, flags: ImGuiPopupFlags = .mouseButtonRight) -> Bool {
        igBeginPopupContextItem(id, flags.rawValue)
    }

    /// open+begin popup when clicked on current window.
    @inlinable
    public static func beginPopupContextWindow(withID id: String? = nil, flags: ImGuiPopupFlags = .mouseButtonRight) -> Bool {
        igBeginPopupContextWindow(id, flags.rawValue)
    }

    /// open+begin popup when clicked in void (where there are no windows).
    @inlinable
    public static func beginPopupContextVoid(withID id: String? = nil, flags: ImGuiPopupFlags = .mouseButtonRight) -> Bool {
        igBeginPopupContextVoid(id, flags.rawValue)
    }

    // Popups: test function
    //  - IsPopupOpen(): true if the popup is open at the current BeginPopup() level of the popup stack.
    //  - IsPopupOpen() with ImGuiPopupFlags_AnyPopupId: true if any popup is open at the current BeginPopup() level of the popup stack.
    //  - IsPopupOpen() with ImGuiPopupFlags_AnyPopupId + ImGuiPopupFlags_AnyPopupLevel: true if any popup is open.
    /// true if the popup is open.
    @inlinable
    public static func isPopupOpen(withID id: String, flags: ImGuiPopupFlags = []) -> Bool {
        igIsPopupOpen(id, flags.rawValue)
    }


    // Tables
    @inlinable
    public static func beginTable(withID id: String, column: Int, flags: ImGuiTableFlags = [], outerSize: CImVec2 = .init(x: 0, y: 0), innerWidth: Float = 0) -> Bool {
        igBeginTable(id, Int32(column), flags.rawValue, outerSize, innerWidth)
    }

    /// only call EndTable() if BeginTable() returns true!
    @inlinable
    public static func endTable() {
        igEndTable()
    }

    /// append into the first cell of a new row.
    @inlinable
    public static func tableNextRow(withFlags rowFlags: ImGuiTableRowFlags = [], minimumHeight: Float = 0) {
        igTableNextRow(rowFlags.rawValue, minimumHeight)
    }

    /// append into the next column (or first column of next row if currently in last column). Return true when column is visible.
    @inlinable
    public static func tableNextColumn() -> Bool {
        igTableNextColumn()
    }

    /// append into the specified column. Return true when column is visible.
    @inlinable
    public static func tableSetColumnIndex(to index: Int) -> Bool {
        igTableSetColumnIndex(Int32(index))
    }


    @inlinable
    public static func tableSetupColumn(withLabel label: String, flags: ImGuiTableColumnFlags = [], initialWidthOrWeight: Float = 0, userID: CImGuiID = 0) {
        igTableSetupColumn(label, flags.rawValue, initialWidthOrWeight, userID)
    }

    /// lock columns/rows so they stay visible when scrolled.
    @inlinable
    public static func tableSetupScrollFreeze(numberOfColumns: Int, numberOfRows: Int) {
        igTableSetupScrollFreeze(Int32(numberOfColumns), Int32(numberOfRows))
    }

    /// submit all headers cells based on data provided to TableSetupColumn() + submit context menu
    @inlinable
    public static func tableHeadersRow() {
        igTableHeadersRow()
    }

    /// submit one header cell manually (rarely used)
    @inlinable
    public static func tableHeader(withLabel label: String) {
        igTableHeader(label)
    }

    /// get latest sort specs for the table (NULL if not sorting).  Lifetime: don't hold on this pointer over multiple frames or past any subsequent call to BeginTable().
    @inlinable
    public static func tableGetSortSpecs() -> UnsafeMutablePointer<CImGuiTableSortSpecs> {
        igTableGetSortSpecs()
    }

    /// return number of columns (value passed to BeginTable)
    @inlinable
    public static func tableGetColumnCount() -> Int {
        Int(igTableGetColumnCount())
    }

    /// return current column index.
    @inlinable
    public static func tableGetColumnIndex() -> Int {
        Int(igTableGetColumnIndex())
    }

    /// return current row index.
    @inlinable
    public static func tableGetRowIndex() -> Int {
        Int(igTableGetRowIndex())
    }

    /// return "" if column didn't have a name declared by TableSetupColumn(). Pass -1 to use current column.
    @inlinable
    public static func tableGetColumnName(forIndex index: Int = -1) -> String {
        .init(cString: igTableGetColumnName(Int32(index)))
    }

    /// return column flags so you can query their Enabled/Visible/Sorted/Hovered status flags. Pass -1 to use current column.
    @inlinable
    public static func tableGetColumnFlags(forIndex index: Int = -1) -> ImGuiTableColumnFlags {
        .init(rawValue: igTableGetColumnFlags(Int32(index)))
    }

    /// change user accessible enabled/disabled state of a column. Set to false to hide the column. User can use the context menu to change this themselves (right-click in headers, or right-click in columns body with ImGuiTableFlags_ContextMenuInBody)
    @inlinable
    public static func tableSetColumnEnabled(forIndex index: Int, enabled: Bool) {
        igTableSetColumnEnabled(Int32(index), enabled)
    }

    /// change the color of a cell, row, or column. See ImGuiTableBgTarget_ flags for details.
    @inlinable
    public static func tableSetBackgroundColor(target: ImGuiTableBackgroundTarget, color: CImU32, columnIndex: Int = -1) {
        igTableSetBgColor(target.rawValue, color, Int32(columnIndex))
    }



    // Columns
    // - You can also use SameLine(pos_x) to mimic simplified columns.
    // - The columns API is work-in-progress and rather lacking (columns are arguably the worst part of dear imgui at the moment!)
    // - There is a maximum of 64 columns.
    // - Currently working on new 'Tables' api which will replace columns around Q2 2020 (see GitHub #2957).
    @inlinable
    public static func columns(count: Int = 1, withID id: String? = nil, border: Bool = true) {
        igColumns(Int32(count), id, border)
    }

    /// next column, defaults to current row or next row if the current row is finished
    @inlinable
    public static func nextColumn() {
        igNextColumn()
    }

    /// get current column index
    @inlinable
    public static func getColumnIndex() -> Int {
        Int(igGetColumnIndex())
    }

    /// get column width (in pixels). pass -1 to use current column
    @inlinable
    public static func getColumnWidth(columnIndex index: Int = -1) -> Float {
        igGetColumnWidth(Int32(index))
    }

    /// set column width (in pixels). pass -1 to use current column
    @inlinable
    public static func setColumnWidth(columnIndex index: Int, width: Float) {
        igSetColumnWidth(Int32(index), width)
    }

    /// get position of column line (in pixels, from the left side of the contents region). pass -1 to use current column, otherwise 0..GetColumnsCount() inclusive. column 0 is typically 0
    @inlinable
    public static func getColumnOffset(columnIndex index: Int = -1) -> Float {
        igGetColumnOffset(Int32(index))
    }

    /// set position of column line (in pixels, from the left side of the contents region). pass -1 to use current column
    @inlinable
    public static func setColumnOffset(columnIndex index: Int, xOffset: Float) {
        igSetColumnOffset(Int32(index), xOffset)
    }

    @inlinable
    public static func getColumnsCount() -> Int {
        Int(igGetColumnsCount())
    }


    // Tab Bars, Tabs
    // Note: Tabs are automatically created by the docking system. Use this to create tab bars/tabs yourself without docking being involved.
    /// create and append into a TabBar
    @inlinable
    public static func beginTabBar(withID id: String, flags: ImGuiTabBarFlags = []) -> Bool {
        igBeginTabBar(id, flags.rawValue)
    }

    /// only call EndTabBar() if BeginTabBar() returns true!
    @inlinable
    public static func endTabBar() {
        igEndTabBar()
    }

    /// create a Tab. Returns true if the Tab is selected.
    @inlinable
    public static func beginTabItem(withLabel label: String, flags: ImGuiTabBarFlags = []) -> Bool {
        igBeginTabItem(label, nil, flags.rawValue)
    }

    /// create a Tab. Returns true if the Tab is selected.
    @inlinable
    public static func beginTabItem(withLabel label: String, isOpen: inout Bool, flags: ImGuiTabBarFlags = []) -> Bool {
        igBeginTabItem(label, &isOpen, flags.rawValue)
    }

    /// only call EndTabItem() if BeginTabItem() returns true!
    @inlinable
    public static func endTabItem() {
        igEndTabItem()
    }

    /// create a Tab behaving like a button. true when clicked. cannot be selected in the tab bar.
    @inlinable
    public static func tabItemButton(withLabel label: String, flags: ImGuiTabItemFlags = []) -> Bool {
        igTabItemButton(label, flags.rawValue)
    }

    /// notify TabBar or Docking system of a closed tab/window ahead (useful to reduce visual flicker on reorderable tab bars). For tab-bar: call after BeginTabBar() and before Tab submissions. Otherwise call with a window name.
    @inlinable
    public static func setTabItemClosed(withTabOrDockedWindowLabel label: String) {
        igSetTabItemClosed(label)
    }


    // Docking
    // [BETA API] Enable with io.ConfigFlags |= ImGuiConfigFlags_DockingEnable.
    // Note: You can use most Docking facilities without calling any API. You DO NOT need to call DockSpace() to use Docking!
    // - To dock windows: if io.ConfigDockingWithShift == false (default) drag window from their title bar.
    // - To dock windows: if io.ConfigDockingWithShift == true: hold SHIFT anywhere while moving windows.
    // About DockSpace:
    // - Use DockSpace() to create an explicit dock node _within_ an existing window. See Docking demo for details.
    // - DockSpace() needs to be submitted _before_ any window they can host. If you use a dockspace, submit it early in your app.
    @discardableResult
    @inlinable
    public static func dockSpace(withID id: CImGuiID, size: CImVec2 = CImVec2(x: 0, y: 0), flags: ImGuiDockNodeFlags = [], windowClass: UnsafePointer<CImGuiWindowClass>? = nil) -> CImGuiID {
        igDockSpace(id, size, flags.rawValue, windowClass)
    }

    @discardableResult
    @inlinable
    public static func dockSpaceOverViewport(viewport: UnsafePointer<CImGuiViewport>? = nil, flags: ImGuiDockNodeFlags = [], windowClass: UnsafePointer<CImGuiWindowClass>? = nil) -> CImGuiID {
        igDockSpaceOverViewport(viewport, flags.rawValue, windowClass)
    }

    /// set next window dock id (FIXME-DOCK)
    @inlinable
    public static func setNextWindowDockID(to id: CImGuiID, withCondition condition: ImGuiCondition = .none) {
        igSetNextWindowDockID(id, condition.rawValue)
    }

    /// set next window class (rare/advanced uses: provide hints to the platform back-end via altered viewport flags and parent/child info)
    @inlinable
    public static func setNextWindowClass(to windowClass: UnsafePointer<CImGuiWindowClass>) {
        igSetNextWindowClass(windowClass)
    }

    @inlinable
    public static func getWindowDockID() -> CImGuiID {
        igGetWindowDockID()
    }

    /// is current window docked into another window?
    @inlinable
    public static func isWindowDocked() -> Bool {
        igIsWindowDocked()
    }


    // Logging/Capture
    // - All text output from the interface can be captured into tty/file/clipboard. By default, tree nodes are automatically opened during logging.
    /// start logging to tty (stdout)
    @inlinable
    public static func logToTTY(autoOpenDepth: Int = -1) {
        igLogToTTY(Int32(autoOpenDepth))
    }

    /// start logging to file
    @inlinable
    public static func logToFile(autoOpenDepth: Int = -1, filename: String? = nil) {
        igLogToFile(Int32(autoOpenDepth), filename)
    }

    /// start logging to OS clipboard
    @inlinable
    public static func logToClipboard(autoOpenDepth: Int = -1) {
        igLogToClipboard(Int32(autoOpenDepth))
    }

    /// stop logging (close file, etc.)
    @inlinable
    public static func logFinish() {
        igLogFinish()
    }

    /// helper to display buttons for logging to tty/file/clipboard
    @inlinable
    public static func logButtons() {
        igLogButtons()
    }


    // Drag and Drop
    // - [BETA API] API may evolve!
    // - If you stop calling BeginDragDropSource() the payload is preserved however it won't have a preview tooltip (we currently display a fallback "..." tooltip as replacement)
    /// call when the current item is active. If this true, you can call SetDragDropPayload() + EndDragDropSource()
    @inlinable
    public static func beginDragDropSource(withFlags flags: ImGuiDragDropFlags = []) -> Bool {
        igBeginDragDropSource(flags.rawValue)
    }

    /// type is a user defined string of maximum 32 characters. Strings starting with '_' are reserved for dear imgui internal types. Data is copied and held by imgui.
    @discardableResult
    @inlinable
    public static func setDragDropPayload<T>(withTypeString type: String, value: T, condition: ImGuiCondition = .none) -> Bool {
        withUnsafeBytes(of: value) { buffer in
            igSetDragDropPayload(type, UnsafeMutableRawPointer(mutating: buffer.baseAddress), MemoryLayout<T>.size, condition.rawValue)
        }
    }

    /// only call EndDragDropSource() if BeginDragDropSource() returns true!
    @inlinable
    public static func endDragDropSource() {
        igEndDragDropSource()
    }

    /// call after submitting an item that may receive a payload. If this returns true, you can call AcceptDragDropPayload() + EndDragDropTarget()
    @inlinable
    public static func beginDragDropTarget() -> Bool {
        igBeginDragDropTarget()
    }

    /// accept contents of a given type. If ImGuiDragDropFlags_AcceptBeforeDelivery is set you can peek into the payload before the mouse button is released.
    @inlinable
    public static func acceptDragDropPayload(withTypeString type: String, flags: ImGuiDragDropFlags = []) -> UnsafePointer<CImGuiPayload>? {
        igAcceptDragDropPayload(type, flags.rawValue)
    }

    /// only call EndDragDropTarget() if BeginDragDropTarget() returns true!
    @inlinable
    public static func endDragDropTarget() {
        igEndDragDropTarget()
    }

    /// peek directly into the current payload from anywhere. may NULL. use ImGuiPayload::IsDataType() to test for the payload type.
    @inlinable
    public static func getDragDropPayload() -> UnsafePointer<CImGuiPayload>? {
        igGetDragDropPayload()
    }


    @inlinable
    public static func beginDisabled(isDisabled: Bool = true) {
        igBeginDisabled(isDisabled)
    }

    @inlinable
    public static func endDisabled() {
        igEndDisabled()
    }


    // Clipping
    @inlinable
    public static func pushClipRect(withMin min: CImVec2, max: CImVec2, intersectWithCurrentClipRect: Bool) {
        igPushClipRect(min, max, intersectWithCurrentClipRect)
    }

    @inlinable
    public static func popClipRect() {
        igPopClipRect()
    }


    // Focus, Activation
    // - Prefer using "SetItemDefaultFocus()" over "if (IsWindowAppearing()) SetScrollHereY()" when applicable to signify "this is the default item"
    /// make last item the default focused item of a window.
    @inlinable
    public static func setItemDefaultFocus() {
        igSetItemDefaultFocus()
    }

    /// focus keyboard on the next widget. Use positive 'offset' to access sub components of a multiple component widget. Use -1 to access previous widget.
    @inlinable
    public static func setKeyboardFocusHere(withOffset offset: Int = 0) {
        igSetKeyboardFocusHere(Int32(offset))
    }


    // Item/Widgets Utilities
    // - Most of the functions are referring to the last/previous item we submitted.
    // - See Demo Window under "Widgets->Querying Status" for an interactive visualization of most of those functions.
    /// is the last item hovered? (and usable, aka not blocked by a popup, etc.). See ImGuiHoveredFlags for more options.
    @inlinable
    public static func isItemHovered(withFlags flags: ImGuiHoveredFlags = []) -> Bool {
        igIsItemHovered(flags.rawValue)
    }

    /// is the last item active? (e.g. button being held, text field being edited. This will continuously true while holding mouse button on an item. Items that don't interact will always false)
    @inlinable
    public static func isItemActive() -> Bool {
        igIsItemActive()
    }

    /// is the last item focused for keyboard/gamepad navigation?
    @inlinable
    public static func isItemFocused() -> Bool {
        igIsItemFocused()
    }

    /// is the last item clicked? (e.g. button/node just clicked on) == IsMouseClicked(mouse_button) && IsItemHovered()
    @inlinable
    public static func isItemClicked(withMouseButton mouseButton: ImGuiMouseButton = .left) -> Bool {
        igIsItemClicked(mouseButton.rawValue)
    }

    /// is the last item visible? (items may be out of sight because of clipping/scrolling)
    @inlinable
    public static func isItemVisible() -> Bool {
        igIsItemVisible()
    }

    /// did the last item modify its underlying value this frame? or was pressed? This is generally the same as the "bool" value of many widgets.
    @inlinable
    public static func isItemEdited() -> Bool {
        igIsItemEdited()
    }

    /// was the last item just made active (item was previously inactive).
    @inlinable
    public static func isItemActivated() -> Bool {
        igIsItemActivated()
    }

    /// was the last item just made inactive (item was previously active). Useful for Undo/Redo patterns with widgets that requires continuous editing.
    @inlinable
    public static func isItemDeactivated() -> Bool {
        igIsItemDeactivated()
    }

    /// was the last item just made inactive and made a value change when it was active? (e.g. Slider/Drag moved). Useful for Undo/Redo patterns with widgets that requires continuous editing. Note that you may get false positives (some widgets such as Combo()/ListBox()/Selectable() will true even when clicking an already selected item).
    @inlinable
    public static func isItemDeactivatedAfterEdit() -> Bool {
        igIsItemDeactivatedAfterEdit()
    }

    /// was the last item open state toggled? set by TreeNode().
    @inlinable
    public static func isItemToggledOpen() -> Bool {
        igIsItemToggledOpen()
    }

    /// is any item hovered?
    @inlinable
    public static func isAnyItemHovered() -> Bool {
        igIsAnyItemHovered()
    }

    /// is any item active?
    @inlinable
    public static func isAnyItemActive() -> Bool {
        igIsAnyItemActive()
    }

    /// is any item focused?
    @inlinable
    public static func isAnyItemFocused() -> Bool {
        igIsAnyItemFocused()
    }

    /// get upper-left bounding rectangle of the last item (screen space)
    @inlinable
    public static func getItemRectMin() -> CImVec2 {
        igGetItemRectMin()
    }

    /// get lower-right bounding rectangle of the last item (screen space)
    @inlinable
    public static func getItemRectMax() -> CImVec2 {
        igGetItemRectMax()
    }

    /// get size of last item
    @inlinable
    public static func getItemRectSize() -> CImVec2 {
        igGetItemRectSize()
    }

    /// allow last item to be overlapped by a subsequent item. sometimes useful with invisible buttons, selectables, etc. to catch unused area.
    @inlinable
    public static func setItemAllowOverlap() {
        igSetItemAllowOverlap()
    }


    /// main viewport. same as GetPlatformIO().MainViewport == GetPlatformIO().Viewports[0].
    @inlinable
    public static func getMainViewport() -> UnsafeMutablePointer<CImGuiViewport> {
        igGetMainViewport()
    }

    /// get background draw list for the viewport associated to the current window. this draw list will be the first rendering one. Useful to quickly draw shapes/text behind dear imgui contents.
    @inlinable
    public static func getBackgroundDrawList() -> UnsafeMutablePointer<CImDrawList> {
        igGetBackgroundDrawList()
    }

    /// get foreground draw list for the viewport associated to the current window. this draw list will be the last rendered one. Useful to quickly draw shapes/text over dear imgui contents.
    @inlinable
    public static func getForegroundDrawList() -> UnsafeMutablePointer<CImDrawList> {
        igGetForegroundDrawList()
    }

    /// get background draw list for the given viewport. this draw list will be the first rendering one. Useful to quickly draw shapes/text behind dear imgui contents.
    @inlinable
    public static func getBackgroundDrawList(forViewport viewport: UnsafeMutablePointer<CImGuiViewport>) -> UnsafeMutablePointer<CImDrawList> {
        igGetBackgroundDrawListViewport(viewport)
    }

    /// get foreground draw list for the given viewport. this draw list will be the last rendered one. Useful to quickly draw shapes/text over dear imgui contents.
    @inlinable
    public static func getForegroundDrawList(forViewport viewport: UnsafeMutablePointer<CImGuiViewport>) -> UnsafeMutablePointer<CImDrawList> {
        igGetForegroundDrawListViewport(viewport)
    }


    // Miscellaneous Utilities
    /// test if rectangle (of given size, starting from cursor position) is visible / not clipped.
    @inlinable
    public static func isRectVisible(withSize size: CImVec2) -> Bool {
        igIsRectWithSizeVisible(size)
    }

    /// test if rectangle (in screen space) is visible / not clipped. to perform coarse clipping on user's side.
    @inlinable
    public static func isRectVisible(withMin min: CImVec2, max: CImVec2) -> Bool {
        igIsRectVisible(min, max)
    }

    /// get global imgui time. incremented by io.DeltaTime every frame.
    @inlinable
    public static func getTime() -> Double {
        igGetTime()
    }

    /// get global imgui frame count. incremented by 1 every frame.
    @inlinable
    public static func getFrameCount() -> Int {
        Int(igGetFrameCount())
    }

    /// you may use this when creating your own ImDrawList instances.
    @inlinable
    public static func getDrawListSharedData() -> UnsafeMutablePointer<CImDrawListSharedData> {
        igGetDrawListSharedData()
    }

    /// get a string corresponding to the enum value (for display, saving, etc.).
    @inlinable
    public static func getStyleColorName(withIndex index: ImGuiColor) -> String {
        .init(cString: igGetStyleColorName(index.rawValue))
    }

    /// replace current window storage with our own (if you want to manipulate it yourself, typically clear subsection of it)
    @inlinable
    public static func setStateStorage(to storage: UnsafeMutablePointer<CImGuiStorage>) {
        igSetStateStorage(storage)
    }

    @inlinable
    public static func getStateStorage() -> UnsafeMutablePointer<CImGuiStorage> {
        igGetStateStorage()
    }

    /// helper to create a child window / scrolling region that looks like a normal widget frame
    @inlinable
    public static func beginChildFrame(withID id: CImGuiID, size: CImVec2, flags: ImGuiWindowFlags = []) -> Bool {
        igBeginChildFrame(id, size, flags.rawValue)
    }

    /// always call EndChildFrame() regardless of BeginChildFrame() values (which indicates a collapsed/clipped window)
    @inlinable
    public static func endChildFrame() {
        igEndChildFrame()
    }


    // Text Utilities
    @inlinable
    public static func calculateTextSize(text: String, hideTextAfterDoubleHash: Bool = false, wrapWidth: Float = -1) -> CImVec2 {
        igCalcTextSize(text, nil, hideTextAfterDoubleHash, wrapWidth)
    }


    // Color Utilities
    @inlinable
    public static func colorConvertU32ToFloat4(_ color: CImU32) -> CImVec4 {
        igColorConvertU32ToFloat4(color)
    }

    @inlinable
    public static func colorConvertFloat4ToU32(_ color: CImVec4) -> CImU32 {
        igColorConvertFloat4ToU32(color)
    }

    @inlinable
    public static func colorConvertRGBtoHSV(r: Float, g: Float, b: Float) -> (h: Float, s: Float, v: Float) {
        var h: Float = 0, s: Float = 0, v: Float = 0

        igColorConvertRGBtoHSV(r, g, b, &h, &s, &v)

        return (h, s, v)
    }

    @inlinable
    public static func colorConvertHSVtoRGB(h: Float, s: Float, v: Float) -> (r: Float, g: Float, b: Float) {
        var r: Float = 0, g: Float = 0, b: Float = 0

        igColorConvertHSVtoRGB(h, s, v, &r, &g, &b)

        return (r, g, b)
    }


    // Inputs Utilities: Keyboard
    // - For 'int user_key_index' you can use your own indices/enums according to how your back-end/engine stored them in io.KeysDown[].
    // - We don't know the meaning of those value. You can use GetKeyIndex() to map a ImGuiKey_ value into the user index.
    /// is key being held. == io.KeysDown[user_key_index].
    @inlinable
    public static func isKeyDown(_ key: ImGuiKey) -> Bool {
        igIsKeyDown(key.rawValue)
    }

    /// was key pressed (went from !Down to Down)? if repeat=true, uses io.KeyRepeatDelay / KeyRepeatRate
    @inlinable
    public static func isKeyPressed(_ key: ImGuiKey, repeat: Bool = true) -> Bool {
        igIsKeyPressed(key.rawValue, `repeat`)
    }

    /// was key released (went from Down to !Down)?
    @inlinable
    public static func isKeyReleased(_ key: ImGuiKey) -> Bool {
        igIsKeyReleased(key.rawValue)
    }

    /// uses provided repeat rate/delay. a count, most often 0 or 1 but might be >1 if RepeatRate is small enough that DeltaTime > RepeatRate
    @inlinable
    public static func getKeyPressedAmount(_ key: ImGuiKey, repeatDelay: Float, rate: Float) -> Int {
        Int(igGetKeyPressedAmount(key.rawValue, repeatDelay, rate))
    }

    /// [DEBUG] returns English name of the key. Those names a provided for debugging purpose and are not meant to be saved persistently not compared.
    @inlinable
    public static func getKeyName(_ key: ImGuiKey) -> String {
        .init(cString: igGetKeyName(key.rawValue))
    }

    /// Override io.WantCaptureKeyboard flag next frame (said flag is left for your application to handle, typically when true it instructs your app to ignore inputs). e.g. force capture keyboard when your widget is being hovered. This is equivalent to setting "io.WantCaptureKeyboard = want_capture_keyboard"; after the next NewFrame() call.
    @inlinable
    public static func setNextFrame(wantCaptureKeyboard: Bool) {
        igSetNextFrameWantCaptureKeyboard(wantCaptureKeyboard)
    }


    // Inputs Utilities: Mouse
    // - To refer to a mouse button, you may use named enums in your code e.g. ImGuiMouseButton_Left, ImGuiMouseButton_Right.
    // - You can also use regular integer: it is forever guaranteed that 0=Left, 1=Right, 2=Middle.
    // - Dragging operations are only reported after mouse has moved a certain distance away from the initial clicking position (see 'lock_threshold' and 'io.MouseDraggingThreshold')
    /// is mouse button held?
    @inlinable
    public static func isMouseDown(withButton button: ImGuiMouseButton) -> Bool {
        igIsMouseDown(button.rawValue)
    }

    /// did mouse button clicked? (went from !Down to Down)
    @inlinable
    public static func isMouseClicked(withButton button: ImGuiMouseButton, repeat: Bool = false) -> Bool {
        igIsMouseClicked(button.rawValue, `repeat`)
    }

    /// did mouse button released? (went from Down to !Down)
    @inlinable
    public static func isMouseReleased(withButton button: ImGuiMouseButton) -> Bool {
        igIsMouseReleased(button.rawValue)
    }

    /// did mouse button double-clicked? (note that a double-click will also report IsMouseClicked() == true)
    @inlinable
    public static func isMouseDoubleClicked(withButton button: ImGuiMouseButton) -> Bool {
        igIsMouseDoubleClicked(button.rawValue)
    }

    /// return the number of successive mouse-clicks at the time where a click happen (otherwise 0).
    @inlinable
    public static func getMouseClickedCount(forButton button: ImGuiMouseButton) -> Int {
        Int(igGetMouseClickedCount(button.rawValue))
    }

    /// is mouse hovering given bounding rect (in screen space). clipped by current clipping settings, but disregarding of other consideration of focus/window ordering/popup-block.
    @inlinable
    public static func isMouseHoveringRect(withMin min: CImVec2, max: CImVec2, clip: Bool = true) -> Bool {
        igIsMouseHoveringRect(min, max, clip)
    }

    /// by convention we use (-FLT_MAX,-FLT_MAX) to denote that there is no mouse available
    @inlinable
    public static func isMousePositionValid(customMousePosition mousePosition: UnsafePointer<CImVec2>? = nil) -> Bool {
        igIsMousePosValid(mousePosition)
    }

    /// is any mouse button held?
    @inlinable
    public static func isAnyMouseDown() -> Bool {
        igIsAnyMouseDown()
    }

    /// shortcut to ImGui::GetIO().MousePos provided by user, to be consistent with other calls
    @inlinable
    public static func getMousePosition() -> CImVec2 {
        igGetMousePos()
    }

    /// retrieve mouse position at the time of opening popup we have BeginPopup() into (helper to avoid user backing that value themselves)
    @inlinable
    public static func getMousePositionOnOpeningCurrentPopup() -> CImVec2 {
        igGetMousePosOnOpeningCurrentPopup()
    }

    /// is mouse dragging? (if lock_threshold < -1, uses io.MouseDraggingThreshold)
    @inlinable
    public static func isMouseDragging(withButton button: ImGuiMouseButton, lockThreshold: Float = -1) -> Bool {
        igIsMouseDragging(button.rawValue, lockThreshold)
    }

    /// the delta from the initial clicking position while the mouse button is pressed or was just released. This is locked and 0 until the mouse moves past a distance threshold at least once (if lock_threshold < -1, uses io.MouseDraggingThreshold)
    @inlinable
    public static func getMouseDragDelta(withButton button: ImGuiMouseButton = .left, lockThreshold: Float = -1) -> CImVec2 {
        igGetMouseDragDelta(button.rawValue, lockThreshold)
    }

    @inlinable
    public static func resetMouseDragDelta(withButton button: ImGuiMouseButton = .left) {
        igResetMouseDragDelta(button.rawValue)
    }
                   //
    /// get desired cursor type, reset in ImGui::NewFrame(), this is updated during the frame. valid before Render(). If you use software rendering by setting io.MouseDrawCursor ImGui will render those for you
    @inlinable
    public static func getMouseCursor() -> ImGuiMouseCursor {
        ImGuiMouseCursor(rawValue: igGetMouseCursor()) ?? .none
    }

    /// set desired cursor type
    @inlinable
    public static func setMouseCursor(to cursorType: ImGuiMouseCursor) {
        igSetMouseCursor(cursorType.rawValue)
    }

    /// attention: misleading name! manually override io.WantCaptureMouse flag next frame (said flag is entirely left for your application to handle). This is equivalent to setting "io.WantCaptureMouse = want_capture_mouse_value;" after the next NewFrame() call.
    @inlinable
    public static func setNextFrame(wantCaptureMouse: Bool) {
        igSetNextFrameWantCaptureMouse(wantCaptureMouse)
    }


    // Clipboard Utilities
    // - Also see the LogToClipboard() function to capture GUI into clipboard, or easily output text data to the clipboard.
    @inlinable
    public static func getClipboardText() -> String {
        .init(cString: igGetClipboardText())
    }

    @inlinable
    public static func setClipboardText(to text: String) {
        igSetClipboardText(text)
    }


    // Settings/.Ini Utilities
    // - The disk functions are automatically called if io.IniFilename != NULL (default is "imgui.ini").
    // - Set io.IniFilename to NULL to load/save manually. Read io.WantSaveIniSettings description about handling .ini saving manually.
    /// call after CreateContext() and before the first call to NewFrame(). NewFrame() automatically calls LoadIniSettingsFromDisk(io.IniFilename).
    @inlinable
    public static func loadIniSettingsFromDisk(iniFilename: String) {
        igLoadIniSettingsFromDisk(iniFilename)
    }

    /// call after CreateContext() and before the first call to NewFrame() to provide .ini data from your own data source.
    @inlinable
    public static func loadIniSettingsFromMemory(iniData: String) {
        igLoadIniSettingsFromMemory(iniData, iniData.utf8.count)
    }

    /// this is automatically called (if io.IniFilename is not empty) a few seconds after any modification that should be reflected in the .ini file (and also by DestroyContext).
    @inlinable
    public static func saveIniSettingsToDisk(iniFilename: String) {
        igSaveIniSettingsToDisk(iniFilename)
    }

    /// a zero-terminated string with the .ini data which you can save by your own mean. call when io.WantSaveIniSettings is set, then save data by your own mean and clear io.WantSaveIniSettings.
    @inlinable
    public static func saveIniSettingsToMemory() -> String {
        .init(cString: igSaveIniSettingsToMemory(nil))
    }


    // (Optional) Platform/OS interface for multi-viewport support
    // Read comments around the ImGuiPlatformIO structure for more details.
    // Note: You may use GetWindowViewport() to get the current viewport of the current window.
    /// platform/renderer functions, for back-end to setup + viewports list.
    @inlinable
    public static func getPlatformIO() -> UnsafeMutablePointer<CImGuiPlatformIO> {
        igGetPlatformIO()
    }

    /// call in main loop. will call CreateWindow/ResizeWindow/etc. platform functions for each secondary viewport, and DestroyWindow for each inactive viewport.
    @inlinable
    public static func updatePlatformWindows() {
        igUpdatePlatformWindows()
    }

    /// call in main loop. will call RenderWindow/SwapBuffers platform functions for each secondary viewport which doesn't have the ImGuiViewportFlags_Minimized flag set. May be reimplemented by user for custom rendering needs.
    @inlinable
    public static func renderPlatformWindowsDefault(platformRenderArg: Any? = nil, rendererRenderArg: Any? = nil) {
        var platformRenderArg = platformRenderArg
        var rendererRenderArg = rendererRenderArg

        igRenderPlatformWindowsDefault(&platformRenderArg, &rendererRenderArg)
    }

    /// call DestroyWindow platform functions for all viewports. call from back-end Shutdown() if you need to close platform windows before imgui shutdown. otherwise will be called by DestroyContext().
    @inlinable
    public static func destroyPlatformWindows() {
        igDestroyPlatformWindows()
    }

    /// this is a helper for back-ends.
    @inlinable
    public static func findViewportByID(_ id: CImGuiID) -> UnsafeMutablePointer<CImGuiViewport>? {
        igFindViewportByID(id)
    }

    /// this is a helper for back-ends. the type platform_handle is decided by the back-end (e.g. HWND, UnsafeMutablePointer<MyWindow>, etc: UnsafeMutablePointer<GLFWwindow>.)
    @inlinable
    public static func findViewportByPlatformHandle(_ platformHandle: UnsafeMutableRawPointer) -> UnsafeMutablePointer<CImGuiViewport>? {
        igFindViewportByPlatformHandle(platformHandle)
    }
}
