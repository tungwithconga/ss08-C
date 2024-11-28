#include <stdio.h>

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    int total = 0;
    
    for (int i = 0; i < 4; i++) {
        total += arr[0][i];
        total += arr[3][i];
    }
    
    for (int i = 1; i < 3; i++) {
        total += arr[i][0];
        total += arr[i][3];
    }
    
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", total);
    
    return 0;
}

