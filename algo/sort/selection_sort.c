#include <stdio.h>

void selectionSort(int* arr, int len) {
    int i, j, buf;
    int minIndex;
    for (i = 0; i < len - 1; ++i) {
        minIndex = i;
        for (j = i + 1; j < len; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        buf = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = buf;
    }
}

int main() {
    printf("original array: {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48}\n");
    int arr[15] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    selectionSort(arr, 15);
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