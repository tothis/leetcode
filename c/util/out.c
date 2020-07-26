#include <stdio.h>

void outInt(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        printf(i < size - 1 ? "," : "\n");
    }
}

void outChar(char *arr) {
    int i = 1;
    printf("%c", arr[0]);
    while (arr[i] != 0) {
        printf(",%c", arr[i]);
        i++;
    }
    printf("\n");
}