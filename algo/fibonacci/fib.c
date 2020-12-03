#include "stdio.h"

// 解法一 solution2
int fib(unsigned int n) {
    if (n < 2) {
        return n;
    }
    int prev = 0, curr = 1;
    for (int i = 2; i <= n; i ++) {
        int sum = prev + curr;
        prev = curr;
        curr = sum;
    }
    return curr;
}

// 解法二 solution2
int fib2(unsigned int n) {
    int a = n%2;
    int b = 1;
    for (int i = 0; i < n/2; i ++) {
        a += b;
        b += a;
    }
    return a;
}

int main() {
    int f1 = fib(30);
    int f2 = fib2(30);
    printf("fib(30) is %d\n", f1);
    printf("fib2(30) is %d\n", f2);
}