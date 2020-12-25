/*
	How many words in the text?
*/
#include <stdio.h>
#include <conio.h>
int main(){
	int count = 0;
	char text[2000];
	
	printf("Enter the text: ");
	gets(text);
	
	for(int i=0; text[i]!='\0'; i++){
		if(text[i]==' ') count++;
	}
	
	printf("There are %d words in the text.", count+1);
	
	getch();
	return 0;
}

