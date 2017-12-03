#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/**
Escreva um programa que leia o raio de um círculo e faça duas funções:
uma função chamada area que calcula e retorna a área do círculo e outra
função chamada perimetro que calcula e retorna o perímetro do círculo.
Área = PI * r2 ; Perímetro = PI * 2 * r;
*/

int area(int raio);
int perimetro(int raio);

int main(){

    int raio, a, p;

    printf("Digite o raio do circulo: ");
    scanf("%d", &raio);

    p = perimetro(raio);
    a = area(raio);

    printf("Area: %d\nPerimetro: %d \n", a, p);

    return 0;
}

int area(int raio){
    int area = 3.14*pow(raio, 2);
    return area;
}

int perimetro(int raio){
    int perimetro = 3.14 * 2 * raio;
    return perimetro;
}
