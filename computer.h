#ifndef COMPUTER_H
#define COMPUTER_H

#include <stdio.h>
#include <time.h>

#define compute(solution) {\
    const clock_t start = clock();\
    solution; \
    const clock_t end = clock();\
    const long double elapsed_ticks = (long double)(end - start);\
    const long double elapsed_sec = elapsed_ticks / CLOCKS_PER_SEC;\
    puts("Timings:");\
    printf("%10.6Lf  s\n", elapsed_sec);\
    printf("%10.3Lf ms\n", elapsed_sec * 1000.0L);\
    printf("%10.1Lf µs\n", elapsed_sec * 1000000.0L);\
    printf("%10.0Lf ns\n", elapsed_sec * 1000000000.0L);\
}

#endif
