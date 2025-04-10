#include <stdio.h>
#include <string.h>

// Esse eu tive bastante dificuldade para fazer, não sei se realmente fiz certo, mas decidi mandar mesmo assim 🙁


int main(){
    int populacao, pontosturisticos, populacao2, pontosturisticos2, opcao1, opcao2, comparacao, resultado1, resultado2;
    char estado, estado2;
    char CodigoCarta[5], NomeCidade[45], CodigoCarta2[50], NomeCidade2[45];
    float AreakmQ, PIB, AreakmQ2, PIB2, DensidadePopulacional1, PIBPerCapita1, DensidadePopulacional2, PIBPerCapita2, SuperPoder, SuperPoder2, densidadeinversa, densidadeinversa2;

    printf("-- CARTA 1 --\n");
    printf("Digite a letra do Estado(EX: A, B, etc.): ");
    scanf(" %c", &estado);
    printf("Digite o código da carta(EX: A01, B01, etc.): ");
    scanf(" %49s", CodigoCarta);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(NomeCidade, 45, stdin);       
    NomeCidade[strcspn(NomeCidade, "\n")] = '\0'; 

    printf("Digite a População: ");
    scanf(" %d", &populacao);

    printf("Digite a área: ");
    scanf(" %f", &AreakmQ);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB);

    printf("Digite os pontos turísticos: ");
    scanf(" %d", &pontosturisticos);

    DensidadePopulacional1 = (float) populacao / AreakmQ;
    PIBPerCapita1 = (float) PIB / populacao;
    densidadeinversa = 1.0 / DensidadePopulacional1;
    SuperPoder = (float)populacao + AreakmQ + PIB + (float)pontosturisticos + PIBPerCapita1 + densidadeinversa; 

    printf("Os valores da carta 1 foram registrados!\n");

    printf("-- CARTA 2 --\n");
    printf("Digite a letra do Estado: ");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o código da carta: ");
    scanf(" %49s", CodigoCarta2);

    getchar();
    printf("Digite o nome da cidade: ");
    fgets(NomeCidade2, sizeof(NomeCidade2), stdin);
    NomeCidade2[strcspn(NomeCidade2, "\n")] = '\0';

    printf("Digite a População: ");
    scanf(" %d", &populacao2);

    printf("Digite a área: ");
    scanf(" %f", &AreakmQ2);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB2);

    printf("Digite os pontos turísticos: \n");
    scanf(" %d", &pontosturisticos2);

    DensidadePopulacional2 = (float) populacao2 / AreakmQ2;
    PIBPerCapita2 = (float) PIB2 / populacao2;
    densidadeinversa2 = 1.0 / DensidadePopulacional2;
    SuperPoder2 = (float)populacao2 + AreakmQ2 + PIB2 + (float)pontosturisticos2 + PIBPerCapita2 + densidadeinversa2;

    printf("Os valores da carta 2 foram registrados!\n\n");
    printf("Todos os valores foram registrados!\n\n");

    printf(" -- COMPARAÇÃO ENTRE ATRIBUTOS NUMÉRICOS DAS CARTAS -- \n\n");

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. PIB Per Capita\n");
    printf("6. Densidade Demográfica\n\n");
    printf("Escolha o PRIMEIRO atributo para comparar: ");
    scanf("%d", &opcao1);

    switch(opcao1){
        case 1:
            printf("Você escolheu a opção 'População'!\n");
            resultado1 = populacao > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu a opção 'Área'!\n");
            resultado1 = AreakmQ > AreakmQ2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu a opção 'PIB'!\n");
            resultado1 = PIB > PIB2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu a opção 'Pontos Turísticos'!\n");
            resultado1 = pontosturisticos > pontosturisticos2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu a opção 'PIB Per Capita'!\n");
            resultado1 = PIBPerCapita1 > PIBPerCapita2 ? 1 : 0;
            break;
        case 6:
            printf("Você escolheu a opção 'Densidade Demográfica'!\n");
            resultado1 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida, saindo...");
        break;
    }

    if (opcao1 !=1) printf("1. População\n");
    if (opcao1 !=2) printf("2. Área\n");
    if (opcao1 !=3) printf("3. PIB\n");
    if (opcao1 !=4) printf("4. Pontos Turísticos\n");
    if (opcao1 !=5) printf("5. PIB Per Capita\n");
    if (opcao1 !=6) printf("6. Densidade Demográfica\n\n");
    printf("Escolha o SEGUNDO atributo para comparar: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2){
        printf("Você escolheu o mesmo atributo para comparar. Saindo...");
    } else {
        switch(opcao2){
            case 1:
                printf("Você escolheu a opção 'População'!\n");
                resultado2 = populacao > populacao2 ? 1 : 0;
                break;
            case 2:
                printf("Você escolheu a opção 'Área'!\n");
                resultado2 =  AreakmQ > AreakmQ2 ? 1 : 0;
                break;
            case 3:
                printf("Você escolheu a opção 'PIB'!\n");
                resultado2 =  PIB > PIB2 ? 1 : 0;
                break;
            case 4:
                printf("Você escolheu a opção 'Pontos Turísticos'!\n");
                resultado2 =  pontosturisticos > pontosturisticos2 ? 1 : 0;
                break;
            case 5:
                printf("Você escolheu a opção 'PIB Per Capita'!\n");
                resultado2 =  PIBPerCapita1 > PIBPerCapita2 ? 1 : 0;
                break;
            case 6:
                printf("Você escolheu a opção 'Densidade Demográfica'!\n");
                resultado2 =  DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
                break;
            default:
                printf("Opção inválida, saindo...");
            break;
        }

        if (resultado1 && resultado2){
            printf("Você (Carta 1) venceu a comparação dos resultados! 😃");
        } else if (resultado1 != resultado2) {
            printf("Empatou.");
        } else {
            printf("Você (Carta 1) perdeu... 😔");
        }
    }



}
