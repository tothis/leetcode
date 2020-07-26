#include <stdio.h>

/**
 * 将非负整数变成 0 的操作次数
 * @param num
 * @return
 */
int numberOfSteps(int num) {
    int result = 0;
    while (num != 0) {
        if ((num & 1) == 0) {
            num >>= 1;
        } else {
            num--;
        }
        result++;
    }
    return result;
}

int main() {
    // 7 6 3 2 1 0
    // 9 8 4 2 1 0
    printf("%d", numberOfSteps(9));
    return 0;
}