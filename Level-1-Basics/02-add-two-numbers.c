// Program: Addition of two numbers

#include <stdio.h>
int main()
{

    int vlu1, vlu2, sum;

    printf("Enter First Value: ");
    scanf("%d", &vlu1);
    printf("Enter Scecond Value: ");
    scanf("%d", &vlu2);

    sum = vlu1 + vlu2;

    printf("Sum of two value is: %d", sum);

    return 0;
}