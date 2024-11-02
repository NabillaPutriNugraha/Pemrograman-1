#include <stdio.h>
#include <math.h>

int main() {
    float radius, tinggi, volume, luas, keliling;

    scanf("%f", &radius);
    scanf("%f", &tinggi);

    volume = 22*radius*radius*tinggi/7;
    luas = 2*22*radius*(radius + tinggi)/7;
    keliling = 2*22*radius/7;

    printf("Volume = %.2f \n", volume);
    printf("Luas = %.2f \n", luas);
    printf("Keliling = %.2f \n", keliling);
}