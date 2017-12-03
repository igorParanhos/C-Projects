#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/**
Faça uma função que recebe um valor inteiro e verifica
se o valor é par ou ímpar. A função deve retornar um
valor booleano (idem anterior).
*/

bool isEven(int n);

int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(isEven(n))
        printf("\nO numero %d e´ par\n\n", n);
    else
        printf("\nO numero %d e´ impar\n\n", n);


    return 0;
}

bool isEven(int n){
    if(n%2==0)
        return true;
    else
        return false;

}
