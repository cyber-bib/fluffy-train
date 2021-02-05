#include "viewport.hxx"

#pragma region initializers {
	worm::viewport::viewport (
		const char* title
	) {
		// vtkNew<vtkCylinderSource> cylinder;
		// cylinder->SetResolution(8);

		// vtkNew<vtkPolyDataMapper> cylinderMapper;
		// cylinderMapper->SetInputConnection(cylinder->GetOutputPort());

		// vtkNew<vtkActor> cylinderActor;
		// cylinderActor->SetMapper(cylinderMapper);
		// cylinderActor->GetProperty()->SetColor(0.8, 0.0, 0.0);
		// cylinderActor->RotateX(30.0);
		// cylinderActor->RotateY(-45.0);

		m_renderer = renderer_t::New();
		m_renderer->SetBackground(0.5, 0.5, 0.5);
		// m_renderer->AddActor(cylinderActor);
		m_renderer->ResetCamera();
		m_renderer->GetActiveCamera()->Zoom(1.5);

		m_window = window_t::New();
		m_window->SetSize(300, 300);
		m_window->AddRenderer(m_renderer);
		m_window->SetWindowName("vtk viewport");

		m_style = style_t::New();
		
		m_interactor = interactor_t::New();
		m_interactor->SetRenderWindow(m_window);
		m_interactor->SetInteractorStyle(m_style);
		
		m_window->Render();
		m_interactor->Start();
	}
#pragma endregion } initializers 