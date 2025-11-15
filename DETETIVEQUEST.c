#include <stdio.h>
#include <string.h>

typedef struct {
    char comodo[20];
    char pista[50];
} Local;

int main() {
    printf("=== DETECTIVE QUEST ===\n");
    
    Local mapa[3] = {
        {"Biblioteca", "Livro manchado"},
        {"Cozinha", "Faca desaparecida"},
        {"Quarto", "Carta rasgada"}
    };
    
    char pistas[3][50];
    int numPistas = 0;
    
    // Explorar cômodos
    printf("\n=== COMODOS DA MANSAO ===\n");
    for(int i = 0; i < 3; i++) {
        printf("- %s\n", mapa[i].comodo);
    }
    
    // Coletar pistas
    printf("\n=== INVESTIGACAO ===\n");
    for(int i = 0; i < 2; i++) {
        strcpy(pistas[numPistas], mapa[i].pista);
        printf("Pista encontrada em %s: %s\n", mapa[i].comodo, mapa[i].pista);
        numPistas++;
    }
    
    // Resolver caso
    printf("\n=== SOLUCAO DO CASO ===\n");
    printf("Pistas coletadas: %d\n", numPistas);
    printf("Baseado nas evidencias...\n");
    printf("O culpado e: Professor Plum!\n");
    
    return 0;
}