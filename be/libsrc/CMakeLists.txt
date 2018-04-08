cmake_minimum_required (VERSION 2.6)

file(GLOB_RECURSE SOURCES *.cpp)

set(PROJECT_NAME qindo)
add_library(${PROJECT_NAME}     ${SOURCES})
set(LIBRARY_OUTPUT_PATH         ${QindoLibOutputPath})