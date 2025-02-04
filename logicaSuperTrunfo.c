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
    int codigocarta, populacao, npontosturisticos, op, opatributos;
    int codigocarta2, populacao2, npontosturisticos2;
    float pib, pib2, area, area2;
    int resultado;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    /* code */


    printf("---------- MENU ---------- \n"); // MENU
    printf("1) Cadastro de cartas!\n");
    printf("2) Comparar atributos\n");
    printf("3) Sair do jogo! \n");
    scanf("%d", &op);


    switch(op){
    case 1:
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
    break;

    case 2:
        printf("Escolha dois atributos\n");
        printf("1) População! \n");
        printf("2) Numero de pontos turisticos! \n");
        printf("3) Pib! \n");
        printf("4) Area! \n");
        printf("5) escolha dois atributos para comparação \n");
        scanf("%d", &opatributos);
        switch (opatributos){
            case 1:
                printf("Digite a população da carta 1\n");
                scanf("%d", &populacao);
                printf("Digite a população da carta 2\n");
                scanf("%d", &populacao2);
                if(populacao > populacao2){
                    printf("População da Carta 1 e %d maior\n", populacao);
                 }else if(populacao2 > populacao){
                    printf("População da Carta 2 e %d maior\n", populacao2);
                }else if(populacao2 == populacao) {
                    printf("Emparte populacao carta 1 e: %d e a da carta 2 e: %d \n", populacao, populacao2);
                }   
            break;
            case 2:
                printf("Digite o Numero de pontos turisticos da carta 1\n");
                scanf("%d", &npontosturisticos);
                printf("Digite o NUmero de pontos turisticos da carta 2\n");
                scanf("%d", &npontosturisticos2);
                if(npontosturisticos > npontosturisticos2){
                         printf("Numero de pontos turisticos da Carta 1 e maior \n");
                }else if(npontosturisticos2 > npontosturisticos){
                        printf("Numero de pontos turisticos da Carta 2 e maior \n");
            }   else if(npontosturisticos2 == npontosturisticos){
                        printf("Emparte numero de pontos turisticos da carta 1 e: %d e a da carta 2 e: %d \n", npontosturisticos, npontosturisticos2);
            }
            break;
            case 3:
                printf("Digite o pib da carta 1 \n");
                scanf("%d",&pib);
                printf("Digite o pib da carta 2 \n");
                scanf("%d", &pib2);
                if(pib > pib2){
                    printf("Numero do pib da Carta 1 e maior \n");
                }else if(pib2 > pib){
                     printf("Numero do pib da Carta 2 e maior \n");
                }else if(pib == pib2){
                     printf("Emparte o pib da carta 1 e: %d e a da carta 2 e: %d \n", pib, pib2);
                }
            break;
            case 4:
                printf("Digite a area da carta 1");
                scanf("%d", &area);
                printf("Digite a area da carta 2");
                scanf("%d", &area2);
                if(area > area2){
                    printf("Numero da area da Carta 1 e maior \n");
                }else if( area2 > area ){
                    printf("Numero da area da Carta 2 e maior \n");
                }else if(area == area2){
                    printf("Emparte area da carta 1 e: %d e a da carta 2 e: %d\n ", area, area2);
                }
            break;

            default:
                 printf("Opcao invalida \n");
            break;
        }
        
    break;
    }

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
      /*  if(populacao > populacao2){
            if(area > area2){
                if(pib > pib2){
                    printf("Cidade 1 tem maior população %d \n maior area: %f \n maior pib: %f! \n", populacao, area, pib);
                    printf("Cidade %s Vencedora!!! \n", nomeCidade);
                }
            }
        }else{
            printf("Cidade 2 tem maior população %d, maior area: %f e maior pib: %f!\n", populacao2, area2, pib2);
            printf("Cidade %s Vencedora!!! \n", nomeCidade2);
        }*/
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
