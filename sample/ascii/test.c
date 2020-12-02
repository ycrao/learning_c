#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <string.h>


int main()
{
    char tmp[33];
    // DEC(124) => BIN(01111100)
    unsigned int d = 124;
    // BIN(01111100) & BIN(10000000) => BIN(00000000) // 0
    tmp[0] = d & (1 << 7) ? '1' : '0';
    // BIN(01111100) & BIN(01000000) => BIN(01000000) // 1
    tmp[1] = d & (1 << 6) ? '1' : '0';
    // BIN(01111100) & BIN(00100000) => BIN(00100000) // 1
    tmp[2] = d & (1 << 5) ? '1' : '0';
    // BIN(01111100) & BIN(00010000) => BIN(00010000) // 1
    tmp[3] = d & (1 << 4) ? '1' : '0';
    // BIN(01111100) & BIN(00001000) => BIN(00001000) // 1
    tmp[4] = d & (1 << 3) ? '1' : '0';
    // BIN(01111100) & BIN(00000100) => BIN(00000100) // 1
    tmp[5] = d & (1 << 2) ? '1' : '0';
    // BIN(01111100) & BIN(00000010) => BIN(00000000) // 0
    tmp[6] = d & (1 << 1) ? '1' : '0';
    // BIN(01111100) & BIN(00000001) => BIN(00000000) // 0
    tmp[7] = d & (1 << 0) ? '1' : '0';
    tmp[8] = '\0';
    printf("without null character: %zu\n", strlen(tmp));
    printf("with null character:    %zu\n", sizeof tmp);
    #ifdef __STDC_LIB_EXT1__
    printf("without null character: %zu\n", strnlen_s(tmp, sizeof tmp));
    #endif
}