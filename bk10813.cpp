#include<stdio.h>
//�����̴� N���� �ٱ��¸� ������ ������ ���� ��ȣ�� �Ű�������
//�ٱ��Ͽ��� �� 1���� �ְ� ó������ �ٱ��� ��ȣ === �� ��ȣ
//M�� ���� �ٲܰ��̸� ���� �ٲ� �ٱ��� 2���� �����ϰ� ���� ���� ���

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int N, M;
    int i, j;
    int ball[100] = { 0 };

    scanf("%d %d", &N, &M);
    for (int num = 1; num <= N; num++) {
        ball[num] = num;
    }

    for (int k = 0; k < M; k++) {
        scanf("%d %d", &i, &j);
        swap(&ball[i], &ball[j]);
    }
    for (int k = 1; k < N + 1; k++) {
        printf("%d ", ball[k]);

    }
    return 0;
}