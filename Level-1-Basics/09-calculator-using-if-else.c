// Program: Simple calculator using if-else condition

#include <stdio.h>
int main()
{

    int vlu1, vlu2, ans, op;

    printf("Enter first value: ");
    scanf("%d", &vlu1);
    printf("Enter second value: ");
    scanf("%d", &vlu2);
    printf("Enter Operator: ");
    scanf("%d", &op);

    if (op == '+')
    {
        ans = vlu1 + vlu2;
        printf("Answer is: %d", ans);
    }
    else if (op == '-')
    {
        ans = vlu1 - vlu2;
        printf("Answer is: %d", ans);
    }
    else if (op == '*' && 'x')
    {
        ans = vlu1 * vlu2;
        printf("Answer is: %d", ans);
    }
    else if (op == '/')
    {
        ans = vlu1 / vlu2;
        printf("Answer is: %d", ans);
    }
    else {
        printf("Invalid choice");
    }

    return 0;
}