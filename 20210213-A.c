/*
 *A - B = C
 */

//不正解
#include <stdio.h>

int main(void)
{
	int T, L, R, i, j, k;
	int count;
	int result[20000];
	int buf[50000];
	scanf("%d", &T);
for(k=0;k<=T;k++){
    fgets(buf,sizeof(buf), stdin);
    sscanf("%d%d", &L, &R);
		for(i=1; buf[i]!=NULL; i++){
			for (j = R; j>=L; j--){
				if(R-j >= L){
					count++;
				}
			}
	result[i] = count;
	}
	for(i = 0; i<=T; i++){
		printf("%d\n",result[i]);
	}
}
	return 0;
}


