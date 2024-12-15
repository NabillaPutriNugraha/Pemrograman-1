#include <stdio.h>
int main() {
    int n;

    //buat nginput ordo matriks
    scanf("%d", &n);

    int A[n][n], B[n][n], result[n][n];

    //buat nginput matriks A
    printf("Matriks A : \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    //buat nginput matriks B
    printf("Matriks B : \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    //buat ngitung hasil kali matriks
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            result[i][j] = 0;
            for(int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    //buat nyetak hasil
    printf("Matriks A x B : \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}