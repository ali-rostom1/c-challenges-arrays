#include <stdio.h>

int main(){
    int T1[100],T2[100],T3[200],nb1,nb2,nb3;
    printf("veuillez saisir le nombre de cases de tableau 1: ");
    while(scanf(" %d",&nb1) != 1 || nb1<=0){
        printf("\nveuillez saisir un nombre entier positive non nulle !! : ");
        while(getchar()!='\n');
    }
    for(int  i=0;i<nb1;i++){
        printf("\n T1[%d] = ",i);
        scanf("%d",&T1[i]);
    }
    printf("veuillez saisir le nombre de cases de tableau 2: ");
    while(scanf(" %d",&nb2) != 1 || nb2<=0){
        printf("\nveuillez saisir un nombre entier positive non nulle !! : ");
        while(getchar()!='\n');
    }
    for(int  i=0;i<nb2;i++){
        printf("\n T2[%d] = ",i);
        scanf("%d",&T2[i]);
    }
    nb3=nb1+nb2;
    for(int i=0;i<nb3;i++){
        if(i<nb1){
            T3[i] = T1[i];
        }else{
            T3[i] = T2[i-nb1];
        }
    }
    for(int i=0;i<nb3;i++){
        printf("\n T3[%d] = %d",i,T3[i]);
        
    }

}