#include <stdio.h>
int main (){
	//Declaraçãoo de variáveis
	int a, b, c, x;
	
	//Entrada
	printf("Digite três numeros inteiros:");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	//Processamento
	x = (a + b ) / c;
	
	//saída
	printf("a = %d\nb = %d\nc = %d\n", a, b, c);
	printf("O Resultado da expressao ( a + b ) / c = %d", x);
	return 0;
}
