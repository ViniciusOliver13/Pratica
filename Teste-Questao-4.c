#include <stdio.h>
#include <locale.h>

int intervSoma(int n1, int n2){
    int i, soma = 0;

    if (n1 < n2){
        for ( i = n1 + 1; i < n2 ; i++){
            soma += i;
        }
    }else{
        for ( i = n2 + 1; i < n1; i++){
            soma += i;
        }
    }

    return soma;
}

int main(){
    setlocale(LC_ALL,"Portuguese");

    int num1, num2, s;

    printf("Digite o valor do 1º intervalo: ");
    scanf("%d", &num1);
    printf("Digite o valor do 2º intervalo: ");
    scanf("%d", &num2);

    s = intervSoma(num1, num2);

    printf("A soma entre os dos N números inteiros existentes entre eles foi %d.", s);

    return 0;
}