#include<stdio.h>
#include<stdlib.h>

int main(){

  int  soma=0, media=0, soma_pares=0, media_pares=0, maior=0, menor=0, input[20], i=0, i_pares=0, input_size;

  printf("Digite Valores Inteiros ( 0 - encerra o programa )");

  while(i<(sizeof(input)/4)){

    //leitura dos valores
    printf("\ndigite o %d valor(inteiro) : ", i);
    scanf(" %d", &input[i]);

    if(input[i]==0){
      break;
    }

    //Soma
    soma += input[i];

    if(i == 0){ maior = input[i]; menor = input[i];}
    //Maior
    else if((input[i] > maior)&&(input[i]!=0)) { maior = input[i]; }
    //Menor
    else if((input[i] < menor)&&(input[i]!=0)){ menor = input[i]; }


    //Soma numeros pares
    if((input[i]%2) == 0){
      soma_pares += input[i];
      i_pares++;
    }
    i++;
  }

  //Quantidade valores recebidos
  input_size = i;

  //Media
  media = soma/input_size;

  //Media dos pares
  media_pares = soma_pares/i_pares;


  printf("\n\n(a) Soma: %d", soma);
  printf("\n(b) Quantidade: %d", input_size);
  printf("\n(c) Media: %d", media);
  printf("\n(d) Maior: %d", maior);
  printf("\n(e) Menor: %d", menor);
  printf("\n(f) Media Pares: %d", media_pares);


  return 0;
}
