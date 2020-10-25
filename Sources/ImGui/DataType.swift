//
//  DataType.swift
//  ImGui
//
//  Created by Josef Zoller on 23.10.20.
//

import cImGui

public protocol ImGuiDataType {
    static var dataType: CImGuiDataType { get }
}

extension Int8: ImGuiDataType {
    public static let dataType: CImGuiDataType = CImGuiDataType(CImGuiDataType_S8.rawValue)
}

extension UInt8: ImGuiDataType {
    public static let dataType: CImGuiDataType = CImGuiDataType(CImGuiDataType_U8.rawValue)
}

extension Int16: ImGuiDataType {
    public static let dataType: CImGuiDataType = CImGuiDataType(CImGuiDataType_S16.rawValue)
}

extension UInt16: ImGuiDataType {
    public static let dataType: CImGuiDataType = CImGuiDataType(CImGuiDataType_U16.rawValue)
}

extension Int32: ImGuiDataType {
    public static let dataType: CImGuiDataType = CImGuiDataType(CImGuiDataType_S32.rawValue)
}

extension UInt32: ImGuiDataType {
    public static let dataType: CImGuiDataType = CImGuiDataType(CImGuiDataType_U32.rawValue)
}

extension Int64: ImGuiDataType {
    public static let dataType: CImGuiDataType = CImGuiDataType(CImGuiDataType_S64.rawValue)
}

extension UInt64: ImGuiDataType {
    public static let dataType: CImGuiDataType = CImGuiDataType(CImGuiDataType_U64.rawValue)
}

extension Int: ImGuiDataType {
    public static let dataType: CImGuiDataType = CImGuiDataType((Self.bitWidth == 8 ? CImGuiDataType_S64 : CImGuiDataType_S32).rawValue)
}

extension UInt: ImGuiDataType {
    public static let dataType: CImGuiDataType = CImGuiDataType((Self.bitWidth == 8 ? CImGuiDataType_U64 : CImGuiDataType_U32).rawValue)
}


extension Float: ImGuiDataType {
    public static let dataType: CImGuiDataType = CImGuiDataType(CImGuiDataType_Float.rawValue)
}

extension Double: ImGuiDataType {
    public static let dataType: CImGuiDataType = CImGuiDataType(CImGuiDataType_Double.rawValue)
}
