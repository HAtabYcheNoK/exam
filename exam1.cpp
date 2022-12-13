#include <iostream> #incldue <cmath>
int main()

{
    int A[10];
    int i, j;
    int t;
    for(i=0; i<9; i++)
        for(j=i; j>=0; j--)
            if (A[j] < A[j + 1])
            {
                t = A[j];
                A[j] = A[j + 1];
                A[j + 1] = t;
            }
}