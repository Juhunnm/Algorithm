#include<stdio.h>
int main() {
    //X대학 M교수님의 교실에는 30명의 학생이 명부에는 숫서대로 출석번호 있음
    //28명 제출 제출 안한 학생 2명의 출석 번호 구하기(내림 차순)
    int arr[31] = { 0 };
    int n = 0;
    for (int i = 1; i <= 28; i++) {
        scanf("%d", &n);
        arr[n] = 1;

    }
    for (int i = 1; i <= 30; i++) {
        if (arr[i] == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}