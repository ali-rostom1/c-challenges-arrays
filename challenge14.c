#include <stdio.h>

int main(){

    int T[10],nb;
    float moy;
    printf("veuillez saisir le nombre de cases de tableau : ");
    while(scanf(" %d",&nb) != 1 || nb<=0){
        printf("\nveuillez saisir un nombre entier positive non nulle !! : ");
        while(getchar()!='\n');
    }
    for(int i=0;i<nb;i++){
        printf("\nnombre numero %d : ",i+1);
        scanf("%d",&T[i]);
    }
    moy=0;
    for(int i=0;i<nb;i++){
        moy+=T[i];
    }
    printf("\nla moyenne des elements du tableau est : %.02f",moy/nb);
}