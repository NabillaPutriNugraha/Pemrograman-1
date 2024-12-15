#include <stdio.h> 
#include <string.h>

int main() {
    char kode[100], pesan[100];
    int stars = 0, hashes = 0;

    //buat nginput kode sama pesan
    fgets(kode, sizeof(kode), stdin);
    fgets(pesan, sizeof(pesan), stdin);

    kode[strcspn(kode, "\n")] = '\0';
    pesan[strcspn(pesan, "\n")] = '\0';

    if(strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu");
        return 0;
    }

    char result[strlen(kode) + 1];
    result[strlen(kode)] = '\0';

    //buat meriksa karakter
    for(int i = 0; i < strlen(kode); i++) {
        if (kode[i] ==' ' && pesan[i] == ' ') {
            result[i] = ' ';
        }
        else if(kode[i] == pesan[i]) {
            result[i] = '*';
            stars++;
        }
        else{
            result[i] = '#';
            hashes++;
        }
    }
    printf("%s \n", result);
    printf("* = %d \n", stars);
    printf("# = %d\n", hashes);
    if(stars >= hashes) {
        printf("Pesan Asli \n");
    }
    else {
        printf("Pesan Palsu\n");
    }
    return 0;

}