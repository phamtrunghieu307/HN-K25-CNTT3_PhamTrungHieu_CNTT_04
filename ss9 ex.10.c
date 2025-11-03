#include <stdio.h>

int main() {
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count[100] = {0};  // Gi? s? các ph?n t? <= 99
    int maxCount = 0;
    int i , k , j ; 
    // T?m s? l?n xu?t hi?n c?a t?ng ph?n t?
    for ( i = 0; i < n; i++) {
        int cnt = 0;
        for ( j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                cnt++;
        }
        // N?u t?m th?y s? l?n xu?t hi?n l?n hõn maxCount th? c?p nh?t
        if (cnt > maxCount)
            maxCount = cnt;
        count[i] = cnt;
    }

    // In ra t?t c? ph?n t? có s? l?n xu?t hi?n = maxCount (tránh in trùng)
    printf("Phan tu xuat hien nhieu nhat la: ");
    for ( i = 0; i < n; i++) {
        int alreadyPrinted = 0;
        // ki?m tra n?u ph?n t? này ð? in trý?c ðó chýa
        for ( k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                alreadyPrinted = 1;
                break;
            }
        }
        if (!alreadyPrinted && count[i] == maxCount) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}

