#include <stdio.h>


int main (){

    int a ,b ,c ,d ;
    int somme,moyenne;
    printf("entrer le nombre a : ");
    scanf("%d",&a);
    printf("entrer le nombre b : ");
    scanf("%d",&b);
    printf("entrer le nombre c : ");
    scanf("%d",&c);
    printf("entrer le nombre d : ");
    scanf("%d",&d);

    somme = a + b + c + d ;
    moyenne = somme / 4 ;
    printf("la somme : %d \n",somme);
    printf("moyenne : %d \n ",moyenne);
   
   return 0;
    
}