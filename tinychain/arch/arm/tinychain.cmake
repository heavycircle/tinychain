# Set compiler options
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR arm)
set(TRIPLE arm-linux-gnueabi)

# Set output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/arm)

include(${CMAKE_CURRENT_LIST_DIR}/../common.cmake)
