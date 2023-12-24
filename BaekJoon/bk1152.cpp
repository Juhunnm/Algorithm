#include<stdio.h>
#include<string.h>
int main() {
    char s[1000000];
    int num = 0;
    scanf("%[^\n]", s);
    int length = strlen(s);
    if (length == 1 && s[0] == ' ') {
        printf("0");
        return 0;
    }
    for (int i = 1; i < length - 1; i++) {
        if (s[i] == ' ') {
            num++;
        }
    }
    printf("%d", num + 1);
    return 0;
}