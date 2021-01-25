#include <stdio.h>
#define N 20

int main(){
	
	int Fibonacci[N];
	
	// Initial Conditions
	Fibonacci[0]=0;
	Fibonacci[1]=1;
	
	int i;
	for(i=2; i<N; i++){
		Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];

	}
	for(i=0; i<N; i++){
		
		printf("> Fibonacci[%d] = %d\n", i , Fibonacci[i]);

	}
	
	
return 0;	
}
