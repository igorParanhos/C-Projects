#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int distancia[5][5] = {{0,780,713,260,289},{780,0,811,952,526},{713,811,0,717,914},{260,952,717,0,514},{289,526,914,514,0}};
    int r, c, orig=-1, dest=-1;
    char cidade[5][20] = {"recife","fortaleza","petrolina","maceio","natal"}, origem[20], destino[20];

    printf("CEFET-MG Maps\n\n");

    printf("- recife\n- fortaleza\n- petrolina\n- maceio\n- natal\n");

    printf("\n\nCidade de Origem: ");
    scanf("%s", &origem);
    printf("Cidade de Destino: ");
    scanf("%s", &destino);

    printf("");
    for(r=0; r<5; r++){
        if(strcmp(origem, cidade[r])==0){
            orig = r;
        }
        if(strcmp(destino, cidade[r])==0){
            dest = r;
        }
    }

    if(orig<0 || orig>=5 || dest<0 || dest>=5)
        printf("Cidades informadas nao estao cadastradas!!\n\n");
    else
        printf("\n\nA distancia entre  %s  e  %s  e´ de %dkm\n\n", cidade[orig], cidade[dest], distancia[orig][dest]);

    return 0;
}
