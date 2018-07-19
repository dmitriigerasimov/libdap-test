cmake_minimum_required(VERSION 3.0)

project(dap_test)

add_library(${PROJECT_NAME} STATIC dap_test.h dap_test.c)

target_include_directories(dap_test INTERFACE .)
