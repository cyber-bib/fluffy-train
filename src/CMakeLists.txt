# if(TRAIN_SYSTEM_NAME STREQUAL "www")
# 	message(STATUS "Setting output files as html")
# 	set(CMAKE_EXECUTABLE_SUFFIX ".html")
# endif()

# add_executable("${CMAKE_PROJECT_NAME}" MACOSX_BUNDLE main.cxx )
add_executable("${CMAKE_PROJECT_NAME}" main.cxx)

target_link_libraries ("${CMAKE_PROJECT_NAME}"
	PRIVATE "${VTK_LIBRARIES}"
)

vtk_module_autoinit (
	TARGETS "${CMAKE_PROJECT_NAME}"
	MODULES "${VTK_LIBRARIES}"
)