#include<stdio.h>
int main() {
    //X���� M�������� ���ǿ��� 30���� �л��� ��ο��� ������� �⼮��ȣ ����
    //28�� ���� ���� ���� �л� 2���� �⼮ ��ȣ ���ϱ�(���� ����)
    int arr[31] = { 0 };
    int n = 0;
    for (int i = 1; i <= 28; i++) {
        scanf("%d", &n);
        arr[n] = 1;

    }
    for (int i = 1; i <= 30; i++) {
        if (arr[i] == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}