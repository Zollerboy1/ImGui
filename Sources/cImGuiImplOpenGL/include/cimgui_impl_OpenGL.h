//
//  cimgui_impl_OpenGL.h
//  
//
//  Created by Josef Zoller on 06.03.20.
//

#ifndef cimgui_impl_OpenGL_h
#define cimgui_impl_OpenGL_h


#ifndef __cplusplus
    #include <stdbool.h>
#endif

typedef struct GLFWwindow GLFWwindow;
typedef struct CImDrawData CImDrawData;

#ifdef __cplusplus
extern "C" {
#endif

bool igImplGLFW_Init(GLFWwindow * window, bool install_callbacks);
void igImplGLFW_Shutdown();
void igImplGLFW_NewFrame();

bool igImplOpenGL_Init(const char * glsl_version);
bool igImplOpenGL_Init_null();
void igImplOpenGL_Shutdown();
void igImplOpenGL_NewFrame();
void igImplOpenGL_RenderDrawData(CImDrawData * draw_data);

#ifdef __cplusplus
}
#endif

#endif //cimgui_impl_OpenGL_h
