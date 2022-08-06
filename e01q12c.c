#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

//Parte do aprendizado de Leonardo Nunes na disciplina de introdução à programação, no Curso de Ciência da Computação - UFAPE, 2022

/* Questão 12
Faça um programa que leia três números reais como coeficientes de um polinômio do segundo grau. Calcule as raízes da função usando a
fórmula de bháskara. Dica: importe a biblioteca math.h para ter acesso as funcionalidades de potenciação */

    int idade;

    setlocale(LC_ALL,"");

    float A, B, C, delta, x1, x2;

    scanf("%f%f%f",&A, &B, &C);

    if (A!=0){
        delta=(B*B)-4*A*C;
        if (delta==0){
            x1 = (-B+sqrt(delta))/(2*A);
            printf("Delta é igual a 0\n");
            printf("x1 e x2 = %.2f\n", x1);
        }
            else{
                    if(delta>0){
                x1 =(-B+sqrt(delta))/(2*A);
                x2 = (-B-sqrt(delta))/(2*A);
                printf("Sendo delta maior que 0 \n");
                printf("x1 = %.2f\n", x1);
                printf("x2 = %.2f\n", x2);
                    }
                        else {
                            printf("Delta menor que 0 \n");
                }
            }
        }
            else{
                printf("Não é uma equação de segundo grau");
            }

    system("pause");
    return 0;
}
