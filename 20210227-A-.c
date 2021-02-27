/*
 *A - Discount
 */

#include <stdio.h>

double result;

int main(void)
{
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);
    result = 0;

    result = (double)B / (double)A;
    result = (1 - result) * 100;

    printf("%lf\n", result);

    return 0;
}
