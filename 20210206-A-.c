/*
 *A - Vanishing Pitch
 */
//不正解

#include <stdio.h>

int main(void)
{
	int V;
	int T;
	int S;
	int D;
	scanf("%d %d %d %d",&V,&T,&S,&D);
	if (V >= 1 && T >= 1 && S >= 1 && D >= 1){
		if(D/V >= T && D/V <=S){
			printf("No\n");
		}else if(D/V >=1 && D/V > S){
		printf("Yes\n");
		}
	}
}
