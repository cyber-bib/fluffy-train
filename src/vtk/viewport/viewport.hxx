#include <emscripten.h>
#include <GLES3/gl3.h>
#include <EGL/egl.h>

// #include <vtkPolyDataMapper.h>
#include <vtkProperty.h>
#include <vtkSmartPointer.h>

#include <vtkActor.h>
#include <vtkCamera.h>
#include <vtkRenderer.h>
#include <vtkSDL2OpenGLRenderWindow.h>											// #include <vtkRenderWindow.h>
#include <vtkSDL2RenderWindowInteractor.h>										// #include <vtkRenderWindowInteractor.h>
#include <vtkInteractorStyleTrackballCamera.h>

#include <array>
#include <iostream>

#include "viewport-fd.hxx"

class worm::viewport {
    #pragma region typedefs {
        public:
            typedef vtkSmartPointer<vtkRenderer> renderer_t;	
            typedef vtkSmartPointer<vtkSDL2OpenGLRenderWindow> window_t;	
            typedef vtkSmartPointer<vtkSDL2RenderWindowInteractor> interactor_t;
            typedef vtkSmartPointer<vtkInteractorStyleTrackballCamera> style_t;
    #pragma endregion } typedefs 
    #pragma region variables {
        private:
            renderer_t m_renderer;	
            window_t m_window;	
            interactor_t m_interactor;	
            style_t m_style;
    #pragma endregion } variables 
    #pragma region initializers {
        public:
            viewport(const char* title = "vtk viewport");
    #pragma endregion } initializers 
};