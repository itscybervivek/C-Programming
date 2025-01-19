/*Write your own version if strlen function from <string.h>*/
// #include<stdio.h>
// int strlen(char str[]){
//     int i = 0, count;
//     char c = str[i];
    
//     while (c!='\0')
//     {
//         c = str[i];
//         i++;
//     }
//     count = i - 1;
//     return count;
// }
// int main(){
//     char str[] = "Vivek bhai";
//     strlen(str);
//     printf("%d", strlen(str));
//     return 0;
// }

#include <stdio.h>

// Custom strlen function
int my_strlen(char str[]) {
    int i = 0;
    
    while (str[i] != '\0') {
        i++;
    }
    return i; // Return the length directly
}

int main() {
    char str[] = "Vivek bhai";
    int length = my_strlen(str); // Call the custom function
    printf("Length of the string: %d", length);
    return 0;
}
