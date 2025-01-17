/*If S[3] is a 1-D array of integers then *(S+3)
refers to the third element:
true
false
defends*/
#include<stdio.h>

int main(){
    int S[3] = {1, 2, 3};
    // int *(S+3) = &S;
    printf("*(S+3) refers to %d element.", *(S+3));
    return 0;
}
// False
// *(S+3) does not refer to the third element; it refers to an invalid memory location (fourth element), which is out of bounds.





