#include <stdio.h>
 
int maior(int a, int b) {
    int m;
    m = (a + b + abs(a-b))/2;
    return m;
} 


int main() {
    
    int n1,n2,n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int mf;
    mf = maior(maior(n1,n2), n3);
    printf("%d eh o maior\n", mf);
 
    return 0;
}