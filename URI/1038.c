#include <stdio.h>
#define Cachorro_quente 4.00
#define X_salada 4.50
#define X_bacon 5.00
#define Torrada_simples 2.00
#define Refrigerante 1.50
	

int main(){
	
	int x, y;
	
	scanf("%d%d", &x, &y);
	
	if (x == 1){
		printf("Total: R$ %.2f\n", (float)y * Cachorro_quente);
	} else if (x == 2){
		printf("Total: R$ %.2f\n", (float)y * X_salada);
	} else if (x == 3){
		printf("Total: R$ %.2f\n", (float)y * X_bacon);
	} else if (x == 4){
		printf("Total: R$ %.2f\n", (float)y * Torrada_simples);
	} else if (x == 5){
		printf("Total: R$ %.2f\n", (float)y * Refrigerante);
	}
	
	return 0;
}