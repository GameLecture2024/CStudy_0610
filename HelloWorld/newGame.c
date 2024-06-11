#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main1() {
    int guess, number, attempts = 0;
    srand(time(0)); // 난수 생성을 위한 시드 설정

    number = rand() % 100 + 1; // 1부터 100 사이의 난수 생성

    printf("1부터 100 사이의 숫자를 맞춰보세요.\n");

    do {
        printf("추측한 숫자를 입력하세요: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("너무 큽니다. 더 작은 수를 입력하세요.\n");
        }
        else if (guess < number) {
            printf("너무 작습니다. 더 큰 수를 입력하세요.\n");
        }
        else {
            printf("축하합니다! 숫자를 맞추셨습니다. 시도한 횟수: %d\n", attempts);
        }
    } while (guess != number);

    return 0;
}
