// Program Revision: Odd even number check

#include <stdio.h>
int main()
{

    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    if (no % 2)
    {
        printf("Number is Odd");
    }
    else
    {
        printf("Number is Even");
    }

    return 0;
}