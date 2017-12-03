#include<stdio.h>
#include<stdlib.h>

int main(){

  float r1=1, r2=1, r_total;

  printf("Calculo Resistencia ( Digite 0 para encerrar o programa )");

  while((r1!=0)&&(r2!=0)){
    printf("\n\nr1: ");
    scanf("%f", &r1);

    printf("r2: ");
    scanf("%f", &r2);

    r_total = (r1*r2)/(r1+r2);

    printf("\nO valor da resistencia total e : %8.2f", r_total);
  }

  return 0;
}
