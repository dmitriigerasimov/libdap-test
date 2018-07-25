#pragma once
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define TEXT_COLOR_RED   "\x1B[31m"
#define TEXT_COLOR_GRN   "\x1B[32m"
#define TEXT_COLOR_YEL   "\x1B[33m"
#define TEXT_COLOR_BLU   "\x1B[34m"
#define TEXT_COLOR_MAG   "\x1B[35m"
#define TEXT_COLOR_CYN   "\x1B[36m"
#define TEXT_COLOR_WHT   "\x1B[37m"
#define TEXT_COLOR_RESET "\x1B[0m"

/* Can be used like debug info during write test*/
#define dap_test_msg(...) \
    printf("\t%s", TEXT_COLOR_WHT); \
    printf(__VA_ARGS__); \
    printf("%s\n", TEXT_COLOR_RESET);


/* PIF - print if failed. For checking value in loop, for don't repeat output */
#define dap_assert_PIF(expr, msg) \
    if(expr) {} \
    else { \
    printf("\t%s%s FAILED!%s\n", TEXT_COLOR_RED, msg, TEXT_COLOR_RESET); \
    exit(-1); }

#define dap_assert(expr, testname) \
    if(expr) { \
        printf("\t%s%s PASS.%s\n", TEXT_COLOR_GRN, testname, TEXT_COLOR_RESET); \
    } else { \
    printf("\t%s%s FAILED!%s\n", TEXT_COLOR_RED, testname, TEXT_COLOR_RESET); \
    exit(-1); }\

#define dap_pass_msg(testname) \
    printf("\t%s%s PASS.%s\n", TEXT_COLOR_GRN, testname, TEXT_COLOR_RESET); \

#define dap_print_module_name(module_name) \
   printf("%s%s passing the tests... %s\n", TEXT_COLOR_CYN, module_name, TEXT_COLOR_RESET);

void dap_dump_hex(const void* data, size_t size);
