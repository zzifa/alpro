#include <stdio.h>
#include <stdlib.h>

int golongan, gaji2, jam, gaji, lembur, upahlembur, gajilembur;
char nama[25];
int hitunglembur(int gaji, int lembur, int ulembur){
    if (jam>150){
        gaji2 = gaji*1.5;
    }
    else{
        gaji2=gaji;
    }
    upahlembur = ulembur*lembur;
    gajilembur = gaji + upahlembur;
}
void displaygaji(){
    hitunglembur(gaji, lembur, upahlembur);
    printf("Gaji Pokok Rp.%d\n", gaji2);
    printf("Gaji Lembur Rp.%d\n", upahlembur);
    printf("Maka total gaji yang anda dapatkan adalah Rp.%d\n", gajilembur);
}
int main(){
    printf("===GAJI KARYAWAN===\n");
    printf("Golongan  Gaji Tetap  Upah Lembur per jam (Rp)\n");
    printf("   1       500.000              5000\n");
    printf("   2       300.000              3000\n");
    printf("   3       250.000              2000\n");
    printf("   4       100.000              1500\n");
    printf("   5       50.000               1000\n");
    printf("Nama karyawan : ");
    scanf("%s", &nama);
    printf("Masukkan golongan karyawan: ");
    scanf("%d", &golongan);
    printf("Masukkan jam kerja karyawan: ");    
    scanf("%d", &jam);
    if (jam>150){
        lembur = jam - 150;
    }
    switch (golongan){
    case 1:
        gaji = 500000;
        upahlembur = 5000;
        break;
    case 2:
        gaji = 300000;
        upahlembur = 3000;
        break;
    case 3:
        gaji = 250000;
        upahlembur = 3000;
        break;
    case 4:
        gaji = 100000;
        upahlembur = 1500;
        break;
    case 5:
        gaji = 50000;
        upahlembur = 1000;
        break;
    default:
        printf("Golongan yang anda masukkan tidak valid\n");
        exit(0);//keluar
        break;
    }
    printf("\n");
    printf("Nama Karyawan : %s\n",nama);
    printf("Golongan : %d\n", golongan);
    printf("Jam Kerja : %d jam\n", jam);
    displaygaji();
}
