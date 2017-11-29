cmake_minimum_required(VERSION 3.8)
project(gomuko)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/main.cpp src/ai/GomukoAi.cpp include/ai/GomukoAi.hpp include/ai/IGomukoAi.hpp include/ai/AGomukoAi.hpp)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build)

add_executable(pbrain-gomuko ${SOURCE_FILES})
