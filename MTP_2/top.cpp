#include "ap_int.h"

#define N 4

void matrix_mul(
    ap_int<16> A[N][N],
    ap_int<16> B[N][N],
    ap_int<32> C[N][N]
)
{
    // Partition arrays to allow parallel memory access
    #pragma HLS ARRAY_PARTITION variable=A complete dim=2
    #pragma HLS ARRAY_PARTITION variable=B complete dim=1

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            ap_int<32> sum = 0;

            // Pipeline the inner loop
            for (int k = 0; k < N; k++)
            {
                #pragma HLS PIPELINE II=1

                sum = sum + A[i][k] * B[k][j];
            }

            C[i][j] = sum;
        }
    }
}
