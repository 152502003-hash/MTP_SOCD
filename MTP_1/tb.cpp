
#include <iostream>
#include "ap_int.h"

#define N 4

void matrix_mul(
    ap_int<16> A[N][N],
    ap_int<16> B[N][N],
    ap_int<32> C[N][N]
);

int main()
{
    ap_int<16> A[N][N];
    ap_int<16> B[N][N];
    ap_int<32> C[N][N];

    // Initialize matrices
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            A[i][j] = i + j + 1;
            B[i][j] = i + j + 1;
            C[i][j] = 0;
        }
    }

    // Call matrix multiplication
    matrix_mul(A, B, C);

    // Print result
    std::cout << "Matrix C = A x B\n";

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cout << C[i][j] << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
