#include <stdio.h>

int main(){
	
	//arrays
	int par[5];
	int impar[5];
	
	//counters
	int m = 0;
	int n = 0;
	
	int num;
	

	for(int i = 0; i < 15; i++){
		scanf("%d", &num);
		
		//executes if num is even
		if(num % 2 == 0){
			par[m] = num;
				
			//if the par is full then I print it		
			if(m == 4){
				for(int j = 0; j < 5; j++){
					printf("par[%d] = %d\n", j, par[j]);
				}
				m = -1;		//resets the par index
				
				//then i need to clear my array apparently
				for(int a = 0; a < 5; a++){
					par[a] = NULL;
				}
			}
			m+=1;			//increments until the par is full
		
		//executes if num is odd	
		} else {
			impar[n] = num;
			
			if(n == 4){
				for(int k = 0; k < 5; k++){
					printf("impar[%d] = %d\n", k, impar[k]);
				}
				n = -1;		//resets the impar index
				
				//then i need to clear my array apparently
				for(int b = 0; b < 5; b++){
					impar[b] = NULL;
				}
			}
			n+=1;			//increments until the par is full
		}
	}
	
	//prints the impar array (except the ones that are zero) 
	for(int i = 0; i < 5; i++){
		if(impar[i] != 0){
			printf("impar[%d] = %d\n", i, impar[i]);
		}
	}
	
	//prints the par array (except the ones that are zero)
	for(int i = 0; i < 5; i++){
		if(par[i] != 0){
			printf("par[%d] = %d\n", i, par[i]);
		}	
	}
	
	return 0;
}