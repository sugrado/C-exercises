/*
	The program that finds the largest, smallest, average and standard deviation 
	of 100 numbers entered from the keyboard.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <math.h> 
#include <conio.h> 
struct results{
	int greater;
	int smaller;
	double avg;
	double s_deviation;
};

struct results operations(int arr[100]){
	struct results b;
	int sum = 0, sum1=0;
	//Finding greater and smaller.
	int biggest = arr[0];
	for(int i=0; i<99; i++){ // 
		if(arr[i+1]>biggest) biggest = arr[i+1];
	}
	b.greater = biggest;
	
	int smallest = arr[0];
	for(int j=0; j<99; j++){
		if(arr[j+1]<smallest) smallest = arr[j+1];
	}
	b.smaller = smallest;

	//Finding avarage.
	for(int i=0; i<100; i++){
		sum += arr[i];
	}
	b.avg = (float)sum/100;

	//Finding standard deviation.
	for(int i=0; i<100; i++){
		sum1 += ((arr[i] - b.avg)*(arr[i] - b.avg));
	}
	b.s_deviation = sqrt((float)sum1 / 99);
	
	//Return.
	return b;
}

void show(struct results a){
	printf("The Biggest: %d\nThe Smallest: %d\nAvarage: %.2f\nStandart Deviation: %.2f", a.greater, a.smaller, a.avg, a.s_deviation);
}

int main(){
	int dizi[100];

	for(int i=0; i<100; i++){
		printf("Enter the %d element of the array: ", i+1);
		scanf("%d", &dizi[i]);
	}
	
	struct results c = operations(dizi);
	show(c);
	
	getch();
	return 0;
}
