//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//long long data[1000000];
//
//int check(int N, int M, int H) {
//    long long sum = 0; 
//    for (int i = 0; i < N; i++) {
//        if (data[i] > H) {
//            sum += (data[i] - H);
//        }
//    }
//    return sum;
//}
//
//int binarySearch(int N, int M, int max_height) {
//    int s = 0, e = max_height;
//    int result = 0;
//
//    while (s <= e) {
//        int m = (s + e) / 2;
//        long long sum = check(N, M, m);
//
//        if (sum >= M) {
//            result = m;
//            s = m + 1;
//        }
//        else {
//            e =  m - 1;
//        }
//    }
//
//    return result;
//}
//
//int main() {
//    int N, M;
//    scanf("%d %d", &N, &M);
//
//    int max_height = 0;
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &data[i]);
//        if (data[i] > max_height) {
//            max_height = data[i];
//        }
//    }
//
//    int result = binarySearch(N, M, max_height);
//
//    printf("%d\n", result);
//
//    return 0;
//}
