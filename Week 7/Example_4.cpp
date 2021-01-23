/*
	The program that finds how many words are in the typed text.
*/
#include <stdio.h>
#include <math.h>
int main(){
   char text[100];
   int constant = 0, counter[94] = {0};
   
   printf("Enter the text: \n");
   gets(text);
   
   while (text[constant] != '\0'){
	if (text[constant] >= '!' && text[constant] <= '~') counter[text[constant]-'!']++;
    constant++;
   }
   
   for (constant = 0; constant < 94; constant++){
      if (counter[constant] != 0) printf(" %c  used %d times.\n",constant+'!',counter[constant]);
   }
   
   return 0;
}
