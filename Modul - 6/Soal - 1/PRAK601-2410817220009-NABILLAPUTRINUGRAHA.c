#include <stdio.h>
int main() {
    int baris, kolom;
   
    //buat nginput baris sama kolom
    scanf("%d %d", &baris, &kolom);

    int matriks[baris][kolom];

    //buat nginput elemen matriks
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }

    //buat nyetak matriks
    printf("\n");
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    return 0;
}