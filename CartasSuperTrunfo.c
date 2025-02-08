#include <stdio.h>
 
int main() {
    char nome[50];
    char cidade[50];
    int populacao;
    int pib;
    int area;
    int pontosturisticos;
 
    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a População da cidade:\n");
    scanf("%s", &populacao);

    printf("Digite o PIB da cidade: \n");
    scanf("%s", &pib);

    printf("Digite a Área da cidade: \n");
    scanf("%s", &area);
 
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%s", &pontosturisticos);

    printf(" Nome do Usuário: %s \n Cidade: %s \n População da Cidade: %s \n PIB: %s \n Área da Cidade: %s \n Pontos Turísticos: %s \n", &nome, &cidade, &populacao, &pib, &area, &pontosturisticos);

    return 0;
}
