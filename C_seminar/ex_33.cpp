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
//    printf("factorial ����� �� �Է�: ");
//    scanf_s("%d", &num);
//
//    int fact = GetFactorial(num);
//
//    printf("%d! = %d\n\n", num, fact);
//
//    printf("�� ���� �Ǽ��� �Է�: ");
//    scanf_s("%f %f %f", &a, &b, &c);
//    float max = GetMax(a, b, c);
//
//    printf("a = %3.1f b = %3.1f c = %3.1f �߿��� max = %3.1f\n", a, b, c, max);
//
//    return 0;
//}
