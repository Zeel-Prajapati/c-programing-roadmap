// Program: Factorial of the number

#include <stdio.h>
int main()
{

    int no, i, fact = 1;

    printf("Enter value: ");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)
    {
        fact = fact * i;
    }
    printf("%d", fact);

    return 0;
}