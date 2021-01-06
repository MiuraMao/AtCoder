/*
 * A - Large Digits
 */

#include <stdio.h>

int A;
int B;
int sumA;
int sumB;

int main(void){
	scanf("%d", &A);
	scanf("%d", &B);

	if(A>=100 && A<=999 & B>=100 && B<=999){
		sumA = 0;
		sumB = 0;
		sumA = A/100;
		sumA = sumA + ((A-(sumA*100))/10);
		sumA = sumA + ((A-(sumA*10))%10);

		sumB = B/100;
		sumB = sumB + ((B-(sumB*100))/10);
		sumB = sumB + ((B-(sumB*10))%10);

	}
	if(sumA > sumB){
		printf("%d\n", sumA);
	}else if(sumA < sumB){
		printf("%d\n", sumB);
	}else if(sumA == sumB){
		printf("%d\n", sumA);
	}
	return 0;
}
