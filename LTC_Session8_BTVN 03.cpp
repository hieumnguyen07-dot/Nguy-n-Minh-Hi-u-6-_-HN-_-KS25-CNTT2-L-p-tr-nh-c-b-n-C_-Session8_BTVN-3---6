#include <stdio.h>

int main() {
    int a[5] = {1, 7, 6, 11, 16};
    int i;
    int coSoChan = 0;

    printf("Cac phan tu trong mang: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    printf("\nCac so chan trong mang: ");
    for (i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            coSoChan = 1;
        }
    }

    if (!coSoChan) {
        printf("\nMang khong chua so chan\n");
    } else {
        printf("\n");
    }

    return 0;
}

