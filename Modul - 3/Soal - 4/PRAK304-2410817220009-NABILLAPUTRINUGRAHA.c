#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if(a == 0){
        printf("Nol");
    }
    else if(a >= 1 && a <= 9) {
        printf("Satuan");
    }
    else if(a == 10 || a >= 20 && a <= 99) {
        printf("Puluhan");
    }
    else if(a >= 11 && a <= 19) {
        printf("Belasan");
    }
    else{
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
return 0;
}