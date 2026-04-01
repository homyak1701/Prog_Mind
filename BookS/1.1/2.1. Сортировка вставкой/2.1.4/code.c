#include <stdio.h>
#include <stdlib.h>

#define N 4

int main()
{
    int A[N] = {1, 1, 0, 0}; // 1100₂ = 12
    int B[N] = {1, 1, 0, 1}; // 1101₂ = 13
    int C[N + 1] = { 0 };      // 12 + 13 = 25 → 11001₂
    // quotient and remainder;
    int sum, r;
    int i;

    for (i = N - 1; i > -1 ;  i--)
    {
        sum = A[i] + B[i] + C[i + 1];
        printf("sum = %d\n", sum);
        C[i + 1] = sum % 2;
        C[i] = sum / 2;
    }

    for (i = 0; i < (N + 1); i++)
    {
        printf("%d", C[i]);
        if (i == N)
        {
            printf("\n");
        }
    }

    return 0;
}