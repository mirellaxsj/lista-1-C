#include <stdio.h>
int main(){
	
    float raio, altura;
    float area, volume;
    float pi = 3.14;
	
	//Entradas
	
	printf("Digite um raio de um cilindro em cm:");
	scanf("%f",&raio);
	printf("Digite a altura do cilindro em cm:");
	scanf("%f",&altura);
	
	//Processamento
	
	float areaLat = 2 * pi * raio * altura;
	float areaBase = 2 * pi * raio * raio;
	area = areaLat + areaBase;
	volume = pi * raio * raio * altura;
	
	//Saída 
	
	printf("raio = %.2f\n" ,raio);
	printf("altura = %.2f\n" ,altura);
	printf("Area do cilindro = %.3f\n" ,area);
	printf("Volume do cilindro = %.3f\n" ,volume);
	return 0;	
}
