#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <algorithm>

void sortArray(int arr[], int n) {
    std::sort(arr, arr + n);
}

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    sortArray(arr, n);
    int j = 0; 
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i+1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n-1];

    return j;
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau: ");
    printArray(arr, n);
    int newSize = removeDuplicates(arr, n);

    printf("Kich thuoc moi cua mang: %d\n", newSize);
    printf("Mang sau khi loai bo cac phan tu trung lap: ");
    printArray(arr, newSize);

    return 0;
}

