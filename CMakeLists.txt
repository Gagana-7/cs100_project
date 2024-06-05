cmake_minimum_required(VERSION 3.2)
project(final-project)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/src")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/src")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${LIBRARY_OUTPUT_PATH})

include_directories(
  ${CMAKE_SOURCE_DIR}/test/src/googletest/include/
  ${CMAKE_SOURCE_DIR}/test/src/googlemock/include/
)




add_subdirectory(src)
add_subdirectory(tests)
# add_executable(main main.cpp)
add_executable(main
  src/main.cpp
)

target_link_libraries(main gmock gtest gtest_main)
target_link_libraries(main simpleLibrary)

