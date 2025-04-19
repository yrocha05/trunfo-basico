#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char  estado1 [30] , estado2 [30];
    char codigo_carta1 , codigo_carta2 ;
    char nome_cidade1 [30] , nome_cidade2 [30];
    int populacao1 , populacao2;
    float area1 , area2;
    float pib1 , pib2;
    int ponto_turistico1 , ponto_turistico2;

    printf("Seja Bem vindo ao Super Trunfo! \n");
    printf("Vamos cadastrar a sua primeira carta! para isso preciso que forneça alguns dados.\n");
    printf("Qual é o Estado da sua Carta? \n");
    scanf("%s" , &estado1);

    printf("Ok.Agora para o código da sua carta preciso da letra inicial e de um numeral de até no máximo 2 digitos! \n");
    scanf("%s" , &codigo_carta1);

    printf("Perfeito! Qual a cidade da sua carta? \n");
    scanf("%s" , &nome_cidade1);

    printf("Só mais algumas informações e seu cadatro estará completo! \n");

    printf("Qual a população da sua carta? \n");
    scanf("%d" , &populacao1);

    printf("Qual a área por km² da sua carta? \n");
    scanf("%f" , &area1);

    printf("Qual o Pib da sua carta? \n");
    scanf("%f" , &pib1);

    printf("Quantos pontos turísticos? \n");
    scanf("%d" , &ponto_turistico1);

    printf("Aqui estão as informações da sua carta! \n");
    printf("O estado: %s \n" , estado1 );
    printf("O Código: %s \n" , codigo_carta1 );
    printf("O nome da cidade: %s \n" , nome_cidade1 );
    printf("A população: %d \n", populacao1 );
    printf("A área: %f \n" , area1 );
    printf("O PIB: %f \n" , pib1 );
    printf("Quantidade de Pontos Turísticos %d \n" , ponto_turistico1 );

    printf("Parabéns! Sua primeira carta foi cadastrada. Vamos continuar e cadastar a segunda! \n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}