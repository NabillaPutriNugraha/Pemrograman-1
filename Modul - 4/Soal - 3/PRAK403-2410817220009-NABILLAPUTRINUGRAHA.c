#include <stdio.h>

void printCross(int mulai, int selesai) {
    if(mulai > selesai) {
        for(int i = mulai; i >= selesai; i--) {
            printf("%d %d", i, mulai + selesai - i);
            if(i > selesai) {
                printf(" - ");
            }
        }
    }
    else {
        for(int i = mulai; i <= selesai; i++) {
            printf("%d %d", i, selesai - i + mulai);
            if(i < selesai) {
                printf(" - ");
            }
        }
    }
    printf("\n");
}

int main() {
    int angka1, angka2;

    printf(" ");
    scanf("%d %d", &angka1, &angka2);

    printCross(angka1, angka2);
    return 0;
}

    