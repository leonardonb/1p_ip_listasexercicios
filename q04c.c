#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Parte do aprendizado de Leonardo Nunes no Curso de Ciência da Computação - UFAPE, 2022

//Questão 4
//Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
//a) a idade dessa pessoa em anos;
//b) a idade dessa pessoa em meses;
//c) a idade dessa pessoa em dias; d) a idade dessa pessoa em semanas.

int main()
{
    setlocale(LC_ALL,"");

    int anonasc;
    int anoatual;

    printf("Digite o ano de seu nascimento: \n");
    scanf("%d", &anonasc);

    printf("Digite o ano atual: \n");
    scanf("%d", &anoatual);

    printf("A pessoa em questão terminará o ano consultado com: %d anos \n", anoatual-anonasc);
    printf("A pessoa em questão já viveu: %d meses \n", (anoatual-anonasc)*365);
    printf("A pessoa em questão já viveu: %d semanas \n", ((anoatual-anonasc)*365)*52);
    printf("A pessoa em questão já viveu: %d dias \n", (((anoatual-anonasc)*365)*52)*7);


    system("pause");
    return 0;
}
