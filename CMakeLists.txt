cmake_minimum_required(VERSION 3.0.0)
project(hello-world VERSION 0.1.0)

include(CTest)
enable_testing()
add_subdirectory(my-math)

add_executable(hello-world main.c)
target_link_libraries(hello-world PUBLIC my-math)

target_include_directories(hello-world PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/my-math"
                          )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
