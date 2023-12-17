#include <stdio.h>
int main(void) {
    char name[256];
    scanf("%s", name, sizeof(name));
    printf("%s??!", name);
    return 0;
}