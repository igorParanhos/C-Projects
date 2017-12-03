#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

  float area, raio, pi=3.14159;

  printf("Digite o valor do raio: ");
  scanf("%f", &raio);

  area = pi*pow(raio, 2);

  printf("Area da Circunferencia", area);

  return 0;
}
