#include <stdio.h>

int main(){
    int T[10],nb,element;
    printf("veuillez saisir le nombre de cases de tableau : ");
    while(scanf(" %d",&nb) != 1 || nb<=0){
        printf("\nveuillez saisir un nombre entier positive non nulle !! : ");
        while(getchar()!='\n');
    }
    for(int  i=0;i<nb;i++){
        printf("\nnombre numero %d : ",i+1);
        scanf("%d",&T[i]);
    }
    printf("\ndonnez l'element a recherer!! : ");
    scanf("%d",&element);

    for(int i=0;i<nb;i++){
        if(T[i] == element){
            printf("l'element %d est present",element); 
            return 0;
        }
    }
    printf("\nl'element %d n'est pas present.",element);
}
