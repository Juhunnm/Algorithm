#include<stdio.h>

struct Node {
	int value;
	struct Node* next;
};

#define DATA 100000000 //1��
#define ARYSIZE 20

struct Node buf[DATA];
int bufCnt;

struct Node arr[ARYSIZE]; // 20���� �迭 ����

int myHash(int value, int arysize) {
	return value % ARYSIZE;
}

struct Node* myAlloc(int value) {
	buf[bufCnt].value = value;
	buf[bufCnt].next = NULL;
	return &buf[bufCnt++];
}

int main() {
	int arySize = 20;// ARYSIZE
	long long totalSum = 0; // �� �հ�
	int totalCount = 0; // �� ����
	int totalMin = DATA; // �� �ּҰ�
	int totalMax = 0; // �� �ִ밪

	for (int i = 0; i < DATA; i++) {
		int hashIndex = myHash(i, arySize);
		struct Node* newNode = myAlloc(i);
		newNode->next = arr[hashIndex].next;
		arr[hashIndex].next = newNode;
		totalSum += i;
		totalCount++;
		if (i > totalMax) totalMax = i;
		if (i < totalMin) totalMin = i;
	}

	printf("�� ���: %lld, �� �ִ밪: %d, �� �ּҰ�: %d", totalSum/totalCount, totalMax, totalMin);

		return 0;
}
