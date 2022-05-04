//
//  cimgui_impl_OpenGL.cpp
//  
//
//  Created by Josef Zoller on 06.03.20.
//

#include "cimgui_impl_OpenGL.h"

#include <cimgui.h>
#include <conversions.h>
#include <cppimgui_impl_OpenGL.hpp>


bool igImplGLFW_Init(GLFWwindow * window, bool install_callbacks) {
    return ImGui_ImplGlfw_InitForOpenGL(window, install_callbacks);
}

void igImplGLFW_Shutdown() {
    ImGui_ImplGlfw_Shutdown();
}

void igImplGLFW_NewFrame() {
    ImGui_ImplGlfw_NewFrame();
}


bool igImplOpenGL_Init(const char * glsl_version) {
    return ImGui_ImplOpenGL3_Init(glsl_version);
}

bool igImplOpenGL_Init_null() {
    return ImGui_ImplOpenGL3_Init();
}

void igImplOpenGL_Shutdown() {
    ImGui_ImplOpenGL3_Shutdown();
}

void igImplOpenGL_NewFrame() {
    ImGui_ImplOpenGL3_NewFrame();
}

void igImplOpenGL_RenderDrawData(CImDrawData * draw_data) {
    ImGui_ImplOpenGL3_RenderDrawData(toIm(draw_data));
}


bool igImplOpenGL_CreateFontsTexture() {
    return ImGui_ImplOpenGL3_CreateFontsTexture();
}

void igImplOpenGL_DestroyFontsTexture() {
    ImGui_ImplOpenGL3_DestroyFontsTexture();
}

