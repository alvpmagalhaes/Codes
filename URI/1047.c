#include <stdio.h>

int main(){
	
	
	int start, end, lasted, minutes, minutes_start, end_minutes;
	
	scanf("%d%d%d%d", &start, &minutes_start, &end, &end_minutes);
	
	if((start == 0)&&(end==0)){
		
		minutes = (minutes_start - end_minutes);
		
		if(minutes < 0){
			minutes = minutes * -1;
		}
		
		printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n", minutes);
	} else if ((start <= 12)&&(end <= 12)){
			lasted = (start-12)-(end-12);
			minutes = (minutes_start - end_minutes);
			if(minutes < 0){
				minutes = minutes * -1;
			}
	} else if ((start <= 12)&&(end >= 13)){
		lasted = (12-start)+(end-12);
		minutes = (minutes_start - end_minutes);
		
		if(minutes < 0){
			minutes = minutes * -1;
		}
	} else if ((start >= 13)&&(end <= 12)){
		lasted = (24-start)+end;
		minutes = (minutes_start - end_minutes);
		
		if(minutes < 0){
			minutes = minutes * -1;
		}
	} else if ((start >= 13)&&(end >= 13)){
		lasted = (24-start)+end;
		minutes = (minutes_start - end_minutes);
		
		if(minutes < 0){
			minutes = minutes * -1;
		}
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", lasted, minutes);
	
	
	return 0;
}