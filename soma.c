#include <stdio.h>

int soma(int* nums, int tamanhoArray){
    int soma = 0;
    for(int i = 0; i < tamanhoArray; i++){
        soma += nums[i];
    }
    return soma;
}

int main(){
    int nums[3];
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;

    int total = soma(nums, 3);
    printf("Total: %d\n", total);
}