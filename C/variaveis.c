//Declare variaveis 
#include <stdio.h>

int main(){
	float altura, peso;
	int idade;
	int eFumante;
	
	altura   = 1.54;
	peso     = 48.0;
	idade    = 20;
	eFumante = 0; // (true/false) qualquer valor diferente de 0 retorna true 
	
	printf("Altura e: %.2f\n", altura);
	printf("Peso e: %.2f\n", peso);
	printf("Idade e: %d\n", idade);
	
	if(eFumante == 0){
		printf("nao e fumante");
	} else {
		printf("e fumante");
	}
	
	return 0;
}
