#include <stdio.h>

struct{
    int data[10];
}angka;

int main(){
    int n, temp, i, j;
    printf("input jumlah bilangan : ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("bilangan ke-%d: ", i+1);
        scanf("%d", &angka.data[i]);
    }
    for(i=0; i<(n-1); i++){
        for(j=(i+1); j<n; j++){
            if(angka.data[i]>angka.data[j]){
                temp=angka.data[i];
                angka.data[i]=angka.data[j];
                angka.data[j]=temp;
            }
        }
    }
    printf("data yangtelah diurutkan dari nilai terkecil:\n");
    for(int i=0; i<n; i++){
        printf("%d\n", angka.data[i]);
    }
    return 0;
}