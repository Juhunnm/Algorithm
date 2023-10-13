//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//void swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
//int  parttion(int arr[], int left, int right) {
//	int pivot = arr[right];
//	int i = (left - 1);
//
//	for (int j = left; j < right; j++) {
//		if (arr[j] <= pivot) {
//			i++;
//			swap(&arr[i], &arr[j]);
//
//		}
//	}
//	swap(&arr[i + 1], &arr[right]);
//	return (i + 1);
//}
//void quick(int arr[], int left, int right) {
//	if (left < right) {
//		int p = parttion(arr, left, right);
//
//		quick(arr, left, p - 1);
//		quick(arr, p + 1, right);
//	}
//}
//int main_quick(void) {
//	FILE* infp = fopen("input.txt", "r");
//	FILE* outfp = fopen("output.txt", "w");
//
//	if (infp == NULL || outfp == NULL) {
//		printf("파일 열기 실패");
//		return 1;
//	}
//	int num, count = 0, data[100000];
//	while (fscanf(infp, "%d ", &num) != EOF && count < 100000) {
//		data[count] = num;
//		count++;
//	}
//	quick(data, 0, count - 1);
//
//	for (int i = 0; i < count; i++) {
//		fprintf(outfp, "%d ", data[i]);
//	}
//	fclose(infp);
//	fclose(outfp);
//
//	return 0;
//}