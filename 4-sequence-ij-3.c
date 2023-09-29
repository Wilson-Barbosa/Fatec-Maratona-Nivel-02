#include <stdio.h>

int main (){
	
	int i;
	int j = 7;
	
	for(int i = 1; i < 10; i+=2){
		
		for(int n = 0; n < 3; n++){
			printf("I=%d J=%d\n", i, j);
			j--;
		}
		
		//i need to increase j's value by 5 for the outer iteration
		j = j+5;
	}
	
	return 0;
}