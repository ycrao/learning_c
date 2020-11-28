#include <stdio.h>

void insertionSort(int* arr, int len) {
    int preIndex, current, i;
    for (i = 1; i < len-1; ++ i) {
        preIndex = i - 1;
        current = arr[i];
        while ((preIndex >= 0) && (arr[preIndex] > current)) {
            arr[preIndex+1] = arr[preIndex];
            preIndex --;
        }
        arr[preIndex+1] = current;
    }
}

int main() {
    printf("original array: {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48}\n");
    int arr[15] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    insertionSort(arr, 15);
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