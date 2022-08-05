#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Parte do aprendizado de Leonardo Nunes na disciplina de introdução à programação, no Curso de Ciência da Computação - UFAPE, 2022

//Questão 8
//Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e mostre: a) a hora digitada convertida
//em minutos; b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior; c) o total dos minutos convertidos em
//segundos.

int main()
{
    setlocale(LC_ALL,"");

    int hora, minuto;

    printf("Insira a hora: \n");
    scanf("%d", &hora);

    printf("Insira os minutos: \n");
    scanf("%d", &minuto);

    printf("a: O valor que você digitou nas horas representa: %d minutos \n", hora*60);
    printf("b: O valor que você digitou em horas, somado ao valor que você digitou em minutos dá um total de: %d minutos \n", (hora*60)+minuto);
    printf("c: O valor que você digitou em horas, somado ao valor que você digitou em minutos dáum total de: %d segundos \n", ((hora*60)+minuto)*60);

    system("pause");
    return 0;
}
