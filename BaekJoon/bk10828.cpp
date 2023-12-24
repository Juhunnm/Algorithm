#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 10000

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void push(Stack* s, int value) {
    if (s->top < MAX_SIZE - 1) {
        s->data[++s->top] = value;
    }
}

int pop(Stack* s) {
    if (s->top == -1) return -1;
    return s->data[s->top--];
}

int size(Stack* s) {
    return s->top + 1;
}

int empty(Stack* s) {
    return s->top == -1;
}

int top(Stack* s) {
    if (s->top == -1) return -1;
    return s->data[s->top];
}

int main() {
    int N, x;
    char command[10];
    Stack s;
    s.top = -1;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", command);
        if (strcmp(command, "push") == 0) {
            scanf("%d", &x);
            push(&s, x);
        }
        else if (strcmp(command, "pop") == 0) {
            printf("%d\n", pop(&s));
        }
        else if (strcmp(command, "size") == 0) {
            printf("%d\n", size(&s));
        }
        else if (strcmp(command, "empty") == 0) {
            printf("%d\n", empty(&s));
        }
        else if (strcmp(command, "top") == 0) {
            printf("%d\n", top(&s));
        }
    }
    return 0;
}
