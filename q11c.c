#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Parte do aprendizado de Leonardo Nunes na disciplina de introdução à programação, no Curso de Ciência da Computação - UFAPE, 2022

//Questão 11
//Faça um programa que receba um número qualquer e informe se este é par ou ímpar.

int main()
{
    setlocale(LC_ALL,"");

    int numero;

    printf("Digite um número qualquer: \n\n");
    scanf("%d", &numero);

    if (numero%2==0){
        printf("\n O número é par \n\n");
    }
        else {
             printf("\n O número é impar \n\n");
            }

    system("pause");
    return 0;
}
