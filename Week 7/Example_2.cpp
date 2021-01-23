/*
	A program that sorts randomly assigned elements in A and B arrays and transfers them to a C array.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main(){
    int a[10], b[10], c[20], temp_a[2], temp_b[2];
    
	srand(time(NULL));
    
    for(int i=0; i<10; i++){
        a[i] = rand() % 100;
        b[i] = rand() % 100;
    }
    
    printf("'A' array: ");
    for(int i=0; i<10; i++){
    	printf(" %d ", a[i]);
	}
	
    printf("\n'B' array: ");
    for(int i=0; i<10; i++){
    	printf(" %d ", b[i]);
	}

    for(int i=0; i<20; i++){
        temp_a[1] = -1;
		temp_a[0] = -1;
		temp_b[1] = -1;
		temp_b[0] = -1;
        
        for(int x=0; x<10; x++) {
			if(a[x] > temp_a[0]){
				temp_a[0] = a[x];
				temp_a[1] = x;
			}
        }
        
        for(int y=0; y<10; y++){
			if(b[y] > temp_b[0]){
				temp_b[0] = b[y];
				temp_b[1] = y;
			}
        }
        
        if (temp_b[0] > temp_a[0]){
			b[temp_b[1]] = -1;
			c[i] = temp_b[0];
		}
        else{ //temp_b[0] < temp_a[0]
			a[temp_a[1]] = -1; 
			c[i] = temp_a[0];
		}
    }
    
    printf("\n'C' array: ");       
    for(int i=0; i<20; i++){
    	printf(" %d ", c[i]); 
	}
	
	getch();
	return 0;
}
