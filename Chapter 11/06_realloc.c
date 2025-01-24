#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 3;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize the allocated memory
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;

    // Print the allocated values
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Resize the memory block to hold 5 integers
    ptr = (int *)realloc(ptr, 5 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Print all 5 values after realloc (observe garbage in uninitialized memory)
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Initialize the newly allocated memory
    ptr[3] = 4;
    ptr[4] = 5;

    // Print all 5 values after initializing
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr); // Free the allocated memory
    return 0;
}
