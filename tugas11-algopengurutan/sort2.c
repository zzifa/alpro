#include <stdio.h>

int main(){
    int data[10], n, temp;
    printf("input jumlah bilangan : ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("bilangan ke-%d: ", i+1);
        scanf("%d", &data[i]);
    }
    for(int i=0; i<(n-1); i++){
        for(int j=(i+1); j<n; j++){
            if(data[i]>data[j]){
                temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }
    printf("data yangtelah diurutkan dari nilai terkecil:\n");
    for(int i=0; i<n; i++){
        printf("%d\n", data[i]);
    }
    return 0;
}