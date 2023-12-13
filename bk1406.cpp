//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct Node {
//	char value;
//	struct Node* next;
//	struct Node* prev;
//};
//
//struct Node buf[600000];
//int bufCnt;
//
//struct Node* head;
//struct Node* tail;
//struct Node* cursor;
//
//struct Node* myAlloc(char value, struct Node* next, struct Node* prev) {
//	buf[bufCnt].value = value;
//	buf[bufCnt].next = next;
//	buf[bufCnt].prev = prev;
//	return &buf[bufCnt++];
//}
//
//void addNode(char value) {
//	struct Node* newNode = myAlloc(value, NULL, NULL);
//	if (cursor == NULL) {
//		head = tail = cursor = newNode;
//	}
//	else {
//		newNode->prev = cursor;
//		newNode->next = cursor->next;
//		if (cursor->next != NULL) {
//			cursor->next->prev = newNode;
//		}
//		else {
//			tail = newNode;
//		}
//		cursor->next = newNode;
//		cursor = newNode;
//	}
//}
//
//void moveLeft() {
//	if (cursor->prev != NULL) {
//		cursor = cursor->prev;
//	}
//}
//
//void moveRight() {
//	if (cursor->next != NULL) {
//		cursor = cursor->next;
//	}
//}
//
//void deleteLeft() {
//	if (cursor != NULL && cursor->prev != NULL) {
//		struct Node* toDelete = cursor->prev;
//		if (toDelete->prev != NULL) {
//			toDelete->prev->next = cursor;
//		}
//		else {
//			head = cursor;
//		}
//		cursor->prev = toDelete->prev;
//	}
//}
//
//void printEditor() {
//	struct Node* current = head;
//	while (current != NULL) {
//		printf("%c", current->value);
//		current = current->next;
//	}
//	printf("\n");
//}
//
//int main() {
//	head = NULL;
//	tail = NULL;
//	bufCnt = 0;
//	cursor = NULL;
//
//	char initialString[100001];
//	scanf("%s", initialString);
//
//	int commandCount;
//	scanf("%d", &commandCount);
//
//	for (int i = 0; initialString[i] != '\0'; i++) {
//		addNode(initialString[i]);
//	}
//	for (int i = 0; i < commandCount; i++) {
//		char command;
//		scanf(" %c", &command);
//
//		switch (command) {
//		case 'L':
//			moveLeft();
//			break;
//		case 'D':
//			moveRight();
//			break;
//		case 'B':
//			deleteLeft();
//			break;
//		case 'P':
//			char value;
//			scanf(" %c", &value);
//			addNode(value);
//			break;
//		default:
//			break;
//		}
//	}
//
//	printEditor();
//
//	return 0;
//}