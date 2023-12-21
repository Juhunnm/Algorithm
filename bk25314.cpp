#include <stdio.h>

int main() {
    int Nn;
    scanf("%d", &Nn);
    int num = Nn / 4;

    for (int i = 0; i < num; i++) {
        printf("long ");
    }
    printf("int");

    return 0;
}
