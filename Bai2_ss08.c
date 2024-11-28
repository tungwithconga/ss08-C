#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int search, found = 0;
    printf("Nhap vao phan tu can tim: ");
    scanf("%d", &search);
    
    for (int i = 0; i < 5; i++) {
        if (array[i] == search) {
            printf("Vi tri phan tu trong mang la %d\n", i);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }
    
    return 0;
}

