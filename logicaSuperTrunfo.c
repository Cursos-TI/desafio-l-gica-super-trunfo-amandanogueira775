#include <stdio.h>

// Desafio Super Trunfo - Países
// DESAFIO 1
//Definindo variáveis
int main() {
    int carta1, carta2; 
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float pib1, pib2;
    char estado1 [20], estado2 [20];
    char codigo1 [4] = "A01", codigo2 [4] = "A02"; //3 posições úteis + uma posição para o terminador "\0"
    char cidade1 [20], cidade2 [20];

    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;

    float inversodensidadepopulacional1, inversodensidadepopulacional2;

    float superpoder1, superpoder2;

    int escolhaopcao;


    //Inserir dados da primeira carta
    printf("INSERIR DADOS DA CARTA 1 \n");
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
    printf("\n*** carta 1 ***\nEstado: %s\n", estado1);
    printf("Código: %s\nCidade: %s\n", codigo1, cidade1);
    printf("População: %d\nÁrea: %f\n", populacao1, area1);
    printf("PIB: %f\nPontos Turísticos: %d\n", pib1, pontosturisticos1);

    // Operação para calcular a desnidade polpulacional e o PIB per capita da primeira carta
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    //Dados do cálculo impresso
    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);

    // Cálculo do super poder
    inversodensidadepopulacional1 = (float)1 / densidadepopulacional1; // Quanto menor a densidade, maior o poder
    superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + inversodensidadepopulacional1;

    // resultado do super poder
    printf("O super poder da carta 1 é: %f\n", superpoder1);

   //Inserir dados da segunda carta
    printf("\nINSERIR DADOS DA CARTA 2\n");
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
    printf("\n*** carta 2 ***\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\nCidade: %s\n", codigo2, cidade2);
    printf("População: %d\nÁrea: %f\n", populacao2, area2);
    printf("PIB: %f\nPontos Turísticos: %d\n", pib2, pontosturisticos2);

    // Operação para calcular a desnidade polpulacional e o PIB per capita da segunada carta
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    //Resultado da densidade populacional impresso
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);

    // Cálculo do super poder
    inversodensidadepopulacional2 = (float)1 / densidadepopulacional1; // Quanto menor a densidade, maior o poder
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + inversodensidadepopulacional2;

    // resultado do super poder impresso
    printf("O super poder da carta 2 é: %f\n", superpoder2);


   //DESAFIO 2
   //Nível aventureiro
   //Menu interativo utilizando switch
   printf("\n*** Comparação de cartas ***\n");
   printf("\nEscolha o atributo a ser comparado:\n");
   printf("1. População \n");
   printf("2. Área \n");
   printf("3. PIB \n");
   printf("4. Pontos turísticos \n");
   printf("5. Densidade populacional \n");
   printf("6. PIB per Capita \n");
   printf("7. Super poder \n");
   printf("Escolha: \n");
   scanf("%d", &escolhaopcao);

   //Nível novato - Nível aventureiro
   //Realizando a comparação das cartas utilizando if-else em cada atributo
   //Estrutura de decisão aninhada
   if(escolhaopcao == 1) {
      //Exibição do resultado da comparação
      printf("\n*** Comparação por população ***\n");
      printf("Carta 1: %s - %s\n  População: %d\n", estado1, cidade1, populacao1);
      printf("Carta 2: %s - %s\n  População: %d\n", estado2, cidade2, populacao2);
     if(populacao1 > populacao2){
       printf("Resultado: Carta 1 venceu!\n");    
   } else if (populacao1 < populacao2){
       printf("Resultado: Carta 2 venceu!");
   } else {
      printf("Houve um empate\n");
   }
   } else if(escolhaopcao == 2){
      printf("\n*** Comparação por Área ***\n");
      printf("Carta 1: %s - %s\n  Área: %f\n", estado1, cidade1, area1);
      printf("Carta 2: %s - %s\n  Área: %f\n", estado2, cidade2, area2);
       if(area1 > area2){
         printf("Resultado: Carta 1 venceu!\n");
   } else if (area1 < area2){
      printf("Resultado: Carta 2 venceu!\n");
   } else {
      printf("Houve um empate\n");
   }
   } else if(escolhaopcao == 3) {
      printf("\n*** Comparação por PIB ***\n");
      printf("Carta 1: %s - %s\n  PIB: %f\n", estado1, cidade1, pib1);
      printf("Carta 2: %s - %s\n  PIB: %f\n", estado2, cidade2, pib2);
       if(pib1 > pib2){
         printf("Resultado: Carta 1 venceu!\n");
   } else if(pib1 < pib2){
      printf("Resultado: Carta 2 venceu!\n");
   } else {
      printf("Houve um empate\n");
   }
   } else if(escolhaopcao == 4) {
      printf("\n*** Comparação por Pontos Turísticos ***\n");
      printf("Carta 1: %s - %s\n  Pontos Turísticos: %d\n", estado1, cidade1, pontosturisticos1);
      printf("Carta 2: %s - %s\n  Pontos Turísticos: %d\n", estado2, cidade2, pontosturisticos2);
       if(pontosturisticos1 > pontosturisticos2){
         printf("Resultado: Carta 1 venceu!\n");
   } else if(pontosturisticos1 < pontosturisticos2){
      printf("Resultado: Carta 2 venceu!\n");
   } else {
      printf("Houve um empate\n");
   }
   } else if(escolhaopcao == 5) {
       printf("\n*** Comparação por Densidade Populacional ***\n");
      printf("Carta 1: %s - %s\n  Densidade Populacional: %f\n", estado1, cidade1, densidadepopulacional1);
      printf("Carta 2: %s - %s\n  Densidade Populacional: %f\n", estado2, cidade2, densidadepopulacional2);
      if(densidadepopulacional1 < densidadepopulacional2){
      printf("Resultado: Carta 1 venceu!\n");
   } else if(densidadepopulacional1 > densidadepopulacional2){
      printf("Resultado: Carta 2 venceu!\n");
   } else {
      printf("Houve um empate\n");
   }
   } else if (escolhaopcao == 6) {
      printf("\n*** Comparação por PIB per Capita ***\n");
      printf("Carta 1: %s - %s\n  PIB per Capita: %f\n", estado1, cidade1, pibpercapita1);
      printf("Carta 2: %s - %s\n  PIB per Capita: %f\n", estado2, cidade2, pibpercapita2);
      if(pibpercapita1 > pibpercapita2){
      printf("Resultado: Carta 1 venceu!\n");
   } else if(pibpercapita1 < pibpercapita2){
      printf("Resultado: Carta 2 venceu!\n");
   } else {
      printf("Houve um empate\n");
   }
   } else if(escolhaopcao == 7) {
      printf("\n*** Comparação por Super Poder ***\n");
      printf("Carta 1: %s - %s\n  Super Poder: %f\n", estado1, cidade1,superpoder1);
      printf("Carta 2: %s - %s\n  Super Poder: %f\n", estado2, cidade2, superpoder2);
      if(superpoder1 > superpoder2){
      printf("Resultado: Carta 1 venceu!\n");
   } else if(superpoder1 < superpoder2){
      printf("Resultado: Carta 2 venceu!\n");
   } else {
      printf("Houve um empate\n");
   }
   } else {
      printf("Opção inválida!\n");
   }
    



    return 0;
}
