#include <stdio.h>

void read_message(char msg[]) {
    printf("Message reads: %s\n", msg);
    // 这里 sizeof(msg) (64位系统）会返回 8 , 实际表示的是指针变量的大小，并非 msg 字符串总长度
    printf("msg occupies %i bytes\n", sizeof msg);
}

int main() {
    char message[] = "Hello World.";
    // 数组变量可以当指针使用
    printf("message save at: %p\n", message);
    read_message(message);
}