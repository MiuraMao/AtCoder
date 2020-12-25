//パナソニックプログラミングコンテスト（AtCoder Beginner Contest 186）
//IDE上で実行確認はしていません
//これは不正解の解答です
#include <stdio.h>
#include <stdlib.h>

int i;
int j;
int k;
int m;
int result[100];
int compare;


int main2(int argc, const char * argv[]){
	int H = scanf("%d", &H);
	int W = scanf("%d", &W);
    int **array = (int**)malloc(H*sizeof(int*));
	array[0] = (int*)malloc(H*W*sizeof(int));
    if(1<=i && i>=100 && 1<=i && i>=100){

		for (i=0;i<=H;i++){
    		for(j=0;j<=W;j++){
        		if (array[i][j]<array[i][j+1]){
        			result[k] = array[i][j+1]-array[i][j];
                	k++;
            	}
        	}
    	}
    	compare = result[0];
      	m = 1;
    	if(compare < result[m]){
			 compare = result[m] - compare;
    	     m++;
    	}
    	printf("%d\n",compare);
      	//free(array);
    }

  return 0;
}
