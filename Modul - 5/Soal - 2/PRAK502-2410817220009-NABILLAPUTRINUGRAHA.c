#include <stdio.h>
#include <math.h>

int hitung(int angka1 , int angka2){
    return angka1-angka2;
}

int mutlak(int angka) {
    if (angka < 0) {
        return -angka;}
    return angka;}


int main(){
   int a,b,c,d;

   scanf("%d %d %d %d",&a, &c, &b, &d);
   int hasil=mutlak(hitung(a,b)) + mutlak(hitung(c,d));
   printf("%d",mutlak(hasil));

    return 0;
}