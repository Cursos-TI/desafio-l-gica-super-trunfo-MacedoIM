#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char carta1 = 'A';
    char estado1 = 01;
    char codigo1[20] = "A01";
    char nome_cidade1[50];
    int populacao1, populacao2;
    int ponto_turistico1, ponto_turistico2 ;    
    float area1, area2 ;
    float PIB1, PIB2 ;
    float dens_pop1, dens_pop2;
    float rend_per1, rend_per2;
    
    char carta2 = 'B';
    char estado2 = 02;
    char codigo2[20] = "B02";
    char nome_cidade2[50];

    printf("\n");
    printf("ENTRE COM AS INFORMAÇÕES DA PRIMEIRA CIDADE: \n");
    printf("\n");    
    printf("Digite a sua Cidade: ");
    scanf("%s", nome_cidade1);
    printf("\n");

    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("\n");

    printf("Digite a Área: ");
    scanf("%f", &area1);
    printf("\n");
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("\n");

    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &ponto_turistico1);
    printf("\n");

    dens_pop1 = populacao1 / area1;
    rend_per1 = PIB1 / populacao1;

    printf("\n");
    printf("AS INFORMAÇÕES DA PRIMEIRA CIDADE SÃO: \n");
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c. \n", carta1);
    printf("Código: %s. \n", codigo1);
    printf("Nome da Cidade: %s. \n", nome_cidade1);
    printf("População: %d. \n", populacao1);
    printf("Área: %.2f km\u00B2. \n", area1);
    printf("PIB: %.2f bilhões de reais.  \n", PIB1);
    printf("Número de Pontos Turísticos: %d. \n", ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km\u00B2 \n", dens_pop1);
    printf("PIB per Capita: %.2f reais \n", rend_per1);
    
    printf("\n");
    printf("ENTRE COM AS INFORMAÇÕES DA SEGUNDA CIDADE: \n");
    printf("\n");
    printf("Digite a sua Cidade: ");
    scanf("%s", nome_cidade2);
    printf("\n");

    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("\n");

    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("\n");
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("\n");

    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &ponto_turistico2);
    printf("\n");

    dens_pop2 = populacao2 / area2;
    rend_per2 = PIB2 / populacao2;

    printf("\n");
    printf("AS INFORMAÇÕES DA SEGUNDA CIDADE SÃO: \n");
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c. \n", carta2);
    printf("Código: %s. \n", codigo2);
    printf("Nome da Cidade: %s. \n", nome_cidade2);
    printf("População: %d. \n", populacao2);
    printf("Área: %.2f km\u00B2. \n", area2);
    printf("PIB: %.2f bilhões de reais.  \n", PIB2);
    printf("Número de Pontos Turísticos: %d. \n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km\u00B2 \n", dens_pop2);
    printf("PIB per Capita: %.2f reais \n", rend_per2);

    int result_Pop, result_Area, result_PIB, result_PonTur, result_DensPop, result_PIB_Per;

    result_Pop = populacao1 > populacao2; 
    result_Area = area1 > area2; 
    result_PIB = PIB1 > PIB2;
    result_PonTur = ponto_turistico1 > ponto_turistico2;
    result_DensPop = dens_pop1 < dens_pop2; // Para densidade, o menor é melhor
    result_PIB_Per = rend_per1 > rend_per2;

    printf("\n");
    printf("COMPARAÇÃO ENTRE AS CARTAS \n");
    printf("================================\n");
    if(populacao1 > populacao2){
        printf("População: Carta 1 venceu. \n");
    } else{
        printf("População: Carta 2 venceu. \n");
    }
    // printf("População (Carta 1 venceu?): %d (1 = Sim, 0 = Não)\n", result_Pop);
    // printf("Área (Carta 1 venceu?): %d (1 = Sim, 0 = Não)\n", result_Area);
    if(area1 > area2){
        printf("Área: Carta 1 venceu. \n");
    } else{
        printf("Área: Carta 2 venceu. \n");
    }
    //printf("PIB (Carta 1 venceu?): %d (1 = Sim, 0 = Não)\n", result_PIB);
    if(PIB1 > PIB2){
        printf("PIB: Carta 1 venceu. \n");
    } else{
        printf("PIB: Carta 2 venceu. \n");
    }
    //printf("Pontos Turísticos (Carta 1 venceu?): %d (1 = Sim, 0 = Não)\n", result_PonTur);
    if(ponto_turistico1 > ponto_turistico2){
        printf("Pontos Turísticos: Carta 1 venceu. \n");
    } else{
        printf("Pontos Turísticos: Carta 2 venceu. \n");
    }
    //printf("Densidade Populacional (Carta 1 venceu?): %d (1 = Sim, 0 = Não)\n", result_DensPop);
    if(dens_pop1 > dens_pop2){
        printf("Densidade Populacional: Carta 1 venceu. \n");
    } else{
        printf("Densidade Populacional: Carta 2 venceu. \n");
    }
    //printf("PIB per Capita (Carta 1 venceu?): %d (1 = Sim, 0 = Não)\n", result_PIB_Per);
    if(rend_per1 > rend_per2){
        printf("PIB per Capita: Carta 1 venceu. \n");
    } else{
        printf("PIB per Capita: Carta 2 venceu. \n");
    }
    printf("================================\n");
    
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
