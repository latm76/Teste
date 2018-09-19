#include <stdio.h>
#include <stdlib.h>
int main()
{
	int despesas;
	int qtde;
	float fat,maxfat,melhorpreco;
	despesas = 2000;
	qtde = 120;
	maxfat = 0;
	for (float preco=50;preco>=10;preco = preco-5)
	{
		fat = preco * qtde - despesas;
		if (fat > maxfat)
		{
			maxfat = fat;
			melhorpreco = preco;
		}
		printf("R$ %4.2f - Ingressos: %d - Faturamento: R$ %4.2f\n",preco, qtde,fat);
		qtde = qtde + 26;
	}
	printf("\n\nPreco para maximo faturamento: R$ %4.2f\n\n",melhorpreco);
	system("pause");
	return 0;
}
