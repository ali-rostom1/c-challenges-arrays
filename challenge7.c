#include <stdio.h>

int main(){
    int T[10],nb,temp;
    printf("veuillez saisir le nombre de cases de tableau : ");
    while(scanf(" %d",&nb) != 1 || nb<=0){
        printf("\nveuillez saisir un nombre entier positive non nulle !! : ");
        while(getchar()!='\n');
    }
    for(int  i=0;i<nb;i++){
        printf("\nnombre numero %d : ",i+1);
        scanf("%d",&T[i]);
    }
    for(int j=0;j<nb-1;j++){
        for(int  i=0;i<nb-1;i++){
            if(T[i]>T[i+1]){
                temp=T[i+1];
                T[i+1]=T[i];
                T[i]=temp;
            }
        }
    }
    for(int i=0;i<nb;i++){
        printf("\nnb %d est : %d",i+1,T[i]);
    }

}