#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado[15], nomeCidade[15];
    char estado2[15], nomeCidade2[15];
    int codigocarta, populacao, npontosturisticos;
    int codigocarta2, populacao2, npontosturisticos2;
    float pib, pib2, area, area2;
    
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Digite estado: \n");
    scanf(" %s", &estado);
    printf("Digite código: \n");
    scanf("%d", &codigocarta);
    printf("Digite o Nome da cidade: \n");
    scanf(" %s", &nomeCidade);
    printf("Digite a População: \n");
    scanf("%d", &populacao);
    printf("Digite a área: \n");
    scanf("%f", &area);
    printf("Digite o Numero de pontos turisticos: \n");
    scanf("%d", &npontosturisticos);
    printf("Digite o Pib: \n");
    scanf("%f", &pib);

    printf("\n----------------------------------------------\n\n");

    printf("Digite estado da segunda carta: \n");
    scanf(" %s", &estado2);
    printf("Digite código da segunda carta: \n");
    scanf("%d", &codigocarta2);
    printf("Digite o Nome da cidade da segunda carta: \n");
    scanf(" %s", &nomeCidade2);
    printf("Digite a População da segunda carta: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da segunda carta: \n");
    scanf("%f", &area2);
    printf("Digite o Numero de pontos turisticos da segunda carta: \n");
    scanf("%d", &npontosturisticos2);
    printf("Digite o Pib da segunda carta: \n");
    scanf("%f", &pib2);
    

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
        if(populacao > populacao2){
            if(area > area2){
                if(pib > pib2){
                    printf("Cidade 1 tem maior população %d \n maior area: %f \n maior pib: %f! \n", populacao, area, pib);
                    printf("Cidade %s Vencedora!!! \n", nomeCidade);
                }
            }
        }else{
            printf("Cidade 2 tem maior população %d, maior area: %f e maior pib: %f!\n", populacao2, area2, pib2);
            printf("Cidade %s Vencedora!!! \n", nomeCidade2);
        }
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    printf("----------Informações Cidades ----------\n");
    printf("----------Cidade 1 ----------\n");
    printf("Código Carta 1: %d \n", codigocarta);
    printf("Nome: %s \n", nomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %f\n", area);
    printf("Numero de pontos turisticos: %d \n", npontosturisticos);
    printf("Pib: %f \n", pib);


    printf("----------Cidade 2 ----------\n");
    printf("Código carta 2: %d \n", codigocarta2);
    printf("Nome 2: %s \n", nomeCidade2);
    printf("População 2: %d \n", populacao2);
    printf("Área 2: %f\n", area2);
    printf("Numero de pontos turisticos 2: %d \n", npontosturisticos2);
    printf("Pib 2: %f \n", pib2);

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
