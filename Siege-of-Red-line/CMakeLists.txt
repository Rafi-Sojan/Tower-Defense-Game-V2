# CMakeList.txt : CMake project for Siege-of-Red-line, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("src/game/src/main.cpp")

# Add source to this project's executable.
add_executable (Siege-of-Red-line  
    src/game/src/main.cpp
 "src/core/include/collisions.h" "src/core/include/rendering.h" "src/core/include/behaviour.h" "src/core/include/entities.h" "src/core/src/collision.cpp" "src/core/src/rendering.cpp" "src/core/src/entities.cpp" "src/core/src/behaviour.cpp" "src/game/include/main-screen.h" "src/game/include/rendering.h" "src/game/include/ui.h" "src/game/src/rendering.cpp" "src/game/src/ui.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Siege-of-Red-line PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
