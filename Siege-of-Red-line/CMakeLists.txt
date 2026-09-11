# CMakeList.txt : CMake project for Siege-of-Red-line, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Siege-of-Red-line" LANGUAGES CXX)

# OpenGL is provided by the Windows SDK and resolves to opengl32.lib on Windows.
find_package(OpenGL REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(GLUT REQUIRED)
find_package(glm CONFIG REQUIRED)
find_package(SFML 2.6 CONFIG REQUIRED COMPONENTS graphics window system)
find_package(imgui CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)

# Add source to this project's executable.
add_executable (Siege-of-Red-line  
    src/game/src/main.cpp
 "src/core/include/collisions.h" "src/core/include/rendering.h" "src/core/include/behaviour.h" "src/core/include/entities.h" "src/core/src/collision.cpp" "src/core/src/rendering.cpp" "src/core/src/entities.cpp" "src/core/src/behaviour.cpp" "src/game/include/main-screen.h" "src/game/include/rendering.h" "src/game/include/ui.h" "src/game/src/rendering.cpp" "src/game/src/ui.cpp" "libraries/xfimathlib.h")

 add_custom_command(TARGET Siege-of-Red-line POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    "${CMAKE_CURRENT_SOURCE_DIR}/assets"
    "$<TARGET_FILE_DIR:Siege-of-Red-line>/assets"
)

set(GLSL_SHADER_FILES
    shaders/basic.vert
    shaders/basic.frag
)

set_source_files_properties(${GLSL_SHADER_FILES} PROPERTIES HEADER_FILE_ONLY TRUE)
target_sources(Siege-of-Red-line PRIVATE ${GLSL_SHADER_FILES})

target_link_libraries(Siege-of-Red-line PRIVATE
    OpenGL::GL
    glfw
    GLUT::GLUT
    glm::glm
    sfml-graphics
    sfml-window
    sfml-system
    imgui::imgui
    glad::glad
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Siege-of-Red-line PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
