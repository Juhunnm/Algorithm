#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is(const char* str) {
    int stack = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            stack++;
        }
        else if (str[i] == ')') {
            if (stack == 0) return 0; 
            stack--;
        }
    }
    return stack == 0;
}

int main() {
    int T;
    scanf("%d", &T);

    char str[51];
    for (int i = 0; i < T; i++) {
        scanf("%s", str);
        printf("%s\n", is(str) ? "YES" : "NO");
    }

    return 0;
}