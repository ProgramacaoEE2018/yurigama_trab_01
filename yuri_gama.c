//Alu Ten Yuri Gama Pacheco
//Eletrônica
//Programa feito em Ling C, utilizando CodeBlocks

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float notave; //variavel que armazena a nota VE
    float notavc; //variavel que armazena a nota VC
    float notavf; //variavel que armazena a nota VF
    char ch; //variável auxiliar usada no loop do...while

    do{
        system("cls");

        printf("Digite a media de VE:\n");
        scanf("%f", &notave); //armazena a nota digitada na variavel notave
        printf("Digite a nota de VC:\n");
        scanf("%f", &notavc); //armazena a nota digitada na variavel notavc

        notavf = (20-notave-notavc)/2; //expressao matematica para a nota minima de VF para ter media final 5

        if (notavf < 4.0)
            printf("Nota necessaria na VF: 4.00\n"); //expressa a nota minima necessaria na VF para aprovacao(4.00)
        else
            printf("Nota necessaria na VF: %f\n", notavf);

        printf("Deseja continuar?(s/n)"); //caso o usuario deseje calcular outra nota
        scanf(" %c", &ch);

    }while(ch != 'n');

    return 0;
}
