#include <stdio.h>

int main(){
	
	int x, n=5, par=0;
	
	while(n > 0){
		
		scanf("%d", &x);
		
		if(x%2==0){
			par++;
		}
		n--;
	}
	
	printf("%d valores pares\n", par);
	
	return 0;
}