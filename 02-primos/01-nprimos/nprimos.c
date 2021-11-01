#include <stdio.h>
#include <stdlib.h>


int main() 
{ 
    int i,a,numero, count, valor, escolha;
    // "i" e "a" são iteradores dos Loops externo e interno, respetivamente.

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
            for (i=2;i<numero;i++) 
            { 
                count=0; 
                for (a=1;a<=i;a++) 
                { 
                    if (i%a==0){
                        count++;
                    }
                }
                if (count==2){
                    printf("%d\t",i);
                }
            }
            printf("\n Digite 99 para continuar ou qualquer outro numero para sair: ");
            scanf("%d", &escolha);
        }
            
    } else {
        printf("\n Obrigado, voce escolheu sair!!!");
    }

    printf("\n");
    system("\npause \n"); 
    return 0;
} 