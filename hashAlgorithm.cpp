//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define TABLE_SIZE 100
//#define MAX_RAND 1000
//
//struct Node {
//	int value;
//	struct Node* next;
//};
//
//struct Node buf[MAX_RAND];
//int bufCnt;
//
//struct Node* head[TABLE_SIZE];
//
//struct Node* myAlloc(int value, struct Node* next) {
//	buf[bufCnt].value = value;
//	buf[bufCnt].next = next;
//	return &buf[bufCnt++];
//}
//
//int hash(int key) {
//	return key % TABLE_SIZE;
//}
//
//void addNode(int key) {
//	int hashCode = hash(key);
//	if (head[hashCode] == NULL) {
//		head[hashCode] = myAlloc(key, NULL);
//	}
//	else {
//		struct Node* curr = head[hashCode];
//		while (curr) {
//			if (curr->value == key) {
//				return;
//			}
//			if (curr->next == NULL) break;
//			curr = curr->next;
//		}
//		curr->next = myAlloc(key, NULL);
//	}
//}
//
//void deleteNode(int key) {
//	int hashCode = hash(key);
//	struct Node* curr = head[hashCode];
//	struct Node* prev = NULL;
//	while (curr) {
//		if (curr->value == key) {
//			if (prev == NULL) {
//				head[hashCode] = curr->next;
//			}
//			else {
//				prev->next = curr->next;
//			}
//			return;
//		}
//		prev = curr;
//		curr = curr->next;
//	}
//}
//
//void searchNode(int key) {
//	int hashCode = hash(key);
//	struct Node* curr = head[hashCode];
//	int count = 0;
//	while (curr) {
//		count++;
//		if (curr->value == key) {
//			printf("Ž�� ���: %d Ž�� ����, ������ ����� ����: %d\n", key, count);
//			return;
//		}
//		curr = curr->next;
//	}
//	printf("Ž�� ���: %d Ž�� ����\n", key);
//}
//
//void printHashTable() {
//	for (int i = 0; i < TABLE_SIZE; i++) {
//		printf("%d: ", i);
//		struct Node* curr = head[i];
//		while (curr) {
//			printf("%d ", curr->value);
//			curr = curr->next;
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	bufCnt = 0;
//	srand(time(NULL));
//
//	for (int i = 0; i < 1000; i++) {
//		int value = rand() % MAX_RAND;
//		addNode(value);
//	}
//	printf("���� ���� �Ϸ�, �ؽ� ���̺�: ");
//	printHashTable();
//
//	for (int i = 0; i < 100; i++) {
//		int value = rand() % MAX_RAND;
//		deleteNode(value);
//	}
//	printf("���� ���� �Ϸ�, �ؽ� ���̺�: ");
//	printHashTable();
//
//	for (int i = 0; i < 100; i++) {
//		int value = rand() % MAX_RAND;
//		searchNode(value);
//	}
//	printf("���� Ž�� �Ϸ� ");
//
//	return 0;
//}
