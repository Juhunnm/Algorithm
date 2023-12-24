#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, temp;
	int count = 0;
	int data[100000];

	FILE* infp = fopen("input.txt", "r");
	FILE* outfp = fopen("output.txt", "w");

	if (infp == NULL || outfp == NULL) {
		perror("파일 열기 실패");
		return 1;
	}

	while (fscanf(infp, "%d", &num) != EOF && count < 100000) {
		data[count] = num;
		count++;

	}
	fclose(infp);
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < (count - 1) - i; j++) {
			if (data[j] > data[j + 1]) {
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < count; i++) {
		fprintf(outfp, "%d ", data[i]);
	}
	fclose(outfp);
	return 0;
}

