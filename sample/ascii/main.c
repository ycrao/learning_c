#include <stdio.h>

void int2bin(unsigned int integer, char* binary, unsigned int n) {
    int d = n/8;
    if (n%8 != 0) {
        n = 8*(d+1);
    }
    for (int i = 0; i < n; i ++) {
        // if integer = 124 see test.c
        binary[i] = integer & (1 << (n-i-1)) ? '1' : '0';
    }
    binary[n] = '\0';
}

int main() {
    printf("Visible Char\'s ASCII Code Map\n");
    printf("_______________________________________\n");
    printf("|      |     |          |      |      |\n");
    printf("| Char | Dec | Bin      | Oct  | Hex  |\n");
    printf("|______|_____|__________|______|______|\n");
    char tmp[33];
    for (int i = 32; i <= 126; i ++) {
        int2bin(i, tmp, 8);
        printf("|      |     |          |      |      |\n");
        printf("| %c    | %-3d | %s | 0%-3o | 0x%x |\n", i, i, tmp, i, i);
        // printf("| -    | --- | -------- | ---- | ---- |\n");
        printf("|______|_____|__________|______|______|\n");
    }
}