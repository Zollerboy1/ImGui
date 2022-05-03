//
//  cimgui_impl_Metal.mm
//  
//
//  Created by Josef Zoller on 06.03.20.
//

#include "cimgui_impl_Metal.h"

#include <cimgui.h>
#include <conversions.h>
#include <cppimgui_impl_Metal.hpp>

#import <Metal/Metal.h>


bool igImplGLFW_Init(GLFWwindow * window, bool install_callbacks) {
    return ImGui_ImplGlfw_InitForOpenGL(window, install_callbacks);
}

void igImplGLFW_Shutdown() {
    ImGui_ImplGlfw_Shutdown();
}

void igImplGLFW_NewFrame() {
    ImGui_ImplGlfw_NewFrame();
}


bool igImplMetal_Init(id<MTLDevice> device) {
    return ImGui_ImplMetal_Init(device);
}

void igImplMetal_Shutdown() {
    ImGui_ImplMetal_Shutdown();
}

void igImplMetal_NewFrame(MTLRenderPassDescriptor* renderPassDescriptor) {
    ImGui_ImplMetal_NewFrame(renderPassDescriptor);
}

void igImplMetal_RenderDrawData(CImDrawData* draw_data,
                                id<MTLCommandBuffer> commandBuffer,
                                id<MTLRenderCommandEncoder> commandEncoder) {
    ImGui_ImplMetal_RenderDrawData(toIm(draw_data), commandBuffer, commandEncoder);
}


bool igImplMetal_CreateFontsTexture(id<MTLDevice> device) {
    return ImGui_ImplMetal_CreateFontsTexture(device);
}

void igImplMetal_DestroyFontsTexture() {
    ImGui_ImplMetal_DestroyFontsTexture();
}
