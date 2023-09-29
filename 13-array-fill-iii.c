#include <stdio.h>

int main (){
	
	double n[100];
	double x;
	
	scanf("%lf", &x);
	
	//assigning x to index 0
	n[0] = x;
	
	for(int i = 1; i < 100; i++){
		x = x/2;	//dividing 
		n[i] = x;	//pushign the x-division into the array
	}
	
	//printing all stuff
	for(int i = 0; i < 100; i++){
		printf("N[%d] = %.4lf\n", i, n[i]);
	}
	
	return 0;
}