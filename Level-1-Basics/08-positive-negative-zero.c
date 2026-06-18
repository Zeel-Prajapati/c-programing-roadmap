// Program: Positive Negative Zero number checker

#include <stdio.h>
int main()
{

    int no;

    printf("Enter number: ");
    scanf("%d", &no);

    if (no > 0)
    {
        printf("Number Is Positive.");
    }
    else if (no < 0)
    {
        printf("Number is Negative");
    }
    else
    {
        printf("Number is Zero");
    }

    return 0;
}