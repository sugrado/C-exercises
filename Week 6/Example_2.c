/*
	* Student grading system simulation with structs.
	* For 5 students and 5 lessons.
*/
#include <stdio.h>
#include <conio.h>
struct lesson{
	int course_code;
	int midterm_grade;
	int final_grade;
	double passing_grade;
};

struct personal_information{
	char name[40];
	char lname[40];
	int student_number;
	struct lesson lessons[5];
}stdnt[5];

int main(){
	printf("------------------------------------------ATTENTION--------------------------------------------\nEnter the student information in the form of name, surname, student number with a space between them.\n");
	printf("Enter the midterm grade and final grade information in the form of midterm grade, final grade with a space between them.\n");
	printf("After entering all data, the data of the students and their passing status will be written on the screen.\n");
	printf("--------------------------------------------------------------------------------------------------\n\n");
	for(int i=0; i<5; i++){
		printf("Student %d Information: ", i+1);
		scanf("%s %s %d", &stdnt[i].name, &stdnt[i].lname, &stdnt[i].student_number);
		for(int j=0; j<5; j++){
			printf("Enter the course code of lesson %d: ", j+1);
			scanf("%d", &stdnt[i].lessons[j].course_code);
			incorrect: printf("Midterm and final grade : ", i+1, j+1);
			scanf("%d %d", &stdnt[i].lessons[j].midterm_grade, &stdnt[i].lessons[j].final_grade);
			if(stdnt[i].lessons[j].midterm_grade>100 || stdnt[i].lessons[j].final_grade>100 || stdnt[i].lessons[j].midterm_grade<0 || stdnt[i].lessons[j].final_grade<0){
				printf("Grades must be between 0 and 100. Try again.\n");
				goto incorrect;
			}
			stdnt[i].lessons[j].passing_grade = (stdnt[i].lessons[j].midterm_grade*0.4) + (stdnt[i].lessons[j].final_grade*0.6);
		}
	}
	
	for(int a=0; a<5; a++){
		printf("\n-------- %s %s --------\n", stdnt[a].name, stdnt[a].lname);
		printf("Student Number: %d\n", stdnt[a].student_number);
		printf("---------------------------\n");
		for(int b=0; b<5; b++){
			printf("Success Status of %d Coded Course\n", stdnt[a].lessons[b].course_code);
			printf("Midterm Grade: %d\n", stdnt[a].lessons[b].midterm_grade);
			printf("Final Grade: %d\n", stdnt[a].lessons[b].final_grade);
			if(stdnt[a].lessons[b].passing_grade >= 50) printf("Passing Grade: %.2f (Successful)\n", stdnt[a].lessons[b].passing_grade);
			else printf("Passing Grade: %.2f (Unsuccessful)\n", stdnt[a].lessons[b].passing_grade);
			printf("---------------------------\n");
		}
	}
	getch();
	return 0;
}
