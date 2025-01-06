#include <stdio.h>

int main()
{
    // Explain step by step evaluation of 3*x/y-z+k
    // where x=2, y=3, z=3, k=1

    // solution
    //  3*x/y-z+k
    // 3*2/y-z+k
    // 6/y-z+k
    // 6/3-z+k
    // 2-z+k
    // 2-3+k
    // -1 + 1
    // 0
    // to prove this write we write a program as:
    int x = 2, y = 3, z = 3, k = 1;
    printf("The value of 3*x/y-z+k is %f", 3 * x / y - z + k);
    return 0;
}