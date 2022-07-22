// Questão 3
// Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário,
// calcule e mostre a quantidade de salários mínimos que esse funcionário ganha.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"");

    float salariorec;


    printf("Digite o valor do salário recebido: \n");
    scanf("%f", &salariorec);

    printf("A pessoa que informou o salário recebe: %.1f salário(s) mínimo(s) \n", (salariorec/1212));

    system("pause");
    return 0;
}
