cmake_minimum_required(VERSION 2.8.12)

project(FooBarApplication)

include(../cmake/CMakeInclude.txt)

if(NOT TARGET foobar_lib)
	find_package(foobar_lib CONFIG REQUIRED)
	message("## Found Package: foobar_lib")
endif()

# Add all the source files to the SOURCES variable.
file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

# Set the compiled file to the TARGET variable.
set(TARGET "foobar_bin")

add_executable(${TARGET} ${SOURCES})
target_link_libraries(${TARGET} foobar_lib)

target_include_directories(${TARGET} PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
	$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
)
