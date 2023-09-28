#include <stdio.h>

int main (){
	
	int n;
	int x, y;	//test case pair
	int start, end;	//loop's 'boundaries'
	int sum;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d %d", &x, &y);
		
		//making sure the loop's limit is correct
		if(x > y){
			start = y;
			end = x;
		} else {
			start = x;
			end = y;
		}
		
		for(int j = start + 1; j < end; j++){
			if(j%2 != 0){  	//checks if j is odd
				sum = sum + j;	//increases the sum if j is odd
			}
		}
		
		printf("%d\n", sum);
		
		sum = 0; //line that resets the sum's value to 0
	}
	
	return 0;
}