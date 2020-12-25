/*
	The result of the addition, subtraction, multiplication and division of the 2 numbers entered.
*/
#include <stdio.h>
#include <conio.h>
int main() {
	int num1, num2, sum, minus, multiply;
	float divide;
	
	printf("Enter the first number: "); scanf("%d", &num1);
	printf("Enter the second number: "); scanf("%d", &num2);
	
	sum = num1 + num2;
	minus = num1 - num2;
	multiply = num1 * num2;
	divide = (float) num1 / num2;
	
	printf("%d + %d = %d\n", num1, num2, sum);
	printf("%d - %d = %d\n", num1, num2, minus);
	printf("%d x %d = %d\n", num1, num2, multiply);

	if(num2 != 0){
		printf("%d / %d = %.2f\n", num1, num2, divide);
	}
	else{
		printf("%d / %d = Undefined\n", num1, num2);
	}

getch();
return 0;
}
