#include <stdio.h>

int main(){

char estado = 'A';
char codigo_da_carta[] = "A01";
char cidade[20] = "Maceió";
int populacao = 1000000;
float area = 500.5;
float PIB = 1000000000.0;
int quantidade_de_pontos_turisticos = 100;

printf("Digite o estado: \n");
scanf("%c", &estado);

printf("Digite o código: \n");
scanf("%s", &codigo_da_carta);

printf("Digite a cidade: \n");
scanf("%s", &cidade);

printf("Digite a população: \n");
scanf("%d", &populacao);

printf("Digite a area: \n");
scanf("%f", &area);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d", &quantidade_de_pontos_turisticos);

printf("Estado: %c - Código: %s\n", estado, codigo_da_carta);
printf("Cidade: %s - População: %d\n", cidade, populacao);
printf("Área: %f - PIB: %f\n", area,PIB);
printf("Quantidade de pontos turisticos: %d\n", quantidade_de_pontos_turisticos);

return 0;

}