#include<stdio.h>
#include<stdlib.h>

/**
Para que X, Y e Z formem umtriângulo é necessário que a seguinte propriedade seja satisfeita:
o comprimento decada lado de um triângulo é menor do que a soma do comprimento dos outros dois
lados. O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:

o Triângulo Equilátero: os comprimentos dos 3 lados são iguais.

o Triângulo Isósceles: os comprimentos de 2 lados são iguais.

o Triângulo Escaleno: os comprimentos dos 3 lados são diferentes
*/

int lerTriangulo(int lados[3]);

int main(){

    int lados[3];

    printf("Digite o valor do primeiro lado : ");
    scanf("%d", &lados[0]);
    printf("Digite o valor do segundo lado : ");
    scanf("%d", &lados[1]);
    printf("Digite o valor do terceiro lado : ");
    scanf("%d", &lados[2]);

    if(lerTriangulo(lados)==0)
        printf("Os valores informados nao formam um triangulo!!\n\n");
    if(lerTriangulo(lados)==1)
        printf("O triangulo informado e´ equilatero!!\n\n");
    if(lerTriangulo(lados)==2)
        printf("O triangulo informado e´ isosceles!!\n\n");
    if(lerTriangulo(lados)==3)
        printf("O triangulo informado e´ escaleno!!\n\n");

    return 0;
}

// 0 - Não é triângulo
// 1 - Triângulo Equilátero
// 2 - Triângulo Isósceles
// 3 - Triãngulo Escaleno
int lerTriangulo(int lados[3]){
    int triangulo, flag;

    flag = ( lados[0] < lados[1]+lados[2] ) &&  ( lados[1] < lados[0]+lados[2] ) && ( lados[2] < lados[0]+lados[1] ) ? 1 : 0;

    if(flag == 1){
        if(lados[0]==lados[1] && lados[1]==lados[2])
            triangulo = 1;
        else if( ( (lados[0]==lados[1]) || (lados[0]==lados[2]) || (lados[1]==lados[2]) ) && ( lados[0]!=lados[1] || lados[1]!=lados[2] || lados[0]!=lados[2] ) )
            triangulo = 2;
        else
            triangulo = 3;
    }else{
        triangulo = 0;
    }


    return triangulo;
}
