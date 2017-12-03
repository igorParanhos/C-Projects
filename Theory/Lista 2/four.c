#include<stdio.h>
#include<stdlib.h>

/**
Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo
de uma pessoa e retorna o seu peso ideal. Para homens, calcular o
peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para mulheres,
peso ideal = 62.1 x alt - 44.
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
