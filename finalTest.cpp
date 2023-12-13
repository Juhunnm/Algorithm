#include <stdio.h>

struct Node {
	int value; // 노드의 값
	struct Node* next; // 다음 노드를 가리키는 포인터
};

struct Node buf[15]; // 노드들을 저장할 버퍼
int bufCnt;

struct Node* head; // 스택의 맨 위 노드를 가리키는 포인터

// 노드를 동적으로 할당하여 생성하고, 값과 다음 노드를 설정한 후 생성한 노드의 포인터를 반환하는 함수
struct Node* myAlloc(int value, struct Node* next) {
	buf[bufCnt].value = value;
	buf[bufCnt].next = next;
	return &buf[bufCnt++];
}

// 스택에 새로운 노드를 추가하는 함수
void push(int value) {
	// 스택이 비어있는 경우
	if (head == NULL) {
		head = myAlloc(value, NULL); // 새로운 노드를 생성하여 head로 지정
	}
	// 스택이 비어있지 않은 경우
	else {
		struct Node* newNode = myAlloc(value, head); // 새로운 노드를 생성하고, 이전의 head를 다음 노드로 설정
		head = newNode; // head를 새로운 노드로 업데이트
	}
}

// 스택에서 노드를 제거하고 그 값을 반환하는 함수
int pop() {
	// 스택이 비어있는 경우
	if (head == NULL) {
		printf("스택이 비어있습니다.\n");
		return -1;
	}
	// 스택이 비어있지 않은 경우
	else {
		int value = head->value; // 현재 head의 값을 저장
		struct Node* temp = head; // 현재 head를 임시로 저장
		head = head->next; // head를 다음 노드로 업데이트
		bufCnt--; // 버퍼의 크기를 감소시킴
		return value; // 제거한 노드의 값을 반환
	}
}

int main() {
	bufCnt = 0;
	head = NULL;
	int number = 15;

	// 스택에 노드 추가
	for (int i = 0; i < number; i++) {
		push(i);
	}

	// 스택에서 노드를 꺼내어 출력
	while (head != NULL) {
		int value = pop();
		printf("%d ", value);
	}

	return 0;
}
