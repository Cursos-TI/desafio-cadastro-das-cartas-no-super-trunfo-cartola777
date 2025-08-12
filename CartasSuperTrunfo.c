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
 




//carta 1

char estado[60];
char codigo_da_carta[280];
char cidade[20];
int populacao;
float area_km;

printf("qual o nome da estado ? \n");
scanf("%59s", estado);
printf("O estado  e: %s\n" , estado);

printf("qual o codigo da carta \n");
scanf("%10s", codigo_da_carta);
printf("O codigo e : %s\n",codigo_da_carta);

printf("qual a cidade \n");
scanf("  %26s", cidade);
printf("O cIDADE  e : %s\n",cidade);

printf(" tamanho popululacao  \n");
scanf("  %d", &populacao);
printf("A POPULACAO E: %d\n", populacao);



























































































return 0;
}
