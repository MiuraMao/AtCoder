/*
 * A - Three-Point Shot
 */

#include <stdio.h>

int main(void){
	int X, Y;

	scanf("%d", &X);
	scanf("%d", &Y);
	if(X > Y){
		if(X - Y < 3 && X - Y != 0){
			printf("Yes\n");
    	}else{
			printf("No\n");
    	}
    }else{
		if(Y - X < 3 && Y - X != 0){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
    }
	return 0;
}
