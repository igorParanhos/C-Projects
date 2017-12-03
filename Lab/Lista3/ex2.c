#include<stdio.h>

/**
Uma loja fez um levantamento completo de suas vendas mês a

mês e quanto cada um dos seus 5 vendedores vendeu em cada mês.

O resultado deste levantamento foi armazenado em uma matriz

onde cada linha representa um mês de vendas e cada coluna representa

 as vendas de um vendedor em cada mês.

Construa um algoritmo que contenha a carga inicial da matriz

dentro do código e que calcule e mostre qual foi o vendedor

que mais vendeu o ano todo
*/

int main(){

    int i, n, m[2]={0}, maior_vendedor, maior[5] = {0}, vendas[12][5] = {{12,43,23,12,41},{23,33,45,12,22},{11,88,56,55,99},{12,23,43,99,99},{77,76,45,99,13},{12,43,23,99,99},{23,33,45,12,22},{11,88,56,15,23},{12,23,43,12,76},{77,76,45,22,13},{12,23,43,12,76},{77,76,45,22,13}};
    char mes[12][5] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};

    printf("    |Vend 1|Vend 2|Vend 3|Vend 4|Vend 5|\n");
    for(n=0; n<12; n++){

        printf("%s |", mes[n]);

        for(i=0; i<5; i++){

            //printf("  %d  |", vendas[n][i]);

            if(i==0){
                m[1] = vendas[n][0];
                m[0] = 0;
            }else if(m[1]<vendas[n][i]){
                m[1] = vendas[n][i];
                m[0] = i;
            }
        }

        maior[m[0]]++;

        printf("\n");
    }

    for(i=0; i<4; i++){
      printf("%d\n", maior[i]);
      if(maior[i]<maior[i+1])
        maior_vendedor = maior[i];
    }

    printf("\nVendedor que mais vendeu: %d\n", maior_vendedor);

    return 0;
}
