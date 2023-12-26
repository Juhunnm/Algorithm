//#include <stdio.h>
//#include <time.h>
//
//struct Node {
//	int v;  // 정수 값을 저장하는 노드의 멤버 변수
//	struct Node* next;  // 다음 노드를 가리키는 포인터
//};
//
//struct Node buf[1000000];  // 메모리 풀로 사용할 노드 배열
//int bufCnt;  // 버퍼 개수를 세는 변수
//
//struct Node* head;  // 연결 리스트의 시작 노드를 가리키는 포인터
//struct Node* last;  // 연결 리스트의 마지막 노드를 가리키는 포인터
//
//struct Node* myAlloc(int value, struct Node* next) {
//	buf[bufCnt].v = value;  // 메모리 풀에서 노드를 할당하고 값을 설정
//	buf[bufCnt].next = next;  // 다음 노드를 설정
//	return &buf[bufCnt++];  // 할당된 노드의 포인터를 반환하고 버퍼 카운트 증가
//}
//
//void addNode(int value) {
//	if (head == NULL) {  // 만약 연결 리스트가 비어있으면
//		head = myAlloc(value, NULL);  // 새로운 노드를 할당하고 헤드로 설정
//		last = head;  // 헤드가 유일한 노드이므로 마지막 노드도 헤드로 설정
//	}
//	else {
//		last->next = myAlloc(value, NULL);  // 마지막 노드의 다음에 새로운 노드를 할당하여 추가
//		last = last->next;  // 마지막 노드를 새로 추가된 노드로 업데이트
//	}
//}
//
//void min() {
//	// 아직 구현되지 않은 함수로, 연결 리스트의 최솟값을 찾는 기능을 추가할 수 있음
//}
//
//int main() {
//	time_t start = clock();  // 현재 시간을 기록하여 프로그램 실행 시간 측정 시작
//	bufCnt = 0;  // 버퍼 카운트 초기화
//	head = NULL;  // 헤드 초기화
//	last = NULL;  // 마지막 노드 초기화
//
//	for (int i = 0; i < 1000000; i++) {
//		addNode(i);  // 0부터 999999까지의 값을 가지는 노드를 연결 리스트에 추가
//	}
//
//	printf("%d ms ", clock() - start);  // 프로그램 실행 시간 출력
//	return 0;  // 프로그램 종료
//}
