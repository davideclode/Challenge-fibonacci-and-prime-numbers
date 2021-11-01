//Fibonacci utilizando programação dinâmica
#include<stdio.h>
#include <stdlib.h>

int fib(int n){
    /*Declaração de array para armazenar numero Fibonacci*/
    int f[n+2]; // 1 extra to handle case, n = 0
    int i;

    /*1º e 2º numero da série Fibonacci*/
    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++)
    {
        /*Adicionando os 2 números anteriores na série e armazenando-os.*/
        f[i] = f[i-1] + f[i-2];
    }

    return f[n];
}

int main (){

    int n;

    printf("Digite um numero para calcular o Fibonacci: ");
    scanf("%d", &n);

    // Validando o input
    if (n < 0){
        printf("Atencao, digite um numero maior ou igual a 0!!! \n");
        do
        {
            printf("Digite um numero maior ou igual a 0[zero]: ");
            scanf("%d", &n);
        } while (n < 0);
    }

    printf("Fibonacci de[%d] eh %d",n , fib(n));
    getchar();
    system("pause \n");
    return 0;
}