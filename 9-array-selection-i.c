#include <stdio.h>

int main (){
	
	float a[100];
	float num;
	
	//reading and assigning values
	for(int i = 0; i < 100; i++){
		scanf("%f", &num);
		a[i] = num;
	}
	
	
	for(int j = 0; j < 100; j++){
		
		//filtering the printed output
		if(a[j] <= 10){
			printf("A[%d] = %.1f\n", j, a[j]);
		}
		
	}
	
	return 0;
}