#include <stdio.h>

/**
 * 宝石与石头
 * @param J
 * @param S
 * @return
 */
int numJewelsInStones(char *J, char *S) {
    int i = 0
    , j = 0
    , count = 0;
    for (; S[i] != 0; i++) {
        for (; J[j] != 0; j++) {
            if (J[j] == S[i]) {
                count++;
                break;
            }
        }
    }
    return count;
}

int main() {
    printf("%d\n", numJewelsInStones("aA", "aAAA"));
    printf("%d", numJewelsInStones("aA", "aAaAaA"));
    return 0;
}