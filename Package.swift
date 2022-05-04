// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "ImGui",
    products: [
        // Products define the executables and libraries produced by a package, and make them visible to other packages.
        .library(
            name: "cppImGui",
            targets: ["cppImGui"]),
        .library(
            name: "cImGui",
            targets: ["cImGui"]),
        .library(
            name: "ImGui",
            targets: ["ImGui"]),
        .library(
            name: "ImGuiImplOpenGL",
            targets: ["ImGuiImplOpenGL"]),
        .library(
            name: "ImGuiImplMetal",
            targets: ["ImGuiImplMetal"])
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
        .package(url: "https://github.com/Zollerboy1/glad.git", from: "1.0.0"),
        .package(url: "https://github.com/Zollerboy1/GLFW.git", from: "1.0.0")
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages which this package depends on.
        .target(
            name: "cppImGui",
            dependencies: ["glad", "GLFW"],
            sources: ["imgui/imgui_demo.cpp", "imgui/imgui_draw.cpp", "imgui/imgui_tables.cpp", "imgui/imgui_widgets.cpp", "imgui/imgui.cpp", "imgui/backends/imgui_impl_glfw.cpp", "imgui/backends/imgui_impl_opengl3.cpp", "imgui/backends/imgui_impl_metal.mm"],
            cxxSettings: [.headerSearchPath("imgui")]),
        .target(
            name: "cImGui",
            dependencies: ["cppImGui"]),
        .target(
            name: "cImGuiImplOpenGL",
            dependencies: ["cImGui", "cppImGui"],
            cxxSettings: [.headerSearchPath("../cppImGui/imgui")]),
        .target(
            name: "cImGuiImplMetal",
            dependencies: ["cImGui", "cppImGui"],
            cxxSettings: [.headerSearchPath("../cppImGui/imgui")]),
        .target(
            name: "ImGui",
            dependencies: ["cImGui"]),
        .target(
            name: "ImGuiImplOpenGL",
            dependencies: ["cImGuiImplOpenGL", "ImGui"]),
        .target(
            name: "ImGuiImplMetal",
            dependencies: ["cImGuiImplMetal", "ImGui"]),
        .testTarget(
            name: "ImGuiTests",
            dependencies: ["ImGui"])
    ],
    cLanguageStandard: .c11,
    cxxLanguageStandard: .cxx20
)
