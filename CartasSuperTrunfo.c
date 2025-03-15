#include <stdio.h>

int main(){

char estado = 'P';
char codigo_da_carta[] = "P02";
char cidade[20] = "Recife";
int populacao = 2000000;
float area = 900.9;
float PIB = 10000000000.0;
int quantidade_de_pontos_turisticos = 300;

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
scanf("%d", &quantidade_de_pontos_turisticos);printf("\n");

printf("Estado: %c\n", estado);
printf("Código: %s\n", codigo_da_carta);
printf("Cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Área: %.2f\n", area);
printf("PIB: %.2f\n", PIB);
printf("Quantidade de pontos turísticos: %d\n", quantidade_de_pontos_turisticos);

return 0;

}
