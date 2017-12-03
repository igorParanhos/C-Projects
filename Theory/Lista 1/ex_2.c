#include<stdio.h>
#include<stdlib.h>

int main(){

  int op=0;
  float n1, n2, total;

  printf("Menu de Opcoes:");
  printf("\n  1 - Soma");
  printf("\n  2 - Subtracao");
  printf("\n  3 - Multiplicacao");
  printf("\n  4 - Divisao");
  printf("\n  5 - Sair");

  while(op!=5){

    printf("\n\nEscolha uma opcao:");
    scanf("%d", &op);

    if(op==5){ printf("O programa será encerrado...\n"); break;}

    printf("\nvalor 1: ");
    scanf("%f", &n1);

    printf("\nvalor 2: ");
    scanf("%f", &n2);

    switch(op){
      case 1:
        total = n1+n2;
        break;
      case 2:
        total = n1-n2;
        break;
      case 3:
        total = n1*n2;
        break;
      case 4:
        total = n1/n2;
        break;
      default:
        printf("Opcao invalida!");
        total = 0;
        break;

    }

    printf("Total: %8.2f", total);

  }

  return 0;
}
