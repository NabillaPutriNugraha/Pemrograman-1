#include <stdio.h>

int main(){
    int total,detik,menit,jam,hari;
    scanf("%d",&total);

    hari = total/86400; 
    total %= 86400;
    jam = total/3600; 
    total %= 3600;
    menit = total/60; 
    detik = total%60;

    if(hari>0){
    printf("%d hari %02d:%02d:%02d",hari, jam, menit, detik);
    }

    else{
    printf("%02d:%02d:%02d",jam, menit, detik);
    }

    return 0;
}

