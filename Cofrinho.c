#include <stdio.h>


int main() {
    int opcao;
    int dinheiro = 0;
    int total = 0;
    int contador = 0;
    int recorde = 0;
    int meta = 0;
    int saque = 0;
    char Soun;

    printf("Qual sua meta?: ");
    scanf("%d", &meta);

    do {
        printf("\n=== COFRINHO DIGITAL ===\n");
        printf("1 - Depositar\n");
        printf("2 - Ver total guardado\n");
        printf("3 - Ver quantos depósitos fez\n");
        printf("4 - Ver media por depósito\n");
        printf("5 - Ver maior depósito unico\n");
        printf("6 - Ver progresso da meta\n");
        printf("7 - Sacar/gastar uma parte\n");
        printf("8 - Resetar tudo\n");
        printf("9 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("Quanto deseja depositar: ");
                scanf("%d", &dinheiro);

                if (dinheiro > 0) {
                    total += dinheiro;
                    contador++;

                    if (dinheiro > recorde) {
                        recorde = dinheiro;
                    }

                    printf("Valor depositado! Você tem %d na conta\n", total);
                } else {
                    printf("Valor inválido!\n");
                }
                break;

            case 2:
                printf("Você possui %d depositado\n", total);
                break;

            case 3:
                printf("Você fez %d depósitos\n", contador);
                break;

            case 4:
                if (contador > 0) {
                    printf("A média de depósitos é de: %d\n",
                           total / contador);
                } else {
                    printf("Nenhum depósito realizado ainda.\n");
                }
                break;

            case 5:
                if (contador > 0) {
                    printf("Seu maior depósito é %d\n", recorde);
                } else {
                    printf("Nenhum depósito realizado ainda.\n");
                }
                break;

            case 6:
                if (total >= meta) {
                    printf("Parabéns! Você atingiu sua meta!\n");
                } else {
                    printf("Faltam %d para você atingir sua meta\n",
                           meta - total);
                }
                break;

            case 7:
                printf("Quanto deseja sacar?: ");
                scanf("%d", &saque);

                if (saque <= 0) {
                    printf("Valor inválido!\n");
                } else if (saque > total) {
                    printf("Saldo insuficiente!\n");
                } else {
                    total -= saque;
                    printf("Saque realizado!\n");
                    printf("Você possui na conta um total de: %d\n",
                           total);
                }
                break;

            case 8:
                printf("Tem certeza que quer resetar tudo? (S/N): ");
                scanf(" %c", &Soun);

                if (Soun == 'S' || Soun == 's') {
                    total = 0;
                    contador = 0;
                    recorde = 0;

                    printf("Resetado pelo usuario\n");
                    return 0;
                } else {
                    printf("Reset cancelado.\n");
                }
                break;
                
            case 9:
                printf("Saindo do cofrinho...\n");
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }

    } while (opcao != 9);

    return 0;
}