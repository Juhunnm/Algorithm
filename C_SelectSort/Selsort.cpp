#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mainsel() {
    int i, j, min, index, temp;
    int data[100000];

    FILE* infp = fopen("input.txt", "r");
    FILE* outfp = fopen("output.txt", "w");

    if (outfp == NULL || infp == NULL) {
        printf("파일 열기 실패");
        return 1;
    }


    int num;
    int count = 0;
    while (fscanf(infp, "%d", &num) != EOF && count < 100000) {
        data[count] = num;
        count++;
    }

    for (i = 0; i < count - 1; i++) {
        min = i;
        for (j = i + 1; j < count; j++) {
            if (data[j] < data[min]) {
                min = j;
            }
        }
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }

    for (i = 0; i < count; i++) {
        fprintf(outfp, "%d ", data[i]);
    }

    fclose(infp);
    fclose(outfp);

    return 0;
}
