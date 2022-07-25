#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Parte do aprendizado de Leonardo Nunes na disciplina de introdução à programação, no Curso de Ciência da Computação - UFAPE, 2022

//Questão 10
//Faça um programa que receba três números e imprima o maior deles.

int main()
{
    setlocale(LC_ALL,"");

    int n1, n2, n3;

    printf("Digite um número qualquer: \n\n");
    scanf("%d", &n1);

    printf("\n Digite mais um número: \n\n");
    scanf("%d", &n2);

     printf("\n Digite um último número: \n\n");
    scanf("%d", &n3);

    if (n1>n2){
        if (n1>n3){
        printf("\n O maior número é o: %d \n\n", n1);
            }
        }
        if (n2>n1){
             if (n2>n3){
            printf("\n O maior número é o: %d \n\n", n2);
            }
        }

            if (n3>n1){
                if (n3>n2){
                printf("\n O maior número é o: %d \n\n", n3);
                }
           }

    system("pause");
    return 0;
}
