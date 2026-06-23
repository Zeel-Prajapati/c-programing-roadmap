// Program Revision: Swap using temp

#include <stdio.h>
int main()
{

    int vlu1, vlu2, temp;

    printf("Enter first value: ");
    scanf("%d", &vlu1);
    printf("Enter second value: ");
    scanf("%d", &vlu2);

    temp = vlu1;
    vlu1 = vlu2;
    vlu2 = temp;

    printf("After Swap: %d %d", vlu1, vlu2);

    return 0;
}