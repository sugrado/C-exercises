/*
	Is prime?
	(Kendisine parametre olarak gelen tam sayýnýn asal olup olmadýðýný belirleyen fonksiyonu yazýnýz.)
*/
#include <stdio.h>
#include <conio.h>
int isprime(int x){
	if(x<2) return 0;
	
	for(int i=2; i<x; i++){
			if(x%i==0) return 0;
	}
	
	return 1;
}

int main(){
	int a;
	
	printf("Enter the Number: "); scanf("%d", &a);
	if(isprime(a)==1) printf("Your number is prime.");
	else printf("Your number is not prime.");
	
	getch();
	return 0;
}
