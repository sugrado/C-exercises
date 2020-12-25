/* 
C(n,r)= n!/(r!.(n-r)!)
*/
#include <stdio.h>
#include <conio.h>
float comb(float n, float r){
	float nfact=1, rfact=1, nrfact=1, nr = n - r, result;
	for(float i=1; i<=n; i++){
		nfact *= i;
	}
	
	for(float j=1; j<=r; j++){
		rfact *= j;
	}

	for(float k=1; k<=nr; k++){
		nrfact *= k;
	}
	
	result = nfact / (rfact * nrfact);
	
	return result;
}

int main(){
	float a,b;
	
	printf("Enter the variables n and r.\n");
	printf("n="); scanf("%f", &a);
	printf("r="); scanf("%f", &b);
	printf("Result of the combination process: %.1f", comb(a, b));
	
	getch();
	return 0;
}

