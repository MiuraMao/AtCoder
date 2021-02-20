/*
 *A - Star
 */

#include <stdio.h>


int main(void)
{
    int X, result;
    scanf("%d", &X);

    if (X % 100 >= 1){
        result = 100 - (X % 100);
    }else{
        result = 100;
    }

    printf("%d\n", result);

    return 0;
}

