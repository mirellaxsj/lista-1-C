#include <stdio.h>
int main (){
	//Declara��oo de vari�veis
	int a, b, c, x;
	
	//Entrada
	printf("Digite tr�s numeros inteiros:");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	//Processamento
	x = (a + b ) / c;
	
	//sa�da
	printf("a = %d\nb = %d\nc = %d\n", a, b, c);
	printf("O Resultado da expressao ( a + b ) / c = %d", x);
	return 0;
}
