/*Create a three-dimensional array and print the
address of its elements in increasing order.*/
#include<stdio.h>

int main(){
    // int arr[2][3][3] = {{{1, 2}, {3, 4}, {5, 6}},
    //                    {{1, 2}, {3, 4}, {5, 6}}
    //                     };
    // int *ptr = &arr[0][0][0]; // pointer access 0th row and 0th column of array.
    // int total_elements = 2 * 3 * 3;
    // for (int i = 0; i < total_elements  ; i++)
    // {
    // printf("The address of %d element of array is %u\n", (i+1), ptr);
    //     ptr++;
    // }
    
    // above method also works but we use forloop so that we dont have to put value manually.
    int arr[2][3][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%u ", &arr[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}