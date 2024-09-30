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

    int j=nb-1;
    for(int i=0;i<=j;i++){
        temp=T[i];
        T[i]=T[j];
        T[j]=temp;
        j--;
        
    }
    for(int i=0;i<nb;i++){
        printf("\nnb %d est : %d",i+1,T[i]);
    }
}