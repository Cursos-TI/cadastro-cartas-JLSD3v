#include <stdio.h>
int main(){

unsigned long int Populacao, Populacao2;
int Pontos_Turisticos, Pontos_Turisticos2;
float Area, PIB, Area2, PIB2, densidade, densidade2, capita, capita2;
char Cidade[30], Codigo[4], Cidade2[30], Codigo2[4];
char Estado, Estado2;
float superpoder1, superpoder2;


//Primeira Carta
printf("Digite uma letra de A até H para representar seu estado:");
scanf(" %c", &Estado);

printf("Digite o código da carta(ex:A01,B03):");
scanf("%s", Codigo);

printf("Digite o nome da cidade:");
scanf("%s", Cidade);

printf("Digite a população:");
scanf("%lu", &Populacao);  

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
scanf("%lu", &Populacao2);  

printf("Digite a Área da região:");
scanf(" %f", &Area2);

printf("Digite o PIB:");
scanf(" %f", &PIB2);

printf("Quantos pontos turísticos tem na cidade?:");
scanf(" %d", &Pontos_Turisticos2);



//Cálculo da Densidade Populacional e do PIB per Capita
densidade = (float)Populacao / Area;
capita = (float)PIB / Populacao;
densidade2 = (float)Populacao2 / Area2;
capita2 = (float)PIB2 / Populacao2;

// Cálculo do Super Poder
superpoder1 = (float)Populacao + Area + PIB + (float)Pontos_Turisticos + capita + (Area / (float)Populacao);
superpoder2 = (float)Populacao2 + Area2 + PIB2 + (float)Pontos_Turisticos2 + capita2 + (Area2 / (float)Populacao2);

//Separador para melhor visualização
printf("----------------------------------------------------------\n");

//Print da Primeira carta
printf("Carta 1: \n");
printf("Estado:%c\n", Estado);
printf("Código:%s\nNome da Cidade: %s\n", Codigo, Cidade);
printf("População:%lu\n", Populacao);  
printf("Área: %.2f km²\nPIB:R$%.2f reais\n", Area, PIB);
printf("Número de Pontos Turísticos:%d\n", Pontos_Turisticos);
printf("Densidade Populacional:%.2f hab/km2\n", densidade);
printf("PIB per Capita:R$%.2f reais\n", capita);
printf("Super Poder: %.2f\n", superpoder1);

//Separador para melhor visualização
printf("----------------------------------------------------------\n");

//Print da Segunda Carta
printf("Carta 2: \n");
printf("Estado:%c\n", Estado2);
printf("Código:%s\nNome da Cidade:%s\n", Codigo2, Cidade2);
printf("População:%lu\n", Populacao2);  
printf("Área:%.2f km²\nPIB:R$%.2f reais\n", Area2, PIB2);
printf("Número de Pontos Turísticos:%d\n", Pontos_Turisticos2);
printf("Densidade Populacional:%.2f hab/km2\n", densidade2);
printf("PIB per Capita:R$%.2f reais\n", capita2);
printf("Super Poder: %.2f\n", superpoder2);

//Separador para melhor visualização
printf("----------------------------------------------------------\n");

//Comparação de Cartas
printf("Comparação de Cartas:\n");

printf("População: Carta %d venceu (%d)\n",
(Populacao > Populacao2) ? 1 : 2,
(Populacao > Populacao2)  
);

printf("Área: Carta %d venceu (%d)\n",
(Area > Area2) ? 1 : 2,
(Area > Area2)
);

printf("PIB: Carta %d venceu (%d)\n",
(PIB > PIB2) ? 1 : 2,
(PIB > PIB2)
);

printf("Pontos Turísticos: Carta %d venceu (%d)\n",
(Pontos_Turisticos > Pontos_Turisticos2) ? 1 : 2,
(Pontos_Turisticos > Pontos_Turisticos2)
);

printf("Densidade Populacional: Carta %d venceu (%d)\n",
(densidade < densidade2) ? 1 : 2,
(densidade < densidade2)
);

printf("PIB per Capita: Carta %d venceu (%d)\n",
(capita > capita2) ? 1 : 2,
(capita > capita2)
);

printf("Super Poder: Carta %d venceu (%d)\n",
(superpoder1 > superpoder2) ? 1 : 2,
(superpoder1 > superpoder2)
);

return 0;
}