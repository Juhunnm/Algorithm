#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int data[1000];
int count = 0;

int binSearch(int s, int e, int key) {
    int m;
    while (s <= e) {
        m = (s + e) / 2;
        if (data[m] == key) {
            printf("컴퓨터: 같다\n");
            count++;
            return m;
        }
        if (data[m] > key) {
            printf("컴퓨터: 높다\n");
            count++;
            e = m - 1;
        }
        else {
            printf("컴퓨터: 낮다\n");
            count++;
            s = m + 1;
        }
    }
    return -1;
}

int main() {
    int start = 0;
    int end = 999;
    int key;

    printf("1~1000까지의 숫자를 입력하세요: ");
    scanf("%d", &key);

    for (int i = 0; i < 1000; i++) {
        data[i] = i + 1;
    }

    do {
        int result = binSearch(start, end, key);

        if (result != -1) {
            printf("컴퓨터가 %d회 만에 정답을 맞추었습니다.\n", count);
            break;
        }

        printf("1~1000까지의 숫자를 입력하세요: ");
        scanf("%d", &key);

    } while (1);

    return 0;
}