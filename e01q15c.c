#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

//Parte do aprendizado de Leonardo Nunes na disciplina de introdução à programação, no Curso de Ciência da Computação - UFAPE, 2022

/* Questão 15
Faça um programa que receba três números e imprima-os em ordem crescente. */

    int idade;

    setlocale(LC_ALL,"");

    int A, B, C, X;

    scanf("%d%d%d",&A, &B, &C);

    if (A > B)
    {
        X = A; A = B; B = X;
        }
        if (A > C)
        {
            X = A; A = C; C = X;
            }
            if (B > C)
            {
                X = B; B = C; C = X;
                }

    printf("Em ordem crescente, os números digitados foram: %d, %d, %d\n", A, B, C);

    system("pause");
    return 0;
}
