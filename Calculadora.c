#include <stdio.h>
    int main() {
        int opcao;
        int num1;
        int num2;
        int resultado;
    do  {   printf("O que deseja fazer?\n");
            printf("1. Somar\n");
            printf("2. Subtrair\n");
            printf("3. Multiplicar\n");
            printf("4. Dividir\n");
            printf("5. Sair\n");

            printf("Escolha uma opção: \n");
            scanf("%d", &opcao);

            switch (opcao)
            {
            case 1:
                printf("Digite o primeiro numero da soma: \n");
                scanf("%d", &num1);
                
                printf("Digite o segundo numero da soma: \n");
                scanf("%d", &num2);

                resultado = num1 + num2;

                printf("O resultado é: %d", resultado);


                break;

            case 2:
                printf("Digite o primeiro numero: \n");
                scanf("%d", &num1);

                printf("Digite o segundo numero: \n");
                scanf("%d", &num2);

                resultado = num1 - num2;

                printf("O resultado é: %d\n", resultado);

                break;

            case 3: 
                printf("Diite o primeiro numero: \n");
                scanf("%d", &num1);

                printf("Digite o segundo numero: \n");
                scanf("%d", &num2);

                resultado = num1 * num2;

                printf("O resultado é %d\n", resultado);  //Esse negócio de ponto e virgula é um saco.
                break;

            case 4: 
                printf("Digite o primeiro numero: \n");
                scanf("%d", &num1);

                printf("Digite o segundo numero: \n");
                scanf("%d", &num2);

                resultado = num1 / num2;

                printf("O resultado é: %d\n", resultado);


            case 5:
                printf("Você saiu da calculadora\n");

                break;
            default:
                    printf("Opcao inválida!\n"); 

                break;
            }
            
        } while (opcao != 5);
        
        return 0;

    }