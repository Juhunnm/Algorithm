#include <stdio.h>
#include <string.h>

int main() {
    char n[100];
    int arr[26];
    for (int i = 0; i < 26; i++) {
        arr[i] = -1;
    }
    scanf("%s", n);
    for (int i = 0; i < strlen(n); i++) {
        int num = n[i] - 'a';
        if (arr[num] == -1) {
            arr[num] = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
