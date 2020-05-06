#include <stdio.h>

/**
 * 快乐数
 * @param n
 * @return
 */
int num(int n) {
    int result = 0;
    while (n) {
        result += (n % 10) * (n % 10);
        n /= 10;
    }
    return result;
}

int isHappy(int n) {
    if (n <= 0)
        return 0;
    while (n != 1) {
        n = num(n);
        // 当快乐数始终变不了1 陷入无限循环时 最终结果为4
        if (n == 4)
            return 0;
    }
    return 1;
}

int main() {
    printf("%d", isHappy(19));
    return 0;
}