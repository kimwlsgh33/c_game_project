cmake_minimum_required(VERSION 3.0)
project(tetris_kjh)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB SRC_FILES "${CMAKE_SOURCE_DIR}/src/*.c")

add_executable(${PROJECT_NAME} ${SRC_FILES})
# sepcify the directories in which the compiler should search for header files when building a specific target(PROJECT_NAME)
target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_SOURCE_DIR}/include")

install(TARGETS ${PROJECT_NAME} DESTINATION /usr/local/bin)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/ DESTINATION /usr/local/include)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/src/ DESTINATION /usr/local/src)

set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "kjh")
set(CPACK_DEBIAN_PACKAGE_DESCRIPTION "Tetris game")
include(CPack)
