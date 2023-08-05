#include <stdio.h>
int main(){
	
	int distancia; 
	int velocidade;
	
	printf("Digite a distancia percorrida em km: "); 
	scanf("%d", &distancia);
	
	printf("Digite a velocidade do veiculo em km/h: ");
	scanf("%d", &velocidade);
	
	printf("Será necessario percorrer %d horas para chegar ao destino", distancia / velocidade);
	
	return 0;
	
}
