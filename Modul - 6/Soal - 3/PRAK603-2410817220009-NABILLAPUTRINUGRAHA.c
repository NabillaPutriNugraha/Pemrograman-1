#include <stdio.h>
int main() {
    int n1, n2;

    //buat nginput n1 sama n2
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama \n");
    }
    else {
        int baris1[n1], baris2[n2], result[n1];
    
    //buat nginput angka baris pertama
    for(int i = 0; i < n1; i++) {
        scanf("%d", &baris1[i]);
    }

    //buat nginput baris kedua
    for(int i = 0; i < n2; i++) {
        scanf("%d", &baris2[i]);
    }

    //perkalian
    for(int i = 0; i < n1; i++) {
        result[i] = baris1[i] * baris2[i];
    }

    //buat nyetak hasil
    printf("\n");
    for(int i = 0; i < n1; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    }
    return 0;

}