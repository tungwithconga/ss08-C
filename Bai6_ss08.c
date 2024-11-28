#include <stdio.h>

int main() {
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    int diagonalSum = 0;
    
    printf("Cac phan tu tren duong cheo chinh la: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", mat[i][i]);
        diagonalSum += mat[i][i];
    }
    
    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", diagonalSum);
    
    return 0;
}

