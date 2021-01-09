/*
 * A - Simple Math 2
 */
//不正解

#include <stdio.h>

unsigned long N;
unsigned long M;
unsigned long result;
unsigned long value;

long  factorial(unsigned long N ,unsigned long value,unsigned long i){
	value *= 10;

	if (i < N) {
	i++;
	factorial(N ,value, i) ;
	}else{
		return 0;
	}
}


long main(void){
	scanf("%lu", &N);
	scanf("%lu", &M);

	long int i;


	i = 0;
	value = 1;

	factorial(N ,value, i);

	result = value / M;
	printf("%lu\n", result % M);

	return 0;
}

