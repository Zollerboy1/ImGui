import cImGui
@_exported import cImGuiImpl

public enum ImGui {
    @discardableResult
    public static func createContext(withFontAtlas fontAtlas: UnsafeMutablePointer<CImFontAtlas>? = nil) -> ImGuiContext {
        .init(pointer: igCreateContext(fontAtlas))
    }

    public static func destroyContext(_ context: ImGuiContext? = nil) {
        igDestroyContext(context?.pointer)
    }

    public static func getCurrentContext() -> ImGuiContext {
        .init(pointer: igGetCurrentContext())
    }

    public static func setCurrentContext(to context: ImGuiContext) {
        igSetCurrentContext(context.pointer)
    }

    public static func checkVersion() -> Bool {
        igCheckVersion()
    }

    /// access the IO structure (mouse/keyboard/gamepad inputs, time, various configuration options/flags)
    public static func getIO() -> UnsafeMutablePointer<CImGuiIO> {
        igGetIO()
    }

    /// access the Style structure (colors, sizes). Always use PushStyleCol(), PushStyleVar() to modify style mid-frame!
    public static func getStyle() -> UnsafeMutablePointer<CImGuiStyle> {
        igGetStyle()
    }

    /// start a new Dear ImGui frame, you can submit any command from this point until Render()/EndFrame().
    public static func newFrame() {
        igNewFrame()
    }

    /// ends the Dear ImGui frame. automatically called by Render(). If you don't need to render data (skipping rendering) you may call EndFrame() without Render()... but you'll have wasted CPU already! If you don't need to render, better to not create any windows and not call NewFrame() at all!
    public static func endFrame() {
        igEndFrame()
    }

    /// ends the Dear ImGui frame, finalize the draw data. You can get call GetDrawData() to obtain it and run your rendering function (up to v1.60, this used to call io.RenderDrawListsFn(). Nowadays, we allow and prefer calling your render function yourself.)
    public static func render() {
        igRender()
    }

    /// valid after Render() and until the next call to NewFrame(). this is what you have to render.
    public static func getDrawData() -> UnsafeMutablePointer<CImDrawData> {
        igGetDrawData()
    }


    // Demo, Debug, Information
    /// create Demo window (previously called ShowTestWindow). demonstrate most ImGui features. call this to learn about the library! try to make it always available in your application!
    public static func showDemoWindow(isOpen: inout Bool) {
        igShowDemoWindow(&isOpen)
    }

    /// create Demo window (previously called ShowTestWindow). demonstrate most ImGui features. call this to learn about the library! try to make it always available in your application!
    public static func showDemoWindow() {
        igShowDemoWindow(nil)
    }

    /// create About window. display Dear ImGui version, credits and build/system information.
    public static func showAboutWindow(isOpen: inout Bool) {
        igShowAboutWindow(&isOpen)
    }

    /// create About window. display Dear ImGui version, credits and build/system information.
    public static func showAboutWindow() {
        igShowAboutWindow(nil)
    }

    /// create Debug/Metrics window. display Dear ImGui internals: draw commands (with individual draw calls and vertices), window list, basic internal state, etc.
    public static func showMetricsWindow(isOpen: inout Bool) {
        igShowMetricsWindow(&isOpen)
    }

    /// create Debug/Metrics window. display Dear ImGui internals: draw commands (with individual draw calls and vertices), window list, basic internal state, etc.
    public static func showMetricsWindow() {
        igShowMetricsWindow(nil)
    }

    /// add style editor block (not a window). you can pass in a reference ImGuiStyle structure to compare to, revert to and save to (else it uses the default style)
    public static func showStyleEditor(referencingStyle style: UnsafeMutablePointer<CImGuiStyle>? = nil) {
        igShowStyleEditor(style)
    }

    /// add style selector block (not a window), essentially a combo listing the default styles.
    @discardableResult
    public static func showStyleSelector(withLabel label: String) -> Bool {
        igShowStyleSelector(label)
    }

    /// add font selector block (not a window), essentially a combo listing the loaded fonts.
    public static func showFontSelector(withLabel label: String) {
        igShowFontSelector(label)
    }

    /// add basic help/info block (not a window): how to manipulate ImGui as a end-user (mouse/keyboard controls).
    public static func showUserGuide() {
        igShowUserGuide()
    }

    /// get the compiled version string e.g. "1.23" (essentially the compiled value for IMGUI_VERSION)
    public static func getVersion() -> String {
        String(cString: igGetVersion())
    }


    // Styles
    /// new, recommended style (default)
    public static func styleColorsDark(of style: UnsafeMutablePointer<CImGuiStyle>? = nil) {
        igStyleColorsDark(style)
    }

    /// classic imgui style
    public static func styleColorsClassic(of style: UnsafeMutablePointer<CImGuiStyle>? = nil) {
        igStyleColorsClassic(style)
    }

    /// best used with borders and a custom, thicker font
    public static func styleColorsLight(of style: UnsafeMutablePointer<CImGuiStyle>? = nil) {
        igStyleColorsLight(style)
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
    public static func begin(withName name: String, isOpen: inout Bool, withFlags flags: CImGuiWindowFlags = 0) -> Bool {
        igBegin(name, &isOpen, flags)
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
    public static func begin(withName name: String, flags: CImGuiWindowFlags = 0) -> Bool {
        igBegin(name, nil, flags)
    }

    /// - pop window from the stack.
    /// - You may append multiple times to the same window during the same frame by calling begin()/end() pairs multiple times.
    /// - Always call a matching end() for each begin() call, regardless of its value!
    ///   [Important: due to legacy reason, this is inconsistent with most other functions such as BeginMenu/EndMenu,
    ///    BeginPopup/EndPopup, etc. where the EndXXX call should only be called if the corresponding BeginXXX function
    ///    returned true. Begin and BeginChild are the only odd ones out. Will be fixed in a future update.]
    /// - Note that the bottom of window stack always contains a window called "Debug".
    public static func end() {
        igEnd()
    }


    // Child Windows
    /// - Use child windows to begin into a self-contained independent scrolling/clipping regions within a host window. Child windows can embed their own child.
    /// - For each independent axis of 'size': ==0: use remaining host window size / >0: fixed size / <0: use remaining window size minus abs(size) / Each axis can use a different mode, e.g. ImVec2(0,400).
    /// - BeginChild() returns false to indicate the window is collapsed or fully clipped, so you may early out and omit submitting anything to the window.
    ///   Always call a matching EndChild() for each BeginChild() call, regardless of its value [as with Begin: this is due to legacy reason and inconsistent with most BeginXXX functions apart from the regular Begin() which behaves like BeginChild().]
    @discardableResult
    public static func beginChild(withID id: String, size: CImVec2 = CImVec2(x: 0, y: 0), hasBorder: Bool = false, withFlags flags: CImGuiWindowFlags = 0) -> Bool {
        igBeginChild(id, size, hasBorder, flags)
    }

    /// - Use child windows to begin into a self-contained independent scrolling/clipping regions within a host window. Child windows can embed their own child.
    /// - For each independent axis of 'size': ==0: use remaining host window size / >0: fixed size / <0: use remaining window size minus abs(size) / Each axis can use a different mode, e.g. ImVec2(0,400).
    /// - BeginChild() returns false to indicate the window is collapsed or fully clipped, so you may early out and omit submitting anything to the window.
    ///   Always call a matching EndChild() for each BeginChild() call, regardless of its value [as with Begin: this is due to legacy reason and inconsistent with most BeginXXX functions apart from the regular Begin() which behaves like BeginChild().]
    public static func beginChild(withID id: CImGuiID, size: CImVec2 = CImVec2(x: 0, y: 0), hasBorder: Bool = false, withFlags flags: CImGuiWindowFlags = 0) -> Bool {
        igBeginChildWithID(id, size, hasBorder, flags)
    }

    /// - Use child windows to begin into a self-contained independent scrolling/clipping regions within a host window. Child windows can embed their own child.
    /// - For each independent axis of 'size': ==0: use remaining host window size / >0: fixed size / <0: use remaining window size minus abs(size) / Each axis can use a different mode, e.g. ImVec2(0,400).
    /// - Always call a matching EndChild() for each BeginChild() call, regardless of its value [as with Begin: this is due to legacy reason and inconsistent with most BeginXXX functions apart from the regular Begin() which behaves like BeginChild().]
    public static func endChild() {
        igEndChild()
    }


    // Windows Utilities
    /// - 'current window' = the window we are appending into while inside a Begin()/End() block. 'next window' = next window we will Begin() into.
    public static func isWindowAppearing() -> Bool {
        igIsWindowAppearing()
    }

    /// - 'current window' = the window we are appending into while inside a Begin()/End() block. 'next window' = next window we will Begin() into.
    public static func isWindowCollapsed() -> Bool {
        igIsWindowCollapsed()
    }

    /// is current window focused? or its root/child, depending on flags. see flags for options.
    public static func isWindowFocused(withFlags flags: CImGuiFocusedFlags = 0) -> Bool {
        igIsWindowFocused(flags)
    }

    /// is current window hovered (and typically: not blocked by a popup/modal)? see flags for options. NB: If you are trying to check whether your mouse should be dispatched to imgui or to your app, you should use the 'io.WantCaptureMouse' boolean for that! Please read the FAQ!
    public static func isWindowHovered(withFlags flags: CImGuiHoveredFlags = 0) -> Bool {
        igIsWindowHovered(flags)
    }

    /// get draw list associated to the current window, to append your own drawing primitives
    public static func getWindowDrawList() -> UnsafeMutablePointer<CImDrawList> {
        igGetWindowDrawList()
    }

    /// get DPI scale currently associated to the current window's viewport.
    public static func getWindowDpiScale() -> Float {
        igGetWindowDpiScale()
    }

    /// get viewport currently associated to the current window.
    public static func getWindowViewport() -> UnsafeMutablePointer<CImGuiViewport> {
        igGetWindowViewport()
    }

    /// get current window position in screen space (useful if you want to do your own drawing via the DrawList API)
    public static func getWindowPos() -> CImVec2 {
        igGetWindowPos()
    }

    /// get current window size
    public static func getWindowSize() -> CImVec2 {
        igGetWindowSize()
    }

    /// get current window width (shortcut for GetWindowSize().x)
    public static func getWindowWidth() -> Float {
        igGetWindowWidth()
    }

    /// get current window height (shortcut for GetWindowSize().y)
    public static func getWindowHeight() -> Float {
        igGetWindowHeight()
    }


    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window position. call before Begin(). use pivot=(0.5f,0.5f) to center on given point, etc.
    public static func setNextWindowPosition(to position: CImVec2, withCondition condition: CImGuiCond = 0, pivot: CImVec2 = CImVec2(x: 0, y: 0)) {
        igSetNextWindowPos(position, condition, pivot)
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window size. set axis to 0 to force an auto-fit on this axis. call before Begin()
    public static func setNextWindowSize(to size: CImVec2, withCondition condition: CImGuiCond = 0) {
        igSetNextWindowSize(size, condition)
    }

    private class SizeCallbackHolder {
        let callback: (ImGuiSizeCallbackData) -> ()

        init(callback:  @escaping (ImGuiSizeCallbackData) -> ()) {
            self.callback = callback
        }
    }

    private class CustomSizeCallbackHolder {
        let callback: (ImGuiCustomSizeCallbackData) -> ()
        let userData: Any

        init(callback:  @escaping (ImGuiCustomSizeCallbackData) -> (), userData: Any) {
            self.callback = callback
            self.userData = userData
        }
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window size limits. use -1,-1 on either X/Y axis to preserve the current size. Sizes will be rounded down. Use callback to apply non-trivial programmatic constraints.
    public static func setNextWindowSizeConstraints(min: CImVec2, max: CImVec2) {
        igSetNextWindowSizeConstraints(min, max, nil, nil)
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window size limits. use -1,-1 on either X/Y axis to preserve the current size. Sizes will be rounded down. Use callback to apply non-trivial programmatic constraints.
    public static func setNextWindowSizeConstraints(min: CImVec2, max: CImVec2, withCustomCallback callback: (ImGuiSizeCallbackData) -> ()) {
        withoutActuallyEscaping(callback) {
            let callbackHolder = SizeCallbackHolder(callback: $0)

            let callbackHolderPointer = Unmanaged.passRetained(callbackHolder).toOpaque()

            igSetNextWindowSizeConstraints(min, max, { (dataPointer: UnsafeMutablePointer<CImGuiSizeCallbackData>!) in
                let callbackHolder = Unmanaged<SizeCallbackHolder>.fromOpaque(dataPointer[\.UserData].pointee).takeRetainedValue()

                let data = ImGuiSizeCallbackData(position: dataPointer[\.Pos].pointee, currentSize: dataPointer[\.CurrentSize].pointee, _desiredSize: dataPointer[\.DesiredSize])

                callbackHolder.callback(data)
            }, callbackHolderPointer)
        }
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window size limits. use -1,-1 on either X/Y axis to preserve the current size. Sizes will be rounded down. Use callback to apply non-trivial programmatic constraints.
    public static func setNextWindowSizeConstraints(min: CImVec2, max: CImVec2, withCustomCallback callback: (ImGuiCustomSizeCallbackData) -> (), callbackUserData: Any) {
        withoutActuallyEscaping(callback) {
            let callbackHolder = CustomSizeCallbackHolder(callback: $0, userData: callbackUserData)

            let callbackHolderPointer = Unmanaged.passRetained(callbackHolder).toOpaque()

            igSetNextWindowSizeConstraints(min, max, { (dataPointer: UnsafeMutablePointer<CImGuiSizeCallbackData>!) in
                let callbackHolder = Unmanaged<CustomSizeCallbackHolder>.fromOpaque(dataPointer[\.UserData].pointee).takeRetainedValue()

                let data = ImGuiCustomSizeCallbackData(userData: callbackHolder.userData, position: dataPointer[\.Pos].pointee, currentSize: dataPointer[\.CurrentSize].pointee, _desiredSize: dataPointer[\.DesiredSize])

                callbackHolder.callback(data)
            }, callbackHolderPointer)
        }
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window content size (~ scrollable client area, which enforce the range of scrollbars). Not including window decorations (title bar, menu bar, etc.) nor WindowPadding. set an axis to 0 to leave it automatic. call before Begin()
    public static func setNextWindowContentSize(to size: CImVec2) {
        igSetNextWindowContentSize(size)
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window collapsed state. call before Begin()
    public static func setNextWindowCollapsed(_ isCollapsed: Bool, withCondition condition: CImGuiCond = 0) {
        igSetNextWindowCollapsed(isCollapsed, condition)
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window to be focused / top-most. call before Begin()
    public static func setNextWindowFocus() {
        igSetNextWindowFocus()
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window background color alpha. helper to easily override the Alpha component of ImGuiCol_WindowBg/ChildBg/PopupBg. you may also use ImGuiWindowFlags_NoBackground.
    public static func setNextWindowBgAlpha(to alpha: Float) {
        igSetNextWindowBgAlpha(alpha)
    }

    /// Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).
    /// set next window viewport
    public static func setNextWindowViewport(withID id: CImGuiID) {
        igSetNextWindowViewport(id)
    }

    /// (not recommended) set current window position - call within Begin()/End(). prefer using SetNextWindowPos(), as this may incur tearing and side-effects.
    public static func setWindowPosition(to position: CImVec2, withCondition condition: CImGuiCond = 0) {
        igSetWindowPos(position, condition)
    }

    /// (not recommended) set current window size - call within Begin()/End(). set to ImVec2(0, 0) to force an auto-fit. prefer using SetNextWindowSize(), as this may incur tearing and minor side-effects.
    public static func setWindowSize(to size: CImVec2, withCondition condition: CImGuiCond = 0) {
        igSetWindowSize(size, condition)
    }

    /// (not recommended) set current window collapsed state. prefer using SetNextWindowCollapsed().
    public static func setWindowCollapsed(_ isCollapsed: Bool, withCondition condition: CImGuiCond = 0) {
        igSetWindowCollapsed(isCollapsed, condition)
    }

    /// (not recommended) set current window to be focused / top-most. prefer using SetNextWindowFocus().
    public static func setWindowFocus() {
        igSetWindowFocus()
    }

    /// set font scale. Adjust IO.FontGlobalScale if you want to scale all windows. This is an old API! For correct scaling, prefer to reload font + rebuild ImFontAtlas + call style.ScaleAllSizes().
    public static func setWindowFontScale(to scale: Float) {
        igSetWindowFontScale(scale)
    }

    /// set named window position.
    public static func setWindowPosition(name: String, to position: CImVec2, withCondition condition: CImGuiCond = 0) {
        igSetNamedWindowPos(name, position, condition)
    }

    /// set named window size. set axis to 0 to force an auto-fit on this axis.
    public static func setWindowSize(name: String, to size: CImVec2, withCondition condition: CImGuiCond = 0) {
        igSetNamedWindowSize(name, size, condition)
    }

    /// set named window collapsed state
    public static func setWindowCollapsed(name: String, isCollapsed: Bool, withCondition condition: CImGuiCond = 0) {
        igSetNamedWindowCollapsed(name, isCollapsed, condition)
    }

    /// set named window to be focused / top-most. use NULL to remove focus.
    public static func setWindowFocus(name: String) {
        igSetNamedWindowFocus(name)
    }


    // Content region
    // - Those functions are bound to be redesigned soon (they are confusing, incomplete and values in local window coordinates which increases confusion)
    /// current content boundaries (typically window boundaries including scrolling, or current column boundaries), in windows coordinates
    public static func getContentRegionMax() -> CImVec2 {
        igGetContentRegionMax()
    }

    /// == GetContentRegionMax() - GetCursorPos()
    public static func getContentRegionAvail() -> CImVec2 {
        igGetContentRegionAvail()
    }

    /// content boundaries min (roughly (0,0)-Scroll), in window coordinates
    public static func getWindowContentRegionMin() -> CImVec2 {
        igGetWindowContentRegionMin()
    }

    /// content boundaries max (roughly (0,0)+Size-Scroll) where Size can be override with SetNextWindowContentSize(), in window coordinates
    public static func getWindowContentRegionMax() -> CImVec2 {
        igGetWindowContentRegionMax()
    }

    public static func getWindowContentRegionWidth() -> Float {
        igGetWindowContentRegionWidth()
    }

    // Windows Scrolling
    /// get scrolling amount [0..GetScrollMaxX()]
    public static func getScrollX() -> Float {
        igGetScrollX()
    }

    /// get scrolling amount [0..GetScrollMaxY()]
    public static func getScrollY() -> Float {
        igGetScrollY()
    }

    /// get maximum scrolling amount ~~ ContentSize.x - WindowSize.x
    public static func getScrollMaxX() -> Float {
        igGetScrollMaxX()
    }

    /// get maximum scrolling amount ~~ ContentSize.y - WindowSize.y
    public static func getScrollMaxY() -> Float {
        igGetScrollMaxY()
    }

    /// set scrolling amount [0..GetScrollMaxX()]
    public static func setScrollX(to scrollX: Float) {
        igSetScrollX(scrollX)
    }

    /// set scrolling amount [0..GetScrollMaxY()]
    public static func setScrollY(to scrollY: Float) {
        igSetScrollY(scrollY)
    }

    /// adjust scrolling amount to make current cursor position visible. center_x_ratio=0.0: left, 0.5: center, 1.0: right. When using to make a "default/current item" visible, consider using SetItemDefaultFocus() instead.
    public static func setScrollHereX(centerXRatio: Float = 0.5) {
        igSetScrollHereX(centerXRatio)
    }

    /// adjust scrolling amount to make current cursor position visible. center_y_ratio=0.0: top, 0.5: center, 1.0: bottom. When using to make a "default/current item" visible, consider using SetItemDefaultFocus() instead.
    public static func setScrollHereY(centerYRatio: Float = 0.5) {
        igSetScrollHereY(centerYRatio)
    }

    /// adjust scrolling amount to make given position visible. Generally GetCursorStartPos() + offset to compute a valid position.
    public static func setScrollFromPosX(localX: Float, centerXRatio: Float = 0.5) {
        igSetScrollFromPosX(localX, centerXRatio)
    }

    /// adjust scrolling amount to make given position visible. Generally GetCursorStartPos() + offset to compute a valid position.
    public static func setScrollFromPosY(localY: Float, centerYRatio: Float = 0.5) {
        igSetScrollFromPosY(localY, centerYRatio)
    }


    // Parameters stacks (shared)
    /// use NULL as a shortcut to push default font
    public static func pushFont(font: UnsafeMutablePointer<CImFont>) {
        igPushFont(font)
    }

    public static func popFont() {
        igPopFont()
    }

    public static func pushStyleColor(withIndex index: CImGuiCol, color: CImU32) {
        igPushStyleColor(index, color)
    }

    public static func pushStyleColor(withIndex index: CImGuiCol, color: CImVec4) {
        igPushStyleColorVec4(index, color)
    }

    public static func popStyleColor(count: Int = 1) {
        igPopStyleColor(Int32(count))
    }

    public static func pushStyleVar(withIndex index: CImGuiStyleVar, value: Float) {
        igPushStyleVar(index, value)
    }

    public static func pushStyleVar(withIndex index: CImGuiStyleVar, value: CImVec2) {
        igPushStyleVarVec2(index, value)
    }

    public static func popStyleVar(count: Int = 1) {
        igPopStyleVar(Int32(count))
    }

    /// retrieve style color as stored in ImGuiStyle structure. use to feed back into PushStyleColor(), otherwise use GetColorU32() to get style color with style alpha baked in.
    public static func getStyleColorVec4(withIndex index: CImGuiCol) -> CImVec4 {
        igGetStyleColorVec4(index)
    }

    /// get current font
    public static func getFont() -> UnsafeMutablePointer<CImFont> {
        igGetFont()
    }

    /// get current font size (= height in pixels) of current font with current scale applied
    public static func getFontSize() -> Float {
        igGetFontSize()
    }

    /// get UV coordinate for a while pixel, useful to draw custom shapes via the ImDrawList API
    public static func getFontTexUvWhitePixel() -> CImVec2 {
        igGetFontTexUvWhitePixel()
    }

    /// retrieve given style color with style alpha applied and optional extra alpha multiplier
    public static func getColorU32(withIndex index: CImGuiCol, alphaMul: Float = 1) -> CImU32 {
        igGetColorWithIndexU32(index, alphaMul)
    }

    /// retrieve given color with style alpha applied
    public static func getColorU32(from color: CImVec4) -> CImU32 {
        igGetColorVec4U32(color)
    }

    /// retrieve given color with style alpha applied
    public static func getColorU32(from color: CImU32) -> CImU32 {
        igGetColorU32(color)
    }


    // Parameters stacks (current window)
    /// push width of items for common large "item+label" widgets. >0: width in pixels, <0 align xx pixels to the right of window (so -1 always align width to the right side). 0 = default to ~2/3 of windows width,
    public static func pushItemWidth(_ width: Float) {
        igPushItemWidth(width)
    }

    public static func popItemWidth() {
        igPopItemWidth()
    }

    /// set width of the _next_ common large "item+label" widget. >0: width in pixels, <0 align xx pixels to the right of window (so -1 always align width to the right side)
    public static func setNextItemWidth(to width: Float) {
        igSetNextItemWidth(width)
    }

    /// width of item given pushed settings and current cursor position. NOT necessarily the width of last item unlike most 'Item' functions.
    public static func calcItemWidth() -> Float {
        igCalcItemWidth()
    }

    /// push word-wrapping position for Text*() commands. < 0: no wrapping; 0: wrap to end of window (or column); > 0: wrap at 'wrap_pos_x' position in window local space
    public static func pushTextWrapPosition(_ localWrapPositionX: Float = 0) {
        igPushTextWrapPos(localWrapPositionX)
    }

    public static func popTextWrapPos() {
        igPopTextWrapPos()
    }

    /// allow focusing using TAB/Shift-TAB, enabled by default but you can disable it for certain widgets
    public static func pushAllowKeyboardFocus(_ allow: Bool) {
        igPushAllowKeyboardFocus(allow)
    }

    public static func popAllowKeyboardFocus() {
        igPopAllowKeyboardFocus()
    }

    /// in 'repeat' mode, Button*() functions repeated true in a typematic manner (using io.KeyRepeatDelay/io.KeyRepeatRate setting). Note that you can call IsItemActive() after any Button() to tell if the button is held in the current frame.
    public static func pushButtonRepeat(_ repeat: Bool) {
        igPushButtonRepeat(`repeat`)
    }

    public static func popButtonRepeat() {
        igPopButtonRepeat()
    }


    // Cursor / Layout
    // - By "cursor" we mean the current output position.
    // - The typical widget behavior is to output themselves at the current cursor position, then move the cursor one line down.
    // - You can call SameLine() between widgets to undo the last carriage and output at the right of the preceding widget.
    // - Attention! We currently have inconsistencies between window-local and absolute positions we will aim to fix with future API:
    //    Window-local coordinates:   SameLine(), GetCursorPos(), SetCursorPos(), GetCursorStartPos(), GetContentRegionMax(), UnsafeMutablePointer<GetWindowContentRegion>(), PushTextWrapPos()
    //    Absolute coordinate:        GetCursorScreenPos(), SetCursorScreenPos(), all ImDrawList:: functions.
    /// separator, generally horizontal. inside a menu bar or in horizontal layout mode, this becomes a vertical separator.
    public static func separator() {
        igSeparator()
    }

    /// call between widgets or groups to layout them horizontally. X position given in window coordinates.
    public static func sameLine(withOffsetFromStartX offset: Float = 0, spacing: Float = -1) {
        igSameLine(offset, spacing)
    }

    /// undo a SameLine() or force a new line when in an horizontal-layout context.
    public static func newLine() {
        igNewLine()
    }

    /// add vertical spacing.
    public static func spacing() {
        igSpacing()
    }

    /// add a dummy item of given size. unlike InvisibleButton(), Dummy() won't take the mouse click or be navigable into.
    public static func dummy(withSize size: CImVec2) {
        igDummy(size)
    }

    /// move content position toward the right, by style.IndentSpacing or indent_w if != 0
    public static func indent(by indentWidth: Float = 0) {
        igIndent(indentWidth)
    }

    /// move content position back to the left, by style.IndentSpacing or indent_w if != 0
    public static func unindent(by indentWidth: Float = 0) {
        igUnindent(indentWidth)
    }

    /// lock horizontal starting position
    public static func beginGroup() {
        igBeginGroup()
    }

    /// unlock horizontal starting position + capture the whole group bounding box into one "item" (so you can use IsItemHovered() or layout primitives such as SameLine() on whole group, etc.)
    public static func endGroup() {
        igEndGroup()
    }

    /// cursor position in window coordinates (relative to window position)
    public static func getCursorPosition() -> CImVec2 {
        igGetCursorPos()
    }

    ///   (some functions are using window-relative coordinates, such as: GetCursorPos, GetCursorStartPos, GetContentRegionMax, etc: UnsafeMutablePointer<GetWindowContentRegion>.
    public static func getCursorPositionX() -> Float {
        igGetCursorPosX()
    }

    ///    other functions such as GetCursorScreenPos or everything in ImDrawList::
    public static func getCursorPositionY() -> Float {
        igGetCursorPosY()
    }

    ///    are using the main, absolute coordinate system.
    public static func setCursorPosition(to localPosition: CImVec2) {
        igSetCursorPos(localPosition)
    }

    ///    GetWindowPos() + GetCursorPos() == GetCursorScreenPos() etc.)
    public static func setCursorPositionX(to localX: Float) {
        igSetCursorPosX(localX)
    }

    public static func setCursorPositionY(to localY: Float) {
        igSetCursorPosY(localY)
    }

    /// initial cursor position in window coordinates
    public static func getCursorStartPosition() -> CImVec2 {
        igGetCursorStartPos()
    }

    /// cursor position in absolute screen coordinates (0..io.DisplaySize) or natural OS coordinates when using multiple viewport. Useful to work with ImDrawList API.
    public static func getCursorScreenPosition() -> CImVec2 {
        igGetCursorScreenPos()
    }

    /// cursor position in absolute screen coordinates (0..io.DisplaySize) or natural OS coordinates when using multiple viewport.
    public static func setCursorScreenPosition(to position: CImVec2) {
        igSetCursorScreenPos(position)
    }

    /// vertically align upcoming text baseline to FramePadding.y so that it will align properly to regularly framed items (call if you have text on a line before a framed item)
    public static func alignTextToFramePadding() {
        igAlignTextToFramePadding()
    }

    /// ~ FontSize
    public static func getTextLineHeight() -> Float {
        igGetTextLineHeight()
    }

    /// ~ FontSize + style.ItemSpacing.y (distance in pixels between 2 consecutive lines of text)
    public static func getTextLineHeightWithSpacing() -> Float {
        igGetTextLineHeightWithSpacing()
    }

    /// ~ FontSize + style.FramePadding.y * 2
    public static func getFrameHeight() -> Float {
        igGetFrameHeight()
    }

    /// ~ FontSize + style.FramePadding.y * 2 + style.ItemSpacing.y (distance in pixels between 2 consecutive lines of framed widgets)
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
    public static func pushID<S: StringProtocol>(_ string: S) {
        string.withCString { pointer in
            igPushIDBuffer(pointer)
        }
    }

    /// push pointer into the ID stack (will hash pointer).
    public static func pushID(_ pointer: UnsafeRawPointer) {
        igPushIDPointer(pointer)
    }

    /// push integer into the ID stack (will hash integer).
    public static func pushID(_ int: Int) {
        igPushIDInt(Int32(int))
    }

    /// pop from the ID stack.
    public static func popID() {
        igPopID()
    }

    /// calculate unique ID (hash of whole ID stack + given parameter). e.g. if you want to query into ImGuiStorage yourself
    public static func getID<S: StringProtocol>(for string: S) -> CImGuiID {
        string.withCString { pointer in
            igGetIDBuffer(pointer)
        }
    }

    public static func getID(for pointer: UnsafeRawPointer) -> CImGuiID {
        igGetIDPointer(pointer)
    }


    // Widgets: Text
    /// raw text without formatting. Roughly equivalent to Text("%s", text) but: A) doesn't require null terminated string if 'text_end' is specified, B) it's faster, no memory copy is done, no buffer size limits, recommended for long chunks of text.
    public static func textUnformatted(string: String) {
        igTextUnformatted(string, nil)
    }

    /// formatted text
    public static func text(format: String, _ values: CVarArg...) {
        withVaList(values) { pointer in
            igTextV(format, pointer)
        }
    }

    /// shortcut for PushStyleColor(ImGuiCol_Text, col); Text(fmt, ...); PopStyleColor();
    public static func textColored(withColor color: CImVec4, format: String, _ values: CVarArg...) {
        withVaList(values) { pointer in
            igTextColoredV(color, format, pointer)
        }
    }

    /// shortcut for PushStyleColor(ImGuiCol_Text, style.Colors[ImGuiCol_TextDisabled]); Text(fmt, ...); PopStyleColor();
    public static func textDisabled(format: String, _ values: CVarArg...) {
        withVaList(values) { pointer in
            igTextDisabledV(format, pointer)
        }
    }

    /// shortcut for PushTextWrapPos(0); Text(fmt, ...); PopTextWrapPos();. Note that this won't work on an auto-resizing window if there's no other widgets to extend the window width, yoy may need to set a size using SetNextWindowSize().
    public static func textWrapped(format: String, _ values: CVarArg...) {
        withVaList(values) { pointer in
            igTextWrappedV(format, pointer)
        }
    }

    /// display text+label aligned the same way as value+label widgets
    public static func labelText(withLabel label: String, format: String, _ values: CVarArg...) {
        withVaList(values) { pointer in
            igLabelTextV(label, format, pointer)
        }
    }

    /// shortcut for Bullet()+Text()
    public static func bulletText(format: String, _ values: CVarArg...) {
        withVaList(values) { pointer in
            igBulletTextV(format, pointer)
        }
    }


    // Widgets: Main
    // - Most widgets true when the value has been changed or when pressed/selected
    // - You may also use one of the many IsItemXXX functions (e.g. IsItemActive, IsItemHovered, etc.) to query widget state.
    /// button
    public static func button(withLabel label: String, withSize size: CImVec2 = CImVec2(x: 0, y: 0)) -> Bool {
        igButton(label, size)
    }

    /// button with FramePadding=(0,0) to easily embed within text
    public static func smallButton(withLabel label: String) -> Bool {
        igSmallButton(label)
    }

    /// flexible button behavior without the visuals, frequently useful to build custom behaviors using the public api (along with IsItemActive, IsItemHovered, etc.)
    public static func invisibleButton(withID stringID: String, size: CImVec2, flags: CImGuiButtonFlags = 0) -> Bool {
        igInvisibleButton(stringID, size, flags)
    }

    /// square button with an arrow shape
    public static func arrowButton(withID stringID: String, direction: CImGuiDir) -> Bool {
        igArrowButton(stringID, direction)
    }

    public static func image(withTextureID textureID: CImTextureID, size: CImVec2, uv0: CImVec2 = CImVec2(x: 0, y: 0), uv1: CImVec2 = CImVec2(x: 1, y: 1), tintColor: CImVec4 = CImVec4(x: 1, y: 1, z: 1, w: 1), borderColor: CImVec4 = CImVec4(x: 0, y: 0, z: 0, w: 0)) {
        igImage(textureID, size, uv0, uv1, tintColor, borderColor)
    }

    /// <0 frame_padding uses default frame padding settings. 0 for no padding
    public static func imageButton(withTextureID textureID: CImTextureID, size: CImVec2, uv0: CImVec2 = CImVec2(x: 0, y: 0),  uv1: CImVec2 = CImVec2(x: 1, y: 1), framePadding: Int = -1, backgroundColor: CImVec4 = CImVec4(x: 0, y: 0, z: 0, w: 0), tintColor: CImVec4 = CImVec4(x: 1, y: 1, z: 1, w: 1)) -> Bool {
        igImageButton(textureID, size, uv0, uv1, Int32(framePadding), backgroundColor, tintColor)
    }

    @discardableResult
    public static func checkbox(withLabel label: String, isChecked: inout Bool) -> Bool {
        igCheckbox(label, &isChecked)
    }

    @discardableResult
    public static func checkboxFlags(withLabel label: String, flags: inout UInt32, flagValue: UInt32) -> Bool {
        igCheckboxFlags(label, &flags, flagValue)
    }

    /// use with e.g. if (RadioButton("one", my_value==1)) { my_value = 1; }
    public static func radioButton(withLabel label: String, isActive: Bool) -> Bool {
        igRadioButton(label, isActive)
    }

    /// shortcut to handle the above pattern when value is an integer
    @discardableResult
    public static func radioButton(withLabel label: String, value: inout Int32, buttonValue: Int32) -> Bool {
        igRadioButtonInt(label, &value, buttonValue)
    }

    /// size_arg (for each axis) < 0.0f: align to end, 0.0f: auto, > 0.0f: specified size
    public static func progressBar(fraction: Float, withSizeArg sizeArg: CImVec2 = CImVec2(x: -1, y: 0), overlay: String? = nil) {
        igProgressBar(fraction, sizeArg, overlay)
    }

    /// draw a small circle + keep the cursor on the same line. advance cursor x position by GetTreeNodeToLabelSpacing(), same distance that TreeNode() uses
    public static func bullet() {
        igBullet()
    }


    // Widgets: Combo Box
    // - The BeginCombo()/EndCombo() api allows you to manage your contents and selection state however you want it, by creating e.g. Selectable() items.
    // - The old Combo() api are helpers over BeginCombo()/EndCombo() which are kept available for convenience purpose.
    public static func beginCombo(withLabel label: String, previewValue: String, flags: CImGuiComboFlags = 0) -> Bool {
        igBeginCombo(label, previewValue, flags)
    }

    /// only call EndCombo() if BeginCombo() returns true!
    public static func endCombo() {
        igEndCombo()
    }

    /// maxPopupHeight in items
    public static func combo(withLabel label: String, currentItem: inout Int32, items: [String], maxPopupHeight: Int = -1) -> Bool {
        withArrayOfCStrings(items) { pointers in
            igCombo(label, &currentItem, pointers, Int32(pointers.count), Int32(maxPopupHeight))
        }
    }

    /// Separate items with \0 within a string, end item-list with \0\0. e.g. "One\0Two\0Three\0"
    /// maxPopupHeight in items
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
    public static func dragFloat(withLabel label: String, value: inout Float, speed: Float = 1, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: CImGuiSliderFlags = 0) -> Bool {
        igDragFloat(label, &value, speed, minValue, maxValue, format, flags)
    }

    public static func dragFloat2(withLabel label: String, values: inout [Float], speed: Float = 1, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: CImGuiSliderFlags = 0) -> Bool {
        precondition(values.count >= 2)

        return values.withUnsafeMutableBufferPointer { buffer in
            igDragFloat2(label, buffer.baseAddress, speed, minValue, maxValue, format, flags)
        }
    }

    public static func dragFloat2(withLabel label: String, values: inout (Float, Float), speed: Float = 1, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: CImGuiSliderFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Float.self)
            return igDragFloat2(label, buffer.baseAddress, speed, minValue, maxValue, format, flags)
        }
    }

    public static func dragFloat3(withLabel label: String, values: inout [Float], speed: Float = 1, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: CImGuiSliderFlags = 0) -> Bool {
        precondition(values.count >= 3)

        return values.withUnsafeMutableBufferPointer { buffer in
            igDragFloat3(label, buffer.baseAddress, speed, minValue, maxValue, format, flags)
        }
    }

    public static func dragFloat3(withLabel label: String, values: inout (Float, Float, Float), speed: Float = 1, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: CImGuiSliderFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Float.self)
            return igDragFloat3(label, buffer.baseAddress, speed, minValue, maxValue, format, flags)
        }
    }

    public static func dragFloat4(withLabel label: String, values: inout [Float], speed: Float = 1, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: CImGuiSliderFlags = 0) -> Bool {
        precondition(values.count >= 4)

        return values.withUnsafeMutableBufferPointer { buffer in
            igDragFloat4(label, buffer.baseAddress, speed, minValue, maxValue, format, flags)
        }
    }

    public static func dragFloat4(withLabel label: String, values: inout (Float, Float, Float, Float), speed: Float = 1, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: CImGuiSliderFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Float.self)
            return igDragFloat4(label, buffer.baseAddress, speed, minValue, maxValue, format, flags)
        }
    }

    public static func dragFloatRange2(withLabel label: String, currentMinValue: inout Float, currentMaxValue: inout Float, speed: Float = 1, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", formatMax: String? = nil, flags: CImGuiSliderFlags = 0) -> Bool {
        igDragFloatRange2(label, &currentMinValue, &currentMaxValue, speed, minValue, maxValue, format, formatMax, flags)
    }

    /// If v_min >= v_max we have no bound
    public static func dragInt(withLabel label: String, value: inout Int32, speed: Float = 1, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: CImGuiSliderFlags = 0) -> Bool {
        igDragInt(label, &value, speed, minValue, maxValue, format, flags)
    }

    public static func dragInt2(withLabel label: String, values: inout [Int32], speed: Float = 1, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: CImGuiSliderFlags = 0) -> Bool {
        precondition(values.count >= 2)

        return values.withUnsafeMutableBufferPointer { buffer in
            igDragInt2(label, buffer.baseAddress, speed, minValue, maxValue, format, flags)
        }
    }

    public static func dragInt2(withLabel label: String, values: inout (Int32, Int32), speed: Float = 1, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: CImGuiSliderFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Int32.self)
            return igDragInt2(label, buffer.baseAddress, speed, minValue, maxValue, format, flags)
        }
    }

    public static func dragInt3(withLabel label: String, values: inout [Int32], speed: Float = 1, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: CImGuiSliderFlags = 0) -> Bool {
        precondition(values.count >= 3)

        return values.withUnsafeMutableBufferPointer { buffer in
            igDragInt3(label, buffer.baseAddress, speed, minValue, maxValue, format, flags)
        }
    }

    public static func dragInt3(withLabel label: String, values: inout (Int32, Int32, Int32), speed: Float = 1, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: CImGuiSliderFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Int32.self)
            return igDragInt3(label, buffer.baseAddress, speed, minValue, maxValue, format, flags)
        }
    }

    public static func dragInt4(withLabel label: String, values: inout [Int32], speed: Float = 1, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: CImGuiSliderFlags = 0) -> Bool {
        precondition(values.count >= 4)

        return values.withUnsafeMutableBufferPointer { buffer in
            igDragInt4(label, buffer.baseAddress, speed, minValue, maxValue, format, flags)
        }
    }

    public static func dragInt4(withLabel label: String, values: inout (Int32, Int32, Int32, Int32), speed: Float = 1, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: CImGuiSliderFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Int32.self)
            return igDragInt4(label, buffer.baseAddress, speed, minValue, maxValue, format, flags)
        }
    }

    public static func dragIntRange2(withLabel label: String, currentMinValue: inout Int32, currentMaxValue: inout Int32, speed: Float = 1, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", formatMax: String? = nil, flags: CImGuiSliderFlags = 0) -> Bool {
        igDragIntRange2(label, &currentMinValue, &currentMaxValue, speed, minValue, maxValue, format, formatMax, flags)
    }

    public static func dragScalar<T: ImGuiDataType>(withLabel label: String, value: inout T, speed: Float, minValue: T? = nil, maxValue: T? = nil, format: String? = nil, flags: CImGuiSliderFlags = 0) -> Bool {
        var minValue = minValue
        var maxValue = maxValue

        return igDragScalar(label, T.dataType, &value, speed, &minValue, &maxValue, format, flags)
    }

    public static func dragScalarN<T: ImGuiDataType>(withLabel label: String, values: inout [T], speed: Float, minValue: T? = nil, maxValue: T? = nil, format: String? = nil, flags: CImGuiSliderFlags = 0) -> Bool {
        let count = values.count

        precondition(count > 0)

        var minValue = minValue
        var maxValue = maxValue

        return values.withUnsafeMutableBufferPointer { buffer in
            igDragScalarN(label, T.dataType, buffer.baseAddress, Int32(count), speed, &minValue, &maxValue, format, flags)
        }
    }


    // Widgets: Regular Sliders
    // - CTRL+Click on any slider to turn them into an input box. Manually input values aren't clamped and can go off-bounds.
    // - Adjust format string to decorate the value with a prefix, a suffix, or adapt the editing and display precision e.g. "%.3f" -> 1.234; "%5.2f secs" -> 01.23 secs; "Biscuit: %" -> Biscuit: 1; etc.
    // - Format string may also be set to NULL or use the default format ("%f" or "%d").
    // - Legacy: Pre-1.78 there are SliderXXX() function signatures that takes a final `float power=1' argument instead of the `ImGuiSliderFlags flags=0' argument.
    //   If you get a warning converting a float to ImGuiSliderFlags, read https://github.com/ocornut/imgui/issues/3361
    /// adjust format to decorate the value with a prefix or a suffix for in-slider labels or unit display.
    public static func sliderFloat(withLabel label: String, value: inout Float, minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: CImGuiSliderFlags = 0) -> Bool {
        igSliderFloat(label, &value, minValue, maxValue, format, flags)
    }

    public static func sliderFloat2(withLabel label: String, values: inout [Float], minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: CImGuiSliderFlags = 0) -> Bool {
        precondition(values.count >= 2)

        return values.withUnsafeMutableBufferPointer { buffer in
            igSliderFloat2(label, buffer.baseAddress, minValue, maxValue, format, flags)
        }
    }

    public static func sliderFloat2(withLabel label: String, values: inout (Float, Float), minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: CImGuiSliderFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Float.self)
            return igSliderFloat2(label, buffer.baseAddress, minValue, maxValue, format, flags)
        }
    }

    public static func sliderFloat3(withLabel label: String, values: inout [Float], minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: CImGuiSliderFlags = 0) -> Bool {
        precondition(values.count >= 3)

        return values.withUnsafeMutableBufferPointer { buffer in
            igSliderFloat3(label, buffer.baseAddress, minValue, maxValue, format, flags)
        }
    }

    public static func sliderFloat3(withLabel label: String, values: inout (Float, Float, Float), minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: CImGuiSliderFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Float.self)
            return igSliderFloat3(label, buffer.baseAddress, minValue, maxValue, format, flags)
        }
    }

    public static func sliderFloat4(withLabel label: String, values: inout [Float], minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: CImGuiSliderFlags = 0) -> Bool {
        precondition(values.count >= 4)

        return values.withUnsafeMutableBufferPointer { buffer in
            igSliderFloat4(label, buffer.baseAddress, minValue, maxValue, format, flags)
        }
    }

    public static func sliderFloat4(withLabel label: String, values: inout (Float, Float, Float, Float), minValue: Float = 0, maxValue: Float = 0, format: String = "%.3f", flags: CImGuiSliderFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Float.self)
            return igSliderFloat4(label, buffer.baseAddress, minValue, maxValue, format, flags)
        }
    }

    public static func sliderAngle(withLabel label: String, valueInRadians value: inout Float, minValueInDegrees minValue: Float = -360, maxValueInDegrees maxValue: Float = 360, format: String = "%.0f deg", flags: CImGuiSliderFlags = 0) -> Bool {
        igSliderAngle(label, &value, minValue, maxValue, format, flags)
    }

    public static func sliderInt(withLabel label: String, value: inout Int32, minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: CImGuiSliderFlags = 0) -> Bool {
        igSliderInt(label, &value, minValue, maxValue, format, flags)
    }

    public static func sliderInt2(withLabel label: String, values: inout [Int32], minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: CImGuiSliderFlags = 0) -> Bool {
        precondition(values.count >= 2)

        return values.withUnsafeMutableBufferPointer { buffer in
            igSliderInt2(label, buffer.baseAddress, minValue, maxValue, format, flags)
        }
    }

    public static func sliderInt2(withLabel label: String, values: inout (Int32, Int32), minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: CImGuiSliderFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Int32.self)
            return igSliderInt2(label, buffer.baseAddress, minValue, maxValue, format, flags)
        }
    }

    public static func sliderInt3(withLabel label: String, values: inout [Int32], minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: CImGuiSliderFlags = 0) -> Bool {
        precondition(values.count >= 3)

        return values.withUnsafeMutableBufferPointer { buffer in
            igSliderInt3(label, buffer.baseAddress, minValue, maxValue, format, flags)
        }
    }

    public static func sliderInt3(withLabel label: String, values: inout (Int32, Int32, Int32), minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: CImGuiSliderFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Int32.self)
            return igSliderInt3(label, buffer.baseAddress, minValue, maxValue, format, flags)
        }
    }

    public static func sliderInt4(withLabel label: String, values: inout [Int32], minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: CImGuiSliderFlags = 0) -> Bool {
        precondition(values.count >= 4)

        return values.withUnsafeMutableBufferPointer { buffer in
            igSliderInt4(label, buffer.baseAddress, minValue, maxValue, format, flags)
        }
    }

    public static func sliderInt4(withLabel label: String, values: inout (Int32, Int32, Int32, Int32), minValue: Int32 = 0, maxValue: Int32 = 0, format: String = "%d", flags: CImGuiSliderFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Int32.self)
            return igSliderInt4(label, buffer.baseAddress, minValue, maxValue, format, flags)
        }
    }

    public static func sliderScalar<T: ImGuiDataType>(withLabel label: String, value: inout T, minValue: T? = nil, maxValue: T? = nil, format: String? = nil, flags: CImGuiSliderFlags = 0) -> Bool {
        var minValue = minValue
        var maxValue = maxValue

        return igSliderScalar(label, T.dataType, &value, &minValue, &maxValue, format, flags)
    }

    public static func sliderScalarN<T: ImGuiDataType>(withLabel label: String, values: inout [T], minValue: T? = nil, maxValue: T? = nil, format: String? = nil, flags: CImGuiSliderFlags = 0) -> Bool {
        let count = values.count

        precondition(count > 0)

        var minValue = minValue
        var maxValue = maxValue

        return values.withUnsafeMutableBufferPointer { buffer in
            igSliderScalarN(label, T.dataType, buffer.baseAddress, Int32(count), &minValue, &maxValue, format, flags)
        }
    }

    public static func vSliderFloat(withLabel label: String, size: CImVec2, value: inout Float, minValue: Float, maxValue: Float, format: String = "%.3f", flags: CImGuiSliderFlags = 0) -> Bool {
        igVSliderFloat(label, size, &value, minValue, maxValue, format, flags)
    }

    public static func vSliderInt(withLabel label: String, size: CImVec2, value: inout Int32, minValue: Int32, maxValue: Int32, format: String = "%d", flags: CImGuiSliderFlags = 0) -> Bool {
        igVSliderInt(label, size, &value, minValue, maxValue, format, flags)
    }

    public static func vSliderScalar<T: ImGuiDataType>(withLabel label: String, size: CImVec2, value: inout T, minValue: T, maxValue: T, format: String? = nil, flags: CImGuiSliderFlags = 0) -> Bool {
        var minValue = minValue
        var maxValue = maxValue

        return igVSliderScalar(label, size, T.dataType, &value, &minValue, &maxValue, format, flags)
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
    let callback: (ImGuiInputTextCallbackData) -> Int
    let bufferPointer: UnsafeMutablePointer<UnsafeMutableBufferPointer<Int8>>
    let originalBuffer: UnsafeMutableBufferPointer<Int8>

    init(callback: @escaping (ImGuiInputTextCallbackData) -> Int, bufferPointer: UnsafeMutablePointer<UnsafeMutableBufferPointer<Int8>>, originalBuffer: UnsafeMutableBufferPointer<Int8>) {
        self.callback = callback
        self.bufferPointer = bufferPointer
        self.originalBuffer = originalBuffer
    }
}

private class CustomInputTextCallbackHolder {
    let callback: (ImGuiCustomInputTextCallbackData) -> Int
    let bufferPointer: UnsafeMutablePointer<UnsafeMutableBufferPointer<Int8>>
    let originalBuffer: UnsafeMutableBufferPointer<Int8>
    let userData: Any

    init(callback: @escaping (ImGuiCustomInputTextCallbackData) -> Int, bufferPointer: UnsafeMutablePointer<UnsafeMutableBufferPointer<Int8>>, originalBuffer: UnsafeMutableBufferPointer<Int8>, userData: Any) {
        self.callback = callback
        self.bufferPointer = bufferPointer
        self.originalBuffer = originalBuffer
        self.userData = userData
    }
}


private func inputTextCallback(dataPointer: UnsafeMutablePointer<CImGuiInputTextCallbackData>!) -> Int32 {
    let data = ImGuiInputTextCallbackData(eventFlag: dataPointer[\.EventFlag].pointee,
                                          flags: dataPointer[\.Flags].pointee,
                                          _eventChar: dataPointer[\.EventChar],
                                          eventKey: dataPointer[\.EventKey].pointee,
                                          _buf: dataPointer[\.Buf],
                                          _bufTextLength: dataPointer[\CImGuiInputTextCallbackData.BufTextLen],
                                          _bufSize: dataPointer[\.BufSize].pointee,
                                          _bufDirty: dataPointer[\.BufDirty],
                                          _cursorPos: dataPointer[\.CursorPos],
                                          _selectionStart: dataPointer[\.SelectionStart],
                                          _selectionEnd: dataPointer[\.SelectionEnd])

    if data.eventFlag == CImGuiInputTextFlags_CallbackResize.rawValue {
        let bufferHolder = Unmanaged<InputTextBufferHolder>.fromOpaque(dataPointer[\.UserData].pointee).takeRetainedValue()

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
    let callbackHolder = Unmanaged<InputTextCallbackHolder>.fromOpaque(dataPointer[\.UserData].pointee).takeRetainedValue()

    let data = ImGuiInputTextCallbackData(eventFlag: dataPointer[\.EventFlag].pointee,
                                          flags: dataPointer[\.Flags].pointee,
                                          _eventChar: dataPointer[\.EventChar],
                                          eventKey: dataPointer[\.EventKey].pointee,
                                          _buf: dataPointer[\.Buf],
                                          _bufTextLength: dataPointer[\CImGuiInputTextCallbackData.BufTextLen],
                                          _bufSize: dataPointer[\.BufSize].pointee,
                                          _bufDirty: dataPointer[\.BufDirty],
                                          _cursorPos: dataPointer[\.CursorPos],
                                          _selectionStart: dataPointer[\.SelectionStart],
                                          _selectionEnd: dataPointer[\.SelectionEnd])

    if data.eventFlag == CImGuiInputTextFlags_CallbackResize.rawValue {
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
        return Int32(callbackHolder.callback(data))
    }
}

private func intermediateCustomInputTextCallback(dataPointer: UnsafeMutablePointer<CImGuiInputTextCallbackData>!) -> Int32 {
    let callbackHolder = Unmanaged<CustomInputTextCallbackHolder>.fromOpaque(dataPointer[\.UserData].pointee).takeRetainedValue()

    let data = ImGuiCustomInputTextCallbackData(eventFlag: dataPointer[\.EventFlag].pointee,
                                                flags: dataPointer[\.Flags].pointee,
                                                userData: callbackHolder.userData,
                                                _eventChar: dataPointer[\.EventChar],
                                                eventKey: dataPointer[\.EventKey].pointee,
                                                _buf: dataPointer[\.Buf],
                                                _bufTextLength: dataPointer[\CImGuiInputTextCallbackData.BufTextLen],
                                                _bufSize: dataPointer[\.BufSize].pointee,
                                                _bufDirty: dataPointer[\.BufDirty],
                                                _cursorPos: dataPointer[\.CursorPos],
                                                _selectionStart: dataPointer[\.SelectionStart],
                                                _selectionEnd: dataPointer[\.SelectionEnd])

    if data.eventFlag == CImGuiInputTextFlags_CallbackResize.rawValue {
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
        return Int32(callbackHolder.callback(data))
    }
}

extension ImGui {
    // Widgets: Input with Keyboard
    // - If you want to use InputText() with std::string or any custom dynamic string type, see misc/cpp/imgui_stdlib.h and comments in imgui_demo.cpp.
    // - Most of the ImGuiInputTextFlags flags are only useful for InputText() and not for InputFloatX, InputIntX, InputDouble etc.
    public static func inputText(withLabel label: String, string: inout String, flags: CImGuiInputTextFlags = 0) -> Bool {
        assert(flags & Int32(CImGuiInputTextFlags_CallbackResize.rawValue) == 0)

        let flags = flags | Int32(CImGuiInputTextFlags_CallbackResize.rawValue)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                let bufferHolder = InputTextBufferHolder(bufferPointer: bufferPointer, originalBuffer: buffer)

                let bufferHolderPointer = Unmanaged.passRetained(bufferHolder).toOpaque()

                return igInputText(label, buffer.baseAddress, capacity, flags, inputTextCallback, bufferHolderPointer)
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    public static func inputText(withLabel label: String, string: inout String, flags: CImGuiInputTextFlags = 0, callback: (ImGuiInputTextCallbackData) -> Int) -> Bool {
        assert(flags & Int32(CImGuiInputTextFlags_CallbackResize.rawValue) == 0)

        let flags = flags | Int32(CImGuiInputTextFlags_CallbackResize.rawValue)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withoutActuallyEscaping(callback) { escapingCallback in
                withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                    let callbackHolder = InputTextCallbackHolder(callback: escapingCallback, bufferPointer: bufferPointer, originalBuffer: buffer)

                    let callbackHolderPointer = Unmanaged.passRetained(callbackHolder).toOpaque()

                    return igInputText(label, buffer.baseAddress, capacity, flags, intermediateInputTextCallback, callbackHolderPointer)
                }
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    public static func inputText(withLabel label: String, string: inout String, flags: CImGuiInputTextFlags = 0, callback: (ImGuiCustomInputTextCallbackData) -> Int, userData: Any) -> Bool {
        assert(flags & Int32(CImGuiInputTextFlags_CallbackResize.rawValue) == 0)

        let flags = flags | Int32(CImGuiInputTextFlags_CallbackResize.rawValue)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withoutActuallyEscaping(callback) { escapingCallback in
                withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                    let callbackHolder = CustomInputTextCallbackHolder(callback: escapingCallback, bufferPointer: bufferPointer, originalBuffer: buffer, userData: userData)

                    let callbackHolderPointer = Unmanaged.passRetained(callbackHolder).toOpaque()

                    return igInputText(label, buffer.baseAddress, capacity, flags, intermediateCustomInputTextCallback, callbackHolderPointer)
                }
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    public static func inputTextMultiline(withLabel label: String, string: inout String, size: CImVec2 = CImVec2(x: 0, y: 0), flags: CImGuiInputTextFlags = 0) -> Bool {
        assert(flags & Int32(CImGuiInputTextFlags_CallbackResize.rawValue) == 0)

        let flags = flags | Int32(CImGuiInputTextFlags_CallbackResize.rawValue)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                let bufferHolder = InputTextBufferHolder(bufferPointer: bufferPointer, originalBuffer: buffer)

                let bufferHolderPointer = Unmanaged.passRetained(bufferHolder).toOpaque()

                return igInputTextMultiline(label, buffer.baseAddress, capacity, size, flags, inputTextCallback, bufferHolderPointer)
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    public static func inputTextMultiline(withLabel label: String, string: inout String, size: CImVec2 = CImVec2(x: 0, y: 0), flags: CImGuiInputTextFlags = 0, callback: (ImGuiInputTextCallbackData) -> Int) -> Bool {
        assert(flags & Int32(CImGuiInputTextFlags_CallbackResize.rawValue) == 0)

        let flags = flags | Int32(CImGuiInputTextFlags_CallbackResize.rawValue)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withoutActuallyEscaping(callback) { escapingCallback in
                withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                    let callbackHolder = InputTextCallbackHolder(callback: escapingCallback, bufferPointer: bufferPointer, originalBuffer: buffer)

                    let callbackHolderPointer = Unmanaged.passRetained(callbackHolder).toOpaque()

                    return igInputTextMultiline(label, buffer.baseAddress, capacity, size, flags, intermediateInputTextCallback, callbackHolderPointer)
                }
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    public static func inputTextMultiline(withLabel label: String, string: inout String, size: CImVec2 = CImVec2(x: 0, y: 0), flags: CImGuiInputTextFlags = 0, callback: (ImGuiCustomInputTextCallbackData) -> Int, userData: Any) -> Bool {
        assert(flags & Int32(CImGuiInputTextFlags_CallbackResize.rawValue) == 0)

        let flags = flags | Int32(CImGuiInputTextFlags_CallbackResize.rawValue)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withoutActuallyEscaping(callback) { escapingCallback in
                withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                    let callbackHolder = CustomInputTextCallbackHolder(callback: escapingCallback, bufferPointer: bufferPointer, originalBuffer: buffer, userData: userData)

                    let callbackHolderPointer = Unmanaged.passRetained(callbackHolder).toOpaque()

                    return igInputTextMultiline(label, buffer.baseAddress, capacity, size, flags, intermediateCustomInputTextCallback, callbackHolderPointer)
                }
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    public static func inputTextWithHint(withLabel label: String, hint: String, string: inout String, flags: CImGuiInputTextFlags = 0) -> Bool {
        assert(flags & Int32(CImGuiInputTextFlags_CallbackResize.rawValue) == 0)

        let flags = flags | Int32(CImGuiInputTextFlags_CallbackResize.rawValue)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                let bufferHolder = InputTextBufferHolder(bufferPointer: bufferPointer, originalBuffer: buffer)

                let bufferHolderPointer = Unmanaged.passRetained(bufferHolder).toOpaque()

                return igInputTextWithHint(label, hint, buffer.baseAddress, capacity, flags, inputTextCallback, bufferHolderPointer)
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    public static func inputTextWithHint(withLabel label: String, hint: String, string: inout String, flags: CImGuiInputTextFlags = 0, callback: (ImGuiInputTextCallbackData) -> Int) -> Bool {
        assert(flags & Int32(CImGuiInputTextFlags_CallbackResize.rawValue) == 0)

        let flags = flags | Int32(CImGuiInputTextFlags_CallbackResize.rawValue)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withoutActuallyEscaping(callback) { escapingCallback in
                withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                    let callbackHolder = InputTextCallbackHolder(callback: escapingCallback, bufferPointer: bufferPointer, originalBuffer: buffer)

                    let callbackHolderPointer = Unmanaged.passRetained(callbackHolder).toOpaque()

                    return igInputTextWithHint(label, hint, buffer.baseAddress, capacity, flags, intermediateInputTextCallback, callbackHolderPointer)
                }
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    public static func inputTextWithHint(withLabel label: String, hint: String, string: inout String, flags: CImGuiInputTextFlags = 0, callback: (ImGuiCustomInputTextCallbackData) -> Int, userData: Any) -> Bool {
        assert(flags & Int32(CImGuiInputTextFlags_CallbackResize.rawValue) == 0)

        let flags = flags | Int32(CImGuiInputTextFlags_CallbackResize.rawValue)

        var cString = string.utf8CString
        let capacity = cString.capacity

        return cString.withUnsafeMutableBufferPointer { buffer in
            var copiedBuffer = buffer

            let result = withoutActuallyEscaping(callback) { escapingCallback in
                withUnsafeMutablePointer(to: &copiedBuffer) { bufferPointer -> Bool in
                    let callbackHolder = CustomInputTextCallbackHolder(callback: escapingCallback, bufferPointer: bufferPointer, originalBuffer: buffer, userData: userData)

                    let callbackHolderPointer = Unmanaged.passRetained(callbackHolder).toOpaque()

                    return igInputTextWithHint(label, hint, buffer.baseAddress, capacity, flags, intermediateCustomInputTextCallback, callbackHolderPointer)
                }
            }

            string = String(cString: copiedBuffer.baseAddress!)

            if copiedBuffer.baseAddress != buffer.baseAddress {
                copiedBuffer.baseAddress!.deinitialize(count: copiedBuffer.count)
                copiedBuffer.deallocate()
            }

            return result
        }
    }

    public static func inputFloat(withLabel label: String, value: inout Float, step: Float = 0, fastStep: Float = 0, format: String = "%.3f", flags: CImGuiInputTextFlags = 0) -> Bool {
        igInputFloat(label, &value, step, fastStep, format, flags)
    }

    public static func inputFloat2(withLabel label: String, values: inout [Float], format: String = "%.3f", flags: CImGuiInputTextFlags = 0) -> Bool {
        precondition(values.count >= 2)

        return values.withUnsafeMutableBufferPointer { buffer in
            igInputFloat2(label, buffer.baseAddress, format, flags)
        }
    }

    public static func inputFloat2(withLabel label: String, values: inout (Float, Float), format: String = "%.3f", flags: CImGuiInputTextFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Float.self)
            return igInputFloat2(label, buffer.baseAddress, format, flags)
        }
    }

    public static func inputFloat3(withLabel label: String, values: inout [Float], format: String = "%.3f", flags: CImGuiInputTextFlags = 0) -> Bool {
        precondition(values.count >= 3)

        return values.withUnsafeMutableBufferPointer { buffer in
            igInputFloat3(label, buffer.baseAddress, format, flags)
        }
    }

    public static func inputFloat3(withLabel label: String, values: inout (Float, Float, Float), format: String = "%.3f", flags: CImGuiInputTextFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Float.self)
            return igInputFloat3(label, buffer.baseAddress, format, flags)
        }
    }

    public static func inputFloat4(withLabel label: String, values: inout [Float], format: String = "%.3f", flags: CImGuiInputTextFlags = 0) -> Bool {
        precondition(values.count >= 4)

        return values.withUnsafeMutableBufferPointer { buffer in
            igInputFloat4(label, buffer.baseAddress, format, flags)
        }
    }

    public static func inputFloat4(withLabel label: String, values: inout (Float, Float, Float, Float), format: String = "%.3f", flags: CImGuiInputTextFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Float.self)
            return igInputFloat4(label, buffer.baseAddress, format, flags)
        }
    }

    public static func inputInt(withLabel label: String, value: inout Int32, step: Int32 = 1, fastStep: Int32 = 100, flags: CImGuiInputTextFlags = 0) -> Bool {
        igInputInt(label, &value, step, fastStep, flags)
    }

    public static func inputInt2(withLabel label: String, values: inout [Int32], flags: CImGuiInputTextFlags = 0) -> Bool {
        precondition(values.count >= 2)

        return values.withUnsafeMutableBufferPointer { buffer in
            igInputInt2(label, buffer.baseAddress, flags)
        }
    }

    public static func inputInt2(withLabel label: String, values: inout (Int32, Int32), flags: CImGuiInputTextFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Int32.self)
            return igInputInt2(label, buffer.baseAddress, flags)
        }
    }

    public static func inputInt3(withLabel label: String, values: inout [Int32], flags: CImGuiInputTextFlags = 0) -> Bool {
        precondition(values.count >= 3)

        return values.withUnsafeMutableBufferPointer { buffer in
            igInputInt3(label, buffer.baseAddress, flags)
        }
    }

    public static func inputInt3(withLabel label: String, values: inout (Int32, Int32, Int32), flags: CImGuiInputTextFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Int32.self)
            return igInputInt3(label, buffer.baseAddress, flags)
        }
    }

    public static func inputInt4(withLabel label: String, values: inout [Int32], flags: CImGuiInputTextFlags = 0) -> Bool {
        precondition(values.count >= 4)

        return values.withUnsafeMutableBufferPointer { buffer in
            igInputInt4(label, buffer.baseAddress, flags)
        }
    }

    public static func inputInt4(withLabel label: String, values: inout (Int32, Int32, Int32, Int32), flags: CImGuiInputTextFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &values) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Int32.self)
            return igInputInt4(label, buffer.baseAddress, flags)
        }
    }

    public static func inputDouble(withLabel label: String, value: inout Double, step: Double = 0, fastStep: Double = 0, format: String = "%.6f", flags: CImGuiInputTextFlags = 0) -> Bool {
        igInputDouble(label, &value, step, fastStep, format, flags)
    }

    public static func inputScalar<T: ImGuiDataType>(withLabel label: String, value: inout T, step: T? = nil, fastStep: T? = nil, format: String? = nil, flags: CImGuiInputTextFlags = 0) -> Bool {
        var step = step
        var fastStep = fastStep

        return igInputScalar(label, T.dataType, &value, &step, &fastStep, format, flags)
    }

    public static func inputScalarN<T: ImGuiDataType>(withLabel label: String, values: inout [T], step: T? = nil, fastStep: T? = nil, format: String? = nil, flags: CImGuiInputTextFlags = 0) -> Bool {
        let count = values.count

        precondition(count > 0)

        var step = step
        var fastStep = fastStep

        return values.withUnsafeMutableBufferPointer { buffer in
            igInputScalarN(label, T.dataType, buffer.baseAddress, Int32(count), &step, &fastStep, format, flags)
        }
    }


    // Widgets: Color Editor/Picker (tip: the functions: UnsafeMutablePointer<ColorEdit> have a little colored preview square that can be left-clicked to open a picker, and right-clicked to open an option menu.)
    // - Note that in C++ a 'float v[X]' function argument is the _same_ as 'v: UnsafeMutablePointer<float>', the array syntax is just a way to document the number of elements that are expected to be accessible.
    // - You can pass the address of a first float element out of a contiguous structure, e.g. &myvector.x
    public static func colorEdit3(withLabel label: String, color: inout (Float, Float, Float), flags: CImGuiColorEditFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &color) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Float.self)
            return igColorEdit3(label, buffer.baseAddress, flags)
        }
    }

    public static func colorEdit4(withLabel label: String, color: inout (Float, Float, Float, Float), flags: CImGuiColorEditFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &color) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Float.self)
            return igColorEdit4(label, buffer.baseAddress, flags)
        }
    }

    public static func colorPicker3(withLabel label: String, color: inout (Float, Float, Float), flags: CImGuiColorEditFlags = 0) -> Bool {
        withUnsafeMutableBytes(of: &color) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Float.self)
            return igColorPicker3(label, buffer.baseAddress, flags)
        }
    }

    public static func colorPicker4(withLabel label: String, color: inout (Float, Float, Float, Float), flags: CImGuiColorEditFlags = 0, referenceColor: (Float, Float, Float, Float)) -> Bool {
        withUnsafeMutableBytes(of: &color) { rawBuffer in
            let buffer = rawBuffer.bindMemory(to: Float.self)
            return withUnsafeBytes(of: referenceColor) { referenceRawBuffer in
                let referenceBuffer = referenceRawBuffer.bindMemory(to: Float.self)
                return igColorPicker4(label, buffer.baseAddress, flags, referenceBuffer.baseAddress)
            }
        }
    }

    /// display a colored square/button, hover for details, true when pressed.
    public static func colorButton(withID id: String, color: CImVec4, flags: CImGuiColorEditFlags = 0, size: CImVec2 = CImVec2(x: 0, y: 0)) -> Bool {
        igColorButton(id, color, flags, size)
    }

    /// initialize current options (generally on application startup) if you want to select a default format, picker type, etc. User will be able to change many settings, unless you pass the _NoOptions flag to your calls.
    public static func setColorEditOptions(flags: CImGuiColorEditFlags) {
        igSetColorEditOptions(flags)
    }


    // Widgets: Trees
    // - TreeNode functions true when the node is open, in which case you need to also call TreePop() when you are finished displaying the tree node contents.
    public static func treeNode(withLabel label: String) -> Bool {
        igTreeNode(label)
    }

    /// helper variation to easily decorelate the id from the displayed string. Read the FAQ about why and how to use ID. to align arbitrary text at the same level as a TreeNode() you can use Bullet().
    public static func treeNode(withID id: String, format: String, _ values: CVarArg...) -> Bool {
        withVaList(values) { pointer in
            igTreeNodeStringV(id, format, pointer)
        }
    }

    /// "
    public static func treeNode(withID id: UnsafeRawPointer, format: String, _ values: CVarArg...) -> Bool {
        withVaList(values) { pointer in
            igTreeNodePointerV(id, format, pointer)
        }
    }

    public static func treeNodeEx(withLabel label: String, flags: CImGuiTreeNodeFlags = 0) -> Bool {
        igTreeNodeEx(label, flags)
    }

    public static func treeNodeEx(withID id: String, flags: CImGuiTreeNodeFlags, format: String, _ values: CVarArg...) -> Bool {
        withVaList(values) { pointer in
            igTreeNodeExStringV(id, flags, format, pointer)
        }
    }

    public static func treeNodeEx(withID id: UnsafeRawPointer, flags: CImGuiTreeNodeFlags, format: String, _ values: CVarArg...) -> Bool {
        withVaList(values) { pointer in
            igTreeNodeExPointerV(id, flags, format, pointer)
        }
    }

    /// ~ Indent()+PushId(). Already called by TreeNode() when returning true, but you can call TreePush/TreePop yourself if desired.
    public static func treePush(withID id: String) {
        igTreePushString(id)
    }

    /// "
    public static func treePush(withID id: UnsafeRawPointer? = nil) {
        igTreePushPointer(id)
    }

    /// ~ Unindent()+PopId()
    public static func treePop() {
        igTreePop()
    }

    /// horizontal distance preceding label when using UnsafeMutablePointer<TreeNode>() or Bullet() == (g.FontSize + style.FramePadding.2: UnsafeMutablePointer<x>) for a regular unframed TreeNode
    public static func getTreeNodeToLabelSpacing() -> Float {
        igGetTreeNodeToLabelSpacing()
    }

    /// if returning 'true' the header is open. doesn't indent nor push on ID stack. user doesn't have to call TreePop().
    public static func collapsingHeader(withLabel label: String, flags: CImGuiTreeNodeFlags = 0) -> Bool {
        igCollapsingHeader(label, flags)
    }

    /// when 'p_open' isn't NULL, display an additional small close button on upper right of the header
    public static func collapsingHeader(withLabel label: String, isOpen: inout Bool, flags: CImGuiTreeNodeFlags = 0) -> Bool {
        igCollapsingHeaderCloseButton(label, &isOpen, flags)
    }

    /// set next TreeNode/CollapsingHeader open state.
    public static func setNextItemOpen(isOpen: Bool, withCondition condition: CImGuiCond = 0) {
        igSetNextItemOpen(isOpen, condition)
    }


    // Widgets: Selectables
    // - A selectable highlights when hovered, and can display another color when selected.
    // - Neighbors selectable extend their highlight bounds in order to leave no gap between them. This is so a series of selected Selectable appear contiguous.
    /// "bool selected" carry the selection state (read-only). Selectable() is clicked is returns true so you can modify your selection state. size.x==0.0: use remaining width, size.x>0.0: specify width. size.y==0.0: use label height, size.y>0.0: specify height
    public static func selectable(withLabel label: String, isSelected: Bool = false, flags: CImGuiSelectableFlags = 0, size: CImVec2 = CImVec2(x: 0, y: 0)) -> Bool {
        igSelectable(label, isSelected, flags, size)
    }

    /// "p_selected: UnsafeMutablePointer<bool>" point to the selection state (read-write), as a convenient helper.
    public static func selectable(withLabel label: String, isSelected: inout Bool, flags: CImGuiSelectableFlags = 0, size: CImVec2 = CImVec2(x: 0, y: 0)) -> Bool {
        igSelectablePointer(label, &isSelected, flags, size)
    }


    // Widgets: List Boxes
    // - FIXME: To be consistent with all the newer API, ListBoxHeader/ListBoxFooter should in reality be called BeginListBox/EndListBox. Will rename them.
    /// height in items
    public static func listBox(withLabel label: String, currentItem: inout Int32, items: [String], height: Int = -1) -> Bool {
        withArrayOfCStrings(items) { pointers in
            igListBox(label, &currentItem, pointers, Int32(pointers.count), Int32(height))
        }
    }

    /// use if you want to reimplement ListBox() will custom data or interactions. if the function true, you can output elements then call ListBoxFooter() afterwards.
    public static func listBoxHeader(withLabel label: String, size: CImVec2 = CImVec2(x: 0, y: 0)) -> Bool {
        igListBoxHeader(label, size)
    }

    /// height in items
    public static func listBoxHeader(withLabel label: String, itemCount: Int, height: Int = -1) -> Bool {
        igListBoxHeaderCount(label, Int32(itemCount), Int32(height))
    }

    /// terminate the scrolling region. only call ListBoxFooter() if ListBoxHeader() returned true!
    public static func listBoxFooter() {
        igListBoxFooter()
    }


    // Widgets: Data Plotting
    public static func plotLines(withLabel label: String, values: [Float], valueOffset: Int = 0, overlayText: String? = nil, scaleMin: Float = Float.greatestFiniteMagnitude, scaleMax: Float = Float.greatestFiniteMagnitude, graphSize: CImVec2 = CImVec2(x: 0, y: 0), stride: Int = MemoryLayout<Float>.size) {
        igPlotLines(label, values, Int32(values.count), Int32(valueOffset), overlayText, scaleMin, scaleMax, graphSize, Int32(stride))
    }

    public static func plotHistogram(withLabel label: String, values: [Float], valueOffset: Int = 0, overlayText: String? = nil, scaleMin: Float = Float.greatestFiniteMagnitude, scaleMax: Float = Float.greatestFiniteMagnitude, graphSize: CImVec2 = CImVec2(x: 0, y: 0), stride: Int = MemoryLayout<Float>.size) {
        igPlotHistogram(label, values, Int32(values.count), Int32(valueOffset), overlayText, scaleMin, scaleMax, graphSize, Int32(stride))
    }


    // Widgets: Value() Helpers.
    // - Those are merely shortcut to calling Text() with a format string. Output single value in "name: value" format (tip: freely declare more in your code to handle your types. you can add functions to the ImGui namespace)
    public static func value(withPrefix prefix: String, value: Bool) {
        igValueBool(prefix, value)
    }

    public static func value(withPrefix prefix: String, value: Int) {
        igValueInt(prefix, Int32(value))
    }

    public static func value(withPrefix prefix: String, value: UInt) {
        igValueUnsigned(prefix, UInt32(value))
    }

    public static func value(withPrefix prefix: String, value: Float, format: String? = nil) {
        igValueFloat(prefix, value, format)
    }


    // Widgets: Menus
    // - Use BeginMenuBar() on a window ImGuiWindowFlags_MenuBar to append to its menu bar.
    // - Use BeginMainMenuBar() to create a menu bar at the top of the screen and append to it.
    // - Use BeginMenu() to create a menu. You can call BeginMenu() multiple time with the same identifier to append more items to it.
    /// append to menu-bar of current window (requires ImGuiWindowFlags_MenuBar flag set on parent window).
    public static func beginMenuBar() -> Bool {
        igBeginMenuBar()
    }

    /// only call EndMenuBar() if BeginMenuBar() returns true!
    public static func endMenuBar() {
        igEndMenuBar()
    }

    /// create and append to a full screen menu-bar.
    public static func beginMainMenuBar() -> Bool {
        igBeginMainMenuBar()
    }

    /// only call EndMainMenuBar() if BeginMainMenuBar() returns true!
    public static func endMainMenuBar() {
        igEndMainMenuBar()
    }

    /// create a sub-menu entry. only call EndMenu() if this returns true!
    public static func beginMenu(withLabel label: String, isEnabled: Bool = true) -> Bool {
        igBeginMenu(label, isEnabled)
    }

    /// only call EndMenu() if BeginMenu() returns true!
    public static func endMenu() {
        igEndMenu()
    }

    /// true when activated. shortcuts are displayed for convenience but not processed by ImGui at the moment
    public static func menuItem(withLabel label: String, shortcut: String? = nil, isSelected: Bool = false, isEnabled: Bool = true) -> Bool {
        igMenuItem(label, shortcut, isSelected, isEnabled)
    }

    /// true when activated + toggle (*p_selected) if p_selected != NULL
    public static func menuItem(withLabel label: String, shortcut: String, isSelected: inout Bool, isEnabled: Bool = true) -> Bool {
        igMenuItemPointer(label, shortcut, &isSelected, isEnabled)
    }


    // Tooltips
    // - Tooltip are windows following the mouse which do not take focus away.
    /// begin/append a tooltip window. to create full-featured tooltip (with any kind of items).
    public static func beginTooltip() {
        igBeginTooltip()
    }

    public static func endTooltip() {
        igEndTooltip()
    }

    /// set a text-only tooltip, typically use with ImGui::IsItemHovered(). override any previous call to SetTooltip().
    public static func setTooltip(format: String, _ values: CVarArg...) {
        withVaList(values) { pointer in
            igSetTooltipV(format, pointer)
        }
    }


    // Popups, Modals
    //  - They block normal mouse hovering detection (and therefore most mouse interactions) behind them.
    //  - If not modal: they can be closed by clicking anywhere outside them, or by pressing ESCAPE.
    //  - Their visibility state (~bool) is held internally instead of being held by the programmer as we are used to with regular UnsafeMutablePointer<Begin>() calls.
    //  - The 3 properties above are related: we need to retain popup visibility state in the library because popups may be closed as any time.
    //  - You can bypass the hovering restriction by using ImGuiHoveredFlags_AllowWhenBlockedByPopup when calling IsItemHovered() or IsWindowHovered().
    //  - IMPORTANT: Popup identifiers are relative to the current ID stack, so OpenPopup and BeginPopup generally needs to be at the same level of the stack.
    //    This is sometimes leading to confusing mistakes. May rework this in the future.
    // Popups: begin/end functions
    //  - BeginPopup(): query popup state, if open start appending into the window. Call EndPopup() afterwards. ImGuiWindowFlags are forwarded to the window.
    //  - BeginPopupModal(): block every interactions behind the window, cannot be closed by user, add a dimming background, has a title bar.
    /// true if the popup is open, and you can start outputting to it.
    public static func beginPopup(withID id: String, flags: CImGuiWindowFlags = 0) -> Bool {
        igBeginPopup(id, flags)
    }

    /// true if the modal is open, and you can start outputting to it.
    public static func beginPopupModal(withName name: String, flags: CImGuiWindowFlags = 0) -> Bool {
        igBeginPopupModal(name, nil, flags)
    }

    /// true if the modal is open, and you can start outputting to it.
    public static func beginPopupModal(withName name: String, isOpen: inout Bool, flags: CImGuiWindowFlags = 0) -> Bool {
        igBeginPopupModal(name, &isOpen, flags)
    }

    /// only call EndPopup() if BeginPopupXXX() returns true!
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
    public static func openPopup(withID id: String, flags: CImGuiPopupFlags = 0) {
        igOpenPopup(id, flags)
    }

    /// helper to open popup when clicked on last item. true when just opened. (note: actually triggers on the mouse _released_ event to be consistent with popup behaviors)
    public static func openPopupOnItemClick(withID id: String? = nil, flags: CImGuiPopupFlags = 1) {
        igOpenPopupOnItemClick(id, flags)
    }

    /// manually close the popup we have begin-ed into.
    public static func closeCurrentPopup() {
        igCloseCurrentPopup()
    }

    // Popups: open+begin combined functions helpers
    //  - Helpers to do OpenPopup+BeginPopup where the Open action is triggered by e.g. hovering an item and right-clicking.
    //  - They are convenient to easily create context menus, hence the name.
    //  - IMPORTANT: Notice that BeginPopupContextXXX takes ImGuiPopupFlags just like OpenPopup() and unlike BeginPopup(). For full consistency, we may add ImGuiWindowFlags to the BeginPopupContextXXX functions in the future.
    //  - IMPORTANT: we exceptionally default their flags to 1 (== ImGuiPopupFlags_MouseButtonRight) for backward compatibility with older API taking 'int mouse_button = 1' parameter, so if you add other flags remember to re-add the ImGuiPopupFlags_MouseButtonRight.
    /// open+begin popup when clicked on last item. if you can pass a NULL str_id only if the previous item had an id. If you want to use that on a non-interactive item such as Text() you need to pass in an explicit ID here. read comments in .cpp!
    public static func beginPopupContextItem(withID id: String? = nil, flags: CImGuiPopupFlags = 1) -> Bool {
        igBeginPopupContextItem(id, flags)
    }

    /// open+begin popup when clicked on current window.
    public static func beginPopupContextWindow(withID id: String? = nil, flags: CImGuiPopupFlags = 1) -> Bool {
        igBeginPopupContextWindow(id, flags)
    }

    /// open+begin popup when clicked in void (where there are no windows).
    public static func beginPopupContextVoid(withID id: String? = nil, flags: CImGuiPopupFlags = 1) -> Bool {
        igBeginPopupContextVoid(id, flags)
    }

    // Popups: test function
    //  - IsPopupOpen(): true if the popup is open at the current BeginPopup() level of the popup stack.
    //  - IsPopupOpen() with ImGuiPopupFlags_AnyPopupId: true if any popup is open at the current BeginPopup() level of the popup stack.
    //  - IsPopupOpen() with ImGuiPopupFlags_AnyPopupId + ImGuiPopupFlags_AnyPopupLevel: true if any popup is open.
    /// true if the popup is open.
    public static func isPopupOpen(withID id: String, flags: CImGuiPopupFlags = 0) -> Bool {
        igIsPopupOpen(id, flags)
    }


    // Columns
    // - You can also use SameLine(pos_x) to mimic simplified columns.
    // - The columns API is work-in-progress and rather lacking (columns are arguably the worst part of dear imgui at the moment!)
    // - There is a maximum of 64 columns.
    // - Currently working on new 'Tables' api which will replace columns around Q2 2020 (see GitHub #2957).
    public static func columns(count: Int = 1, withID id: String? = nil, border: Bool = true) {
        igColumns(Int32(count), id, border)
    }

    /// next column, defaults to current row or next row if the current row is finished
    public static func nextColumn() {
        igNextColumn()
    }

    /// get current column index
    public static func getColumnIndex() -> Int {
        Int(igGetColumnIndex())
    }

    /// get column width (in pixels). pass -1 to use current column
    public static func getColumnWidth(columnIndex index: Int = -1) -> Float {
        igGetColumnWidth(Int32(index))
    }

    /// set column width (in pixels). pass -1 to use current column
    public static func setColumnWidth(columnIndex index: Int, width: Float) {
        igSetColumnWidth(Int32(index), width)
    }

    /// get position of column line (in pixels, from the left side of the contents region). pass -1 to use current column, otherwise 0..GetColumnsCount() inclusive. column 0 is typically 0
    public static func getColumnOffset(columnIndex index: Int = -1) -> Float {
        igGetColumnOffset(Int32(index))
    }

    /// set position of column line (in pixels, from the left side of the contents region). pass -1 to use current column
    public static func setColumnOffset(columnIndex index: Int, xOffset: Float) {
        igSetColumnOffset(Int32(index), xOffset)
    }

    public static func getColumnsCount() -> Int {
        Int(igGetColumnsCount())
    }


    // Tab Bars, Tabs
    // Note: Tabs are automatically created by the docking system. Use this to create tab bars/tabs yourself without docking being involved.
    /// create and append into a TabBar
    public static func beginTabBar(withID id: String, flags: CImGuiTabBarFlags = 0) -> Bool {
        igBeginTabBar(id, flags)
    }

    /// only call EndTabBar() if BeginTabBar() returns true!
    public static func endTabBar() {
        igEndTabBar()
    }

    /// create a Tab. Returns true if the Tab is selected.
    public static func beginTabItem(withLabel label: String, flags: CImGuiTabBarFlags = 0) -> Bool {
        igBeginTabItem(label, nil, flags)
    }

    /// create a Tab. Returns true if the Tab is selected.
    public static func beginTabItem(withLabel label: String, isOpen: inout Bool, flags: CImGuiTabBarFlags = 0) -> Bool {
        igBeginTabItem(label, &isOpen, flags)
    }

    /// only call EndTabItem() if BeginTabItem() returns true!
    public static func endTabItem() {
        igEndTabItem()
    }

    /// create a Tab behaving like a button. true when clicked. cannot be selected in the tab bar.
    public static func tabItemButton(withLabel label: String, flags: CImGuiTabItemFlags = 0) -> Bool {
        igTabItemButton(label, flags)
    }

    /// notify TabBar or Docking system of a closed tab/window ahead (useful to reduce visual flicker on reorderable tab bars). For tab-bar: call after BeginTabBar() and before Tab submissions. Otherwise call with a window name.
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
    public static func dockSpace(withID id: CImGuiID, size: CImVec2 = CImVec2(x: 0, y: 0), flags: CImGuiDockNodeFlags = 0, windowClass: UnsafePointer<CImGuiWindowClass>? = nil) {
        igDockSpace(id, size, flags, windowClass)
    }

    public static func dockSpaceOverViewport(viewport: UnsafeMutablePointer<CImGuiViewport>? = nil, flags: CImGuiDockNodeFlags = 0, windowClass: UnsafePointer<CImGuiWindowClass>? = nil) -> CImGuiID {
        igDockSpaceOverViewport(viewport, flags, windowClass)
    }

    /// set next window dock id (FIXME-DOCK)
    public static func setNextWindowDockID(to id: CImGuiID, withCondition condition: CImGuiCond = 0) {
        igSetNextWindowDockID(id, condition)
    }

    /// set next window class (rare/advanced uses: provide hints to the platform back-end via altered viewport flags and parent/child info)
    public static func setNextWindowClass(to windowClass: UnsafePointer<CImGuiWindowClass>) {
        igSetNextWindowClass(windowClass)
    }

    public static func getWindowDockID() -> CImGuiID {
        igGetWindowDockID()
    }

    /// is current window docked into another window?
    public static func isWindowDocked() -> Bool {
        igIsWindowDocked()
    }


    // Logging/Capture
    // - All text output from the interface can be captured into tty/file/clipboard. By default, tree nodes are automatically opened during logging.
    /// start logging to tty (stdout)
    public static func logToTTY(autoOpenDepth: Int = -1) {
        igLogToTTY(Int32(autoOpenDepth))
    }

    /// start logging to file
    public static func logToFile(autoOpenDepth: Int = -1, filename: String? = nil) {
        igLogToFile(Int32(autoOpenDepth), filename)
    }

    /// start logging to OS clipboard
    public static func logToClipboard(autoOpenDepth: Int = -1) {
        igLogToClipboard(Int32(autoOpenDepth))
    }

    /// stop logging (close file, etc.)
    public static func logFinish() {
        igLogFinish()
    }

    /// helper to display buttons for logging to tty/file/clipboard
    public static func logButtons() {
        igLogButtons()
    }


    // Drag and Drop
    // - [BETA API] API may evolve!
    // - If you stop calling BeginDragDropSource() the payload is preserved however it won't have a preview tooltip (we currently display a fallback "..." tooltip as replacement)
    /// call when the current item is active. If this true, you can call SetDragDropPayload() + EndDragDropSource()
    public static func beginDragDropSource(withFlags flags: CImGuiDragDropFlags = 0) -> Bool {
        igBeginDragDropSource(flags)
    }

    /// type is a user defined string of maximum 32 characters. Strings starting with '_' are reserved for dear imgui internal types. Data is copied and held by imgui.
    public static func setDragDropPayload<T>(withTypeString type: String, value: T, condition: CImGuiCond = 0) -> Bool {
        var value = value

        return igSetDragDropPayload(type, &value, MemoryLayout<T>.size, condition)
    }

    /// only call EndDragDropSource() if BeginDragDropSource() returns true!
    public static func endDragDropSource() {
        igEndDragDropSource()
    }

    /// call after submitting an item that may receive a payload. If this returns true, you can call AcceptDragDropPayload() + EndDragDropTarget()
    public static func beginDragDropTarget() -> Bool {
        igBeginDragDropTarget()
    }

    /// accept contents of a given type. If ImGuiDragDropFlags_AcceptBeforeDelivery is set you can peek into the payload before the mouse button is released.
    public static func acceptDragDropPayload(withTypeString type: String, flags: CImGuiDragDropFlags = 0) -> UnsafePointer<CImGuiPayload>? {
        igAcceptDragDropPayload(type, flags)
    }

    /// only call EndDragDropTarget() if BeginDragDropTarget() returns true!
    public static func endDragDropTarget() {
        igEndDragDropTarget()
    }

    /// peek directly into the current payload from anywhere. may NULL. use ImGuiPayload::IsDataType() to test for the payload type.
    public static func getDragDropPayload() -> UnsafePointer<CImGuiPayload>? {
        igGetDragDropPayload()
    }


    // Clipping
    public static func pushClipRect(withMin min: CImVec2, max: CImVec2, intersectWithCurrentClipRect: Bool) {
        igPushClipRect(min, max, intersectWithCurrentClipRect)
    }

    public static func popClipRect() {
        igPopClipRect()
    }


    // Focus, Activation
    // - Prefer using "SetItemDefaultFocus()" over "if (IsWindowAppearing()) SetScrollHereY()" when applicable to signify "this is the default item"
    /// make last item the default focused item of a window.
    public static func setItemDefaultFocus() {
        igSetItemDefaultFocus()
    }

    /// focus keyboard on the next widget. Use positive 'offset' to access sub components of a multiple component widget. Use -1 to access previous widget.
    public static func setKeyboardFocusHere(withOffset offset: Int = 0) {
        igSetKeyboardFocusHere(Int32(offset))
    }


    // Item/Widgets Utilities
    // - Most of the functions are referring to the last/previous item we submitted.
    // - See Demo Window under "Widgets->Querying Status" for an interactive visualization of most of those functions.
    /// is the last item hovered? (and usable, aka not blocked by a popup, etc.). See ImGuiHoveredFlags for more options.
    public static func isItemHovered(withFlags flags: CImGuiHoveredFlags = 0) -> Bool {
        igIsItemHovered(flags)
    }

    /// is the last item active? (e.g. button being held, text field being edited. This will continuously true while holding mouse button on an item. Items that don't interact will always false)
    public static func isItemActive() -> Bool {
        igIsItemActive()
    }

    /// is the last item focused for keyboard/gamepad navigation?
    public static func isItemFocused() -> Bool {
        igIsItemFocused()
    }

    /// is the last item clicked? (e.g. button/node just clicked on) == IsMouseClicked(mouse_button) && IsItemHovered()
    public static func isItemClicked(withMouseButton mouseButton: CImGuiMouseButton = 0) -> Bool {
        igIsItemClicked(mouseButton)
    }

    /// is the last item visible? (items may be out of sight because of clipping/scrolling)
    public static func isItemVisible() -> Bool {
        igIsItemVisible()
    }

    /// did the last item modify its underlying value this frame? or was pressed? This is generally the same as the "bool" value of many widgets.
    public static func isItemEdited() -> Bool {
        igIsItemEdited()
    }

    /// was the last item just made active (item was previously inactive).
    public static func isItemActivated() -> Bool {
        igIsItemActivated()
    }

    /// was the last item just made inactive (item was previously active). Useful for Undo/Redo patterns with widgets that requires continuous editing.
    public static func isItemDeactivated() -> Bool {
        igIsItemDeactivated()
    }

    /// was the last item just made inactive and made a value change when it was active? (e.g. Slider/Drag moved). Useful for Undo/Redo patterns with widgets that requires continuous editing. Note that you may get false positives (some widgets such as Combo()/ListBox()/Selectable() will true even when clicking an already selected item).
    public static func isItemDeactivatedAfterEdit() -> Bool {
        igIsItemDeactivatedAfterEdit()
    }

    /// was the last item open state toggled? set by TreeNode().
    public static func isItemToggledOpen() -> Bool {
        igIsItemToggledOpen()
    }

    /// is any item hovered?
    public static func isAnyItemHovered() -> Bool {
        igIsAnyItemHovered()
    }

    /// is any item active?
    public static func isAnyItemActive() -> Bool {
        igIsAnyItemActive()
    }

    /// is any item focused?
    public static func isAnyItemFocused() -> Bool {
        igIsAnyItemFocused()
    }

    /// get upper-left bounding rectangle of the last item (screen space)
    public static func getItemRectMin() -> CImVec2 {
        igGetItemRectMin()
    }

    /// get lower-right bounding rectangle of the last item (screen space)
    public static func getItemRectMax() -> CImVec2 {
        igGetItemRectMax()
    }

    /// get size of last item
    public static func getItemRectSize() -> CImVec2 {
        igGetItemRectSize()
    }

    /// allow last item to be overlapped by a subsequent item. sometimes useful with invisible buttons, selectables, etc. to catch unused area.
    public static func setItemAllowOverlap() {
        igSetItemAllowOverlap()
    }


    // Miscellaneous Utilities
    /// test if rectangle (of given size, starting from cursor position) is visible / not clipped.
    public static func isRectVisible(withSize size: CImVec2) -> Bool {
        igIsRectWithSizeVisible(size)
    }

    /// test if rectangle (in screen space) is visible / not clipped. to perform coarse clipping on user's side.
    public static func isRectVisible(withMin min: CImVec2, max: CImVec2) -> Bool {
        igIsRectVisible(min, max)
    }

    /// get global imgui time. incremented by io.DeltaTime every frame.
    public static func getTime() -> Double {
        igGetTime()
    }

    /// get global imgui frame count. incremented by 1 every frame.
    public static func getFrameCount() -> Int {
        Int(igGetFrameCount())
    }

    /// get background draw list for the viewport associated to the current window. this draw list will be the first rendering one. Useful to quickly draw shapes/text behind dear imgui contents.
    public static func getBackgroundDrawList() -> UnsafeMutablePointer<CImDrawList> {
        igGetBackgroundDrawList()
    }

    /// get foreground draw list for the viewport associated to the current window. this draw list will be the last rendered one. Useful to quickly draw shapes/text over dear imgui contents.
    public static func getForegroundDrawList() -> UnsafeMutablePointer<CImDrawList> {
        igGetForegroundDrawList()
    }

    /// get background draw list for the given viewport. this draw list will be the first rendering one. Useful to quickly draw shapes/text behind dear imgui contents.
    public static func getBackgroundDrawList(forViewport viewport: UnsafeMutablePointer<CImGuiViewport>) -> UnsafeMutablePointer<CImDrawList> {
        igGetBackgroundDrawListViewport(viewport)
    }

    /// get foreground draw list for the given viewport. this draw list will be the last rendered one. Useful to quickly draw shapes/text over dear imgui contents.
    public static func getForegroundDrawList(forViewport viewport: UnsafeMutablePointer<CImGuiViewport>) -> UnsafeMutablePointer<CImDrawList> {
        igGetForegroundDrawListViewport(viewport)
    }

    /// you may use this when creating your own ImDrawList instances.
    public static func getDrawListSharedData() -> UnsafeMutablePointer<CImDrawListSharedData> {
        igGetDrawListSharedData()
    }

    /// get a string corresponding to the enum value (for display, saving, etc.).
    public static func getStyleColorName(withIndex index: CImGuiCol) -> String {
        .init(cString: igGetStyleColorName(index))
    }

    /// replace current window storage with our own (if you want to manipulate it yourself, typically clear subsection of it)
    public static func setStateStorage(to storage: UnsafeMutablePointer<CImGuiStorage>) {
        igSetStateStorage(storage)
    }

    public static func getStateStorage() -> UnsafeMutablePointer<CImGuiStorage> {
        igGetStateStorage()
    }

    /// calculate coarse clipping for large list of evenly sized items. Prefer using the ImGuiListClipper higher-level helper if you can.
    public static func calculateListClipping(itemCount: Int, itemHeight: Float) -> (itemDisplayStart: Int, itemDisplayEnd: Int) {
        var itemDisplayStart: Int32 = 0, itemDisplayEnd: Int32 = 0

        igCalcListClipping(Int32(itemCount), itemHeight, &itemDisplayStart, &itemDisplayEnd)

        return (Int(itemDisplayStart), Int(itemDisplayEnd))
    }

    /// helper to create a child window / scrolling region that looks like a normal widget frame
    public static func beginChildFrame(withID id: CImGuiID, size: CImVec2, flags: CImGuiWindowFlags = 0) -> Bool {
        igBeginChildFrame(id, size, flags)
    }

    /// always call EndChildFrame() regardless of BeginChildFrame() values (which indicates a collapsed/clipped window)
    public static func endChildFrame() {
        igEndChildFrame()
    }


    // Text Utilities
    public static func calculateTextSize(text: String, hideTextAfterDoubleHash: Bool = false, wrapWidth: Float = -1) -> CImVec2 {
        igCalcTextSize(text, nil, hideTextAfterDoubleHash, wrapWidth)
    }


    // Color Utilities
    public static func colorConvertU32ToFloat4(_ color: CImU32) -> CImVec4 {
        igColorConvertU32ToFloat4(color)
    }

    public static func colorConvertFloat4ToU32(_ color: CImVec4) -> CImU32 {
        igColorConvertFloat4ToU32(color)
    }

    public static func colorConvertRGBtoHSV(r: Float, g: Float, b: Float) -> (h: Float, s: Float, v: Float) {
        var h: Float = 0, s: Float = 0, v: Float = 0

        igColorConvertRGBtoHSV(r, g, b, &h, &s, &v)

        return (h, s, v)
    }

    public static func colorConvertHSVtoRGB(h: Float, s: Float, v: Float) -> (r: Float, g: Float, b: Float) {
        var r: Float = 0, g: Float = 0, b: Float = 0

        igColorConvertHSVtoRGB(h, s, v, &r, &g, &b)

        return (r, g, b)
    }


    // Inputs Utilities: Keyboard
    // - For 'int user_key_index' you can use your own indices/enums according to how your back-end/engine stored them in io.KeysDown[].
    // - We don't know the meaning of those value. You can use GetKeyIndex() to map a ImGuiKey_ value into the user index.
    /// map ImGuiKey_* values into user's key index. == io.KeyMap[key]
    public static func getKeyIndex(forImGuiKey imGuiKey: CImGuiKey) -> Int {
        Int(igGetKeyIndex(imGuiKey))
    }

    /// is key being held. == io.KeysDown[user_key_index].
    public static func isKeyDown(withUserKeyIndex userKeyIndex: Int) -> Bool {
        igIsKeyDown(Int32(userKeyIndex))
    }

    /// was key pressed (went from !Down to Down)? if repeat=true, uses io.KeyRepeatDelay / KeyRepeatRate
    public static func isKeyPressed(withUserKeyIndex userKeyIndex: Int, repeat: Bool = true) -> Bool {
        igIsKeyPressed(Int32(userKeyIndex), `repeat`)
    }

    /// was key released (went from Down to !Down)?
    public static func isKeyReleased(withUserKeyIndex userKeyIndex: Int) -> Bool {
        igIsKeyReleased(Int32(userKeyIndex))
    }

    /// uses provided repeat rate/delay. a count, most often 0 or 1 but might be >1 if RepeatRate is small enough that DeltaTime > RepeatRate
    public static func getKeyPressedAmount(withUserKeyIndex userKeyIndex: Int, repeatDelay: Float, rate: Float) -> Int {
        Int(igGetKeyPressedAmount(Int32(userKeyIndex), repeatDelay, rate))
    }

    /// attention: misleading name! manually override io.WantCaptureKeyboard flag next frame (said flag is entirely left for your application to handle). e.g. force capture keyboard when your widget is being hovered. This is equivalent to setting "io.WantCaptureKeyboard = want_capture_keyboard_value"; after the next NewFrame() call.
    public static func captureKeyboardFromApp(wantCaptureKeyboard: Bool = true) {
        igCaptureKeyboardFromApp(wantCaptureKeyboard)
    }


    // Inputs Utilities: Mouse
    // - To refer to a mouse button, you may use named enums in your code e.g. ImGuiMouseButton_Left, ImGuiMouseButton_Right.
    // - You can also use regular integer: it is forever guaranteed that 0=Left, 1=Right, 2=Middle.
    // - Dragging operations are only reported after mouse has moved a certain distance away from the initial clicking position (see 'lock_threshold' and 'io.MouseDraggingThreshold')
    /// is mouse button held?
    public static func isMouseDown(withButton button: CImGuiMouseButton) -> Bool {
        igIsMouseDown(button)
    }

    /// did mouse button clicked? (went from !Down to Down)
    public static func isMouseClicked(withButton button: CImGuiMouseButton, repeat: Bool = false) -> Bool {
        igIsMouseClicked(button, `repeat`)
    }

    /// did mouse button released? (went from Down to !Down)
    public static func isMouseReleased(withButton button: CImGuiMouseButton) -> Bool {
        igIsMouseReleased(button)
    }

    /// did mouse button double-clicked? (note that a double-click will also report IsMouseClicked() == true)
    public static func isMouseDoubleClicked(withButton button: CImGuiMouseButton) -> Bool {
        igIsMouseDoubleClicked(button)
    }

    /// is mouse hovering given bounding rect (in screen space). clipped by current clipping settings, but disregarding of other consideration of focus/window ordering/popup-block.
    public static func isMouseHoveringRect(withMin min: CImVec2, max: CImVec2, clip: Bool = true) -> Bool {
        igIsMouseHoveringRect(min, max, clip)
    }

    /// by convention we use (-FLT_MAX,-FLT_MAX) to denote that there is no mouse available
    public static func isMousePositionValid(customMousePosition mousePosition: UnsafePointer<CImVec2>? = nil) -> Bool {
        igIsMousePosValid(mousePosition)
    }

    /// is any mouse button held?
    public static func isAnyMouseDown() -> Bool {
        igIsAnyMouseDown()
    }

    /// shortcut to ImGui::GetIO().MousePos provided by user, to be consistent with other calls
    public static func getMousePosition() -> CImVec2 {
        igGetMousePos()
    }

    /// retrieve mouse position at the time of opening popup we have BeginPopup() into (helper to avoid user backing that value themselves)
    public static func getMousePositionOnOpeningCurrentPopup() -> CImVec2 {
        igGetMousePosOnOpeningCurrentPopup()
    }

    /// is mouse dragging? (if lock_threshold < -1, uses io.MouseDraggingThreshold)
    public static func isMouseDragging(withButton button: CImGuiMouseButton, lockThreshold: Float = -1) -> Bool {
        igIsMouseDragging(button, lockThreshold)
    }

    /// the delta from the initial clicking position while the mouse button is pressed or was just released. This is locked and 0 until the mouse moves past a distance threshold at least once (if lock_threshold < -1, uses io.MouseDraggingThreshold)
    public static func getMouseDragDelta(withButton button: CImGuiMouseButton = 0, lockThreshold: Float = -1) -> CImVec2 {
        igGetMouseDragDelta(button, lockThreshold)
    }

    public static func resetMouseDragDelta(withButton button: CImGuiMouseButton = 0) {
        igResetMouseDragDelta(button)
    }
                   //
    /// get desired cursor type, reset in ImGui::NewFrame(), this is updated during the frame. valid before Render(). If you use software rendering by setting io.MouseDrawCursor ImGui will render those for you
    public static func getMouseCursor() -> CImGuiMouseCursor {
        igGetMouseCursor()
    }

    /// set desired cursor type
    public static func setMouseCursor(to cursorType: CImGuiMouseCursor) {
        igSetMouseCursor(cursorType)
    }

    /// attention: misleading name! manually override io.WantCaptureMouse flag next frame (said flag is entirely left for your application to handle). This is equivalent to setting "io.WantCaptureMouse = want_capture_mouse_value;" after the next NewFrame() call.
    public static func captureMouseFromApp(wantCaptureMouse: Bool = true) {
        igCaptureMouseFromApp(wantCaptureMouse)
    }


    // Clipboard Utilities
    // - Also see the LogToClipboard() function to capture GUI into clipboard, or easily output text data to the clipboard.
    public static func getClipboardText() -> String {
        .init(cString: igGetClipboardText())
    }

    public static func setClipboardText(to text: String) {
        igSetClipboardText(text)
    }


    // Settings/.Ini Utilities
    // - The disk functions are automatically called if io.IniFilename != NULL (default is "imgui.ini").
    // - Set io.IniFilename to NULL to load/save manually. Read io.WantSaveIniSettings description about handling .ini saving manually.
    /// call after CreateContext() and before the first call to NewFrame(). NewFrame() automatically calls LoadIniSettingsFromDisk(io.IniFilename).
    public static func loadIniSettingsFromDisk(iniFilename: String) {
        igLoadIniSettingsFromDisk(iniFilename)
    }

    /// call after CreateContext() and before the first call to NewFrame() to provide .ini data from your own data source.
    public static func loadIniSettingsFromMemory(iniData: String) {
        igLoadIniSettingsFromMemory(iniData, iniData.utf8.count)
    }

    /// this is automatically called (if io.IniFilename is not empty) a few seconds after any modification that should be reflected in the .ini file (and also by DestroyContext).
    public static func saveIniSettingsToDisk(iniFilename: String) {
        igSaveIniSettingsToDisk(iniFilename)
    }

    /// a zero-terminated string with the .ini data which you can save by your own mean. call when io.WantSaveIniSettings is set, then save data by your own mean and clear io.WantSaveIniSettings.
    public static func saveIniSettingsToMemory() -> String {
        .init(cString: igSaveIniSettingsToMemory(nil))
    }


    // (Optional) Platform/OS interface for multi-viewport support
    // Read comments around the ImGuiPlatformIO structure for more details.
    // Note: You may use GetWindowViewport() to get the current viewport of the current window.
    /// platform/renderer functions, for back-end to setup + viewports list.
    public static func getPlatformIO() -> UnsafeMutablePointer<CImGuiPlatformIO> {
        igGetPlatformIO()
    }

    /// main viewport. same as GetPlatformIO().MainViewport == GetPlatformIO().Viewports[0].
    public static func getMainViewport() -> UnsafeMutablePointer<CImGuiViewport> {
        igGetMainViewport()
    }

    /// call in main loop. will call CreateWindow/ResizeWindow/etc. platform functions for each secondary viewport, and DestroyWindow for each inactive viewport.
    public static func updatePlatformWindows() {
        igUpdatePlatformWindows()
    }

    /// call in main loop. will call RenderWindow/SwapBuffers platform functions for each secondary viewport which doesn't have the ImGuiViewportFlags_Minimized flag set. May be reimplemented by user for custom rendering needs.
    public static func renderPlatformWindowsDefault<PlatformArg, RendererArg>(platformRenderArg: PlatformArg? = nil, rendererRenderArg: RendererArg? = nil) {
        var platformRenderArg = platformRenderArg
        var rendererRenderArg = rendererRenderArg

        igRenderPlatformWindowsDefault(&platformRenderArg, &rendererRenderArg)
    }

    /// call DestroyWindow platform functions for all viewports. call from back-end Shutdown() if you need to close platform windows before imgui shutdown. otherwise will be called by DestroyContext().
    public static func destroyPlatformWindows() {
        igDestroyPlatformWindows()
    }

    /// this is a helper for back-ends.
    public static func findViewportByID(_ id: CImGuiID) -> UnsafeMutablePointer<CImGuiViewport>? {
        igFindViewportByID(id)
    }

    /// this is a helper for back-ends. the type platform_handle is decided by the back-end (e.g. HWND, UnsafeMutablePointer<MyWindow>, etc: UnsafeMutablePointer<GLFWwindow>.)
    public static func findViewportByPlatformHandle(_ platformHandle: UnsafeMutableRawPointer) -> UnsafeMutablePointer<CImGuiViewport>? {
        igFindViewportByPlatformHandle(platformHandle)
    }

}
