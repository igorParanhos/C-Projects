#include<stdio.h>
#include<stdlib.h>

/**
Faça um programa para calcular o Fatorial de um número. Para o cálculo do fatorial,
 sabemos que N! depende de (N-1)!; este por sua vez depende de (N-2)!; e, assim por diante,
 até que N seja 1, quando então tem-se que fatorial de 1 é igual a 1 mesmo.
 Utilize uma função que recebe como parâmetro de entrada o número a ser
 calculado o fatorial, do tipo inteiro, e retorna o fatorial deste número, também do tipo inteiro
*/

int fatorial(int n);

int main(){

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("\nFatorial:  %d\n", fatorial(num));

    return 0;
}

int fatorial(int n){
    int i, f=n, t = n;

    n--;
    for(i=1; i<t; i++){
        f *= n;
        n--;
    }
    return f;
}
