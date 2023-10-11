//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int tmp[100000];
//void merge(int arr[], int p, int q, int r) {
//	int i = p;
//	int j = q + 1;
//	int k = p;
//	while (i <= q && j <= r) {
//		if (arr[i] <= arr[j]) {
//			tmp[k] = arr[i];
//			i++;
//		}
//		else {
//			tmp[k] = arr[j];
//			j++;
//		}
//		k++;
//	}
//	if (i > q) {
//		for (int num = j; num <= r; num++) {
//			tmp[k] = arr[num];
//			k++;
//		}
//	}
//	else {
//		for (int num = i; num <= q; num++) {
//			tmp[k] = arr[num];
//			k++;
//		}
//	}
//	for (int num = p; num <= r; num++) {
//		arr[num] = tmp[num];
//	}
//}
//
//void mergeSort(int arr[], int p, int r) {
//	if (p < r) {
//		int q = (p + r) / 2;
//		mergeSort(arr, p, q);
//		mergeSort(arr, q + 1, r);
//		merge(arr, p, q, r);
//	}
//}
//
//int main() {
//
//	FILE* infp = fopen("input.txt", "r");
//	FILE* outfp = fopen("output.txt", "w");
//
//	if (infp == NULL || outfp == NULL) {
//		printf("파일 열기 실패");
//		return 0;
//	}
//	int num, count = 0, data[100000];
//	while (fscanf(infp, "%d", &num) != EOF && count < 100000) {
//		data[count] = num;
//		count++;
//	}
//	mergeSort(data, 0, count - 1);
//
//	for (int num = 0; num < count; num++) {
//		fprintf(outfp, "%d ", data[num]);
//	}
//	fclose(infp);
//	fclose(outfp);
//
//	return 0;
//}
