#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main1() {
    int guess, number, attempts = 0;
    srand(time(0)); // ���� ������ ���� �õ� ����

    number = rand() % 100 + 1; // 1���� 100 ������ ���� ����

    printf("1���� 100 ������ ���ڸ� ���纸����.\n");

    do {
        printf("������ ���ڸ� �Է��ϼ���: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("�ʹ� Ů�ϴ�. �� ���� ���� �Է��ϼ���.\n");
        }
        else if (guess < number) {
            printf("�ʹ� �۽��ϴ�. �� ū ���� �Է��ϼ���.\n");
        }
        else {
            printf("�����մϴ�! ���ڸ� ���߼̽��ϴ�. �õ��� Ƚ��: %d\n", attempts);
        }
    } while (guess != number);

    return 0;
}
