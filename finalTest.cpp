#include <stdio.h>

struct Node {
	int value; // ����� ��
	struct Node* next; // ���� ��带 ����Ű�� ������
};

struct Node buf[15]; // ������ ������ ����
int bufCnt;

struct Node* head; // ������ �� �� ��带 ����Ű�� ������

// ��带 �������� �Ҵ��Ͽ� �����ϰ�, ���� ���� ��带 ������ �� ������ ����� �����͸� ��ȯ�ϴ� �Լ�
struct Node* myAlloc(int value, struct Node* next) {
	buf[bufCnt].value = value;
	buf[bufCnt].next = next;
	return &buf[bufCnt++];
}

// ���ÿ� ���ο� ��带 �߰��ϴ� �Լ�
void push(int value) {
	// ������ ����ִ� ���
	if (head == NULL) {
		head = myAlloc(value, NULL); // ���ο� ��带 �����Ͽ� head�� ����
	}
	// ������ ������� ���� ���
	else {
		struct Node* newNode = myAlloc(value, head); // ���ο� ��带 �����ϰ�, ������ head�� ���� ���� ����
		head = newNode; // head�� ���ο� ���� ������Ʈ
	}
}

// ���ÿ��� ��带 �����ϰ� �� ���� ��ȯ�ϴ� �Լ�
int pop() {
	// ������ ����ִ� ���
	if (head == NULL) {
		printf("������ ����ֽ��ϴ�.\n");
		return -1;
	}
	// ������ ������� ���� ���
	else {
		int value = head->value; // ���� head�� ���� ����
		struct Node* temp = head; // ���� head�� �ӽ÷� ����
		head = head->next; // head�� ���� ���� ������Ʈ
		bufCnt--; // ������ ũ�⸦ ���ҽ�Ŵ
		return value; // ������ ����� ���� ��ȯ
	}
}

int main() {
	bufCnt = 0;
	head = NULL;
	int number = 15;

	// ���ÿ� ��� �߰�
	for (int i = 0; i < number; i++) {
		push(i);
	}

	// ���ÿ��� ��带 ������ ���
	while (head != NULL) {
		int value = pop();
		printf("%d ", value);
	}

	return 0;
}
