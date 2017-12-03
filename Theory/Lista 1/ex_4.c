#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){

  float numeros[100];
  int i;

  for(i=0; i<(sizeof(numeros)/4); i++){

    printf("\ndigite um numero: ");
    scanf("%f", &numeros[i]);

    printf("\n\nQuadrado: %8.2f", pow(numeros[i], 2));
    printf("\nCubo: %8.2f", pow(numeros[i]), 3);
    printf("\nRaiz quadrada: %8.2f", sqrt(numeros[i]));


    if(numeros[i]<=0){break;}

  }

  return 0;
}
