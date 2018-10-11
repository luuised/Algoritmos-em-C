#include<stdio.h> 
void main() {

int n1,n2,n3;

printf("Digite o primeiro numero:...");
scanf("%d",&n1);
printf("Digite o segundo numero:...");
scanf("%d",&n2);
printf("Digite o terceiro:...");
scanf("%d",&n3);


        if (n1>n2&&n1>n3){
        printf("O numero maior e %d\n",n1);}
        else
        if (n2>n3&&n2>n1){
        printf("O numero maior e %d\n",n2);}
        else 
        if (n3>n2&&n3>n1){
        printf("O numero maior e %d\n",n3);}


}
