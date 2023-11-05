#include <stdio.h>

int main(){
    float alas; 
    float tinggi;
    float sisi_a;
    float sisi_b;
    float luas;
    float keliling;    

    printf("\n masukkan panjang alasnya = ");
    scanf("%f", &alas);
    printf("\n masukkan panjang tingginya = ");
    scanf("%f", &tinggi);
    printf("\n masukkan panjang sisi b = ");
    scanf("%f", &sisi_a);
    printf("\n masukkan panjang sisi a = ");
    scanf("%f", &sisi_b);

    luas = alas*tinggi;
    keliling = sisi_a + sisi_b + sisi_a + sisi_b;

    printf("Luas Jajargenjang Adalah = %.2f\n", luas);
    printf("Keliling Jajargenjang adalah = %.2f\n", keliling);

    return 0;
}