#include <stdio.h>

int main (){
	
	int n[10];
	int num;
	
	//reading the number
	scanf("%d", &num);
	
	//assigning to index 0
	n[0] = num;
	
	for(int i = 1; i < 10; i++){
		num = num*2; 	//doubles num at the current iteration 
		n[i]= num;		//pushing into n[] 
	}
	
	//printing the array	
	for(int j = 0; j < 10; j++){
		printf("N[%d] = %d\n", j, n[j]);
	}
	
	return 0;
}