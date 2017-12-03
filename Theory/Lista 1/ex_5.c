#include<stdio.h>
#include<stdlib.h>

int main(){

  int i;
  float n1=1, n2=1, s=0;

  for(i=0; i<49; i++){

    n1+=2;
    n2++;
    s += n1/n2;

  }

  printf("n1 : %f \nn2 : %f \ns : %f \n", n1, n2, s);

  return 0;
}
