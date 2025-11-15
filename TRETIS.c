#include <stdio.h>

typedef struct {
    char tipo[3];
    int valor;
} Peca;

int main() {
    printf("=== TETRIS STACK ===\n");
    
    Peca fila[3] = {{"I", 10}, {"O", 8}, {"T", 12}};
    Peca pilha[2];
    int topo = -1;
    
    // Mostrar fila
    printf("\n=== FILA DE PECAS ===\n");
    for(int i = 0; i < 3; i++) {
        printf("[%d] %s - Valor: %d\n", i+1, fila[i].tipo, fila[i].valor);
    }
    
    // Reservar primeira peça
    printf("\n=== RESERVA ===\n");
    topo++;
    pilha[topo] = fila[0];
    printf("Peça %s reservada!\n", pilha[topo].tipo);
    
    // Mostrar pilha
    printf("\n=== PILHA DE RESERVA ===\n");
    if(topo >= 0) {
        printf("[1] %s - Valor: %d\n", pilha[topo].tipo, pilha[topo].valor);
    }
    
    // Jogar peça
    printf("\n=== JOGANDO PECA ===\n");
    printf("Peça %s jogada!\n", fila[1].tipo);
    
    return 0;
}