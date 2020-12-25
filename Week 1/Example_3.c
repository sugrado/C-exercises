/*
	The program that calculates the average of 3 numbers entered.
*/
#include <stdio.h>
#include <conio.h>
int main(){
	int num1, num2, num3;
	float avg, sum;
	
	printf("Enter the first number: "); scanf("%d", &num1);
	printf("Enter the second number: "); scanf("%d", &num2);
	printf("Enter the third number: "); scanf("%d", &num3);
	
	sum = num1 + num2 + num3;
	avg = sum / 3;
	
	printf("The avarage of numbers: %.2f", avg);
	
	getch();
	return 0;
}
