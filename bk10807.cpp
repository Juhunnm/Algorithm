#include<stdio.h>
int main() {
    int N, V, count = 0;
    int arr[100];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &V);
    for (int j = 0; j < N; j++) {
        if (arr[j] == V) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}