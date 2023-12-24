#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int mainFibonacci() {
    int n, num = 0;
    scanf_s("%d", &n);

    num = fibonacci(n);

    printf("%d", num);
    return 0;
}