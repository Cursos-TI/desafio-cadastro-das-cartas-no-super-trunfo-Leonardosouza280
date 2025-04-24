//#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

//int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//    return 0;
//}


#include <stdio.h>

  int main(){
// Cadastro da carta 01
   char codigodacarta1[5];
   char Estado1[20];
   char Cidade1[20];
   int populacao1, NPT1;
   float PIB1, Area1;
   float Densidade_Populacional1;
   float PIB_PER_Capita1;

    // Cadastro da carta 2

    char codigocarta2[5];
    char Estado2[20];
    char Cidade2[20];
    int populacao2, NPT2;
    float PIB2, Area2;
    float Densidade_Populacional2;
    float PIB_PER_Capita2;

     //Leitura de Dados da carta 1

     printf("Qual o Codigo da carta?\n");
     scanf("%s", &codigodacarta1);

     printf("Qual o estado da Carta?\n");
     scanf("%s", &Estado1);

     printf("Qual a Cidade da Carta?\n");
     scanf("%s", &Cidade1);

     printf("Qual o Número de Pontos Turisticos da Carta?\n");
     scanf("%d", &NPT1);

     printf("Qual é a Área na Carta?\n");
     scanf("%f", &Area1);

     printf("Qual é o PIB na Carta?\n");
     scanf("%f", &PIB1);

     printf("Qual a População na Carta?\n");
     scanf("%d", &populacao1);

     
     printf("Codigo da Carta é: %s - Estado é: %s\n", codigodacarta1, Estado1);
     printf("A Cidade é: %s - A População é: %d\n", Cidade1, populacao1);
     printf("A Área é: %.3f - O Número de pontos Turisticos é: %d\n", Area1, NPT1);
     printf("E o PIB é de: %.3f\n", PIB1);

     Densidade_Populacional1 = populacao1 / Area1;
     printf("A Densidade Populacional da Carta 1, é de: %.3f\n", Densidade_Populacional1);

     PIB_PER_Capita1 = PIB1 / populacao1;
     printf("O PIB per CAPITA é de:%.3f\n", PIB_PER_Capita1);


    // Leitura de Dados da Carta 2

    printf("Qual o Codigo da carta?\n");
    scanf("%s", &codigocarta2);

    printf("Qual o estado da Carta?\n");
    scanf("%s", &Estado2);

    printf("Qual a Cidade da Carta?\n");
    scanf("%s", &Cidade2);

    printf("Qual o Número de Pontos Turisticos da Carta?\n");
    scanf("%d", &NPT2);

    printf("Qual é a Área na Carta?\n");
    scanf("%f", &Area2);

    printf("Qual é o PIB na Carta?\n");
    scanf("%f", &PIB2);

    printf("Qual a População na Carta?\n");
    scanf("%d", &populacao2);

    
    printf("Codigo da Carta é: %s - Estado é: %s\n", codigocarta2, Estado2);
    printf("A Cidade é: %s - A População é: %d\n", Cidade2, populacao2);
    printf("A Área é: %.3f - O Número de pontos Turisticos é: %d\n", Area2, NPT2);
    printf("E o PIB é de: %.3f\n", PIB2);

    Densidade_Populacional2 = populacao2 / Area2;
    printf("A Densidade Populacional da Carta 2, é de: %.3f\n", Densidade_Populacional2);

    PIB_PER_Capita1 = PIB2 / populacao2;
    printf("O PIB per CAPITA é de:%.3f\n", PIB_PER_Capita2);

    //Hora de Jogar
    //Comparar valores das Cartas, para poder saber quem irá ganhar.

    printf("***Hora de Saber quem Ganha***\n");
    printf("*** Ao Sair o Valor 1, a Carta 1 ganha, ao sair o Valor 0, a carta 2 ganha.***");
    printf("População1 > População2:%d\n", populacao1 > populacao2);
    printf("Area1 > Area2: %f\n", Area1 > Area2);
    printf("PIB1 > PIB2: %f\n", PIB1 > PIB2);
    printf("NPT1 > NPT2:%d\n", NPT1 > NPT2);
    printf("PIB_PER_Capital1 > PIB_PER_Capital2:%f\n", PIB_PER_Capita1>PIB_PER_Capita2);
    printf("Densidade_Populacional1 > Densidade_Populacional2: %f\n", Densidade_Populacional1>Densidade_Populacional2);
    


    return 0;
  }
    