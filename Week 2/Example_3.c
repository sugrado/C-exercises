/*
	The program that calculates the arithmetic mean of odd numbers and geometric mean of even ones among 4 numbers entered.
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	int i, num, odd_sums, even_multiply, odd_count, arithmetic;
	float geometric, even_count;
	
	odd_sums = 0;
	even_multiply = 1;
	odd_count = 0;
	even_count = 0;
	
	for(i=0; i<4; i++){
		printf("Enter the number: "); scanf("%d", &num);
		if(num%2==0){
			even_multiply *= num;
			even_count++;
		}
		else{
			odd_sums += num;
			odd_count++;
		}
	}
	
	arithmetic = odd_sums/odd_count;
	geometric = pow(even_multiply, 1/even_count);
		
	printf("Arithmetic avarage of odd numbers: %d\n", arithmetic);
	printf("Geometric avarage of even numbers: %.2f", geometric);
	
	getch();
	return 0;
	}
