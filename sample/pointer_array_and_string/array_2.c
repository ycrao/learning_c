#include <stdio.h>

void skip(char *msg) {
    puts(msg + 6);
}

int main() {
    int drinks[] = {4, 2, 3};

    // 第一单 4 杯
    printf("first bill: %i cups\n", drinks[0]);  // 使用数组下标序号来访问数组元素
    printf("first bill: %i cups\n", *drinks);  // 使用数组指针来访问数组元素
    // 第三单 3 杯
    printf("third bill: %i cups\n", drinks[2]);  // 使用数组下标序号来访问数组元素
    printf("third bill: %i cups\n", *(drinks + 2));  // 使用数组指针来访问数组元素

    // 对 int 指针通常占用4字节，加1 ，编译后的代码会对存储器地址加 4 字节
    printf("drinks 's address is %p\n", drinks);
    printf("drinks + 1 's address is %p\n", drinks + 1);

    char *msg = "Don't call me";
    skip(msg);  // call me
}