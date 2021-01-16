/*
 * A - Two Sequences 2
 */

//実行時エラー
#include <stdio.h>


int N;
int a;
int b;

int main7(void){
scanf("%d", &N);
scanf("%d", &a);
scanf("%d", &b);

int A[1000];
int B[1000];
int i, j, k, m;
int result[1000][1000];
int max;
max = result[0][0];
	for(i=0;i<N;i++){
		for(j=i;i<N;j++){
			k = 0;
			m = 0;
			result[k][m] = A[i] * B[j];
				if(max < result[k][m]){
				max = result[k][m];
				printf("%d\n", result[k][m]);
				}
			m++;
		}
		k++;
	}


//	int r, s;
//	for (r=0; r>m; r++){
//		for (s=0; s>k; s++){
//			if(max < result[r][s]){
//        		max = result[r][s];
//				printf("%d\n", result[r][s]);
//            }
//        }
//    }
	return 0;
}
