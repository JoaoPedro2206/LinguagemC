#include <stdio.h>

int main(){
	int contador = 1;
    int soma = 0;
	while(contador<=100){
		contador++;
        soma += contador;
	}
    printf("%d \n", soma);
}