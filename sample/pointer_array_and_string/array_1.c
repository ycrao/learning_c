#include <stdio.h>

int main() {
    char s[] = "How big is it?";
    char *t = s;
    // 返回 15 ，数组 s 在存储器中的长度
    printf("size of s is %i\n", sizeof s);
    // （64位系统）返回 8，指针变量 t 的存储字节大小
    printf("size of t is %i\n", sizeof t);
    if (&s == s) {
        // 可能产生编译器警告
        // 数组变量使用 & 运算符，结果是数组变量的自身
        printf("&s == s\n");
    }
}