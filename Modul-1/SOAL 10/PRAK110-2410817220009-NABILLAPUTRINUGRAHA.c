#include <stdio.h>
#include <math.h>

int main() {
    int alas, tinggi, keliling, luas;
    alas = 5;
    tinggi = 12;
    keliling = 30;
    luas = 30;
    int miring = sqrt(alas*alas + tinggi*tinggi);

    printf("Diketahui : \n");
    printf("Alas = %d cm \n", alas);
    printf("Tinggi = %d cm \n\n", tinggi);
    printf("Jawab : \n");
    printf("Sisi A = %d cm \n", tinggi);
    printf("Sisi B = %d cm \n", miring);
    printf("Sisi C = %d cm \n", alas);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm", luas);
    return 0;
}