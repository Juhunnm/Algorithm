#include <stdio.h>

int main() {
    int H, Mm;
    scanf("%d %d", &H, &Mm);

    if (Mm >= 45) {
        Mm -= 45;
    }
    else {
        H -= 1;
        if (H < 0) {
            H = 23;
        }
        Mm = 15 + Mm;
    }

    printf("%d %d\n", H, Mm);

    return 0;
}
