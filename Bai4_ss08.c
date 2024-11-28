#include <stdio.h>

int main() {
    int maTran[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    
    int max = maTran[0][0];  
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (maTran[i][j] > max) {
                max = maTran[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    
    return 0;
}

