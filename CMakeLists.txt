cmake_minimum_required(VERSION 3.14.0 FATAL_ERROR)

project(${CMAKE_PROJECT_NAME} LANGUAGES C CXX)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(Doxyfile)


include(GNUInstallDirs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}") 

message("${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")

add_subdirectory(src)