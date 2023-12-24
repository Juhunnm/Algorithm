#include <stdio.h>
#include <string.h>

int main() {
    char Ss1[4], s2[4];
    char tmp1, tmp2;

   scanf("%s %s", Ss1, s2);
    tmp1 = Ss1[0];
    Ss1[0] = Ss1[2];
    Ss1[2] = tmp1;

    tmp2 = s2[0];
    s2[0] = s2[2];
    s2[2] = tmp2;
    int result = strcmp(Ss1, s2);

    if (result > 0) {
        printf("%s", Ss1);
    }
    else {
        printf("%s", s2);
    }

    return 0;
}
