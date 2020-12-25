/*
	The program that creates the following shape using loop and array
*/
/*
							* * * * *
							* ? ? ? *
							* ? # ? *
							* ? ? ? *
							* * * * *
*/
#include <stdio.h>
#include <conio.h>
int main(){
	char array1[5][5];
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			
			if(i==0 || i==4 || j==0 || j==4) array1[i][j] = '*';
			
			else if(i==1 || i==3 || j==1 || j==3) array1[i][j] = '?';
			
			else array1[i][j] = '#';
		}
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
		
			printf(" %c ", array1[i][j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
