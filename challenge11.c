#include <stdio.h>

int main(){
    int T[10],nb,elemnt,valeur;
    printf("veuillez saisir le nombre de cases de tableau : ");
    while(scanf(" %d",&nb) != 1 || nb<=0){
        printf("\nveuillez saisir un nombre entier positive non nulle !! : ");
        while(getchar()!='\n');
    }
    for(int  i=0;i<nb;i++){
        printf("\nnombre numero %d : ",i+1);
        scanf("%d",&T[i]);
    }
    printf("\ndonnez l'element a remplacer!! : ");
    scanf("%d",&elemnt);
    printf("\ndonnez la nouvelle valeur : ");
    scanf("%d",&valeur);
    
    for(int i=0;i<nb;i++){
        if(T[i]==elemnt) T[i] = valeur;
    }
    for(int i=0;i<nb;i++){
        printf("\nnb %d est : %d",i+1,T[i]);
    }
}