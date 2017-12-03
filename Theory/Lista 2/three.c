#include<stdio.h>
#include<stdlib.h>

/**
Faça uma função que recebe a média final de um aluno por parâmetro e retorna o seu conceito,

Nota       | Conceito
0,0 - 4,9  | D
5,0 - 6,9  | C
7,0 - 8,9  | B
9,0 - 10,0 | A
*/

char obterConceito(float media);

int main(){

    float media_final = 6;

    printf("Media Final: ");
    scanf("%f", &media_final);

    printf("O conceito da sua nota e´ : %c\n\n", obterConceito(media_final));

    return 0;
}

char obterConceito(float media){
    char conceito;
    if(media<0 || media>10)
        conceito = '#';
    else if(media<5)
        conceito = 'D';
    else if(media<7)
        conceito = 'C';
    else if(media<9)
        conceito = 'B';
    else if(media<=10)
        conceito = 'A';

    return conceito;
}
