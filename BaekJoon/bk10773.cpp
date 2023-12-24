#include <stdio.h>
#include <stdlib.h>

#define MAX_K 100000

int main() {
    int K, num;
    int stack[MAX_K], top = -1;
    long long sum = 0;

    scanf("%d", &K);
    for (int i = 0; i < K; i++) {
        scanf("%d", &num);
        if (num != 0) {
            stack[++top] = num;
        }
        else {
            top--;
        }
    }

    for (int i = 0; i <= top; i++) {
        sum += stack[i];
    }

    printf("%lld\n", sum);
    return 0;
}
