#include <stdio.h>

void main(){

char resposta;
float n1, n2; 
resposta='0';



//coleta de informações
printf("Digite o primeiro numero..:");
scanf("%f",&n1);
printf("Digite o segundo numero..:");
scanf("%f",&n2);

//menu interativo

printf("Escolha uma operacao\n");
printf("1 - Media entre os numeros\n");
printf("2 - Diferenca do maior pelo menor\n");
printf("3 - Produto entre os numeros\n");
printf("4 - Divisão do primeiro pelo segundo\n");
fflush(stdin);
scanf("%s",&resposta);
 
//condições

        if (resposta=='1') {
            printf("A media entre os dois numeros é %.1f\n",((n1+n2)/2));}
        else
            if (resposta=='2') {
                if (n1>n2) {
                    printf("A diferença entre os dois numeros e %.1f\n",(n1-n2));}
                else
                    printf("A diferença entre os dois numeros e %.1f\n",(n2-n1));
                }
            else
                if (resposta=='3') {
                    printf("O produto dos dois numeros e %.1f\n",(n1*n2));}
                else
                    if(resposta=='4') {
                        printf("A divisao do primeiro pelo segundo numero e %.1f\n",(n1/n2));}


}
