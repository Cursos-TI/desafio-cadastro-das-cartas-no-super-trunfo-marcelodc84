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
    float densidadePopulacional;
    float pibPerCapita;
} CartaCidade;

CartaCidade CriarCarta() {
    CartaCidade carta;
    printf("Digite o código da carta: ");
    scanf("%s", carta.codigo);
    printf("Digite o estado da cidade: ");
    scanf(" %c", &carta.estado);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta.cidade);
    printf("Digite a população da cidade: ");
    scanf("%d", &carta.populacao);
    printf("Digite a área da cidade: ");
    scanf("%f", &carta.area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta.pib);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &carta.pontosTuristicos);

    //calcular densidade populacional e pib per capita
    carta.densidadePopulacional = (float)carta.populacao / carta.area;
    carta.pibPerCapita = carta.pib / carta.populacao;

    return carta;
}

void ExibirCarta(CartaCidade carta) {
    printf("Código: %s\n", carta.codigo);
    printf("Estado: %c\n", carta.estado);
    printf("Cidade: %s\n", carta.cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", carta.densidadePopulacional);
    printf("PIB Per Capita: %.2f\n", carta.pibPerCapita);
}

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
    carta1 = CriarCarta();
    printf("=============================\n");
    printf("Vamos agora cadastrar a carta 2:\n");
    carta2 = CriarCarta();
    printf("=============================\n");
    printf("Cadastro realizado com sucesso!\n");
    printf("=============================\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibir os dados da carta 1
    printf("Dados da Carta 1:\n");
    ExibirCarta(carta1);
    printf("=============================\n");
    // Exibir os dados da carta 2
    printf("Dados da Carta 2:\n");
    ExibirCarta(carta2);
    printf("=============================\n");
    
    printf("Programa encerrado.\n");

    return 0;
}


