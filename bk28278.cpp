#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000000

int stack[MAX_SIZE];
int top = -1;

void push(int x) {
    if (top < MAX_SIZE - 1) {
        stack[++top] = x;
    }
}

void pop() {
    if (top == -1) {
        printf("-1\n");
    }
    else {
        printf("%d\n", stack[top--]);
    }
}

void size() {
    printf("%d\n", top + 1);
}

void empty() {
    printf("%d\n", top == -1);
}

void topFunc() {
    if (top == -1) {
        printf("-1\n");
    }
    else {
        printf("%d\n", stack[top]);
    }
}

int main() {
    int N, command, x;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &command);
        switch (command) {
        case 1:
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            size();
            break;
        case 4:
            empty();
            break;
        case 5:
            topFunc();
            break;
        }
    }

    return 0;
}
