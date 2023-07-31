#include <stdio.h>
int main(){
   int velocidade;
   int distancia;
   printf("Digite a velocidade em km/h");
   scanf("%d",&velocidade);
   
   
   printf("Digite a distancia em km/h");
   scanf("%d",&distancia);
   int tempo = distancia / velocidade;
   return 0;
}
   
   
