#include <stdio.h>

int main(){
    int T[10],nb;
    printf("veuillez saisir le nombre de cases de tableau : ");
    while(scanf(" %d",&nb) != 1 || nb<=0){
        printf("\nveuillez saisir un nombre entier positive non nulle !! : ");
        while(getchar()!='\n');
    }
    for(int  i=0;i<nb;i++){
        printf("\nnombre numero %d : ",i+1);
        scanf("%d",&T[i]);
    }
    for(int i=0;i<nb;i++){
        if(T[i] % 2 == 0) printf("\n%d",T[i]);
    }
}