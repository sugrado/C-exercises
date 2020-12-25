/*
	The program that finds whether the word is written in the written sentence without using ready-made functions
*/
#include <stdio.h>
#include <conio.h>
int main(){
	int textlong=0, findlong=0, check1=0, check2=0, m=0;
	char text[1000], finding[73];
	
	printf("Enter the text:");
	gets(text);
	printf("Your text:"); puts(text); printf("\n");
	printf("Enter the finding word:"); gets(finding);
	
	for(int i=0; text[i]!='\0'; i++){ // Finds how many characters the search text is.
		textlong++;
	}
	
	for(int i=0; finding[i]!='\0'; i++){ // Finds how many characters the search word is.
		findlong++;
	}
	
	for(m = 0; m<textlong; m++){
		if(text[m]==finding[0]){
			check1=0;
			for(int j=0; j<findlong; j++){
				if(text[m]==finding[j]){
					check1++;
				}
				m++;
			}
			if(check1==findlong){
				check2++; // Word checker
				printf("Starts at %d. index.\n", (m-findlong)+1);
			}
		}
	}
	
	if(check2==0) printf("Not found.");
	else printf("Result: %d found. Index information is given above.", check2);
	
	getch();
	return 0;
}
