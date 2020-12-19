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
    // setlocale(LC_ALL, "zh_CN.UTF-8");  // works on gcc (Linux)
    setlocale(LC_ALL, "zh_CN.utf8");  // works on gcc (Linux)
    wchar_t wstr[] = L"中文";
    wprintf(L"%ls\n", wstr);
    wchar_t c = L'中';
    wprintf(L"%lc\n", c);
    return 0;
}