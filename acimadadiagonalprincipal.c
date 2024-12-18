#include <stdio.h>
#define TAM_MTZ 3
 
int main() {
 
    int matriz [TAM_MTZ] [TAM_MTZ], i, j;
    char operacao;
    float n, soma = 0, media, divisor = 0;
    operacao = getchar();

    for (i=0; i<TAM_MTZ; i++) {

        for (j=0; j<TAM_MTZ; j++){
            scanf("%f", &n);
            matriz[i][j] = n;
        }
    }
            for (i =0; i<TAM_MTZ; i++) {
            for (j=0; j<TAM_MTZ; j++) {
                if (i < j) {
                   
                   soma += matriz[i][j];
                   divisor +=1;
                }
            }
        } 
        media = soma / divisor;
    if (operacao == 'S') {
        printf("%.1f\n", soma);
    } else if (operacao == 'M') {
        printf("%.1f\n", media);
    }

 
    return 0;
}