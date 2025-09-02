#include <stdio.h>
#include <conio.h>

//4.	POR VALOR - Uma empresa deseja especificar um programa para gerar sua folha de pagamentos. Seu programa deve:

//a.	Fazer uma função que leia e retorne o salário_bruto;
//b.	Fazer uma função que leia e retorne o total de horas extras;
//c.	Fazer uma função que leia e retorne os descontos;
//d.	Fazer uma função que receba o total de horas extras e retorne os valores correspondes a essas horas sabendo que cada hora extra custa R$ 20,00;
//e.	Fazer uma função que calcule e retorne o salário bruto total passando por parâmetro as informações necessárias para isso;
//f.	Fazer um procedimento que calcule e exiba o salário líquido do funcionário passando por parâmetros as informações necessárias.

float salario(){
	float sal_bruto;
	printf("Digite o salario: ");
	scanf("%f", &sal_bruto);
	
	return sal_bruto;
}

float horaEx(){
	float extra;
	printf("Digite as horas extras: \n");
	scanf("%f", &extra);
	
	return extra;
}

float desc(){
	float desc1;
	printf("Digite o valor de desconto: \n");
	scanf("%f", &desc1);
	
	return desc1;	
}

float valor_extra(float *horas_extras){
	float valor_novo;
	valor_novo = *horas_extras * 20;
	
	return valor_novo;
}

float bruto_total(float *salar, float *valor_hora_extra){
	float bruto;
	bruto = *salar + *valor_hora_extra;
	
	return bruto;
}

void valor_liq(float *valor_bruto, float *descontos){
	float liquido;
	liquido = *valor_bruto - *descontos;
	
	printf("O salario desta pessoa eh: %0.2f \n\n", liquido);
}

void main(){
	int i = 1;
	float salar, descontos, valor_hora_extra, horas_extras, valor_bruto;
	
	while(i <= 5){
	
	printf("Pessoa numero %d\n\n", i);
		
	salar = salario();
	printf("Salario bruto: R$%0.2f \n\n", salar);
	
	horas_extras = horaEx();
	printf("%0.2f horas extras. \n\n", horas_extras);
	
	descontos = desc();
	printf("R$%0.2f de desconto. \n\n", descontos);
	
	valor_hora_extra = valor_extra(&horas_extras);
	printf("Valor das horas extras: R$%0.2f \n\n", valor_hora_extra);
	
	valor_bruto = bruto_total(&salar, &valor_hora_extra);
	printf("Valor bruto total: R$%0.2f \n\n", valor_bruto);	
	
	valor_liq(&valor_bruto, &descontos);
	i++;
	system("pause");
	system("cls");
	}
}
