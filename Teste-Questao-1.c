#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void inverteVetor(int *v,int tam){
    int i, c, num[tam];
    c = 0;
    for (i = 0; i < tam; i++)
    {
        num[i] = *(v + i);
    }
    for ( i = tam - 1; i >= 0; i--)
    {
        *(v + c) = num[i];
        printf("%d >", *(v + c));
        c++;
    }
    
}

int main(){
    setlocale(LC_ALL,"Portuguese");

    int tam, i;

    printf("Qual é o tamanho do Vetor de números inteiros? ");
    scanf("%d", &tam);

    int vetor[tam];

    for (i = 0; i < tam; i++){
        printf("Digite o número da posição %dº: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    inverteVetor(vetor,tam);

    return 0;
}
