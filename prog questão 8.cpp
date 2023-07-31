#include <stdio.h>
int main(){
	
	//declaração de variáveis
	int a, b, c, x;
	
	//entrada
	printf("Digite três números inteiros separados por espaços:");
	scanf("%d %d %d",&a, &b, &c);
	
	//processamento
	x = (a + b) / c;
	
	//saída
	printf("a = &d\nb = %d\nc = %d\n", a, b, c);
	printf("0 resultado da expressão (a + b) / c = %d",x);
	return 0;
}
