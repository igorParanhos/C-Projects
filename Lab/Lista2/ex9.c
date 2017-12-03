#include<stdio.h>
#include<stdlib.h>

/**
  Em uma cidade do interior, sabe-se que, de janeiro a
  abril de 1976 (121 dias), não ocorreu temperatura inferior
  a 15ºC nem superior a 40ºC. As temperaturas verificada sem
   cada dia estão disponíveis em vetor de entrada de dados.
   Fazer um algoritmo que calcule e imprima:
   A menor temperatura ocorrida;
   A maiortemperatura ocorrida;
   A temperatura média;
   O número de dias nos quais a temperatura foi inferior à temperatura média.'
*/

int main(){

  int i, abaixo=0, maior=0, menor=0, media=0, temperatura[5];
  int index = sizeof(temperatura)/sizeof(int);

  for(i=0; i<index; i++){

    // temperatura[i] = i;
    printf("\nDigite uma temperatura: ");
    scanf(" %d", &temperatura[i]);


      if(i == 0 || maior < temperatura[i])
        maior = temperatura[i];

      if(i == 0 || menor > temperatura[i])
        menor = temperatura[i];

      media += temperatura[i];


  }

  media = media/index;

  for(i=0; i<index; i++){
    if(temperatura[i] < media)
      abaixo++;
  }


  printf("\nmedia temperatura: %d", media);
  printf("\na temperatura ficou abaixo da media : %d dias", abaixo);
  printf("\nmaior: %d", maior);
  printf("\nmenor: %d\n", menor);


  return 0;
}
