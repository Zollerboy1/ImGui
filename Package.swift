// swift-tools-version:5.1
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "ImGui",
    products: [
        // Products define the executables and libraries produced by a package, and make them visible to other packages.
        .library(
            name: "ImGui",
            targets: ["ImGui"]),
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
            dependencies: ["glad", "GLFW"]),
        .target(
            name: "cImGui",
            dependencies: ["cppImGui"]),
        .target(
            name: "ImGui",
            dependencies: ["cImGui"]),
        .testTarget(
            name: "ImGuiTests",
            dependencies: ["ImGui"]),
    ],
    cLanguageStandard: .c11,
    cxxLanguageStandard: .cxx11
)
