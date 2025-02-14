#include <stdio.h>

int main(){
    int x;
    int y;
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);
    int resultado = x * y;
    printf("O resultado da multiplicacao entre %d e %d e %d\n", x, y, resultado);
}