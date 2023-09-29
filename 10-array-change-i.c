#include <stdio.h>

int main (){
	
	int n[20];
	int num;
	int a, b;       //they will store the array's elements temporarily for change
	int j = 19;
	
	//reading and assigning numbers into the array
	for(int i = 0; i < 20; i++){
		scanf("%d", &num);
		n[i] = num;
	}
	
    //loop until half of the array
	for(int i = 0; i < 10; i++){
		
		//i created this variable to catch the first and last elements
		a = n[i];
		b = n[j];
		
		//now i just change assign the values to new positions
		n[i] = b;	
		n[j] = a;
		
		j-=1; //making sure i can access the 19th, 18th, 17th... indexes
	}

	
	//prints out the result
	for(int i = 0; i < 20; i++){
		printf("N[%d] = %d\n", i, n[i]);
	}
	
	return 0;
}