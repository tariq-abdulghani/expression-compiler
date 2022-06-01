cmake_minimum_required(VERSION 3.0.0)
project(hello-world VERSION 0.1.0)

include(CTest)
enable_testing()
# add_subdirectory(my-math)
# add_subdirectory(files)
add_subdirectory(expression-lex)
# add_subdirectory(expression-parser)
add_executable(hello-world main.c)
target_link_libraries(hello-world PUBLIC expression-lex)
# target_link_libraries(hello-world PUBLIC expression-parser)
# target_link_libraries(hello-world PUBLIC my-math)
# target_link_libraries(hello-world PUBLIC my-files)

# target_include_directories(hello-world PUBLIC
#                           "${PROJECT_BINARY_DIR}"
#                           "${PROJECT_SOURCE_DIR}/my-math"
#                           )
# target_include_directories(hello-world PUBLIC
#                           "${PROJECT_BINARY_DIR}"
#                           "${PROJECT_SOURCE_DIR}/my-files"
#                           )
# target_include_directories(hello-world PUBLIC
#                           "${PROJECT_BINARY_DIR}"
#                           "${PROJECT_SOURCE_DIR}/oop"
#                           )

target_include_directories(hello-world PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/expression-lex"
                          )

# target_include_directories(hello-world PUBLIC
#                           "${PROJECT_BINARY_DIR}"
#                           "${PROJECT_SOURCE_DIR}/expression-parser"
#                           )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
