#include <stdio.h>


float nota1, nota2, nota3, nota4, media;
int main ()
{
    printf("\nInforme a primeira nota..: ");
    scanf("%f",&nota1);
    printf("\nInforme a segunda nota..: ");
    scanf("%f",&nota2);
    printf("\nInforme a terceira nota..: ");
    scanf("%f",&nota3);
    printf("\nInforme a quarta nota..: ");
    scanf("%f",&nota4);
    
    media = ((nota1+nota2+nota3+nota4)/4); 
    printf("Media: %.1f\n",media);   
    
    if (media>=7) {
        printf("Parabens, voce foi aprovado.\n");
    }
    else 
        if (media>=4) {
        printf("Voce esta de exame.\n");
        }
        else {
        printf("Voce esta reprovado\n");
        }
return 0;
}
