/*
	The program that finds the first 10 prime numbers after the entered number.
*/
#include <stdio.h>
int main(){
	int num, i, counter=0, check=0, arr[10], h=1;
	here: printf("Enter the number:"); scanf("%d", &num);
	if(num<1){
		printf("Please enter a positive value.\n");
		goto here;
	}
	printf("Next first 10 prime numbers:\n");
	for(i=num+1; check<10; i++){
		counter=0;
		for(int j=2; j<i; j++){
			if(i%j==0){
				counter=1;
				break;
			}else counter=0;
		}
		if(counter==0){
			check++;
			printf("%d. prime number: %d\n", h, i);
			h++;
		}
	}
}
