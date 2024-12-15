#include <stdio.h>
int main() {
    int ruangan;

    //buat nginput jumlah ruangan
    scanf("%d", &ruangan);

    int zetsu_counts[ruangan];
    int result[ruangan];

    //buat nginput jumlah zetsu putih di setiap ruangan
    for(int i = 0; i < ruangan; i++) {
        scanf("%d", &zetsu_counts[i]);
    }

    //buat ngitung jumlah zetsu putih setalah belah diri
    for(int i = 0; i < ruangan; i++) {
        result[i] = zetsu_counts[i] * (i + 1);
    }

    //buat nyetak hasil
    printf("\n");
    for(int i = 0; i < ruangan; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}