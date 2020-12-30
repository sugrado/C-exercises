/*
	Printing user-entered data to the screen using structs.
*/
#include <stdio.h>
#include <conio.h>
struct workman{
	char name[30];
	char lname[30];
	int age;
	double monthly_salary;
};

struct workman getInfo(){
	struct workman b;
	printf("Enter the employee information in the form of name, surname, age, monthly salary with a space between them.\nWrite Here-->");
	scanf("%s %s %d %lf", &b.name, &b.lname, &b.age, &b.monthly_salary);
	return b;
}

void show(struct workman a){
	printf("\n-----------------Workman Information-----------------\n Name: %s\n Last Name: %s\n Age: %d\n Monthly Salary: %.2f dollars.\n", a.name, a.lname, a.age, a.monthly_salary);
}

int main(){
	struct workman wman1 = getInfo();
	show(wman1);
	getch();
	return 0;
}
