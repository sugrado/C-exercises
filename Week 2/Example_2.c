/*
	Program that calculates the sum and average of even numbers up to the number entered.
*/
#include <stdio.h>
#include <conio.h>
int main(){
    int i, num, num_count, sum, avg;
    
    num_count = 0;
    sum = 0;
    
    printf("Enter the number: "); scanf("%d", &num);
    for(i=1; i<=num; i++){
        if(i % 2 == 0){
            sum+=i;
            num_count++;
        }
    }
    
    if(num <= 1){
        printf("You must enter a number greater than 1.");      
		return 0; 
    }
    
    avg = sum/num_count;
    
    printf("Sum: %d\n", sum);
    printf("Avarage of nums: %d", avg);
    
    getch();
    return 0;   
}

