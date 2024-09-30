#include <stdio.h>

int main(){
    int T1[10] = {1,2,3,4,5,6,7,8,9,10},T2[10];

    for(int  i=0;i<10;i++){
        printf("\n T1[%d] = %d",i,T1[i]);
    }
    for(int i=0;i<10;i++){
        T2[i]=T1[i];
        printf("\nT[%d] = %d",i,T2[i]);
    }

}