cmake_minimum_required(VERSION 3.14.0 FATAL_ERROR)

message(WARNING "Current project only supports emscripten builds.")

# set(THIRD_PARTY_ROOT "$ENV{DEV_DIR}")
# set(VTK_DIR "${THIRD_PARTY_ROOT}/vtk/vtk-master_build/Install/lib/cmake/vtk-9.0")
# set(CMAKE_TOOLCHAIN_FILE "${THIRD_PARTY_ROOT}/emscripten/emsdk/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake")

if((NOT DEFINED TRAIN_SYSTEM_NAME) OR (TRAIN_SYSTEM_NAME STREQUAL "TRAIN_SYSTEM_NAME-NOTSPECIFIED"))
	set(TRAIN_SYSTEM_NAME "TRAIN_SYSTEM_NAME-NOTSPECIFIED")
	message(FATAL_ERROR "System name not specified")
elseif(TRAIN_SYSTEM_NAME STREQUAL "windows")
	set(TRAIN_SYSTEM_NAME "TRAIN_SYSTEM_NAME-NOTSPECIFIED")
	message(FATAL_ERROR "windows support currently under development.")
elseif(TRAIN_SYSTEM_NAME STREQUAL "linux")
	set(TRAIN_SYSTEM_NAME "TRAIN_SYSTEM_NAME-NOTSPECIFIED")
	message(FATAL_ERROR "linux support currently under development.")
elseif(TRAIN_SYSTEM_NAME STREQUAL "ios")
	set(TRAIN_SYSTEM_NAME "TRAIN_SYSTEM_NAME-NOTSPECIFIED")
	message(FATAL_ERROR "ios support currently under development.")
elseif(TRAIN_SYSTEM_NAME STREQUAL "www")
	message(STATUS "Building for World Wide Web")

	if((NOT DEFINED CMAKE_TOOLCHAIN_FILE) OR (CMAKE_TOOLCHAIN_FILE STREQUAL "CMAKE_TOOLCHAIN_FILE-NOTFOUND"))
		set(CMAKE_TOOLCHAIN_FILE "CMAKE_TOOLCHAIN_FILE-NOTFOUND" CACHE PATH "Emscripten's cross compilation toolchain")
		message(FATAL_ERROR "Emscripten's cross-compilation file not set/found")
	endif()
else()
	set(TEMP_TRAIN_SYSTEM_NAME TRAIN_SYSTEM_NAME)
	set(TRAIN_SYSTEM_NAME "TRAIN_SYSTEM_NAME-NOTSPECIFIED")
	message(FATAL_ERROR "${TEMP_TRAIN_SYSTEM_NAME} system not supported")
endif()

project(${CMAKE_PROJECT_NAME} LANGUAGES C CXX)

if((NOT DEFINED THIRD_PARTY_ROOT) OR (THIRD_PARTY_ROOT STREQUAL "THIRD_PARTY_ROOT-NOTFOUND"))
	set(THIRD_PARTY_ROOT "THIRD_PARTY_ROOT-NOTFOUND" CACHE PATH "path to third-party modules/libraries")
	message(FATAL_ERROR "Third-party director root not set/found")
endif()
# message(STATUS "Third-party dir: ${THIRD_PARTY_ROOT}")

if((NOT DEFINED VTK_DIR) OR (VTK_DIR STREQUAL "VTK_DIR-NOTFOUND"))
	set(VTK_DIR "VTK_DIR-NOTFOUND" CACHE PATH "vtk's cmake config file root directory")
	message(FATAL_ERROR "vtk's cmake config file root directory not set/found")
endif()
# message(STATUS "vtk dir: ${VTK_DIR}")


list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/modules")
include(Doxyfile)

include(GNUInstallDirs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}")

find_package(VTK REQUIRED)


# message("flags: \t${CMAKE_CXX_FLAGS}")
add_subdirectory(src)