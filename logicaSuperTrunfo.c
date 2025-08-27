#include <stdio.h>

// Desafio Super Trunfo - Países
// DESAFIO 1
//Definindo variáveis
int main() {
    int carta1; 
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float pib1, pib2;
    char estado1 [20], estado2 [20];
    char codigo1 [4] = "A01", codigo2 [4] = "A02"; //3 posições úteis + uma posição para o terminador "\0"
    char cidade1 [20], cidade2 [20];

    //Adicionei 4 variáveis do nível aventureiro
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;

    //Adicionei 11 variáveis do nível mestre
    float inversodensidadepopulacional1, inversodensidadepopulacional2;

    float superpoder1, superpoder2;

    int populacao, area, pib, pontosturisticos, densidadepopulacional, pibpercapita, superpoder;

    //Inserir dados da primeira carta
    printf("*** Carta 1 *** \n");
    printf("Escolha o estado de 'A' a 'H': ");
    scanf("%s", estado1);

    printf("Digite a primeira letra do estado seguida do número 01: ");
    scanf("%s", codigo1); 
    
    printf("Escolha a cidade: ");
    scanf("%s", cidade1);

    printf("Quantidade da população: ");
    scanf("%d", &populacao1);

    printf("Qual a área: ");
    scanf("%f", &area1);

    printf("Qual o PIB: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    //Dados da primeira carta impresso
    printf("*** carta 1 ***\nEstado: %s\n", estado1);
    printf("Código: %s\nCidade: %s\n", codigo1, cidade1);
    printf("População: %d\nÁrea: %f\n", populacao1, area1);
    printf("PIB: %f\nPontos Turísticos: %d\n", pib1, pontosturisticos1);

    //Nível aventureiro
    // Operação para calcular a desnidade polpulacional e o PIB per capita da primeira carta
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    //Dados do cálculo impresso
    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);

    //Nível mestre
    // Cálculo do super poder
    inversodensidadepopulacional1 = (float)1 / densidadepopulacional1; // Quanto menor a densidade, maior o poder
    superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + inversodensidadepopulacional1;

    // resultado do super poder
    printf("O super poder da carta 1 é: %f\n", superpoder1);

     //Inserir dados da segunda carta
    printf("*** Carta 2 *** \n");
    printf("Escolha o estado de 'A' a 'H': ");
    scanf("%s", estado2);

    printf("Digite a primeira letra do estado seguida do número 02: ");
    scanf("%s", codigo2); 
    
    printf("Escolha a cidade: ");
    scanf("%s", cidade2);

    printf("Quantidade da população: ");
    scanf("%d", &populacao2);

    printf("Qual a área: ");
    scanf("%f", &area2);

    printf("Qual o PIB: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    //Dados da segunda carta impresso
    printf("*** carta 2 ***\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\nCidade: %s\n", codigo2, cidade2);
    printf("População: %d\nÁrea: %f\n", populacao2, area2);
    printf("PIB: %f\nPontos Turísticos: %d\n", pib2, pontosturisticos2);

    //Nível aventureiro
    // Operação para calcular a desnidade polpulacional e o PIB per capita da segunada carta
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);

    // Nível mestre
    // Cálculo do super poder
    inversodensidadepopulacional2 = (float)1 / densidadepopulacional1; // Quanto menor a densidade, maior o poder
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + inversodensidadepopulacional2;

    // resultado do super poder
    printf("O super poder da carta 2 é: %f\n", superpoder2);

    // Nível mestre
    // Comparação das cartas
    populacao = populacao1 > populacao2;
    area = area1 > area2;
    pib = pib1 > pib2;
    pontosturisticos = pontosturisticos1 > pontosturisticos2;
    densidadepopulacional = densidadepopulacional1 < densidadepopulacional2;//Densidade de menor valor vence
    pibpercapita = pibpercapita1 > pibpercapita2;
    superpoder = superpoder1 > superpoder2;

    // imprimir resultado das comparações
    printf("*** Comparação de Cartas***\n");
    printf("População: %d\n", populacao);
    printf("Área: %d\n", area);
    printf("PIB: %d\n", pib);
    printf("Pontos turísticos: %d\n", pontosturisticos);
    printf("Densidade populacional: %d\n", densidadepopulacional);
    printf("PIB per Capita: %d\n", pibpercapita);
    printf("Super poder: %d\n", superpoder);

   //DESAFIO 2
   //Nível novato
   //Realizando a comparação das cartas utilizando if-else em cada atributo
   printf("***Comparação de cartas***\n");
   if(populacao = populacao1 > populacao2){
      printf("Carta 1 tem maior população.\n");
      printf("A carta vencedora é: Carta 1!\n");// Resultado da carta vencedora
   } else {
      printf("Carta 2 tem maior população.\n");
      printf("A carta vencedora é: Carta 2!\n");// Resultado da carta vencedora
   }

   if(area= area1 > area2){
      printf("Carta 1 tem maior área.\n");
      printf("A carta vencedora é: Carta 1!\n");
   } else {
      printf("Carta 2 tem maior área.\n");
      printf("A carta vencedora é: Carta 2!\n");
   }

   if(area= pib1 > pib2){
      printf("Carta 1 tem maior PIB.\n");
      printf("A carta vencedora é: Carta 1!\n");
   } else {
      printf("Carta 2 tem maior PIB.\n");
      printf("A carta vencedora é: Carta 2!\n");
   }
     if(pontosturisticos= pontosturisticos1 > pontosturisticos2){
      printf("Carta 1 tem maior número de pontos turísticos.\n");
      printf("A carta vencedora é: Carta 1!\n");
   } else {
      printf("Carta 2 tem maior número de pontos turísticos.\n");
      printf("A carta vencedora é: Carta 2!\n");
   }
   if(densidadepopulacional= densidadepopulacional1 < densidadepopulacional2){
      printf("Carta 1 tem maior número densidade populacional.\n");
      printf("A carta vencedora é: Carta 1!\n");
   } else {
      printf("Carta 2 tem maior densidade populacional.\n");
      printf("A carta vencedora é: Carta 2!\n");
   }
   if(pibpercapita= pibpercapita1 > pibpercapita2){
      printf("Carta 1 tem maior PIB per Capita.\n");
      printf("A carta vencedora é: Carta 1!\n");
   } else {
      printf("Carta 2 tem maior PIB per Capita.\n");
      printf("A carta vencedora é: Carta 2!\n");
   }
   if(superpoder= superpoder1 > superpoder2){
      printf("Carta 1 tem maior super poder.\n");
      printf("A carta vencedora é: Carta 1!\n");
   } else {
      printf("Carta 2 tem maior super poder.\n");
      printf("A carta vencedora é: Carta 2!\n");
   }




    return 0;
}
