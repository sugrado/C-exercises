/*
	Student grading system simulation with structs.
*/
#include <stdio.h>
#include <conio.h>
struct lesson{
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
	printf("----------ATTENTION----------\nEnter the student information in the form of name, surname, student number with a space between them. \nEnter the midterm grade and final grade information in the form of midterm grade, final grade with a space between them.\nEnter grades between 0 and 100 only.\nYou can start entering data by pressing the enter key.\n");
	getch();
	for(int i=0; i<5; i++){
		printf("Student %d Information: ", i+1);
		scanf("%s %s %d", &stdnt[i].name, &stdnt[i].lname, &stdnt[i].student_number);
		for(int j=0; j<5; j++){
			printf("Student %d  %d. final grade : ", i+1, j+1);
			scanf("%d %d", &stdnt[i].lessons[j].midterm_grade, &stdnt[i].lessons[j].final_grade);
			stdnt[i].lessons[j].passing_grade = (stdnt[i].lessons[j].midterm_grade*0.4) + (stdnt[i].lessons[j].final_grade*0.6);
			if(stdnt[i].lessons[j].passing_grade>=50){
				printf("Student number %d passed the %d. lesson with a GPA of %.2f\n", stdnt[i].student_number, j+1, stdnt[i].lessons[j].passing_grade);
			}
			else {
				printf("Student number %d failed the %d. lesson with a GPA of %.2f\n", stdnt[i].student_number, j+1, stdnt[i].lessons[j].passing_grade);
			}
		}
	}
	getch();
	return 0;
}
