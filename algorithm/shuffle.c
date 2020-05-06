#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 52

int main() {
    int poker[N + 1];
    int i, j, tmp, card;

    for (i = 1; i <= N; i++)
        poker[i] = i;
    srand(time(0));
    // ϴ��
    for (i = 1; i <= N; i++) {
        j = rand() % 52 + 1;
        tmp = poker[i];
        poker[i] = poker[j];
        poker[j] = tmp;
    }
    for (i = 1; i <= N; i++) {
        // ��ɫ
        switch ((poker[i] - 1) / 13) {
            case 0:
                printf("��");
                break;
            case 1:
                printf("��");
                break;
            case 2:
                printf("ש");
                break;
            case 3:
                printf("÷");
                break;
        }
        // ��������
        card = poker[i] % 13;
        switch (card) {
            case 0:
                printf("K ");
                break;
            case 12:
                printf("Q ");
                break;
            case 11:
                printf("J ");
                break;
            default:
                printf("%d ", card);
                break;
        }
        if (i % 13 == 0)
            printf("\n");
    }

    i = 1;
    while (i < 10) {
        i *= 2;
    }
    return 0;
}