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
unsigned long int populacao1;


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
 unsigned long int populacao2;

//entrada de dados carta 01

printf("===CADASTRO DA CARTA 01===\n");

printf("digite se estado (letra de A a h),");
scanf("%c", &estado1);

printf("degite o codigo da carta 01  (A01):");
scanf("%s", codigo1);

printf("degite o nome da cidade");
scanf(" %[^\n]",nomecidade1 );
getchar();

printf("digite a populacaco");
scanf(" %lu", &populacao1);

printf("digite area (em km²)");
scanf(" %f", &area1);

printf(" digite o pib");
 scanf(" %f", &pib1);

printf("digite os ponto turisticos");
scanf("%d", &pontosturiscos1);

//calculo densidade populacionaL 01
densidade1 = populacao1 / area1; 
//cauculo o pib pecapita
pibpercapita =pib1 / (float)populacao1;
// caculo do inverso da densidade
inversodadesidade1= 1 / densidade1;
//calculo do super poder
superpoder=  (float)populacao1+ area1+ pib1 + (float)pontosturiscos1 +pibpercapita + inversodadesidade1;
 
printf("\n"); //pula linha

//entrada de carta 02
printf("=== cadastro da carta 02 === \n");

printf("digite se estado (letra de A a h),");
scanf("%c", estado02);

printf("degite o codigo da carta 01  (A01):");
scanf("%s", codigo2);

printf("degite o nome da cidade");
scanf(" %[^\n] ",nomecidade2 );
getchar();

printf("digite a populacaco");
scanf("%lu", &populacao2);

printf("digite area (em km²)");
scanf("%f", &area2);

printf(" digite o pib");
scanf("%f", &pib2);

printf("digite os ponto turisticos");
scanf("%d", &pontoturistico2);

//calculo  densidade populaconal
densidade2= populacao2 / area2;
//caulculoo do pib percapito
pibpercapito2 = pib2 / (float)populacao2;
//calculo do invrso da desidade
inversodadesidade2= 1 / densidade2;
//calculo super poder
superpoder2=(float)populacao2+area2 + pib2 +(float)pontoturistico2 + pibpercapito2 + inversodadesidade2 ;
 printf("\n");

//exebicao da  carta 01

printf(" carta:\n ");
printf("estado1: %s\n ", estado1);
printf(" codigo 1:\n", codigo1);
printf(" nome da cidade 1 %s\n" , nomecidade1);
printf("populacao %lu\n  " , populacao1);
printf ("area; %2.f\n" , area1);                                                                                           
printf(" pib: %2.f\n ",pib1 );
printf(" numero de ponto turistico %d\n",  pontosturiscos1);
printf("densidade populacional: %2f hab/km²\n ", densidade1);
printf("PIB per capita :%2.f reais\n", pibpercapita);
 printf(" super poder % 2.f \n" , superpoder);

printf("\n");

// exebição da carta 02


printf(" carta:\n ");
printf("estado2: %s\n ", estado02);
printf(" codigo 2:\n", codigo2);
printf(" nome da cidade 2 %s\n" , nomecidade2);
printf("populacao2 %lu\n  " , populacao2);
printf ("area 2; %2.f\n" , area2);                                                                                           
printf(" pib 2: %2.f\n ",pib2 );
printf(" numero de ponto turistico 2 %d\n", pontoturistico2);
printf("densidade populacional2: %2f hab/km²\n ", densidade2);
printf("PIB per capita2 :%2.f reais\n", pibpercapito2);
 printf(" super poder q % 2.f \n" , superpoder2);


















































































 return 0;
  
}
