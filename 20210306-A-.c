/*
 * A - I Scream
 */

#include <stdio.h>

int main(void)
{
    int A, B;

    scanf("%d%d", &A, &B);

    if (A+B >= 15 && B >= 8){
    	printf("1");		//アイスクリーム
    }else if(A+B >=10 && B >= 3){
    	printf("2");		//アイスミルク
    }else if(A+B >= 3){
    	printf("3");		//ラクトアイス
    }else{
    	printf("4");		//氷菓
    }

}
