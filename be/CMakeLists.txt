# @author   qwertysun
# @createAt 2018/04/02

cmake_minimum_required(VERSION 2.6)

project(qindo)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_COMPILER        "gcc")
set(CMAKE_CXX_COMPILER      "g++")
set(CMAKE_VERBOSE_MAKEFILE  on)
set(CMAKE_COLOR_MAKEFILE    on)
set(CMAKE_CXX_FLAGS         "-Werror -Wall -g -fPIC -std=c++11")

set(CMakeDirRoot            ${CMAKE_CURRENT_SOURCE_DIR})
set(LibSrcDir               ${CMakeDirRoot}/libsrc)

set(BINARY_OUTPUT_PATH      ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(QindoLibOutputPath      ${CMAKE_CURRENT_SOURCE_DIR}/lib)

add_subdirectory(libsrc)
add_subdirectory(gamesvr)
include_directories(
        ${LibSrcDir}/qapp
)