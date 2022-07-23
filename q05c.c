#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Parte do aprendizado de Leonardo Nunes na disciplina de introdução à programação, no Curso de Ciência da Computação - UFAPE, 2022

//Questão 5
//Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.
//Dica: importe a biblioteca math.h para ter acesso as funcionalidades de potenciação
//(https://www.tutorialspoint.com/c_standard_library/math_h.htm)

int main()
{
    setlocale(LC_ALL,"");

    float cateto1;
    float cateto2;

    printf("Digite o cateto 01: \n");
    scanf("%f", &cateto1);

    printf("Digite o cateto 02: \n");
    scanf("%f", &cateto2);

    float hipotenusa=pow(cateto1, 2) + pow(cateto2, 2);

    // Aqui foi feita a soma do quadrado dos catetos usando "POW"

    printf("A hipotenusa é: %.2f \n", sqrt(hipotenusa));

    // Aqui foi impresso na tela a raiz quadrada da soma dos catetos, que é por definição a hipotenusa, usando "SQRT"

    system("pause");
    return 0;
}
