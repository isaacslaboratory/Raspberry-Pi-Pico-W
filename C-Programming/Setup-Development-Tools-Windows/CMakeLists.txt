# CMake Pico_W project file
# for compiling the Onboard LED blink example in C/C++  

# set project name 
set(PROJECT blinkw)

cmake_minimum_required(VERSION 3.13)

# set the board to pico_w
set(PICO_BOARD pico_w)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)


# set pico_sdk path
set(PICO_SDK_PATH "/mnt/c/home/pico/pico-sdk")

# Include build functions from Pico SDK
include(${PICO_SDK_PATH}/external/pico_sdk_import.cmake)


if (PICO_SDK_VERSION_STRING VERSION_LESS "1.4.0")
  message(FATAL_ERROR "Raspberry Pi Pico SDK version 1.4.0 (or later) required. Your version is ${PICO_SDK_VERSION_STRING}")
endif()

project(${PROJECT} C CXX ASM)

# Initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# Add executable. Default name is the project name, version 0.1

add_executable(${PROJECT} blinkw.c )

pico_set_program_name(${PROJECT} "blinkw")
pico_set_program_version(${PROJECT} "0.1")
 
# Add the standard library to the build
target_link_libraries(${PROJECT}
        pico_stdlib
		pico_cyw43_arch_none # we need Wifi to access the GPIO, but we don't need anything else
		)

# Add the standard include files to the build
target_include_directories(${PROJECT} PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}
  ${CMAKE_CURRENT_LIST_DIR}/.. # for our common lwipopts or any other standard includes, if required
)

pico_add_extra_outputs(${PROJECT})

 

 
