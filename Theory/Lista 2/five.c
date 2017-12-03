#include<stdio.h>
#include<stdlib.h>

/**
Faça uma função que recebe um vetor de 5 valores inteiros
por parâmetro e retorna-os ordenados em ordem crescente
(Será necessário pesquisar sobre passagem de vetores como parâmetros).
*/

int *ordenar(int numeros[5]);

int main(){

    int numeros[5] = {9,6,8,1,11}, *res, i;

    res = ordenar(numeros);

    for(i=0; i<5; i++){
        printf(" %2d \n", res[i]);
    }

    return 0;
}

int *ordenar(int numeros[5]){
    int i, j, prev, length = 5;

    //ordena vetor
    for (i = 0; i < length; ++i){
        for (j = i + 1; j < length; ++j){
            if (numeros[i] > numeros[j]){

                prev = numeros[i];

                numeros[i] = numeros[j];

                numeros[j] = prev;

            }
        }
    }

    return numeros;
}
