
#include "ap_int.h"

#define N 4

void matrix_mul(
    ap_int<16> A[N][N],
    ap_int<16> B[N][N],
    ap_int<32> C[N][N]
)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            ap_int<32> sum = 0;

            for (int k = 0; k < N; k++)
            {
                sum = sum + A[i][k] * B[k][j];
            }

            C[i][j] = sum;
        }
    }
}
