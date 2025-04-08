#include <stdio.h>
#include <string.h>



int main(){
    int populacao, pontosturisticos, populacao2, pontosturisticos2, opcao, comparacao;
    char estado, estado2;
    char CodigoCarta[5], NomeCidade[45], CodigoCarta2[50], NomeCidade2[45];
    float AreakmQ, PIB, AreakmQ2, PIB2, DensidadePopulacional1, PIBPerCapita1, DensidadePopulacional2, PIBPerCapita2, SuperPoder, SuperPoder2, densidadeinversa, densidadeinversa2;

    printf("--- MENU SUPER TRUNFO ---\n\n");
    printf("1. Iniciar jogo\n");
    printf("2. Exibir Regras\n");
    printf("3. Sair\n");
    scanf("%d", &opcao);

    switch(opcao) {
    case 1:
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

        printf(" -- COMPARAÇÃO ENTRE AS CARTAS --\n\n");
        printf("1. Apenas mostrar os nomes.\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Pontos turísticos\n");
        printf("6. Densidade demográfica\n");
        printf("Escolha o atributo para comparar: ");
        scanf("%d", &comparacao);

        switch(comparacao){
            case 1:
                printf("Carta 1: %s (%s)\n", NomeCidade, CodigoCarta);
                printf("Carta 2: %s (%s)\n", NomeCidade2, CodigoCarta2);
            break;

            case 2:
                printf("Comparando população...\n");
                if (populacao > populacao2){
                    printf("População da Carta 1 venceu!: %d > %d\n", populacao, populacao2);
                } else if (populacao2 > populacao){
                    printf("População da Carta 2 venceu!: %d > %d\n", populacao2, populacao); 
                } else {
                    printf("Empate...: %d", populacao);
                }
                break;
            case 3:
                printf("Comparando Área...\n");
                if (AreakmQ > AreakmQ2){
                    printf("Área da Carta 1 venceu!: %f > %f\n", AreakmQ, AreakmQ2);
                } else if (AreakmQ2 > AreakmQ) {
                    printf("Área da Carta 2 venceu!: %f > %f\n", AreakmQ2, AreakmQ);
                } else {
                    printf("Empate...: %f", AreakmQ);
                }
                break;

            case 4:
                printf("Comparando PIB...\n");
                if (PIB > PIB2) {
                    printf("PIB da Carta 1 venceu!: %f > %f\n", PIB, PIB2);
                } else if (PIB2 > PIB) {
                    printf("PIB da Carta 2 Venceu!: %f > %f\n", PIB2, PIB);
                } else {
                    printf("Empate...: %f", PIB);
                }
                break;

            case 5:
                printf("Comparando Pontos Turísticos...\n");
                if (pontosturisticos > pontosturisticos2){
                    printf("Pontos Turísticos da Carta 1 venceu! %d > %d\n", pontosturisticos, pontosturisticos2);
                } else if (pontosturisticos2 > pontosturisticos) {
                    printf("Pontos Turísticos da Carta 2 venceu! %d > %d\n", pontosturisticos2, pontosturisticos);
                } else {
                    printf("Empate... %d", pontosturisticos);
                }
                break;
            case 6:
                printf("Comparando a Densidade Populacional...\n");
                if (DensidadePopulacional1 < DensidadePopulacional2){
                    printf("Densidade Populacional da Carta 1 venceu! %.2f < %.2f hab/km²", DensidadePopulacional1, DensidadePopulacional2);
                } else if (DensidadePopulacional2 < DensidadePopulacional1){
                    printf("Densidade Populacional da Carta 2 venceu! %.2f < %.2f hab/km²", DensidadePopulacional2, DensidadePopulacional1);
                } else {
                    printf("Empate... %.2f", DensidadePopulacional1);
                }
                break;
            default:
            break;
            }


        
        break;

    case 2:
        printf("Regras...");
        break;
    case 3:
        break;
    default:
    printf("OPÇÃO INVÁLIDA");
    }
    while(1);
    return 0;
}
