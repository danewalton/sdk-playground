
cmake_minimum_required(VERSION 3.10)

project(sdk-playground)

add_executable(sdk-playground
  ${CMAKE_CURRENT_LIST_DIR}/src/main.c
)

target_link_libraries(sdk-playground
  PRIVATE
    az::core
    az::iot::core
    az::iot::hub
)

add_subdirectory(deps/azure-sdk-for-c)
