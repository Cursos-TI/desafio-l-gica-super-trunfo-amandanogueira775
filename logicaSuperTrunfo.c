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

    int escolhaopcao1, escolhaopcao2;//para a escolha dos atributos
    int resultado1, resultado2;//resultado da comparção

    float atributo1carta1 = 0, atributo2carta1 = 0;//para realizar a soma dos atributos escolhidos, está igual a zero para proteger contra valores indesejados.
    float atributo1carta2 = 0, atributo2carta2 = 0;


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
   
   //Menu interativo da comparação 1 
   printf("\n*** Comparação de cartas ***\n");
   printf("\nEscolha o primeiro atributo a ser comparado:\n");
   printf("1. População \n");
   printf("2. Área \n");
   printf("3. PIB \n");
   printf("4. Pontos turísticos \n");
   printf("5. Densidade populacional \n");
   printf("6. PIB per Capita \n");
   printf("7. Super poder \n");
   
   printf("Primeira escolha : \n");
   scanf("%d", &escolhaopcao1);

   switch (escolhaopcao1)
   {
   case 1:
      printf("Você escolheu a opção População\n");
      resultado1 = populacao1 > populacao2 ? 1: 0;//utilizando operador ternário
      printf("Carta 1: %s - %s\n  População: %d\n", estado1, cidade1, populacao1);//exibição dos atrinutos escolhido
      printf("Carta 2: %s - %s\n  População: %d\n", estado2, cidade2, populacao2);
      atributo1carta1 = populacao1;//para a realizar a soma dos dois atributos escolhidos
      atributo1carta2= populacao2;
      break;
   case 2:
      printf("Você escolheu a opção Área\n");
      resultado1 = area1 > area2 ? 1: 0;
      printf("Carta 1: %s - %s\n  Área: %f\n", estado1, cidade1, area1);
      printf("Carta 2: %s - %s\n  Área: %f\n", estado2, cidade2, area2);
      atributo1carta1 = area1;
      atributo1carta2 = area2;
      break;
    case 3:
      printf("Você escolheu a opção PIB\n");
      resultado1 = pib1 > pib2 ? 1: 0;
       printf("Carta 1: %s - %s\n  PIB: %f\n", estado1, cidade1, pib1);
      printf("Carta 2: %s - %s\n  PIB: %f\n", estado2, cidade2, pib2);
      atributo1carta1 = pib1;
      atributo1carta2 = pib2;
      break;
    case 4:
      printf("Você escolheu a opção Pontos turísticos\n");
      resultado1 = pontosturisticos1 > pontosturisticos2 ? 1: 0;
       printf("Carta 1: %s - %s\n Pontos turísticos: %d\n", estado1, cidade1, pontosturisticos1);
      printf("Carta 2: %s - %s\n  Pontos turísticos: %d\n", estado2, cidade2, pontosturisticos2);
      atributo1carta1 = pontosturisticos1;
      atributo1carta2 = pontosturisticos2;
      break;
    case 5:
      printf("Você escolheu a opção Densidade Populacional\n");
      resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1: 0;
       printf("Carta 1: %s - %s\n  Densidade Populacional: %f\n", estado1, cidade1, densidadepopulacional1);
      printf("Carta 2: %s - %s\n  Densidade Populacional: %f\n", estado2, cidade2, densidadepopulacional2);
      atributo1carta1 = densidadepopulacional1;
      atributo1carta2 = densidadepopulacional2;
      break;
    case 6:
      printf("Você escolheu a opção PIB per Capita\n");
      resultado1 =pibpercapita1 > pibpercapita2 ? 1: 0;
       printf("Carta 1: %s - %s\n  PIB per Capita: %f\n", estado1, cidade1, pibpercapita1);
      printf("Carta 2: %s - %s\n  PIB per Capita: %f\n", estado2, cidade2, pibpercapita2);
      atributo1carta1 = pibpercapita1;
      atributo1carta2 = pibpercapita2;
      break;
    case 7:
      printf("Você escolheu a opção Super Poder\n");
      resultado1 = superpoder1 > superpoder2 ? 1: 0;
       printf("Carta 1: %s - %s\n  Super Poder: %f\n", estado1, cidade1, superpoder1);
      printf("Carta 2: %s - %s\n  Super Poder: %f\n", estado2, cidade2, superpoder2);
      atributo1carta1 = superpoder1;
      atributo1carta2 = superpoder2;
      break;
    default:
      printf("Opção de jogo inválida\n Reiniciar jogo...\n");
      break;  
   }
 
   //menu interativo da comparação de cartas 2
   
   printf("\nEscolha o segundo atributo a ser comparado:\n");
   printf("1. População \n");
   printf("2. Área \n");
   printf("3. PIB \n");
   printf("4. Pontos turísticos \n");
   printf("5. Densidade populacional \n");
   printf("6. PIB per Capita \n");
   printf("7. Super poder \n");

   printf("\nSegunda escolha: \n");
   scanf("%d", &escolhaopcao2);

   if (escolhaopcao1 == escolhaopcao2)//para o jogador não escolher dois atributos iguais
   {
      printf("Você escolheu o mesmo atributo!\n Reiniciar jogo...\n");
   } else {
      switch (escolhaopcao2)
      {
       case 1:
      printf("Você escolheu a opção População\n");
      printf("Carta 1: %s - %s\n  População: %d\n", estado1, cidade1, populacao1);
      printf("Carta 2: %s - %s\n  População: %d\n", estado2, cidade2, populacao2);
      resultado2 = populacao1 > populacao2 ? 1: 0;
      atributo2carta1 = populacao1;
      atributo2carta2 = populacao2;
      break;
   case 2:
      printf("Você escolheu a opção Área\n");
      resultado2 = area1 > area2 ? 1: 0;
      printf("Carta 1: %s - %s\n  Área: %f\n", estado1, cidade1, area1);
      printf("Carta 2: %s - %s\n  Área: %f\n", estado2, cidade2, area2);
      atributo2carta1 = area1;
      atributo2carta2 = area2;
      break;
    case 3:
      printf("Você escolheu a opção PIB\n");
      resultado2 = pib1 > pib2 ? 1: 0;
      printf("Carta 1: %s - %s\n  PIB: %f\n", estado1, cidade1, pib1);
      printf("Carta 2: %s - %s\n  PIB: %f\n", estado2, cidade2, pib2);
      atributo2carta1 = pib1;
      atributo2carta2 = pib2;
      break;
    case 4:
      printf("Você escolheu a opção Pontos turísticos\n");
      resultado2 = pontosturisticos1 > pontosturisticos2 ? 1: 0;
      printf("Carta 1: %s - %s\n  Pontos turísticos: %d\n", estado1, cidade1, pontosturisticos1);
      printf("Carta 2: %s - %s\n  Pontos turísticos: %d\n", estado2, cidade2, pontosturisticos2);
      atributo2carta1 = pontosturisticos1;
      atributo2carta2 = pontosturisticos2;
      break;
    case 5:
      printf("Você escolheu a opção Densidade Populacional\n");
      resultado2 = densidadepopulacional1 < densidadepopulacional2 ? 1: 0;
      printf("Carta 1: %s - %s\n  Densidade Populacional: %f\n", estado1, cidade1, densidadepopulacional1);
      printf("Carta 2: %s - %s\n  Densidade Populacional: %f\n", estado2, cidade2, densidadepopulacional2);
      atributo2carta1 = densidadepopulacional1;
      atributo2carta2 =densidadepopulacional2;
      break;
    case 6:
      printf("Você escolheu a opção PIB per Capita\n");
      resultado2 =pibpercapita1 > pibpercapita2 ? 1: 0;
      printf("Carta 1: %s - %s\n  PIB per Capita: %f\n", estado1, cidade1, pibpercapita1);
      printf("Carta 2: %s - %s\n  PIB per Capita: %f\n", estado2, cidade2, pibpercapita2);
      atributo2carta1 = pibpercapita1;
      atributo2carta2 = pibpercapita2;
      break;
    case 7:
      printf("Você escolheu a opção Super Poder\n");
      resultado2 = superpoder1 > superpoder2 ? 1: 0;
      printf("Carta 1: %s - %s\n  Super Poder: %f\n", estado1, cidade1, superpoder1);
      printf("Carta 2: %s - %s\n  Super Poder: %f\n", estado2, cidade2, superpoder2);
      atributo2carta1 = superpoder1;
      atributo2carta2 = superpoder2;
      break;
    default:
      printf("Opção de jogo inválida\n Reiniciar jogo...\n");
      break;}
   
    //Resultado final.

    //soma de cada carta
    float somacarta1 =atributo1carta1 + atributo2carta1 ;
    float somacarta2 = atributo1carta2 + atributo2carta2 ;
    
    printf("\n***Resultado ***\n");//exibição do resultado da soma
    printf("Carta 1\n Atributo 1: %.2f\n Atributo 2:%.2f\n Resultado da soma: %.2f\n", atributo1carta1, atributo2carta1, somacarta1);
    printf("Carta 2\n Atributo 1: %.2f\n Atributo 2:%.2f\n Resultado da soma: %.2f\n", atributo1carta2, atributo2carta2, somacarta2);
      
    //exibição do resultado de quem ganhou
    if (somacarta1 > somacarta2){
         printf("\n*** Parabéns, Carta 1 venceu! ***\n");
      } else if (somacarta1 < somacarta2){
         printf("\n*** Parabéns, Carta 2 venceu! ***\n"); 
      } else {
         printf("\n*** O jogo empatou! ***\n");
      }}
   
   


    return 0;
}
