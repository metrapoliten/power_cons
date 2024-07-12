cmake_minimum_required(VERSION 3.23)
project(power_cons)

find_package(gsl-lite 0.40 REQUIRED)

set(CMAKE_CXX_STANDARD 20)

set(MP_UNITS_API_STRING_VIEW_RET FALSE)
set(MP_UNITS_API_NO_CRTP FALSE)

add_executable(power_cons main.cpp constants.h)

add_subdirectory(mp-units/src)

target_link_libraries(power_cons PRIVATE gsl::gsl-lite-v1)
target_link_libraries(power_cons PRIVATE mp-units::mp-units)

target_compile_options(power_cons PRIVATE -O2)