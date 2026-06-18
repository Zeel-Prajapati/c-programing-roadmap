// Program: Odd Even number

#include <stdio.h>
int main()
{

    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    if (no %= 2)
    {
        printf("It's Odd");
    }
    else
    {
        printf("It's Even");
    }

    return 0;
}