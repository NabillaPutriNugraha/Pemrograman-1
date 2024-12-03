#include <stdio.h>

void kelipatan_dengan_simbol(int n, char simbol) {
    for(int i = 1; i <= 50; i++) {
        if (i % n == 0) {
            printf("%c ", simbol);
        }
        else {
            printf("%d ", i);
        }  
    }
    printf("\n");
}

int main() {
    int kelipatan;
    char simbol;
    printf(" ");
    scanf("%d %c", &kelipatan, &simbol);
    kelipatan_dengan_simbol(kelipatan, simbol);
    return 0;
}
    
        