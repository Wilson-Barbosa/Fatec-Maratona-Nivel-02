#include <stdio.h>

int main (){
	
	//defining my array
	int x[10];
	int num;
	
	//reading the input 
	for(int n = 0; n < 10; n++){
		scanf("%d", &num);
		
		//checking if the number is negative or zero
		if(num <= 0){
			num = 1;
		}
		//pushing each number (altered or not) into the array
		x[n] = num;
	}
	
	
	//printing things out
	for(int i = 0; i < 10; i++){
		printf("X[%d] = %d\n", i, x[i]);
	}
	
	return 0;
}