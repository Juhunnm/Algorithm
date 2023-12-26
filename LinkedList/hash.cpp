#include<stdio.h>

struct Node {
	int value;
	struct Node* next;
};

#define DATA 100000000 //1¾ï
#define ARYSIZE 20

struct Node buf[DATA];
int bufCnt;

struct Node arr[ARYSIZE]; // 20°³ÀÇ ¹è¿­ ¼±¾ð

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
	long long totalSum = 0; // ÃÑ ÇÕ°è
	int totalCount = 0; // ÃÑ °³¼ö
	int totalMin = DATA; // ÃÑ ÃÖ¼Ò°ª
	int totalMax = 0; // ÃÑ ÃÖ´ë°ª

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

	printf("ÃÑ Æò±Õ: %lld, ÃÑ ÃÖ´ë°ª: %d, ÃÑ ÃÖ¼Ò°ª: %d", totalSum/totalCount, totalMax, totalMin);

		return 0;
}
