//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    int arr[5] = { 10, 70, 40, 50, 30 };
//    int* p;
//    p = arr;
//    int len = sizeof(arr) / sizeof(arr[0]);
//
//    for (int i = 0; i < len; i++) {
//        scanf("%d", &arr[i]);
//        printf("arr[%d] = %d\n", i, arr[i]);
//    }
//
//    p = arr; 
//
//    for (int i = 0; i < len; i++, p++) {
//        scanf("%d", p);
//        printf("p + %d, arr[%d] = %d\n", i, i, *p);
//    }
//
//    return 0;
//}
// 
// =================================================================
//#include<stdio.h>
//void swap(int* a, int* b) {
//
//	printf("swap() before a =%d,b =%d,\n", a, b);
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main() {
//	int a, b;
//	a = 20;
//	b = 50;
//	printf("swap() before a =%d,b =%d,\n", a, b);
//	swap(&a, &b);
//	printf("swap() after a =%d,b =%d,\n", a, b);
//	return 0;
}