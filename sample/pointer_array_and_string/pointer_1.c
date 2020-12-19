#include <stdio.h>

int main() {
    int x = 4;
    // %p 格式符将变量x的存储地址以16进制展示出来
    printf("x lives at %p\n", &x);
    // 指针变量：它保存的是一个地址
    int *address_of_x = &x;
    // 读取 address_of_x 所给出存储器地址中的内容，即最初赋值 4
    int value_stored = *address_of_x;
    printf("value_stored %d\n", value_stored);  // 4
    // 修改这个指针变量所指向地址中的数据
    *address_of_x = 99;
    printf("x is %d\n", x);  // 99
}