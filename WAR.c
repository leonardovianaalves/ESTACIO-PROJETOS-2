#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[20];
    int tropas;
    int jogador;
} Territorio;

int main() {
    printf("=== JOGO WAR ===\n");
    
    Territorio territorios[3] = {
        {"Brasil", 5, 1},
        {"Argentina", 3, 0},
        {"China", 8, 1}
    };
    
    // Mostrar mapa
    printf("\n=== MAPA ===\n");
    for(int i = 0; i < 3; i++) {
        printf("%s - Tropas: %d - Jogador: %d\n", 
               territorios[i].nome, territorios[i].tropas, territorios[i].jogador);
    }
    
    // Simular ataque
    printf("\n=== ATAQUE ===\n");
    printf("Brasil ataca Argentina!\n");
    territorios[1].tropas -= 2;
    if(territorios[1].tropas <= 0) {
        territorios[1].jogador = 1;
        printf("Argentina conquistada!\n");
    }
    
    // Verificar missões
    printf("\n=== MISSOES ===\n");
    int territoriosConquistados = 0;
    for(int i = 0; i < 3; i++) {
        if(territorios[i].jogador == 1) territoriosConquistados++;
    }
    
    printf("Territorios conquistados: %d/2\n", territoriosConquistados);
    if(territoriosConquistados >= 2) {
        printf("*** VITORIA! ***\n");
    }
    
    return 0;
}