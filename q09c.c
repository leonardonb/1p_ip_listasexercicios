#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Parte do aprendizado de Leonardo Nunes na disciplina de introdução à programação, no Curso de Ciência da Computação - UFAPE, 2022

//Questão 9
//Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.

int main()
{
    setlocale(LC_ALL,"");

    int idade;

    printf("Insira uma idade: \n\n");
    scanf("%d", &idade);

    if (idade<18){

        printf("\n A pessoa a qual essa idade se refere é menor de idade \n\n");
        }
        else {

            printf("\n A pessoa a qual essa idade se refere é maior de idade \n\n");
            }

    system("pause");
    return 0;
}
