/*Write a program to decrypt the string encrypted
using encrypt function in problem 6*/
#include<stdio.h>
#include<string.h>
// Encrypt function: increments ASCII value of each character by 1
char* encrypt(char str[]){
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] += 1; // Increment ASCII value of each character by 1
    }
    return str;
}
// Decrypt function: decrements ASCII value of each character by 1
char* decrypt(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] -= 1;
    }
    return str;
}

int main(){
    char str[] = "vivek";
    // Encrypt the string
    printf("The encrypted is %s\n", encrypt(str));
    
    // Decrypt the string
    printf("The decrypted is %s\n", decrypt(str));
    return 0;
}