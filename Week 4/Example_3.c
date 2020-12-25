/*
	Uppercase to lowercase, lowercase to uppercase.
*/
#include <stdio.h>
#include <conio.h>
int main(){
	char text[1000];
	
	printf("Enter the text: "); gets(text);
	
	int diff = 'a' - 'A';
	
	for(int i=0; text[i]!='\0'; i++){
		if(text[i]>='A' && text[i]<='Z'){
			text[i] += diff;
		}
		else if(text[i]>='a' && text[i]<='z'){
			text[i] -= diff;
		}
	}
	
	printf("Result: "); puts(text);
	
	getch();
	return 0;
}
