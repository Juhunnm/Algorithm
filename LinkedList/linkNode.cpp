#include <stdio.h>
#include <time.h>

struct Node {
    int v;
    struct Node* next;//�ڱ� �ڽ��� ���� �����͸� ���´�.
};

struct Node buf[1000000];//�޸� Ǯ�� ����Ѵ�.
int bufCnt; // ���� ī� �־ Ȯ���ϰ� �ϱ� ���ؼ� ����ī��Ʈ
struct Node* head;
struct Node* last;

struct Node* myAlloc(int value, struct Node* next) {
    buf[bufCnt].v = value; 
    buf[bufCnt].next = next;
    return &buf[bufCnt++];
}

void addNode(int value) {
    if (head == NULL) { //head�� NULL�̸�
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
//��带 � ������ ��������(�տ������� ������� ���� �ڵ带 �����غ���)