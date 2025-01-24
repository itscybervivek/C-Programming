/*Take name and salary of two employees as input from the
user and write them to a text file in the following format:
        name1, 3300
        name2, 7700*/
#include <stdio.h>
typedef struct employee
{
    char name[15];
    int salary;
} emp;

int main()
{
    emp e1, e2;
    printf("Enter 1st name:\n");
    gets(e1.name);
    printf("Enter salary:\n");
    scanf("%d", &e1.salary); //scanf() function leaves a newline character (\n) in the input buffer, which gets() reads as an empty string.
    getchar(); // Added getchar() after scanf to clear the newline left in the buffer.
    printf("Enter 2nd name:\n");
    gets(e2.name);
    printf("Enter salary:\n");
    scanf("%d", &e2.salary);

    FILE *ptr;
    ptr = fopen("04_employee.txt", "w");
    fprintf(ptr, "%s, ", e1.name);
    fprintf(ptr, "%d\n", e1.salary);
    fprintf(ptr, "%s, ", e2.name);
    fprintf(ptr, "%d\n", e2.salary);
    return 0;
}