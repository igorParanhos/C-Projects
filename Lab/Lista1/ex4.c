#include<stdio.h>
#include<stdlib.h>

int main(){

  int i, n, total=1;

  printf("Digite o valor de n: ");

  scanf("%d", &n);

  //loop que irá iterar 1 a 1 até atingir o valor de n
  for(i=2; i<=n; i++){

    total = total*i;

  }

  printf("\nTotal: %d \n", total);

  return 0;
}
