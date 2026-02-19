#include <stdio.h>
int main(){

int Populacao,Pontos_Turisticos,Populacao2,Pontos_Turisticos2;
float Area,PIB,Area2,PIB2,densidade,densidade2,capita,capita2;
char Cidade[30], Codigo[4],Cidade2[30], Codigo2[4];
char Estado, Estado2;


//Primeira Carta
printf("Digite uma letra de A até H para representar seu estado:");
scanf(" %c", &Estado);

printf("Digite o código da carta(ex:A01,B03):");
scanf("%s", Codigo);

printf("Digite o nome da cidade:");
scanf("%s", Cidade);

printf("Digite a população:");
scanf("%d", &Populacao);

printf("Digite a Área da região:");
scanf(" %f", &Area);

printf("Digite o PIB:");
scanf(" %f", &PIB);

printf("Quantos pontos turísticos tem na cidade?:");
scanf(" %d", &Pontos_Turisticos);


//Segunda Carta
printf("----------Informações da Segunda carta----------\n");

printf("Digite uma letra de A até H para representar seu estado:  ");
scanf(" %c", &Estado2);

printf("Digite o código da carta(ex:A01,B03):");
scanf("%s", Codigo2);

printf("Digite o nome da cidade:");
scanf("%s", Cidade2);

printf("Digite a população:");
scanf("%d", &Populacao2);

printf("Digite a Área da região:");
scanf(" %f", &Area2);

printf("Digite o PIB:");
scanf(" %f", &PIB2);

printf("Quantos pontos turísticos tem na cidade?:");
scanf(" %d", &Pontos_Turisticos2);



//Cálculo da Densidade Populacional e do PIB per Capita
densidade= (float)Populacao / Area;
capita = (float)PIB / Populacao;
densidade2= (float)Populacao2 / Area2;
capita2 = (float)PIB2 / Populacao2;

//Separador para melhor visualização
printf("----------------------------------------------------------\n");

//Print da Primeira carta
printf("Carta 1: \n");
printf("Estado:%c\n", Estado);
printf("Código:%s\nNome da Cidade: %s\n", Codigo, Cidade);
printf("População:%d\n", Populacao);
printf("Área: %.2f km²\nPIB:R$%.2f reais\n", Area, PIB);
printf("Número de Pontos Turísticos:%d\n", Pontos_Turisticos);
printf("Densidade Populacional:%.2f hab/km2\n", densidade);
printf("PIB per Capita:R$%.2f reais\n", capita);
//Separador para melhor visualização
printf("----------------------------------------------------------\n");
//Print da Segunda Carta
printf("Carta 2: \n");
printf("Estado:%c\n", Estado2);
printf("Código:%s\nNome da Cidade:%s\n", Codigo2, Cidade2);
printf("População:%d\n", Populacao2);
printf("Área:%.2f km²\nPIB:R$%.2f reais\n", Area2, PIB2);
printf("Número de Pontos Turísticos:%d\n", Pontos_Turisticos2);
printf("Densidade Populacional:%.2f hab/km2\n", densidade2);
printf("PIB per Capita:R$%.2f reais\n", capita2);
return 0;
}