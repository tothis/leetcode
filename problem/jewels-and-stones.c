#include <stdio.h>

/**
 * 宝石与石头
 * @param J
 * @param S
 * @return
 */
int numJewelsInStones(char *J, char *S) {
    int count = 0;
    for (int i = 0; S[i] != 0; i++) {
        for (int j = 0; J[j] != 0; j++) {
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