#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(){
    int i;
    double m,g,t,h,hn,EK,EP,EM;
    double u,v;
    FILE *fptr;
    fptr=fopen("coordinates.dat","w");
    m = 10.0; 
    g = 9.8; 
    h = 10.0; 
    t = 0.1; 
    u = 0.0; 
    for(i=0;i<100;i++){
        v=u+(g*t); 
        EK=0.5*m*v*v;
        hn=(u*t)+(0.5*g*t*t); 
        h=h-hn;  
        EP=m*g*h; 
        u=v;
        if(h<=0.0)
        break;
        EM=EK+EP;
        fprintf(fptr,"%d\t%lf\t%lf\t%lf\n",i,EK,EP,EM); 
    }
    fclose(fptr);
}
