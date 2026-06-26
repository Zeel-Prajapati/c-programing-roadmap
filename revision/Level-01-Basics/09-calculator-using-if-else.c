// Program revision: Calculator using if else condition

#include<stdio.h>
int main() {

    int vlu1, vlu2, op, ans;

    printf("Enter first value: ");
    scanf("%d", &vlu1);
    printf("Enter second value: ");
    scanf("%d", &vlu2);
    printf("Enter operator: ");
    scanf("%d", &op);

    if (op == '+')
    {
        ans = vlu1 + vlu2;
        printf("Addition: %d", ans);
    }
    else if (op == '-')
    {
        ans = vlu1 - vlu2;
        printf("Substraction: %d", ans);
    }
    else if (op == '*')
    {
        ans = vlu1 * vlu2;
        printf("Multiplaction: %d", ans);
    }
    else if (op == '/')
    {
        ans = vlu1 / vlu2;
        printf("Devision: %d", ans);
    }
    else
    {
        printf("Invalid choice!");
    }

    return 0;
}