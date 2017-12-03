#include<stdio.h>
#include<stdlib.h>

/**
A estação com a menor temperatura máxima
A estação com a maior temperatura média
A estação com a maior temperatura mínima
A estação com a menor temperatura mínima
A estação com amaior temperatura máxima
*/

int main(){

    int  i, n, menor_max[2], maior_med[2], maior_min[2], menor_min[2], maior_max[2];
    char estacao[4][20] = {"Primavera","Verao","Outono","Inverno"};
    int temperatura[4][3] = {{27,25,22},{31,26,23},{25,24,19},{24,22,16}};

    menor_max[1] = temperatura[0][0];
    maior_med[1] = temperatura[0][1];
    maior_min[1] = temperatura[0][2];
    menor_min[1] = temperatura[0][2];
    maior_max[1] = temperatura[0][0];
    menor_max[0]=maior_med[0]=maior_min[0]=menor_min[0]=menor_max[0] = 0;


    printf("          |Maxima|Media |Minima|\n");

    for(n=0; n<4; n++){
        printf("%9.9s |", estacao[n]);
        for(i=0; i<3; i++){
            printf("  %dC |", temperatura[n][i]);

            //minima
            if(i==0){
                if(menor_max[1]>temperatura[n][i]){ menor_max[1] = temperatura[n][i]; menor_max[0] = n; }
                if(maior_max[1]<=temperatura[n][i]){ maior_max[1] = temperatura[n][i]; maior_max[0] = n; }
            }
            //media
            else if(i==1){
                if(maior_med[1]<temperatura[n][i]){ maior_med[1] = temperatura[n][i]; maior_med[0] = n; }
            }
            //maxima
            else if(i==2){
                if(maior_min[1]<temperatura[n][i]){ maior_min[1] = temperatura[n][i]; maior_min[0] = n; }
                if(menor_min[1]>temperatura[n][i]){ menor_min[1] = temperatura[n][i]; menor_min[0] = n; }
            }
        }
        printf("\n");
    }

    //printf("%s  |  %s|  %s|  %s", estacao[0],estacao[1],estacao[2],estacao[3]);
    printf("\nmenor temperatura maxima: %dC | %s", menor_max[1], estacao[menor_max[0]]);

    printf("\nmaior temperatura media:  %dC | %s ", maior_med[1], estacao[maior_med[0]]);
    printf("\nmaior temperatura minima: %dC | %s ", maior_min[1], estacao[maior_min[0]]);
    printf("\nmenor temperatura minima: %dC | %s ", menor_min[1], estacao[menor_min[0]]);
    printf("\nmaior temperatura maxima: %dC | %s ", maior_max[1], estacao[maior_max[0]]);


    return 0;
}
