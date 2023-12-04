#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node {
    int v;  
    struct Node* prev;  // 이전 노드를 가리키는 포인터
    struct Node* next;  // 다음 노드를 가리키는 포인터
};

struct Node buf[1000000];  // 메모리 풀로 사용할 노드 배열
int bufCnt;  // 버퍼 개수를 세는 변수

struct Node* head;  // 연결 리스트의 시작 노드를 가리키는 포인터
struct Node* last;  // 연결 리스트의 마지막 노드를 가리키는 포인터

struct Node* myAlloc(int value, struct Node* prev, struct Node* next) {
    buf[bufCnt].v = value;  // 메모리 풀에서 노드를 할당하고 값을 설정
    buf[bufCnt].prev = prev;  // 이전 노드를 설정
    buf[bufCnt].next = next;  // 다음 노드를 설정
    return &buf[bufCnt++];  // 할당된 노드의 포인터를 반환하고 버퍼 카운트 증가
}

void addNode(int value) {
    if (head == NULL) {  // 만약 연결 리스트가 비어있다면
        head = myAlloc(value, NULL, NULL);  // 새로운 노드를 할당하고 헤드로 설정
        last = head;  // 헤드하나뿐이기에  마지막 노드도 헤드로 설정
    }
    else {
        last->next = myAlloc(value, last, NULL);  // 마지막 노드의 다음에 새로운 노드를 추가
        last = last->next;  // 마지막 노드를 새로 추가된 노드로 
    }
}

void moveNode(int value1, int value2, char command) {
    struct Node* node1 = head;
    struct Node* node2 = head;

    // 주어진 값에 해당하는 노드를 찾음
    while (node1 != NULL && node1->v != value1) {
        node1 = node1->next;
    }
    while (node2 != NULL && node2->v != value2) {
        node2 = node2->next;
    }
    if (node1 != NULL && node2 != NULL) {
        // 값에 따라 노드를 이동\/
        if (command == 'A') {
            // node1을 node2 앞으로 이동
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
            // node1을 node2 뒤로 이동
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
    bufCnt = 0;  // 버퍼 카운트 초기화
    head = NULL;  // 머리 초기화
    last = NULL;  // 마지막 노드 초기화

    for (int i = 1; i <= 20; i++) {
        addNode(i);  // 1부터 20까지의 값을 가지는 노드를 연결 리스트에 추가
    }

    printf("구성된 노드: ");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->v);
        current = current->next;
    }
    printf("\n");

    char command;
    int nodeNum1, nodeNum2;
    while (1) {
        printf("명령(C 0 0를 입력하면 종료) : ");
        scanf(" %c %d %d", &command, &nodeNum1, &nodeNum2);
        if (command == 'C') {
            break;
        }
        moveNode(nodeNum1, nodeNum2, command);

        printf("수행된 결과: ");
        current = head;
        while (current != NULL) {
            printf("%d ", current->v);
            current = current->next;
        }
        printf("\n");
    }

    printf("%d ms ", clock() - start);  // 프로그램 실행 시간 출력
    return 0;  // 프로그램 종료
}
