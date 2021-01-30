/*
 * A - Very Very Primitive Game
 *
 */

#include <stdio.h>


int A;
int B;
int C;

int main(void){

scanf("%d",&A);
scanf("%d",&B);
scanf("%d",&C);

if (C == 0){
	do{
		A -= 1;
		B -= 1;
    }while(A!=0 & B!=0);
	if (A==0){
		printf("Aoki\n");
    }else{
		printf("Takahashi\n");
    }
}else{
	do{
		B -= 1;
		A -= 1;
    }while(A!=0 && B!=0);
	if (B==0){
		printf("Takahashi\n");
    }else{
		printf("Aoki\n");
    }
}
return 0;
}

