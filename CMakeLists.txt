cmake_minimum_required(VERSION 3.16)
project(penguin LANGUAGES CXX)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)


include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)


# Add all .c, - files under src/ directory
file(GLOB SOURCES_C "src/*.c")
# Add all .cpp, - files under src/ directory
file(GLOB SOURCES_CPP "src/*.cpp")
# Add all .hpp, - files under src/ directory
file(GLOB SOURCES_HPP "include/*.hpp")
# Add all .h, - files under src/ directory
file(GLOB SOURCES_H "include/*.h")
set(SOURCES ${SOURCES_C} ${SOURCES_CPP} ${SOURCES_H} ${SOURCES_HPP})
message(STATUS "SRC directory source code files: \n\t-- HEADERS: ${SOURCES_H}${SOURCES_HPP}\n\t-- C SOURCES: ${SOURCES_C}\n\t-- CPP SOURCE:${SOURCES_CPP}\n\t-- ALL:${SOURCES}")
# add the executable target
add_executable(penguin)

target_sources(penguin PUBLIC ${SOURCES})
target_include_directories(penguin PUBLIC .)
target_include_directories(penguin PUBLIC src)

# add_executable(CMakeSFMLProject src/main.cpp)x
target_link_libraries(penguin PRIVATE sfml-graphics)
target_compile_features(penguin PRIVATE cxx_std_17)

if(WIN32)
    add_custom_command(
        TARGET penguin
        COMMENT "Copy OpenAL DLL"
        PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:CMakeSFMLProject>
        VERBATIM)
endif()

install(TARGETS penguin)
