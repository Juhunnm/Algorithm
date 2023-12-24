#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define COUNT 100000

int main() {
    int num[COUNT];
    srand(time(NULL));

    FILE* fp = fopen("input.txt", "w");

    if (fp == NULL) {
        printf("¿¡·¯");
        return 1;
    }

    for (int i = 0; i < COUNT; i++) {
        num[i] = i + 1;
    }

    for (int i = COUNT - 1; i > 0; i--) {
        int j = (rand() + rand() + rand()) % (i + 1);

        int temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }
    for (int i = 0; i < COUNT; i++) {
        fprintf(fp, "%d\n", num[i]);
    }
    fclose(fp);

    return 0;
}
