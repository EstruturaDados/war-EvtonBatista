#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
typedef struct {
    char nome[30];
    char cor[15];
    int tropas;
} Territorio;

int main() {
    Territorio territorios[5]; // vetor estático para armazenar 5 territórios
    int i;

    printf("=== Cadastro de Territorios (WAR) ===\n\n");

    // Cadastro dos territórios
    for (i = 0; i < 5; i++) {
        printf("Cadastro do Territorio %d:\n", i + 1);

        printf("Nome: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0'; // remove \n

        printf("Cor do exercito: ");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0'; // remove \n

        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); // limpa buffer do teclado

        printf("\n");
    }

    // Exibição dos territórios cadastrados
    printf("\n=== Territorios Cadastrados ===\n");
    for (i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf(" Nome: %s\n", territorios[i].nome);
        printf(" Cor do exercito: %s\n", territorios[i].cor);
        printf(" Tropas: %d\n", territorios[i].tropas);
        printf("--------------------------\n");
    }

    return 0;
}
