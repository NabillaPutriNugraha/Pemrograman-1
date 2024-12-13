#include <stdio.h>
int reverse(int a){
    int balik=0;
    while(a!=0){
        
        int angkaterakhir=a % 10;
        balik=balik*10+angkaterakhir;
        a=a/10;
    }
    return balik;
}

int main(){
    int A,B;
    scanf("%d %d",&A, &B);
    A=reverse(A);
    B=reverse(B);
    int C=A+B;
    printf ("%d", reverse(C));


}