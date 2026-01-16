#include <stdio.h>

void movetorre(int move){
    if (move > 0){
        printf("Direita! \n");
        movetorre(move - 1);
    }
}
void movebispo(int move){
    if (move > 0){
        printf('Cima, Esquerda! \n');
        movebispo(move - 1);
    }
}
void moverainha(int move){
    if (move > 0){
        printf('Esquerda! \n');
        moverainha(move - 1);
    }
}

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
            movetorre(5);
        }
//movimentação do bispo
        else if (peca == 'B') {
            printf("\nMovimentos do Bispo:\n");
            movebispo(5);
        }
//movimentação da rainha
        else if (peca == 'R') {
            int quantidade = 8;
            printf("\nMovimento da Rainha:\n");
            moverainha(quantidade);
            }
        else if (peca == 'C') {
            for (i = 1; i <= 2; i++) {
                printf("Cima! \n");
                if (i == 2) {
                    printf("Direita! \n");
                }
                }
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
