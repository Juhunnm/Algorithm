#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node {
    int v;  
    struct Node* prev;  // ���� ��带 ����Ű�� ������
    struct Node* next;  // ���� ��带 ����Ű�� ������
};

struct Node buf[1000000];  // �޸� Ǯ�� ����� ��� �迭
int bufCnt;  // ���� ������ ���� ����

struct Node* head;  // ���� ����Ʈ�� ���� ��带 ����Ű�� ������
struct Node* last;  // ���� ����Ʈ�� ������ ��带 ����Ű�� ������

struct Node* myAlloc(int value, struct Node* prev, struct Node* next) {
    buf[bufCnt].v = value;  // �޸� Ǯ���� ��带 �Ҵ��ϰ� ���� ����
    buf[bufCnt].prev = prev;  // ���� ��带 ����
    buf[bufCnt].next = next;  // ���� ��带 ����
    return &buf[bufCnt++];  // �Ҵ�� ����� �����͸� ��ȯ�ϰ� ���� ī��Ʈ ����
}

void addNode(int value) {
    if (head == NULL) {  // ���� ���� ����Ʈ�� ����ִٸ�
        head = myAlloc(value, NULL, NULL);  // ���ο� ��带 �Ҵ��ϰ� ���� ����
        last = head;  // ����ϳ����̱⿡  ������ ��嵵 ���� ����
    }
    else {
        last->next = myAlloc(value, last, NULL);  // ������ ����� ������ ���ο� ��带 �߰�
        last = last->next;  // ������ ��带 ���� �߰��� ���� 
    }
}

void moveNode(int value1, int value2, char command) {
    struct Node* node1 = head;
    struct Node* node2 = head;

    // �־��� ���� �ش��ϴ� ��带 ã��
    while (node1 != NULL && node1->v != value1) {
        node1 = node1->next;
    }
    while (node2 != NULL && node2->v != value2) {
        node2 = node2->next;
    }
    if (node1 != NULL && node2 != NULL) {
        // ���� ���� ��带 �̵�\/
        if (command == 'A') {
            // node1�� node2 ������ �̵�
            if (node1->prev != NULL) {
                node1->prev->next = node1->next;
            }
            else {
                head = node1->next;
            }
            if (node1->next != NULL) {
                node1->next->prev = node1->prev;
            }
            node1->next = node2;
            node1->prev = node2->prev;
            if (node2->prev != NULL) {
                node2->prev->next = node1;
            }
            node2->prev = node1;
        }
        else if (command == 'B') {
            // node1�� node2 �ڷ� �̵�
            if (node1->prev != NULL) {
                node1->prev->next = node1->next;
            }
            else {
                head = node1->next;
            }
            if (node1->next != NULL) {
                node1->next->prev = node1->prev;
            }
            node1->prev = node2;
            node1->next = node2->next;
            if (node2->next != NULL) {
                node2->next->prev = node1;
            }
            node2->next = node1;
        }

    }
}

int main() {
    time_t start = clock();
    bufCnt = 0;  // ���� ī��Ʈ �ʱ�ȭ
    head = NULL;  // �Ӹ� �ʱ�ȭ
    last = NULL;  // ������ ��� �ʱ�ȭ

    for (int i = 1; i <= 20; i++) {
        addNode(i);  // 1���� 20������ ���� ������ ��带 ���� ����Ʈ�� �߰�
    }

    printf("������ ���: ");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->v);
        current = current->next;
    }
    printf("\n");

    char command;
    int nodeNum1, nodeNum2;
    while (1) {
        printf("���(C 0 0�� �Է��ϸ� ����) : ");
        scanf(" %c %d %d", &command, &nodeNum1, &nodeNum2);
        if (command == 'C') {
            break;
        }
        moveNode(nodeNum1, nodeNum2, command);

        printf("����� ���: ");
        current = head;
        while (current != NULL) {
            printf("%d ", current->v);
            current = current->next;
        }
        printf("\n");
    }

    printf("%d ms ", clock() - start);  // ���α׷� ���� �ð� ���
    return 0;  // ���α׷� ����
}
