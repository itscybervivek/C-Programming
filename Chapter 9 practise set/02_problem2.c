/*Write a function sumvector which returns the sum
of two vectors passed to it. The vectors must be two
dimensional.*/
#include <stdio.h>
typedef struct vector
{
    int i;
    int j;
} vec;

vec sum_vector(vec v1, vec v2) // if we write here int v1 it is wrong because it is type vec (struct vector)
{
    vec v3 = {(v1.i + v2.i), (v1.j +v2.j)}; // i is added to i and j to j
    return v3;
}
int main()
{
    vec v1 = {1, 2}, v2 = {3, 4}; // first line
    // v1 = {1, 2};
    // v2 = {3, 4}; // If we write like this it shows error so write vec before v1 and v2 both or as fist line.
    printf("The value of vector v1 is %di + %dj\n", v1.i, v1.j);
    printf("The value of vector v2 is %di + %dj\n", v2.i, v2.j);
    printf("The sum of vector v1 and v2 is %di and %dj", sum_vector(v1,v2));

    return 0;
}