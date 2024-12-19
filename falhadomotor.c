#include <stdio.h>
 
int main() {
 
    int n, i,contagem =0;
    unsigned long long int maior;
    scanf("%d", &n);
    int vetor[n];
    maior = 0;
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
        if (maior <= vetor[i])
        {
            maior = vetor[i];
            contagem += 1; 
        } else {
            contagem +=1;
            printf("%d\n", contagem);
            maior = 99999999999999999;
        }

    }
    

    return 0;
}