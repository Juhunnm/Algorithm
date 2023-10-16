#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 30000
void inSort(int arr[], int length) {
	for (int i = 0; i < length ; i++) {
		int key = arr[i];
		int j = i-1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
int main() {
	FILE* fp = fopen("3¸¸.txt", "r");
	if (fp == NULL) {
		printf("ERROR");
		return 0;
	}
	int num,length=0;
	int arr[N + 10];
	while (fscanf(fp, "%d ", &num) != EOF) {
		arr[length] = num;
		length++;
	}
	
	inSort(arr, length);
	for (int i = 0; i < length; i++) {
		printf("%7d ",arr[i]);
	}
	fclose(fp);
	return 0;
}