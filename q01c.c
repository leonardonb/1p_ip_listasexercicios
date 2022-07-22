// Questão 1
// Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas,
// considerando peso 2 para a primeira e peso 3 para a segunda.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float nota1, nota2, mediap;
    int peso1=2, peso2=3;

    setlocale(LC_ALL, "");

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    printf("A média ponderada é de:%.2f\n", (nota1*peso1)+(nota2*peso2)/(peso1+peso2));

    system("pause");
    return 0;
}
