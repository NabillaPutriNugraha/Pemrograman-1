#include <stdio.h>

int main() {
    float NP;
    float NK;
    printf("Masukkan Nilai Pertama :");
    scanf("%f",&NP);
    printf("Masukkan Nilai Kedua :");
    scanf("%f",&NK);
    float Total1 = NP + NK;

    if (NP ==(int)NP){
        printf("Hasil dari penjumlahan nilai pertama \"%d\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n\n",(int)NP,NK,Total1);
    }

    else{
        printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n\n", NP,NK,Total1);
    }
}