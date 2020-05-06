#include <stdio.h>
#include <malloc.h>
#include "../common/out.c"

int *decompressRLElist(int *nums, int numsSize, int *returnSize) {
    int *result = (int *) malloc(sizeof(int) * numsSize);
    int count = 0;
    int innerCount = 0;
    *returnSize = 0;
    for (; count < numsSize; count = count + 2) {
        for (; innerCount < nums[count]; innerCount++) {
            result[*returnSize] = nums[count + 1];
            ++*returnSize;
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int returnSize;
    printf("%d\n", returnSize);
    int *result = decompressRLElist(arr, 4, &returnSize);
    printf("%d\n", returnSize);
    outInt(result, 4);
    free(result);
    return 0;
}