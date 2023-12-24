#include <stdio.h>

int main() {
	int tb[9][9] = { 0 }, max = 0, row = 1, column = 1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &tb[i][j]);
			if (max < tb[i][j]) {
				max = tb[i][j];
				row = i + 1;
				column = j + 1;
			}
		}
	}
	printf("%d\n%d %d", max, row, column);
	return 0;
}