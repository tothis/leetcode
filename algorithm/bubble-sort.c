#include <stdio.h>
#include "../common/out.c"

int main() {

    int arr[] = {3, 2, 1};

    // 装载临时变量
    int temp;
    // 记录是否发生置换 1 未置换 0 已置换
    int flag;

    size_t size = sizeof(arr) / 4 - 1;

    for (int i = 0; i < size; i++) {
        flag = 1;
        for (int j = 0; j < size - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // 此次循环元素发生交换
                flag = 0;
            }
        }
        // 元素未发生交换说明排序已经完成无需继续循环
        if (flag) {
            break;
        }
    }

    outInt(arr, 3);
    return 0;
}