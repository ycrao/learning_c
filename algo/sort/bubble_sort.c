#include <stdio.h>

void bubbleSort(int* arr, int len) {
    // int len = sizeof(arr) / sizeof(arr[0]);
    int i, j, buf;
    for (i = 0; i < len-1; ++ i) {
        for (j = 0; j < len-1-i; ++ j) {
            if (arr[j] > arr[j+1]) {
                buf = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = buf;
            }
        }
    }
}

int main() {
    printf("original array: {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48}\n");
    int arr[15] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    bubbleSort(arr, 15);
    printf("after sorted: {");
    for (int i = 0; i < 15; i ++) {
        if (i == 14) {
            printf("%d}\n", arr[i]);
        } else {
            printf("%d,\x20", arr[i]);
        }
    }
    return 0;
}