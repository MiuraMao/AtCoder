/*
 * B - Orthogonality
 */

//実行時エラー
#include <stdio.h>

int main(void){
	char N;
	char n;
	char buff[400];
	char A[200];
	char B[200];
	int i;
	int j;
	int k;
	int result;

	fgets(n ,sizeof(n), stdin);
	sscanf(N, "%S", &n);
//	scanf("%d", &A);
//	scanf("%d", &B);

	fgets(buff, sizeof(buff), stdin);

//	fgets(B, 3, stdin);

	for(j=1; buff[j]!=0; j++){
		A[j] = buff[i];
	}
	for(k=j+1; buff[k]!=0; k++){
		B[k] = buff[k];
	}

	result = 0;
	for(i=0; i!=N/2-1; i++){
		result = result + (int)A[i] * (int)B[i];
}

	if (result == 0){
		printf("Yes\n");
	}else{
		printf("No\n");
	}

	printf("%d\n", result);

	return 0;
}

