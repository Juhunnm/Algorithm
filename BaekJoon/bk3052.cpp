#include<stdio.h>
//자연수 A%B는
int main() {
    int value = 0, num = 0;
    int ARY[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        ARY[i] = (num % 42);
    }
    for (int i = 0; i < 10; i++) {
        int cnt = 0;
        for (int j = i + 1; j < 10; j++) {

            if (ARY[i] == ARY[j]) {
                cnt++;
            }
        }
        if (cnt == 0) {
            value++;
        }
    }
    printf("%d", value);
    return 0;
}