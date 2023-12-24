#include<stdio.h>

int main() {
    int n = 0;
    int max = 0, value = 0, score = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &score);
        value += score;
        if (score > max) {
            max = score;
        }
    }
    printf("%f", 100.0 * value / n / max);

    return 0;
}