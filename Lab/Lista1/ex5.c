#include<stdio.h>
#include<stdlib.h>

int main(){

  float i, n, x, s1=0, s2=0;

  printf("Digite o valor de x: ");
  scanf("%f", &x);

  printf("Digite o valor de n: ");
  scanf("%f", &n);

  //loop que irá iterar 1 a 1 até atingir o valor de n
  for(i=0; i<=n; i++){

    s1 = s1 + 1/(x+i);
    s2 = s2+(x-i);

  }

  printf("\ns1: %8.2f \n", s1);
  printf("\ns2: %8.2f \n", s2);

  return 0;
}
