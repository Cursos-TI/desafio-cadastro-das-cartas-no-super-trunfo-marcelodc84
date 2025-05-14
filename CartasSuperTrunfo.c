#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// objeto para armazenar os dados da carta
typedef struct {
    char codigo[5];
    char estado;
    char cidade[50];
    int populacao;
    int pontosTuristicos;
    float area;
    float pib;
} CartaCidade;

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //declaração de variáveis
    CartaCidade carta1;
    CartaCidade carta2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //atribuir variáveis
    printf("Vamos agora cadastrar a carta 1:\n");

    printf("Digite o código da cidade: ");
    scanf("%s", carta1.codigo);
    printf("Digite o estado da cidade: ");
    scanf(" %c", &carta1.estado);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta1.cidade);
    printf("Digite a população da cidade: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área da cidade: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("=============================\n");
    printf("Vamos agora cadastrar a carta 2:\n");

    printf("Digite o código da cidade: ");
    scanf("%s", carta2.codigo);
    printf("Digite o estado da cidade: ");
    scanf(" %c", &carta2.estado);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta2.cidade);
    printf("Digite a população da cidade: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área da cidade: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("=============================\n");
    printf("Cadastro realizado com sucesso!\n");
    printf("=============================\n");


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Dados da carta 1:\n");
    printf("Código: %s\n", carta1.codigo);
    printf("Estado: %c\n", carta1.estado);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("=============================\n");
    printf("Dados da carta 2:\n");
    printf("Código: %s\n", carta2.codigo);
    printf("Estado: %c\n", carta2.estado);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("=============================\n");

    printf("Programa encerrado...\n");


    return 0;
}

