#include <stdio.h>


float nota1, nota2, media;
int main ()
{
    printf("\nInforme a primeira nota..: ");
    scanf("%f",&nota1);
    printf("\nInforme a segunda nota..: ");
    scanf("%f",&nota2);
    media = ((nota1+nota2)/2); 
    printf("Media: %.1f\n",media);   
    
    if (media>=6) {
        printf("Parabens, vc foi aprovado.\n");
    }
    else {
        printf("Infelizmente voce foi reprovado.\n");
        }
return 0;
}
