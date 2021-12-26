cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(pico-console C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()

add_executable(${PROJECT_NAME} main.cpp include/config.h src/digital_input.cpp include/digital_input.h src/button.cpp include/button.h include/utils.h src/utils.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE include)

target_link_libraries(${PROJECT_NAME}
        pico_stdlib
        hardware_pwm
        hardware_timer
        hardware_adc
        )

pico_add_extra_outputs(${PROJECT_NAME})
pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 0)