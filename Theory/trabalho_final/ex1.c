#include<stdio.h>
#include<stdlib.h>

void diferenca(int v1[10], int v2[10]);
void soma(int v1[10], int v2[10]);
void produto(int v1[10], int v2[10]);

int main(){

    int i, size, v[10] = {29,30,16,43,5,41,13,12,1,2}, n[10] = {5,6,3,3,1,5,2,1,5,2};
    int res;

    printf("\n\nDiferenca: \n");
    diferenca(v,n);
    printf("\n\nSoma: \n");
    soma(v,n);
    printf("\n\nProduto: \n");
    produto(v,n);

    return 0;
}

void diferenca(int v1[10], int v2[10]){

    int i, size = 10, res[10];

    for(i=0; i<size; i++){
        res[i] = v1[i]-v2[i];
        printf("\n %d - %d = \t%d", v1[i], v2[i], res[i]);
    }
}

void soma(int v1[10], int v2[10]){

    int i, size = 10, res[10];

    for(i=0; i<size; i++){
        res[i] = v1[i]+v2[i];
        printf("\n %d + %d = \t%d", v1[i], v2[i], res[i]);
    }
}

void produto(int v1[10], int v2[10]){

    int i, size = 10, res[10];

    for(i=0; i<size; i++){
        res[i] = v1[i]*v2[i];
        printf("\n %d * %d = \t%d", v1[i], v2[i], res[i]);
    }
}
