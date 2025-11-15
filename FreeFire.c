#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    char tipo[15];
    int valor;
} Item;

int main() {
    printf("=== FREE FIRE ===\n");
    
    Item mochila[4] = {
        {"AK-47", "arma", 100},
        {"Bandagem", "cura", 20},
        {"Machado", "ferramenta", 60},
        {"Carne", "comida", 40}
    };
    
    // Mostrar mochila
    printf("\n=== MOCHILA ===\n");
    for(int i = 0; i < 4; i++) {
        printf("%s - %s - Valor: %d\n", mochila[i].nome, mochila[i].tipo, mochila[i].valor);
    }
    
    // Buscar item
    printf("\n=== BUSCA ===\n");
    char busca[] = "Machado";
    for(int i = 0; i < 4; i++) {
        if(strcmp(mochila[i].nome, busca) == 0) {
            printf("Item encontrado: %s\n", mochila[i].nome);
            break;
        }
    }
    
    // Construir torre
    printf("\n=== CONSTRUCAO ===\n");
    int ferramentas = 0;
    for(int i = 0; i < 4; i++) {
        if(strcmp(mochila[i].tipo, "ferramenta") == 0) ferramentas++;
    }
    
    printf("Ferramentas: %d/1\n", ferramentas);
    if(ferramentas >= 1) {
        printf("Torre construida com sucesso!\n");
    }
    
    return 0;
}