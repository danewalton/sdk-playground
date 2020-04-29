
cmake_minimum_required(VERSION 3.10)

project(sdk-playground)

add_executable(sdk-playground
  src/main.c
)

target_link_libraries(sdk-playground
  PRIVATE
    az::iot::hub
)

add_subdirectory(deps/azure-sdk-for-c)
