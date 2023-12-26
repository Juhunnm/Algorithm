#include <stdio.h>

struct Node {
    int v;
    struct Node* next;
};

struct Node buf[1000000];
int bufCnt;
struct Node* head;

struct Node* myAlloc(int value, struct Node* next) {
    buf[bufCnt].v = value;
    buf[bufCnt].next = next;
    return &buf[bufCnt++];
}

void push(int value) {
    head = myAlloc(value, head);
}

int pop() {
    if (head == NULL) {;
        return -1; 
    }

    int value = head->v;
    head = head->next;
    return value;
}

int main() {
    bufCnt = 0;
    head = NULL;

    for (int i = 0; i < 5; i++) {
        push(i);
    }

    while (head != NULL) {
        printf("%d ", pop());
    }

    return 0;
}