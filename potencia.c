#include <stdio.h>
#include <math.h>

void potencia(int* resultado, int base, int expoente){
    *resultado = 1;
    for (int i = 0; i < expoente ;i++){
        *resultado = *resultado * base;
    }
}

/*
void potencia(int* resultado, int base, int expoente){
    *resultado = pow(base, expoente);
}

*/


int main() {
    int resultado;
    potencia(&resultado, 10, 5);
    printf("Resultado: %d\n", resultado);
    return 0;
}