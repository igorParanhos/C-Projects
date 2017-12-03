#include<stdio.h>
#include<stdlib.h>


int main(){

  int i, i3=0, i2=0,v1[10] = {12,23,43,5,32,4,13,65,54,44};
  int v2[10] = {78,67,55,44,33,22,11,6,4,2};
  int vt[20] = {0,0};

  for(i=0; i<20; i++){
    if(i%2==0){
      vt[i] = v1[i2];
      i2++;
    }else{
      vt[i] = v2[i3];
      i3++;
    }

  }

  for(i=0; i<20; i++){
    printf("%d : %d \n", i, vt[i]);
  }


  return 0;
}
