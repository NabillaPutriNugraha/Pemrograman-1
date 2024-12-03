#include <stdio.h>

int main() {
    int mau;
    float bil1, bil2, hasil;
    char nama[100];

    printf("Masukkan nama Anda : ");
    fgets(nama, sizeof(nama), stdin);

    do {
        printf("Pilihan program \n");
        printf("1. Penjumlahan \n");
        printf("2. Pengurangan \n");
        printf("3. Perkalian \n");
        printf("4. Pembagian \n");
        printf("Exit \n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &mau);

        if(mau >= 1 && mau <= 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &bil1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &bil2);

            switch(mau) {
                case 1:
                hasil = bil1 + bil2;
                printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f \n", bil1, bil2, hasil);
                break;
                case 2:
                hasil = bil1 - bil2;
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f \n", bil1, bil2, hasil);
                break;
                case 3:
                hasil = bil1 * bil2;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f \n", bil1, bil2, hasil);
                break;
                case 4:
                hasil = bil1 / bil2;
                printf("Hasil pembagian antara%.2f dengan %.2f adalah %.2f \n", bil1, bil2, hasil);
                break;
            }
        }
        else if (mau == 5) {
            printf("Terimakasih, telah menggunakan kalkulator %s", nama);
        }
        else {
            printf("Input Anda salah, silahkan coba lagi \n");
        }
        printf("\n");
    }
    while(mau != 5);
    return 0;
}