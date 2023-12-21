#include <stdio.h>
#include <string.h>

int main() {
    char s[100];


    scanf("%s", s);

    int len = strlen(s);
    int mid = len / 2;
    int result = 1;

    for (int i = 0, j = len - 1; i < mid; i++, j--) {
        if (s[i] != s[j]) {
            result = 0;
            break;
        }
    }

    if (result == 1) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}
