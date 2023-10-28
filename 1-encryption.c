#include <stdio.h>
#include <string.h>

int main(){
	
	
	int num; 				//number of test cases
	char message[1002]; 	// max number of any string
	
	scanf("%d", &num);
	getchar(); // This getchar will capture the '\n' at the end of the line where the number of test cases is.
	
	for(int n = 0; n < num; n++){
		fgets(message, sizeof(message), stdin);		//reading a message

		
		int length = strlen(message) -1 ;	//defining the size of my string	
		int numbers[length];			//creating a temporary array to store the correspondent numbers
		
		//transforming into numbers
		for(int j = 0; j < length; j++){
			numbers[j] = (int)message[j] - 0;	//returns the number correspondent to the char and stores it in numbers[]
		}
		
		
	
		/* FIRST READ */
		//this checks if the element is upper or lowercase then it's send 3 positions to the right (+3)
		for(int i = 0; i < length; i++){
			if(numbers[i] >= 65 && numbers[i] <= 90 || numbers[i] >= 97 && numbers[i] <= 122){
				numbers[i] = numbers[i] + 3;
			}
		}
		
		
		
		/* SECOND READ */	
		//now to reverse the elements
		int reverse[length];
		for(int i = 0; i < length; i++){
			reverse[i] = numbers[length-i-1];
		}
	
		
		
		/* THIRD READ */
		//now to send the later half will be send 1 position to the left (-1)
		for(int i = length/2; i < length; i++){
			reverse[i] = reverse[i]-1; 
		}
		
		
		
		/* finally to take the numbers and change to their characters */
		for(int i = 0; i < length; i++){
			printf("%c", (char)(reverse[i]));
		}
		printf("\n");
	}
	

	return 0;
}