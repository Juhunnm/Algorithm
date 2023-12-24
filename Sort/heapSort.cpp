//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void heapify(int arr[], int length, int i) {
//	int node = i;
//	int left = 2 * i + 1;
//	int right = 2 * i + 2;
//	if (left < length && arr[left] >arr[node]) {
//		node = left;
//	}
//	if (right < length && arr[right] >arr[node]) {
//		node = right;
//	}
//	if (node != i) {
//		int temp = arr[i];
//		arr[i] = arr[node];
//		arr[node] = temp;
//		heapify(arr, length, node);
//	}
//}
//void heapSort(int arr[], int length) {
//	for (int i = length / 2 - 1; i >= 0; i--) {
//		heapify(arr, length, i);
//	}
//	for (int i = length - 1; i > 0; i--) {
//		int temp = arr[0];
//		arr[0] = arr[i];
//		arr[i] = temp;
//		heapify(arr, i, 0);
//	}
//}
//
//int main() {
//	FILE* infp = fopen("input.txt", "r");
//	FILE* outfp = fopen("out.txt", "w");
//
//	if (infp == NULL && outfp == NULL) {
//		printf("파일열기 실패");
//		return 0;
//	}
//	int num, count = 0, data[100000];
//	while (fscanf(infp, "%d", &num) != EOF && count < 100000) {
//		data[count] = num;
//		count++;
//	}
//	heapSort(data, count);
//	for (int i = 0; i < count; i++) {
//		fprintf(outfp, "%d ", data[i]);
//	}
//	fclose(infp);
//	fclose(outfp);
//	return 0;
//}