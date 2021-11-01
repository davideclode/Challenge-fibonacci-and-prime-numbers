//Fibonacci utilizando recursao recursão
#include <stdio.h>

int fib(int n){
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main(){

    int n;

    printf("Digite um numero para calcular o Fibonacci: ");
    scanf("%d", &n);

    if (n < 0){
        printf("Atencao, digite um numero maior ou igual a 0!!! \n");
        do{
            printf("Digite um numero maior ou igual a 0[zero]: ");
            scanf("%d", &n);
        } while (n < 0);
    }
    printf("%d", fib(n));
    getchar();
    return 0;
}
