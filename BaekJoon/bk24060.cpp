#include <stdio.h>
#include <stdlib.h>

int K;                  
long long count = 0;    
int answer = -1;        

void merge(int A[], int tmp[], int p, int q, int r) {
    int i = p, j = q + 1, t = 1;

    while (i <= q && j <= r) {
            if (A[i] <= A[j]) {
                tmp[t++] = A[i++];
        }
            else {
                tmp[t++] = A[j++];
        }
            count++;
            if (count == K) { 
                answer = tmp[t - 1];
        }
    }

    while (i <= q) {
            tmp[t++] = A[i++];
            count++;
            if (count == K) {
                answer = tmp[t - 1];
        }
    }
    while (j <= r) {
            tmp[t++] = A[j++];
            count++;
            if (count == K) {
            answer = tmp[t - 1];
        }
    }

    i = p; t = 1;
    while (i <= r) {
            A[i++] = tmp[t++];
    }
}

void mergeSort(int A[], int tmp[], int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        mergeSort(A, tmp, p, q);
        mergeSort(A, tmp, q + 1, r);
        merge(A, tmp, p, q, r);
    }
}

int main() {
    int N;
    scanf("%d %d", &N, &K);

    int* A = (int*)malloc((N + 1) * sizeof(int));
    int* tmp = (int*)malloc((N + 1) * sizeof(int));

    for (int i = 1; i <= N; i++) {
        scanf("%d", &A[i]);
    }

    mergeSort(A, tmp, 1, N);

    printf("%d\n", answer);

    free(A);
    free(tmp);

    return 0;
}
