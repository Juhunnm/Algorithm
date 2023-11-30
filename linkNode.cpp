#include <stdio.h>
#include <time.h>

struct Node {
    int v;
    struct Node* next;//자기 자신의 대한 포인터를 같는다.
};

struct Node buf[1000000];//메모리 풀을 사용한다.
int bufCnt; // 버퍼 카운를 넣어서 확실하게 하기 위해서 버터카운트
struct Node* head;
struct Node* last;

struct Node* myAlloc(int value, struct Node* next) {
    buf[bufCnt].v = value; 
    buf[bufCnt].next = next;
    return &buf[bufCnt++];
}

void addNode(int value) {
    if (head == NULL) { //head가 NULL이면
        head = myAlloc(value, NULL);
        last = head;
    }
    else {
        last->next = myAlloc(value, NULL); 
        last = last->next;  
    }
}
void min() {

}
int main() {
    time_t start = clock();
    bufCnt = 0;
    head = NULL;
    last = NULL;

    for (int i = 0; i < 1000000; i++) {
        addNode(i);
    }

    //[ ][ ][ ][ ][ ]
     //0  1  2  3  4
    //1
    //head = NULL
    //bufCnt =0 v =1 , next = null

    //2
    //head = 0
    //bufcnt =1 v= 2 mext = 0

    //p = 4(head)
    //p ->next (4->3)

    printf("%d ms ", clock() - start);
    return 0;
}
//헤드를 몇개 뺴도록 구현하자(앞에서부터 순서대로 빼는 코드를 구현해보자)