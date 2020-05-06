#include <stdio.h>

int main() {
    int i = 1, j = 1;
    for (; i <= 9; i++) {
        for (; j <= i; j++)
            printf("%d*%d=%2d ", i, j, i * j);
        printf("\n");
    }
    return 0;
}