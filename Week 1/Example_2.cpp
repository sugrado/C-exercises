/*
	The program that finds the largest of the two numbers entered.
*/
#include <stdio.h>
#include <conio.h>
int main(){
	int num1, num2;
	
	printf("Enter the first number: "); scanf("%d", &num1);
	printf("Enter the second number: "); scanf("%d", &num2);
	
	if (num1>num2){
		printf("The biggest number is: %d", num1);
		getch();
	}
	else if (num1 == num2){
		printf("Number 1 equals to number 2.");
		getch();
	}
	else{
		printf("The biggest number is: %d", num2);
		getch();
	}
	
	return 0;
}
