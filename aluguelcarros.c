#include <stdio.h>
#include <stdlib.h>

int main(){
	int mes, ano, carros, aluguel;
	
	printf("Digite o numero de carros:");
	scanf("%d", &carros);
	
	printf("Digite o valor dos carros:");
	scanf("%d", &aluguel);
	
	mes = carros + aluguel;
	ano = ((carros * 0.8) * aluguel) * 12;
	printf("Faturamento mensal de: %d", mes);
	printf("\nA receita anual considerando o aluguel de 80 por cento dos carros e: %d", ano);
}