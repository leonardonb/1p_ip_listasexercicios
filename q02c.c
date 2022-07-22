// Questão 2
// Faça um programa que receba o preço de um produto, calcule e mostre
// o novo preço, sabendo-se que este sofreu um desconto de 10%.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco;

    printf("Digite o valor do produto: \n");
    scanf("%f", &preco);

    printf("O valor do produto, com o desconto de 10 porcento aplicado fica por:%.2f \n", preco-(preco*10)/100);

    system("pause");
    return 0;
}
