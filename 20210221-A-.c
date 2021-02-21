/*
 * A - A*B*C
 */

//不正解
#include <stdio.h>

int K;
int a, b, c;
int count;

int main(void)
{
    count = 0;
    a = 1; b = 1; c = 1;
    scanf("%d", &K);
    func(a, b, c);
    printf("%d\n", count);

    return 0;
}

int func(a, b, c){

    if(c <= K){
        func(a, b, ++c);
        if (a * b * c <= K){
            count++;
        }
    }

    if (b <= K){
        func(a, ++b, c);
        c = 1;
        if (a * b * c <= K){
            count++;
        }
    }

    if (a <= K){
        func(++a, b, c);
        b = 1;
        if (a * b * c <= K){
            count++;
        }
    }

    return 0;
}
