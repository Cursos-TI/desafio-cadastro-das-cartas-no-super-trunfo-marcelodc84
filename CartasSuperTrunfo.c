#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

// objeto para armazenar os dados da carta
typedef struct {
    char codigo[5];
    char estado;
    char cidade[50];
    unsigned long int populacao;
    int pontosTuristicos;
    float area;
    float pib;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} CartaCidade;

//criar a carta
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

    //calcular superpoder
    carta.superPoder = 
        carta.populacao + 
        carta.area + 
        carta.pib + 
        carta.pontosTuristicos +
        carta.pibPerCapita +
        (1 / carta.densidadePopulacional);

    return carta;
}

//exibir os dados da carta
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
    printf("Super Poder: %.2f\n", carta.superPoder);
}

// //função para retornar o maior valor
// char MaiorValor(int valor1, int valor2) {
//     if(valor1 > valor2) {
//         return "Carta 1 venceu (1)\n";
//     } else if(valor1 < valor2) {
//         return "Carta 2 venceu (0)\n";
//     } else {
//         return "Empate\n";
//     }
// }
// //função para retornar o menor valor
// char MenorValor(int valor1, int valor2) {
//     if(valor1 < valor2) {
//         return "Carta 1 venceu (1)\n";
//     } else if(valor1 > valor2) {
//         return "Carta 2 venceu (0)\n";
//     } else {
//         return "Empate\n";
//     }
// }

//comparação das cartas
void CompararCartas(CartaCidade carta1, CartaCidade carta2) {

    printf("População: ");
    if(carta1.populacao > carta2.populacao) {
        printf("Carta 1 venceu (1)\n");
    } else if(carta1.populacao < carta2.populacao) {
        printf("Carta 2 venceu (0)\n");
    } else {
        printf("Empate\n");
    }
    printf("Área: ");
    if(carta1.area > carta2.area) {
        printf("Carta 1 venceu (1)\n");
    } else if(carta1.area < carta2.area) {
        printf("Carta 2 venceu (0)\n");
    } else {
        printf("Empate\n");
    }
    printf("PIB: ");
    if(carta1.pib > carta2.pib) {
        printf("Carta 1 venceu (1)\n");
    } else if(carta1.pib < carta2.pib) {
        printf("Carta 2 venceu (0)\n");
    } else {
        printf("Empate\n");
    }
    printf("Pontos Turísticos: ");
    if(carta1.pontosTuristicos > carta2.pontosTuristicos) {
        printf("Carta 1 venceu (1)\n");
    } else if(carta1.pontosTuristicos < carta2.pontosTuristicos) {
        printf("Carta 2 venceu (0)\n");
    } else {
        printf("Empate\n");
    }
    printf("Densidade Populacional: ");
    if(carta1.densidadePopulacional < carta2.densidadePopulacional) {
        printf("Carta 1 venceu (1)\n");
    } else if(carta1.densidadePopulacional > carta2.densidadePopulacional) {
        printf("Carta 2 venceu (0)\n");
    } else {
        printf("Empate\n");
    }
    printf("PIB Per Capita: ");
    if(carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("Carta 1 venceu (1)\n");
    } else if(carta1.pibPerCapita < carta2.pibPerCapita) {
        printf("Carta 2 venceu (0)\n");
    } else {
        printf("Empate\n");
    }
    printf("Super Poder: ");
    if(carta1.superPoder > carta2.superPoder) {
        printf("Carta 1 venceu (1)\n");
    } else if(carta1.superPoder < carta2.superPoder) {
        printf("Carta 2 venceu (0)\n");
    } else {
        printf("Empate\n");
    }
}

int main() {
    
    //declaração de variáveis
    CartaCidade carta1;
    CartaCidade carta2;

    //atribuir variáveis cartas
    printf("Vamos agora cadastrar a carta 1:\n");
    carta1 = CriarCarta();
    printf("=============================\n");
    printf("Vamos agora cadastrar a carta 2:\n");
    carta2 = CriarCarta();
    printf("=============================\n");
    printf("Cadastro realizado com sucesso!\n");
    printf("=============================\n");

    // Exibir os dados da carta 1
    printf("Dados da Carta 1:\n");
    ExibirCarta(carta1);
    printf("=============================\n");
    // Exibir os dados da carta 2
    printf("Dados da Carta 2:\n");
    ExibirCarta(carta2);
    printf("=============================\n");
    
    // Comparar as cartas
    printf("\nComparativo das cartas:\n");
    CompararCartas(carta1, carta2);
    printf("\n=============================\n");

    printf("Programa encerrado.\n");

    return 0;
}


