#include <stdio.h>

int main(){

    int T[10],nb,min;
    printf("veuillez saisir le nombre de cases de tableau : ");
    while(scanf(" %d",&nb) != 1 || nb<=0){
        printf("\nveuillez saisir un nombre entier positive non nulle !! : ");
        while(getchar()!='\n');
    }
    for(int i=0;i<nb;i++){
        printf("\nnombre numero %d : ",i+1);
        scanf("%d",&T[i]);
    }
    min=T[0];
    for(int i=0;i<nb;i++){
        if(T[i]<min) min=T[i];
    }
    printf("\nle plus petit nombre du tableau est : %d",min);
}