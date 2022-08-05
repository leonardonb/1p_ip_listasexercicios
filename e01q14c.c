#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

//Parte do aprendizado de Leonardo Nunes na disciplina de introdução à programação, no Curso de Ciência da Computação - UFAPE, 2022

/* Questão 14
Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
categoria - idade Infantil A - 5 a 7 Infantil B - 8 a 10 Juvenil A - 11 a 13 Juvenil B - 14 a 17 Sênior - >18 */

    int idade;

    setlocale(LC_ALL,"");

    scanf("%d", &idade);


    if (idade<=7){
        printf("Infantil A\n");
    }
    else if (idade>7 && idade<=10){
        printf("Infantil B\n");
    }
    else if (idade>10 && idade<=13){
        printf("Juvenil A\n");
    }
    else if (idade>14 && idade<=17){
        printf("Juvenil B\n");
    }
    else {
        printf("Sênior\n");
    }

 system("pause");
 return 0;
}
