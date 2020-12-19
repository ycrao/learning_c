# 指针、数组与字符串

>   参考资料： http://www.gnu.org/software/libc/manual/html_node/String-and-Array-Utilities.html#String-and-Array-Utilities

### pointer_1

```c
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
```

### pointer_2


```c
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
```

### array_1.c

```c
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
```

### array_2

```c
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
```

### string_1.c

```c
#include <stdio.h>
#include <string.h>

int main ()
{
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("Greeting message: %s\n", greeting);

    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int  len ;
    // strcpy: string copy
    strcpy(str3, str1);
    printf("strcpy(str3, str1):  %s\n", str3);

    // strcat: string concat
    strcat(str1, str2);
    printf("strcat(str1, str2):  %s\n", str1);

    // strlen: string lenth
    len = strlen(str1);
    printf("strlen(str1):  %d\n", len);

    return 0;
}
```


### string_2.c

>   宽字符（串）打印：

```c
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    // setlocale(LC_ALL, "zh-Hans");  // works on VS2019 (Windows)
    // setlocale(LC_ALL, "zh-CN");  // works on VS2019 (Windows)
    // setlocale(LC_ALL, "Chinese_China.936");  // works on MinGW-W64 gcc (Windows)
    // setlocale(LC_ALL, "chs");  // works on MinGW-W64 gcc and VS2019 (Windows)
    // setlocale(LC_ALL, ".936");  // works on MinGW-W64 gcc and VS2019 (Windows)
    // setlocale(LC_ALL, ".OCP");
    // setlocale(LC_ALL, ".ACP");
    // setlocale(LC_ALL, "zh-Hans");  // works on VS2019 (Windows)
    // setlocale(LC_ALL, "zh-CN.utf8");  // works on VS2019 (Windows)
    setlocale(LC_ALL, "zh_CN.utf8");  // works on gcc (Linux)
    wchar_t wstr[] = L"中文";
    wprintf(L"%ls\n", wstr);
    wchar_t c = L'中';
    wprintf(L"%lc\n", c);
    return 0;
}
```