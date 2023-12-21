#include<stdio.h>
#include<string.h>

int main() {

    char arr[1000];
    int ts;
    scanf("%d", &ts);
    for (int i = 0; i < ts; i++) {
        scanf("%s", arr);
        printf("%c%c\n", arr[0], arr[strlen(arr) - 1]);
    }
    return 0;
}