#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int data[1000];
int count = 0;

int binSearch(int s, int e, int key) {
    int m;
    while (s <= e) {
        m = (s + e) / 2;
        if (data[m] == key) {
            printf("��ǻ��: ����\n");
            count++;
            return m;
        }
        if (data[m] > key) {
            printf("��ǻ��: ����\n");
            count++;
            e = m - 1;
        }
        else {
            printf("��ǻ��: ����\n");
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

    printf("1~1000������ ���ڸ� �Է��ϼ���: ");
    scanf("%d", &key);

    for (int i = 0; i < 1000; i++) {
        data[i] = i + 1;
    }

    do {
        int result = binSearch(start, end, key);

        if (result != -1) {
            printf("��ǻ�Ͱ� %dȸ ���� ������ ���߾����ϴ�.\n", count);
            break;
        }

        printf("1~1000������ ���ڸ� �Է��ϼ���: ");
        scanf("%d", &key);

    } while (1);

    return 0;
}