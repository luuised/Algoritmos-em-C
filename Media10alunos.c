#include<stdio.h>

void main() {

float notas[4]={}, aluno[10]={};
int contador=0;
    while (contador<10) {
        printf("Digite a primeira nota do %dº aluno: ",contador+1);
        scanf("%f",&notas[0]);
        printf("Digite a segunda nota do %dº aluno: ",contador+1);
        scanf("%f",&notas[1]);
        printf("Digite a terceira nota do %dº aluno: ",contador+1);
        scanf("%f",&notas[2]);
        printf("Digite a quarta nota do %dº aluno: ",contador+1);
        scanf("%f",&notas[3]);
        //atribuição das notas para os alunos
        aluno[contador] = ((aluno[contador]+notas[0]+notas[1]+notas[2]+notas[3])/4);
        contador++;



}
    contador=0;
    while (contador<10) {
        if (aluno[contador] >=6) {
            printf("A nota do %dº aluno foi %.1f. Aluno aprovado.\n",contador+1,aluno[contador]);}
        else
            printf("A nota do %dº aluno foi %.1f. Aluno reprovado.\n",contador+1,aluno[contador]);
    contador++;     
    }





}
