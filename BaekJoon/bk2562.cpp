#include <stdio.h>
int main() {
    int max = 0, index = 1;
    int arr[9];

    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
            index = i + 1;
        }
    }
    printf("%d\n%d\n", max, index);
    return 0;
}
