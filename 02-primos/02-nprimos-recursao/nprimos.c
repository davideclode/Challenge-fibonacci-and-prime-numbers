#include<stdio.h>
#include <stdlib.h>


void print_fact(int n)
{
    int num = 2;
    if (n==1){
        return;
    }else{
        while (n%num != 0)
        {
            num++;
        }
    }

    printf("%d\t",num);
    // Invocando a função print_fact
    print_fact (n/num);

}

int main ()
{
    int i, escolha, numero;
    // "i" é um iterador

    printf("Digite 99 para entrar ou qualquer outra coisa para sair: ");
    scanf("%d", &escolha);

    if(escolha== 99){
        printf("\n Voce escolheu entrar!!!\n\n ");
        while(escolha == 99){
            printf("Informe um numero maior/igual a 2 e menor/igual a 222222: ");
            scanf("%d", &numero);

            // Validando o input
            if (numero <= 1 ||getchar()!='\n'|| numero > 222222)
            {
                printf("\nAtencao, digite um numero maior/igual a 2 e menor/igual a 222222 !!! \n");
                do
                {
                    printf("\nDigite um numero maior/igual a 2 e e menor/igual a 222222: ");
                    scanf("%d", &numero);
                } while (numero <= 1 ||getchar()!='\n'|| numero > 222222);
            }
            print_fact(numero); //xxxxxxxxxxxxxxxxxxxxxxx
            printf("\n Digite 99 para continuar ou qualquer outro numero para sair: ");
            scanf("%d", &escolha);
        }

            
    } else {
        printf("\n Obrigado, voce escolheu sair!!!");
    }

    system("\npause");
    return 0;
}