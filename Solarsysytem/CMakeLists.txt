# CMakeList.txt : CMake project for Solarsysytem, include source and define
# project specific logic here.
#

# Add source to this project's executable.
cmake_minimum_required(VERSION 3.10)
project(Solarsysytem VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Add executable
add_executable(Solarsysytem
    
    src/app.cpp
    src/window.cc
    src/shader.cc
    src/renderer.cpp
    src/camera.cc
    src/texture.cc
    src/shape.cc
    src/layerStack.cc
    src/vertexBuffer.cc
    src/vertex.cc    # GLAD
    vendor/glad/src/glad.c

    # ImGui
    vendor/imgui/imgui.cpp
    vendor/imgui/imgui_draw.cpp
    vendor/imgui/imgui_tables.cpp
    vendor/imgui/imgui_widgets.cpp
    vendor/imgui/backends/imgui_impl_glfw.cpp
    vendor/imgui/backends/imgui_impl_opengl3.cpp
 )

# Include directories
target_include_directories(Solarsysytem PRIVATE
    src/include
    vendor/imgui
    vendor/imgui/backends
    vendor/include
    vender/glad/include

    
    
)
add_custom_command(TARGET Solarsysytem POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/assests $<TARGET_FILE_DIR:Solarsysytem>/assests
)
# Link GLFW and OpenGL
# Adjust this path if your GLFW lib is different (.lib/.a/.so)
if(WIN32)
    target_link_libraries(Solarsysytem PRIVATE 
        ${CMAKE_SOURCE_DIR}/Solarsysytem/vendor/lib/glfw3.lib
        opengl32
    )
    set_target_properties(Solarsysytem PROPERTIES
    VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
)
elseif(UNIX)
    find_package(OpenGL REQUIRED)
    target_link_libraries(Solarsysytem PRIVATE 
        ${CMAKE_SOURCE_DIR}/Solarsysytem/vendor/GLFW/lib/libglfw3.a
        OpenGL::GL
        pthread
        dl
    )
endif()

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Solarsysytem PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
