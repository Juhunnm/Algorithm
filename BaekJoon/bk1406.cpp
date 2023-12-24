#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 600000

char alphaStack[MAX_LEN];
char betaStack[MAX_LEN];
int alphaTop = -1, betaTop = -1;

void pushAlpha(char element) {
    alphaStack[++alphaTop] = element;
}

void pushBeta(char element) {
    betaStack[++betaTop] = element;
}

char popAlpha() {
    if (alphaTop == -1) return '\0';
    return alphaStack[alphaTop--];
}

void moveCursorToBeta() {
    if (alphaTop >= 0) {
        pushBeta(popAlpha());
    }
}

void moveCursorToAlpha() {
    if (betaTop >= 0) {
        pushAlpha(betaStack[betaTop--]);
    }
}

void deleteAlpha() {
    popAlpha();
}

int main() {
    char initialSequence[MAX_LEN], action, charToAdd;
    int totalActions;

    scanf("%s", initialSequence);
    for (int i = 0; initialSequence[i] != '\0'; i++) {
        pushAlpha(initialSequence[i]);
    }

    scanf("%d", &totalActions);
    while (totalActions--) {
        scanf(" %c", &action);
        switch (action) {
        case 'L': moveCursorToBeta(); break;
        case 'D': moveCursorToAlpha(); break;
        case 'B': deleteAlpha(); break;
        case 'P': scanf(" %c", &charToAdd); pushAlpha(charToAdd); break;
        }
    }

    // Print result
    while (alphaTop >= 0) {
        pushBeta(popAlpha());
    }
    while (betaTop >= 0) {
        printf("%c", betaStack[betaTop--]);
    }
    printf("\n");

    return 0;
}
