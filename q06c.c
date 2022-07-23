#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Parte do aprendizado de Leonardo Nunes na disciplina de introdução à programação, no Curso de Ciência da Computação - UFAPE, 2022

//Questão 6
//Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2 , deve-se usar 18 W de potência.
//Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre a sua área (em m2 ) e a
//potência de iluminação que deverá ser utilizada.

int main()
{
    setlocale(LC_ALL,"");

    float largura, comprimento;

    printf("Digite a largura em metros: \n");
    scanf("%f", &largura);

    printf("Digite o comprimento em metros: \n");
    scanf("%f", &comprimento);

    float metroquadrado=largura*comprimento;

    printf("Para %.2f m² será necessário %.2f W \n", metroquadrado, metroquadrado*18);

    system("pause");
    return 0;
}
