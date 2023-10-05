#include <stdio.h>
 
int main() {
 	
 	//variables
	int m, n;			//inputs
	int start, end;		//varibles for start and end of loops
	int sum = 0;		//sequence's sum
	

	do{
		scanf("%d %d", &m, &n);
		
		if(m <= 0 || n <= 0){
			break;
		}

		//defining the start and end for the later loops
		if(m > n){
			start = n;
			end = m;
		} else {
			start = m;
			end = n;
		}
	
	
		for(int i = start; i <= end; i++){
			printf("%d ", i);		
			sum+=i;
		}
		printf("Sum=%d\n", sum);
		
        //this is a crazy line to reset the sum counter, so it starts at 0 for the next iteration
		sum = sum - sum; 
	 			
	}while(m > 0 && n > 0);
	
 	
    return 0;
}