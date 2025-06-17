#include <stdio.h>


int main(){
    printf("Desafio Xadrez!\n");
}
#include <stdio.h>

Nível Novato 
int main() {
    int tabuleiro[5][5] = {0};  // Tabuleiro 5x5 para exemplo
    int i;

    // Posicionando um navio vertical (coluna fixa, linhas diferentes)
    int colunaVertical = 2;
    for(i = 0; i < 3; i++) {
        tabuleiro[i][colunaVertical] = 1;
    }

    // Posicionando um navio horizontal (linha fixa, colunas diferentes)
    int linhaHorizontal = 4;
    for(i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][i] = 1;
    }

    // Exibindo as coordenadas dos navios
    printf("Coordenadas dos Navios:\n");

    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            if(tabuleiro[x][y] == 1) {
                printf("Navio em (%d, %d)\n", x, y);
            }
        }
    }

    return 0;
}


 Nível Aventureiro
 #include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // Navio vertical
    for(int i = 0; i < 5; i++) {
        tabuleiro[i][2] = 3;
    }

    // Navio horizontal
    for(int i = 0; i < 5; i++) {
        tabuleiro[7][i] = 3;
    }

    // Navio diagonal (diagonal principal)
    for(int i = 0; i < 5; i++) {
        tabuleiro[i][i] = 3;
    }

    // Outro navio diagonal (diagonal secundária)
    for(int i = 0; i < 5; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Exibição completa do tabuleiro
    printf("\nTabuleiro Completo (0 = água, 3 = navio):\n");
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            printf("%d ", tabuleiro[x][y]);
        }
        printf("\n");
    }

    return 0;
}

Nível Mestre
#include <stdio.h>

void imprimirMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    // Habilidade Cone
    cone[2][0] = 1;
    cone[1][1] = 1; cone[2][1] = 1; cone[3][1] = 1;
    cone[0][2] = 1; cone[1][2] = 1; cone[2][2] = 1; cone[3][2] = 1; cone[4][2] = 1;

    // Habilidade Cruz
    for (int i = 0; i < 5; i++) {
        cruz[2][i] = 1;  // Linha do meio
        cruz[i][2] = 1;  // Coluna do meio
    }

    // Habilidade Octaedro
    octaedro[0][2] = 1;
    octaedro[1][1] = 1; octaedro[1][2] = 1; octaedro[1][3] = 1;
    octaedro[2][2] = 1;
    octaedro[3][2] = 1;

    // Exibição
    printf("Habilidade em Cone:\n");
    imprimirMatriz(cone);

    printf("Habilidade em Cruz:\n");
    imprimirMatriz(cruz);

    printf("Habilidade em Octaedro:\n");
    imprimirMatriz(octaedro);

    return 0;
}
