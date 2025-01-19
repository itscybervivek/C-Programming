/*Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take m and n as the start and ending position for slice.*/
// #include<stdio.h>

// char* slice(char str[], int m, int n){
//     int i = 0, count;
//     char *ptr1 = &str[m];
//     char *ptr2 = &str[n];
//     str = ptr1;
//     str[n] = '\0';
//     return str;
// }

// int main(){
//     char str[] = "Vivek bhai";
//     printf("%s", slice(str, 1, 7));
    
//     return 0;
// }
#include <stdio.h>

void slice(char str[], int m, int n) {
    int i = 0;

    // Shift characters from index m to the beginning of the string
    while (m + i < n && str[m + i] != '\0') {
        str[i] = str[m + i];
        i++;
    }

    // Null-terminate the sliced string
    str[i] = '\0';
}

int main() {
    char str[] = "Vivek bhai";
    
    slice(str, 1, 7); // Slice from index 1 to 7
    printf("Sliced string: %s\n", str); // Output: "ivek b"
    
    return 0;
}
