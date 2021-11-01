/*
Neste código, implementei uma função que recebe um numero N >= 0, e retorna o valor correspondente desse número na sequencia fibonnaci.
Obs.: A implementação foi feita utilizando a fórmula matemática do fibonacci.
*/
#include<stdio.h>
#include<math.h>

int fib(int n) {
    double phi = (1 + sqrt(5)) / 2;
    return round(pow(phi, n) / sqrt(5));
}
int main (){
    int n;

    printf("Digite um numero para calcular o Fibonacci: ");
    scanf("%d", &n);

    if (n < 0){
        printf("Atencao, digite um numero maior ou igual a 0!!! \n");
        do
        {
            printf("Digite um numero maior ou igual a 0[zero]: ");
            scanf("%d", &n);
        } while (n < 0);
    }

    printf("");
    printf("%d", fib(n));
    return 0;
}
