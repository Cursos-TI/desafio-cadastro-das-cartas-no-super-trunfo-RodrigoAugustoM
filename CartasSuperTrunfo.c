#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Rodrigo Augusto Marques

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char e1sigla[3] = "";
    char e1codigo[3] = "";
    char e1cidade[50] = "";
    int e1populacao = 0;
    float e1area = 0.0;
    float e1pib = 0.0;
    int e1pontosturisticos = 0;

    char e2sigla[3] = "";
    char e2codigo[3] = "";
    char e2cidade[50] = "";
    int e2populacao = 0;
    float e2area = 0.0;
    float e2pib = 0.0;
    int e2pontosturisticos = 0;

    char siglas[200] = "AC - AL - AP - AM - BA - CE - DF \n ES - GO - MA - MT - MS - MG - PA \n PB - PR - PE - PI - RJ - RN - RS \n RO - RR - SC - SP - SE - TO";
    char dgaq[20] = "Digite aqui:";
    char sde[30] = " Qual o sigla do Estado?";
    char cdc[30] = " Qual o código da carta?";
    char qndc[30] = "Qual o nome da cidade em ";
    char qppd[30] = "Qual a população de ";
    char qard[30] = "Qual a area de ";
    char qpbd[30] = "Qual o PIB de ";
    char qptd[30] = "Quantos pontos turisticos ";
    char possui[20] = " possui?";

    int opcao1 = 0;
    int opcao2 = 0;

    float e1soma = 0.0;
    float e2soma = 0.0;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\nRegistre a primeira carta,\n%s\n %s\n%s", sde, siglas, dgaq);
    scanf("%s", e1sigla);
    printf("%s%s? \n%s", qndc, e1sigla, dgaq);
    scanf(" %s", e1cidade);
    printf("%s\n%s ", cdc, dgaq);
    scanf("%s", e1codigo);
    printf(" %s%s/%s?\n%s", qppd, e1cidade, e1sigla, dgaq);
    scanf("%d", &e1populacao);
    printf(" %s%s/%s?\n%s", qard, e1cidade, e1sigla, dgaq);
    scanf("%f", &e1area);
    printf(" %s%s/%s?\n%s", qpbd, e1cidade, e1sigla, dgaq);
    scanf("%f", &e1pib);
    printf(" %s%s/%s%s\n%s", qptd, e1cidade, e1sigla, possui, dgaq);
    scanf("%d", &e1pontosturisticos);

    printf("\nRegistre a segunda carta,\n%s\n %s\n%s", sde, siglas, dgaq);
    scanf("%s", e2sigla);
    printf("%s%s? \n%s", qndc, e2sigla, dgaq);
    scanf("%s", e2cidade);
    printf("%s\n%s ", cdc, dgaq);
    scanf("%s", e2codigo);
    printf("%s%s/%s?\n%s", qppd, e2cidade, e2sigla, dgaq);
    scanf("%d", &e2populacao);
    printf("%s%s/%s?\n%s", qard, e2cidade, e2sigla, dgaq);
    scanf("%f", &e2area);
    printf("%s%s/%s?\n%s", qpbd, e2cidade, e2sigla, dgaq);
    scanf("%f", &e2pib);
    printf("%s%s/%s%s\n%s", qptd, e2cidade, e2sigla, possui, dgaq);
    scanf("%d", &e2pontosturisticos);

    // variaveis para as comparações
    float e1densidadePopulacional = e1populacao / e1area;
    float e1pibPerCapta = e1pib / e1populacao;

    float e2densidadePopulacional = e2populacao / e2area;
    float e2pibPerCapta = e2pib / e2populacao;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n%s-%s\nCódigo: %s%s\nPopulação: %d\nArea: %.2f m²\nPIB: R$ %.2f\nPontos turisticos: %2d\nPIB per capta: R$ %.2f\nDensidade populacional: %.2f\n", e1cidade, e1sigla, e1sigla, e1codigo, e1populacao, e1area, e1pib, e1pontosturisticos, e1pibPerCapta, e1densidadePopulacional);
    printf("\n%s-%s\nCódigo: %s%s\nPopulação: %d\nArea: %.2f m²\nPIB: R$ %.2f\nPontos turisticos: %2d\nPIB per capta: R$%.2f\nDensidade populacional: %.2f\n", e2cidade, e2sigla, e2sigla, e2codigo, e2populacao, e2area, e2pib, e2pontosturisticos, e2pibPerCapta, e2densidadePopulacional);

    printf("Selecione uma opção:\n1 para População\n2 para Área\n3 para PIB\n4 para Pontos turisticos\n5 para PIB per capta\n6 para Densidade populacional\n");
    scanf("%d", &opcao1);
    printf("Selecione uma segunda opção:\n1 para População\n2 para Área\n3 para PIB\n4 para Pontos turisticos\n5 para PIB per capta\n6 para Densidade populacional\nEla deve ser diferente de %d\n", opcao1);
    scanf("%d", &opcao2);
    if (opcao1 == opcao2)
    {
        printf("Escolha duas opções diferentes");
    }
    else
    {

        switch (opcao1)
        {
        case 1:
            e1soma = e1soma + e1populacao;
            e2soma = e2soma + e2populacao;
            if (e1populacao > e2populacao)
            {
                printf("\nComparação de cartas por População\nPopulação de %s-%s: %d \nPopulação de %s-%s: %d \n%s-%s Venceu!\n", e1cidade, e1sigla, e1populacao, e2cidade, e2sigla, e2populacao, e1cidade, e1sigla);
            }
            else
            {
                if (e1populacao < e2populacao)
                {
                    printf("\nComparação de cartas por População\nPopulação de %s-%s: %d \nPopulação de %s-%s: %d \n%s-%s Venceu!\n", e1cidade, e1sigla, e1populacao, e2cidade, e2sigla, e2populacao, e2cidade, e2sigla);
                }
                else
                {
                    printf("Empate\n");
                }
            }
            break;
        case 2:
            e1soma = e1soma + e1area;
            e2soma = e2soma + e1area;
            if (e1area > e2area)
            {
                printf("\nComparação de cartas por Área\nÁrea de %s-%s: %.2f \nÁrea de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1area, e2cidade, e2sigla, e2area, e1cidade, e1sigla);
            }
            else
            {
                if (e1area < e2area)
                {
                    printf("\nComparação de cartas por Área\nÁrea de %s-%s: %.2f \nÁrea de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1area, e2cidade, e2sigla, e2area, e2cidade, e2sigla);
                }
                else
                {
                    printf("Empate\n");
                }
            }

            break;
        case 3:
            e1soma = e1soma + e1pib;
            e2soma = e2soma + e2pib;
            if (e1pib > e2pib)
            {
                printf("\nComparação de cartas por PIB\nPIB de %s-%s: %.2f \nPIB de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1pib, e2cidade, e2sigla, e2pib, e1cidade, e1sigla);
            }
            else
            {
                if (e1pib < e2pib)
                {
                    printf("\nComparação de cartas por PIB\nPIB de %s-%s: %.2f \nPIB de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1pib, e2cidade, e2sigla, e2pib, e2cidade, e2sigla);
                }
                else
                {
                    printf("Empate\n");
                }
            }
            break;
        case 4:
            e1soma = e1soma + e1pontosturisticos;
            e2soma = e2soma + e2pontosturisticos;
            if (e1pontosturisticos > e2pontosturisticos)
            {
                printf("\nComparação de cartas por Pontos turisticos\nPontos turisticos de %s-%s: %d \nPontos turisticos de %s-%s: %d \n%s-%s Venceu!\n", e1cidade, e1sigla, e1pontosturisticos, e2cidade, e2sigla, e2pontosturisticos, e1cidade, e1sigla);
            }
            else
            {
                if (e1pontosturisticos < e2pontosturisticos)
                {
                    printf("\nComparação de cartas por Pontos turisticos\nPontos turisticos de %s-%s: %d \nPontos turisticos de %s-%s: %d \n%s-%s Venceu!\n", e1cidade, e1sigla, e1pontosturisticos, e2cidade, e2sigla, e2pontosturisticos, e2cidade, e2sigla);
                }
                else
                {
                    printf("Empate\n");
                }
            }
            break;
        case 5:
            e1soma = e1soma + e1pibPerCapta;
            e2soma = e2soma + e2pibPerCapta;
            if (e1pibPerCapta > e2pibPerCapta)
            {
                printf("\nComparação de cartas por PIB per capta\nPIB per capta de %s-%s: %.2f \nPIB per capta de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1pibPerCapta, e2cidade, e2sigla, e2pibPerCapta, e1cidade, e1sigla);
            }
            else
            {
                if (e1pibPerCapta < e2pibPerCapta)
                {
                    printf("\nComparação de cartas por PIB per capta\nPIB per capta de %s-%s: %.2f \nPIB per capta de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1pibPerCapta, e2cidade, e2sigla, e2pibPerCapta, e2cidade, e2sigla);
                }
                else
                {
                    printf("Empate\n");
                }
            }
            break;
        case 6:
            e1soma = e1soma + e1densidadePopulacional;
            e2soma = e2soma + e2densidadePopulacional;
            if (e1densidadePopulacional < e2densidadePopulacional)
            {
                printf("\nComparação de cartas por Densidade populacional\nDensidade populacional de %s-%s: %.2f \nDensidade populacional de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1densidadePopulacional, e2cidade, e2sigla, e2densidadePopulacional, e1cidade, e1sigla);
            }
            else
            {
                if (e1densidadePopulacional > e2densidadePopulacional)
                {
                    printf("\nComparação de cartas por Densidade populacional\nDensidade populacional de %s-%s: %.2f \nDensidade populacional de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1densidadePopulacional, e2cidade, e2sigla, e2densidadePopulacional, e2cidade, e2sigla);
                }
                else
                {
                    printf("Empate\n");
                }
            }
            break;

        default:
            printf("Opção invalida!\n");
            break;
        }
        switch (opcao2)
        {
        case 1:
            e1soma = e1soma + e1populacao;
            e2soma = e2soma + e2populacao;
            if (e1populacao > e2populacao)
            {
                printf("\nComparação de cartas por População\nPopulação de %s-%s: %d \nPopulação de %s-%s: %d \n%s-%s Venceu!\n", e1cidade, e1sigla, e1populacao, e2cidade, e2sigla, e2populacao, e1cidade, e1sigla);
            }
            else
            {
                if (e1populacao < e2populacao)
                {
                    printf("\nComparação de cartas por População\nPopulação de %s-%s: %d \nPopulação de %s-%s: %d \n%s-%s Venceu!\n", e1cidade, e1sigla, e1populacao, e2cidade, e2sigla, e2populacao, e2cidade, e2sigla);
                }
                else
                {
                    printf("Empate\n");
                }
            }
            break;
        case 2:
            e1soma = e1soma + e1area;
            e2soma = e2soma + e2area;
            if (e1area > e2area)
            {
                printf("\nComparação de cartas por Área\nÁrea de %s-%s: %.2f \nÁrea de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1area, e2cidade, e2sigla, e2area, e1cidade, e1sigla);
            }
            else
            {
                if (e1area < e2area)
                {
                    printf("\nComparação de cartas por Área\nÁrea de %s-%s: %.2f \nÁrea de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1area, e2cidade, e2sigla, e2area, e2cidade, e2sigla);
                }
                else
                {
                    printf("Empate\n");
                }
            }

            break;
        case 3:
            e1soma = e1soma + e1pib;
            e2soma = e2soma + e2pib;
            if (e1pib > e2pib)
            {
                printf("\nComparação de cartas por PIB\nPIB de %s-%s: %.2f \nPIB de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1pib, e2cidade, e2sigla, e2pib, e1cidade, e1sigla);
            }
            else
            {
                if (e1pib < e2pib)
                {
                    printf("\nComparação de cartas por PIB\nPIB de %s-%s: %.2f \nPIB de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1pib, e2cidade, e2sigla, e2pib, e2cidade, e2sigla);
                }
                else
                {
                    printf("Empate\n");
                }
            }
            break;
        case 4:
            e1soma = e1soma + e1pontosturisticos;
            e2soma = e2soma + e2pontosturisticos;
            if (e1pontosturisticos > e2pontosturisticos)
            {
                printf("\nComparação de cartas por Pontos turisticos\nPontos turisticos de %s-%s: %d \nPontos turisticos de %s-%s: %d \n%s-%s Venceu!\n", e1cidade, e1sigla, e1pontosturisticos, e2cidade, e2sigla, e2pontosturisticos, e1cidade, e1sigla);
            }
            else
            {
                if (e1pontosturisticos < e2pontosturisticos)
                {
                    printf("\nComparação de cartas por Pontos turisticos\nPontos turisticos de %s-%s: %d \nPontos turisticos de %s-%s: %d \n%s-%s Venceu!\n", e1cidade, e1sigla, e1pontosturisticos, e2cidade, e2sigla, e2pontosturisticos, e2cidade, e2sigla);
                }
                else
                {
                    printf("Empate\n");
                }
            }
            break;
        case 5:
            e1soma = e1soma + e1pibPerCapta;
            e2soma = e2soma + e2pibPerCapta;
            if (e1pibPerCapta > e2pibPerCapta)
            {
                printf("\nComparação de cartas por PIB per capta\nPIB per capta de %s-%s: %.2f \nPIB per capta de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1pibPerCapta, e2cidade, e2sigla, e2pibPerCapta, e1cidade, e1sigla);
            }
            else
            {
                if (e1pibPerCapta < e2pibPerCapta)
                {
                    printf("\nComparação de cartas por PIB per capta\nPIB per capta de %s-%s: %.2f \nPIB per capta de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1pibPerCapta, e2cidade, e2sigla, e2pibPerCapta, e2cidade, e2sigla);
                }
                else
                {
                    printf("Empate\n");
                }
            }
            break;
        case 6:
            e1soma = e1soma + e1densidadePopulacional;
            e2soma = e2soma + e2densidadePopulacional;
            if (e1densidadePopulacional < e2densidadePopulacional)
            {
                printf("\nComparação de cartas por Densidade populacional\nDensidade populacional de %s-%s: %.2f \nDensidade populacional de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1densidadePopulacional, e2cidade, e2sigla, e2densidadePopulacional, e1cidade, e1sigla);
            }
            else
            {
                if (e1densidadePopulacional > e2densidadePopulacional)
                {
                    printf("\nComparação de cartas por Densidade populacional\nDensidade populacional de %s-%s: %.2f \nDensidade populacional de %s-%s: %.2f \n%s-%s Venceu!\n", e1cidade, e1sigla, e1densidadePopulacional, e2cidade, e2sigla, e2densidadePopulacional, e2cidade, e2sigla);
                }
                else
                {
                    printf("Empate\n");
                }
            }
            break;

        default:
            printf("Opção invalida!\n");
            break;
        }
        e1soma > e2soma ? printf("%s-%s Venceu na soma dos atributos!\n",e1cidade, e1sigla) : printf("%s-%s Venceu na soma dos atributos!\n",e2cidade, e2sigla);
    }
    return 0;
}