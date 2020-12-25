/*
	Passing grade calculation simulation.
*/
#include <stdio.h>
#include <conio.h>
int main(){
	int midterm_exam, final_exam, make_up_exam, passing_score;
	
	printf("Enter the midtern examination point: "); scanf("%d", &midterm_exam);
	printf("Enter the final examination point: "); scanf("%d", &final_exam);
	
	passing_score = midterm_exam*0.4 + final_exam*0.6;
	
	if(passing_score > 100){
		printf("Pass score cannot be greater than 100.");
	}
	else{
	
	if(passing_score >= 60){
		printf("You passed the lesson.");
	}
	else{
		printf("Enter the make-up exam point: "); scanf("%d", &make_up_exam);
		passing_score = midterm_exam*0.4 + make_up_exam*0.6;
		if(passing_score >= 60){
			printf("You passed the lesson.");
		}
		else{
			printf("You failed the lesson.");
		}
	}
}
	getch();
	return 0;
}

