//
//  cimgui_impl_Metal.h
//  
//
//  Created by Josef Zoller on 06.03.20.
//

#ifndef cimgui_impl_Metal_h
#define cimgui_impl_Metal_h


#ifndef __cplusplus
    #include <stdbool.h>
#endif

@class MTLRenderPassDescriptor;
@protocol MTLDevice, MTLCommandBuffer, MTLRenderCommandEncoder;

typedef struct GLFWwindow GLFWwindow;
typedef struct CImDrawData CImDrawData;

#ifdef __cplusplus
extern "C" {
#endif

bool igImplGLFW_Init(GLFWwindow * window, bool install_callbacks);
void igImplGLFW_Shutdown();
void igImplGLFW_NewFrame();

bool igImplMetal_Init(id<MTLDevice> device);
void igImplMetal_Shutdown();
void igImplMetal_NewFrame(MTLRenderPassDescriptor* renderPassDescriptor);
void igImplMetal_RenderDrawData(CImDrawData* draw_data,
                                id<MTLCommandBuffer> commandBuffer,
                                id<MTLRenderCommandEncoder> commandEncoder);

bool igImplMetal_CreateFontsTexture(id<MTLDevice> device);
void igImplMetal_DestroyFontsTexture();

#ifdef __cplusplus
}
#endif

#endif //cimgui_impl_Metal_h
