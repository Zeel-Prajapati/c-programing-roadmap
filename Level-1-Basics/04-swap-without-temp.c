// Program: Swap numbers without temp

#include <stdio.h>
int main()
{

    int vlu1, vlu2;

    printf("Enter first number: ");
    scanf("%d", &vlu1);
    printf("Enter second number: ");
    scanf("%d", &vlu2);

    vlu1 = vlu1 + vlu2;
    vlu2 = vlu1 - vlu2;
    vlu1 = vlu1 - vlu2;

    printf("Swap is: %d %d", vlu1, vlu2);

    return 0;
}