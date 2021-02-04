
if(TRAIN_SYSTEM_NAME STREQUAL "www")
    message(STATUS "Setting output files as html")
    set(CMAKE_EXECUTABLE_SUFFIX ".html")
endif()

add_executable("${CMAKE_PROJECT_NAME}" main.cxx)
