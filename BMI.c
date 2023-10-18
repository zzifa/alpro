#include <stdio.h>

int main(){
    int x;
    float tinggi,berat,BMI;

printf("\nPilih Jenis Kelamin");
printf("\n1. Pria");
printf("\n2. Wanita\n");
scanf("%d", &x);

    printf("\nmasukkan tinggi badan (m) : ");
    scanf("%f", &tinggi);
    printf("masukkan berat badan (kg) : ");
    scanf("%f", &berat);

switch(x){
    case 1:
    // printf("\nmasukkan tinggi badan (m) : ");
    // scanf("%f", &tinggi);
    // printf("masukkan berat badan (kg) : ");
    // scanf("%f", &berat);

    BMI = berat/(tinggi*tinggi);

    printf("BMI = %.2f\n", BMI);
    if(BMI>=17 && BMI<=23){
        printf("Berat Badan Ideal Untuk Pria");
    }
    else printf("badan tidak ideal");
    break;

    case 2:
    // printf("\nmasukkan tinggi badan (m) : ");
    // scanf("%f", &tinggi);
    // printf("masukkan berat badan (kg) : ");
    // scanf("%f", &berat);

    BMI = berat/(tinggi*tinggi);

    printf("BMI = %.2f\n", BMI);
    if(BMI>=18 && BMI<=25){
        printf("Berat Badan Ideal untuk Wanita");
    }
    else printf("badan tidak ideal");
    break;

    default:
    printf("salah input angka");
    break;

}
}
