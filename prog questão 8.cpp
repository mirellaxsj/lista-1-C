#include <stdio.h>
int main(){
	
	//declara��o de vari�veis
	int a, b, c, x;
	
	//entrada
	printf("Digite tr�s n�meros inteiros separados por espa�os:");
	scanf("%d %d %d",&a, &b, &c);
	
	//processamento
	x = (a + b) / c;
	
	//sa�da
	printf("a = &d\nb = %d\nc = %d\n", a, b, c);
	printf("0 resultado da express�o (a + b) / c = %d",x);
	return 0;
}
