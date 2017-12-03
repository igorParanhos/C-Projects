#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/**
Faça uma função que recebe um valor inteiro e verifica
se o valor é positivo ou negativo. A função deve retornar
um valor booleano (pesquisa sobre este tipo é necessário)
*/

bool isUnsigned(int n);

int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(isUnsigned(n))
        printf("\nO numero %d e´ positivo\n\n", n);
    else
        printf("\nO numero %d e´ negativo\n\n", n);


    return 0;
}

bool isUnsigned(int n){
    if(n>=0)
        return true;
    else
        return false;
}
