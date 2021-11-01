// Programa C ++ para imprimir todos os primos menores incluse N (caso N seja primo)
#include <iostream>
#include <stdbool.h>

using namespace std;

// função que verifica se um número é primo ou não
bool isPrime(int n)
{
	// Casos extremos
	/*
	* Na engenharia, um caso extremo envolve um problema ou situação que ocorre 
	* apenas fora dos parâmetros operacionais normais - especificamente aquele que
	* se manifesta quando várias variáveis ou condições estão simultaneamente em
	* níveis extremos, mesmo que cada parâmetro esteja dentro do especificado
	* intervalo para esse parâmetro.
	*/
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	// Isso é verificado para que possamos pular os cinco números do meio no loop
	//  inferior
	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

// Função que imprime numeros primos
void printPrime(int n)
{
	for (int i = 2; i <= n; i++) {
		if (isPrime(i))
			cout << i << " ";
	}
}
// Driver Code
int main()
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
            printPrime(numero); //Invocando a função
            printf("\n Digite 99 para continuar ou qualquer outro numero para sair: ");
            scanf("%d", &escolha);
        }

            
    } else {
        printf("\n Obrigado, voce escolheu sair!!!");
    }

    system("\npause");
    return 0;

}
