cmake_minimum_required (VERSION 2.6)

file(GLOB_RECURSE SOURCES *.cpp)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(
        ${LibSrcDir}/qapp
)

link_directories(${QindoLibOutputPath})

add_executable(gamesvr ${SOURCES})

target_link_libraries(
        gamesvr
        qindo
)