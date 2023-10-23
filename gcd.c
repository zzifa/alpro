#include <stdio.h>
int main (){
    int x,y,z;
    printf("masukkan nilai x: ");
    scanf("%d", &x); 
    printf("masukkan nilai y: ");
    scanf("%d", &y);

    while (y!=0){
        z=y;
        y=x%y;
        x=z;
    }
    if (z < 0){
        z = z * -1;
    printf(" GCD = %d\n", z);
    return 0;
    } 
    else{
        printf("GCD = %d\n", z);
    }
}
