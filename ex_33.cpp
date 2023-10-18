//#include <stdio.h>
//
//float GetMax(float a, float b, float c) {
//    float max;
//    max = a > b ? a : b;
//    max = c > max ? c : max;
//    return max;
//}
//
//int GetFactorial(int num) {
//    int fact = 1;
//    for (int i = 1; i <= num; i++) {
//        fact *= i;
//    }
//    return fact;
//}
//
//int main() {
//    int num, fact;
//    float a, b, c, max;
//
//    printf("factorial 계산할 값 입력: ");
//    scanf_s("%d", &num);
//
//    int fact = GetFactorial(num);
//
//    printf("%d! = %d\n\n", num, fact);
//
//    printf("세 개의 실수값 입력: ");
//    scanf_s("%f %f %f", &a, &b, &c);
//    float max = GetMax(a, b, c);
//
//    printf("a = %3.1f b = %3.1f c = %3.1f 중에서 max = %3.1f\n", a, b, c, max);
//
//    return 0;
//}
