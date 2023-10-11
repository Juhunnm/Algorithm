#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num1, num2, num3, max, mid, min;
	printf("세 개의 정수를 입력하여 max,mid,min을 구하시오");
	scanf("%d %d %d", &num1, &num2, &num3);

	//max = (num1 > num2 ? (num1 > num3 ? num1 : num3) : num2);
	max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
	min = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

	if (max == num1) {
		mid = (num2 > num3) ? num2 : num3;
	}
	else if (max == num2){
		mid = (num1 > num3) ? num1 : num3;
	}else {
		min = (num1 > num2) ? num1 : num2;
	}
	printf("max = %d mid =%d min", max, mid, min);
	return 0;
}