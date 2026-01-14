#include <stdio.h>

int main() {
    //declarando as variáveis
    char peca;
    int i;
    //menu para escolher a peça (estrutura do-while)
    do {
        printf("\nEscolha uma peça:\n");
        printf("B - Bispo\n");
        printf("T - Torre\n");
        printf("R - Rainha\n");
        printf("C - Cavalo\n");
        printf("S - Sair\n");
        printf("Opcao: ");
        scanf(" %c", &peca);
//movimentação da torre
        if (peca == 'T') {
            printf("\nMovimentos da Torre:\n");
//torre se movimenta 5x à direita (estrutura while)
            i = 0;
            while (i <= 5) {
                printf("direita\n");
                i++;
            }
        }
//movimentação do bispo
        else if (peca == 'B') {
            printf("\nMovimentos do Bispo:\n");
//bispo se movimenta 5x na diagonal direita (estrutura for)
            for (i = 1; i <= 5; i++) {
                printf("cima direita\n");
            }
        }
//movimentação da rainha
        else if (peca == 'R') {
            printf("\nMovimento da Rainha:\n");
//rainha se movimenta 8x à esquerda (estrutura for)
            for (i = 1; i <= 8; i++) {
                printf("esquerda\n");
            }
        }
        else if (peca == 'C'){
            i = 0;
            while (i<2)
            {
                printf("cima\n");
                i++;
            }
            printf("direita\n");
        }
//se a opção do menu for diferente de s
        else if (peca != 'S') {
            printf("\nOpcao invalida!\n");
        }
//saindo do programa
        else{
            break;
        }
    } while (peca != 'S');

    printf("\nPrograma encerrado.\n");
    return 0;
}
