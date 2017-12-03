#include<stdio.h>
#include<stdlib.h>

int main(){

  int quant50, i, i2=0, media, porcentagem=0, idade, altura, peso;

  for(i=0; i<25; i++){

    printf("\nDigite a %d idade: ", i);
    scanf("%d", &idade);

    printf("\nDigite a %d altura(cm): ", i);
    scanf("%d", &altura);

    printf("\nDigite o %d peso(kg): ", i);
    scanf("%d", &peso);

    if(i>=50){
      quant50++;
    }else if((idade>=10)&&(idade<=20)){
      media += altura;
      i2++;
    }
    if(peso<=40){
      porcentagem++;
    }
  }
  porcentagem = porcentagem/25*100;
  media = media/i2;

  printf("\nQt. pessoas acima de 50: %d", quant50);
  printf("\nMedia de altura entre 10 e 20: %d", media);
  printf("\nPorcentagem de pessoas com peso abaixo de 40: %d", porcentagem);

  return 0;
}
