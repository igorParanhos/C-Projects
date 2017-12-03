#include<stdio.h>
#include<stdlib.h>

int main(){

  float area=0,base=0, altura=0;


  printf("Calculo da Area do Triagulo");

  while((altura<=0)||(base<=0)){
    printf("\nlargura da base: ");
    scanf("%f", &base);

    printf("\naltura do triangulo: ");
    scanf("%f", &altura);


    if((altura<=0)||(base<=0)){
      printf("\nDigite valores positivos diferentes de zero para os campos acima!");
    }
  }

  area = (base*altura)/2;

  printf("A area do Triagulo e de : %8.2f \n", area);

  return 0;


}
