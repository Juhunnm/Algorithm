#include <stdio.h>

int main() {
    int Nn, num = 0;
    scanf("%d", &Nn);

    for (int i = 1; i <= Nn; i++) {
        num += i;
    }

    printf("%d\n", num);

    return 0;
}
