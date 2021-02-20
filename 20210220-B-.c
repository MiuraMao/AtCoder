/*
 *B - uNrEaDaBlE sTrInG
 */

//不正解・実行時間超過
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int i;
    char ch;
    int count;
    int result1, result2;
    char S[999];

    scanf("%s", S);

    result1 = 0;
    result2 = 0;
    for (i = 1; S[i] != 0; i * 2){
            if (isupper(S[i]) == 0){
                printf("No");
                exit(0);
            }
    }
    for (i = 1; i <= count; i * 2 + 1){
            if (islower(S[i] == 0))
                printf("No");
                exit(0);
    }

    if (result1 == 0 && result2 == 0){
            printf("Yes");
    }
    return 0;
}

