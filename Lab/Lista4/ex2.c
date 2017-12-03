#include<stdio.h>
#include<stdlib.h>

/**
Faça um programa que leia a altura e o sexo (codificado da seguinte forma:
1:feminino 2:masculino) de uma pessoa. Depois faça uma função chamada peso ideal
que receba a altura e o sexo via parâmetro e que calcule e retorne seu peso ideal,
utilizando as seguintes fórmulas:
-para homens : (72.7 * h) –58
-para mulheres : (62.1 * h)
–44.7 Observação: Altura = h (na fórmula acima
*/

float pesoIdeal(char sexo,int altura);

int main(){

    int altura;
    char sexo;

    printf("Altura(cm): ");
    scanf("%d", &altura);
    printf("Sexo ( M ou F ): ");
    scanf(" %c", &sexo);

    printf("\nO seu peso ideal e´ : %f\n\n", pesoIdeal(sexo, altura));

    return 0;
}

float pesoIdeal(char sexo, int altura){

    float pesoIdeal;

    if(sexo == 'M' || sexo == 'm')
        pesoIdeal = 72.7 * altura/100 - 58;
    else if(sexo == 'F' || sexo == 'f')
        pesoIdeal = 62.1 * altura/100 - 44;
    else
        pesoIdeal = 0;

    return pesoIdeal;
}
