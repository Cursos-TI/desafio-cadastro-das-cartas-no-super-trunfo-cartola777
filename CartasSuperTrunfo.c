#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
 

//variaveis da carta 01
char estado1;
char codigo1[5];
char nomecidade1[100];
float area1;
float densidade1;
float pib1;
int pontosturiscos1;
float pibpercapita;
float inversodadesidade1;
float superpoder;
 unsigned int populacao1;


//variaveis da carta2
char estado02;
char codigo2[5];
char nomecidade2[100];
float area2;
float densidade2;
float pib2;
int pontoturistico2;
float pibpercapito2;
float inversodadesidade2;
float superpoder2;
 unsigned int populacao2;
//entrada de dados carta 01

printf("===CADASTRO DA CARTA 01===\n");

printf("digite se estado (letra de A a h),");
scanf(" %C", &estado1);

printf("degite o codigo da carta 01  (A01):");
scanf(" %s", codigo1);

printf("degite o nome da cidade");
scanf(" %s",nomecidade1 );
getchar();

printf("digite a populacaco");
scanf(" %lu", &populacao1);

printf("digite area (em km²)");
scanf(" %f", area1);

printf(" digite o pib");
scanf(" %f", pib1);

printf("digite os ponto turisticos");
scanf("%d", pontosturiscos1);

//calculo densidade populaciona 01
densidade1 = populacao1/area1 










//entrada de carta 02
printf("=== cadastro da carta 02 === \n");

printf("digite se estado (letra de A a h),");
scanf("%C", estado02);

printf("degite o codigo da carta 01  (A01):");
scanf("%s", codigo2);

printf("degite o nome da cidade");
scanf(" %s",nomecidade2 );
getchar();

printf("digite a populacaco");
scanf("%lu", &populacao2);

printf("digite area (em km²)");
scanf("%f", area2);

printf(" digite o pib");
scanf("%f", pib2);

printf("digite os ponto turisticos");
scanf("%d", pontoturistico2);


























































































 return 0;
  
}
