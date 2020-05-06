#include <stdio.h>

/**
 * 整数的各位积和之差
 * @param n
 * @return
 */
int subtractProductAndSum(int n) {
    int sum = 0 // 各位数之和
    , mul = 1; // 各位数之积
    while (n != 0) {
        int temp = n % 10;
        sum += temp;
        mul *= temp;
        n /= 10;
    }
    return mul - sum;
}

int main() {
    printf("%d", subtractProductAndSum(234));
    return 0;
}