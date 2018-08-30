#include <stdio.h>

int main(){
	
	
	int start, end, lasted;
	
	scanf("%d%d", &start, &end);
	
	if((start == 0)&&(end==0)){
		printf("O JOGO DUROU 24 HORA(S)\n");
	} else if ((start <= 12)&&(end <= 12)){
		lasted = (start-12)-(end-12);
		printf("O JOGO DUROU %d HORA(S)\n", lasted);
	} else if ((start <= 12)&&(end >= 13)){
		lasted = (12-start)+(end-12);
		printf("O JOGO DUROU %d HORA(S)\n", lasted);
	} else if ((start >= 13)&&(end <= 12)){
		lasted = (24-start)+end;
		printf("O JOGO DUROU %d HORA(S)\n", lasted);
	} else if ((start >= 13)&&(end >= 13)){
		lasted = (24-start)+end;
		printf("O JOGO DUROU %d HORA(S)\n", lasted);
	}
	
	return 0;
}