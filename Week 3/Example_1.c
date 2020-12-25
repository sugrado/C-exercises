/*
	Program that calculates the sum of the values in the double indices of a 20-term array divided by the largest value.
*/
#include <stdio.h>
#include <conio.h>
int main(){
	int array1[20], sum, biggest;
	sum = 0;
	
	for(int i=0; i<20; i++){
		printf("Enter the %d. term of the array-->", i+1); scanf("%d", &array1[i]);
	}
	
	biggest = array1[0];
	
	for(int a=0; a<19; a++){
		
		if(array1[a+1] > biggest){
		
			biggest = array1[a+1];
		}
	}
	
	for(int j=0; j<20; j+=2){
	
		sum += array1[j];
	}
	
	printf("Sum of even index terms: %d\n", sum);
	printf("The biggest term in the array: %d\n", biggest);
	
	if(biggest==0) printf("The result of the division is undefined since the largest value is zero..");
	else printf("The result of dividing the sum of numbers by the largest term: %.2f", (float)sum/(float)biggest);
	
	getch();
	return 0;
}
