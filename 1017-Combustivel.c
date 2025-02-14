#include <stdio.h>
 
int main() {
    int tempoGasto, velocidadeMedia;
    scanf("%d %d", &tempoGasto, &velocidadeMedia);
    
    int distancia = tempoGasto * velocidadeMedia;
    float consumo =  distancia / 12.0;
    
    printf("%.3f\n", consumo);
    return 0;
}