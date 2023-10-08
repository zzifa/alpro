#include <stdio.h>

// comment

int main () {
    char nama[20], kelas[20], jurusan[20];
    
    printf("Nama: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Kelas: ");
    fgets(kelas, sizeof(kelas), stdin);
    
    printf("Jurusan: ");
    fgets(jurusan, sizeof(jurusan), stdin);

    printf("\n=========\n");
    printf("Nama : %s", nama);
    printf("Kelas : %s", kelas);
    printf("Jurusan: %s\n", jurusan);
   
    return 0;
}
