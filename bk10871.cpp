//둘째 줄에 수열 A를 이루는 정수 N개가 주어진다. 주어지는 정수는 모두 1보다 크거나 같고, 10,000보다 작거나 같은 정수이다.
//X보다 작은 수를 입력받은 순서대로 공백으로 구분해 다. X보다 작은 수는 적어도 하나 존재한다.
#include<stdio.h>
int main() {
    int N, X = 0;
    int arr[10000];
    scanf("%d %d", &N, &X);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++) {
        if (X > arr[i]) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
