#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Parte do aprendizado de Leonardo Nunes na disciplina de introdução à programação, no Curso de Ciência da Computação - UFAPE, 2022

//Questão 7
//Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela vai passar por vários países
//e precisa converter seu dinheiro em dólares americanos, euros e libras. Sabe-se que as taxas de conversões são R$ 5,50, R$ 5,80, e
//R$ 7,10 respectivamente O programa deve fazer as conversões e mostrá-las.

int main()
{
    setlocale(LC_ALL,"");

    float real;

    printf("Insira o valor em R$ que você tem disponível: \n");
    scanf("%f", &real);

    printf("Você possui: %.2f reais, logo: \n", real);
    printf("Você possui: %.2f dólares (cotação de R$5,30) \n", real/5.30);
    printf("Você possui: %.2f euros (cotação de R$5,80) \n", real/5.80);
    printf("Você possui: %.2f libras (cotação de R$7,10) \n", real/7.10);

    system("pause");
    return 0;
}
