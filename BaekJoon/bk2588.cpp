#include<stdio.h>
int main(void) {
    int i, j;

    scanf("%d %d", &i, &j);

    printf("%d\n", i * (j % 10));
    printf("%d\n", i * ((j / 10) % 10));
    printf("%d\n", i * (j / 100));
    printf("%d\n", i * j);

    return 0;

}