#include <stdio.h>
#include <string.h>



int main(){
    int populacao, pontosturisticos, populacao2, pontosturisticos2;
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


    printf("-- Comparação de cartas (Atributo: População): --\n\n");

    printf("Carta 1 - %s: %d\n", NomeCidade, populacao);
    printf("Carta 2 - %s: %d\n\n", NomeCidade2, populacao2);

    if (populacao > populacao2){
        printf("Carta 1 - (%s): venceu!", NomeCidade);
    } else {
        printf("Carta 2 - (%s): venceu!", NomeCidade2);
    }

    return 0;
}
