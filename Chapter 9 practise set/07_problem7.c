#include <stdio.h>
#include <string.h>

// Define the structure for a bank account
struct bankacc {
    long long int accNo;      // Account number (long for large values)
    char name[30];            // Account holder's name
    double balance;           // Account balance
    long long int phoneNo;    // Phone number (long for large values)
};

int main() {
    // Declare a bank account structure variable
    struct bankacc a1;

    // Initialize the fields of the bank account
    a1.accNo = 16600122000LL;           // Use LL for long long int literals
    strcpy(a1.name, "Vivek Bhatt");
    a1.phoneNo = 9869069069LL;          // Use LL for long long int literals
    a1.balance = 40000.50;              // Use a realistic monetary value

    // Print the details of the bank account
    printf("The account number is: %lld\n", a1.accNo);
    printf("The name of the account holder is: %s\n", a1.name);
    printf("The phone number is: %lld\n", a1.phoneNo);
    printf("The total balance is: %.2lf\n", a1.balance); // Display with 2 decimal places

    return 0;
}
