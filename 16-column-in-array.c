#include <stdio.h>

int main(){
	
	float m[12][12];	//matrix structure
	float num;			//float value to scan and push to the matrix
	
	char operation;
	int column;
	
	
	//asking what row should I make the operation
	scanf("%d", &column);
	
	//the programm was bugging out and I saw that adding this would prevent any input buffer problems!
	getchar();
	
	//asking what operation to be performed
	scanf("%c", &operation);
	
	
	//reads each number and stores it 	
	for(int i = 0; i < 12; i++){		//loop for rows 
		for(int j = 0; j < 12; j++){	//loop for columns
			scanf("%f", &num);
			m[i][j] = num;
		}
	}
	
	
	//if operation = s then add all numbers:
	if(operation == 'S'){
		
		float sum = 0;
		
		for(int i = 0; i < 12; i++){
			sum = sum + m[i][column];		//iterates and adds each member of that particular row		
		}
		
		printf("%.1f\n", sum);
	}
	
	
	//if operation = m then show the average:
	if(operation == 'M'){
		
		float sum = 0;
		float average;
		
		for(int i = 0; i < 12; i++){
			sum = sum + m[i][column];
		}
		
		average = sum/12;	//calculates the average from the sum of numbers
		
		printf("%.1f\n", average);
	}
	
	return 0;
	
}