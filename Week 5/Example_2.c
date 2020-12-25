/*
	Write the function that sums the digits of the integer.
	(Kendisine parammetre olarak gelen tam say�n�n basamak de�erlerini toplayan fonksiyonu yaz�n�z.)
*/
#include <stdio.h>
#include <conio.h>
int sumofdigits(int x){
	int a, sums = 0;
	
	while(x>0){
		a = x % 10;
		sums += a;
		x = x - a;
		x = x / 10;
	}
	
	return sums;
}

int main(){
	int b;
	
	printf("Enter the number: "); scanf("%d", &b);
	printf("Sum of digits: %d", sumofdigits(b));
	
	getch();
	return 0;
}
