#include <stdio.h>

int main(){
    int T[10],nb,facteur;
    printf("veuillez saisir le nombre de cases de tableau : ");
    while(scanf(" %d",&nb) != 1 || nb<=0){
        printf("\nveuillez saisir un nombre entier positive non nulle !! : ");
        while(getchar()!='\n');
    }
    for(int  i=0;i<nb;i++){
        printf("\nnombre numero %d : ",i+1);
        scanf("%d",&T[i]);
    }
    printf("\nveuillez saisir le facteur de multiplication : ");
    scanf("%d",&facteur);
    for(int i=0;i<nb;i++){
        printf("\nnb %d est : %d",i+1,T[i]*facteur);
    }

}