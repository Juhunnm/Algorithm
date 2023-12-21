#include<stdio.h>

int main() {
    char arr[1000];
    int n;

    scanf("%s", arr);
    scanf("%d", &n);

    printf("%c", arr[n - 1]);
    return 0;
}