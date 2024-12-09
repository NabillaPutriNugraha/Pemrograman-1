#include <stdio.h>
void Biodata(int tahunlahir, char Namaku[], char Asal[]){
    int tahun_sekarang=2020;
    int umur=tahun_sekarang-tahunlahir;

    printf("Perkenalkan Nama Saya : %s \n",Namaku);
    printf("Umur Saya : %d \n",umur);
    printf("Saya Adalah Angkatan : %d \n",tahun_sekarang);
    printf("Asal Saya dari : %s \n",Asal);
    printf(" ");}

int main(){
    int tahunlahir;
    char Namaku[50],Asal[50];
    scanf("%d",&tahunlahir);
    scanf(" %[^\n]%*c",Namaku);
    scanf(" %[^\n]%*c",Asal);
    printf("\n");
Biodata(tahunlahir,Namaku,Asal);
return 0;
}