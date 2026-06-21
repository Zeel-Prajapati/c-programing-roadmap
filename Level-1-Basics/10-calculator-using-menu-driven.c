// Program: Calculator using menu drive

#include <stdio.h>
#include <stdlib.h>
int main()
{

    int vlu1, vlu2, ch;
    float sum;

    do
    {
        printf("====Welcome====\n");
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplacation\n");
        printf("4. Devision\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter first value: ");
            scanf("%d", &vlu1);
            printf("Enter second value: ");
            scanf("%d", &vlu2);

            sum = vlu1 + vlu2;

            printf("Addition is: %.2f\n", sum);
            break;

        case 2:
            printf("Enter first value: ");
            scanf("%d", &vlu1);
            printf("Enter second value: ");
            scanf("%d", &vlu2);

            sum = vlu1 - vlu2;

            printf("Substraction is: %.2f\n", sum);
            break;

        case 3:
            printf("Enter first value: ");
            scanf("%d", &vlu1);
            printf("Enter second value: ");
            scanf("%d", &vlu2);

            sum = vlu1 * vlu2;

            printf("Multiplaction is: %.2f\n", sum);
            break;

        case 4:
            printf("Enter first value: ");
            scanf("%d", &vlu1);
            printf("Enter second value: ");
            scanf("%d", &vlu2);

            sum = vlu1 / vlu2;

            printf("Devision is: %.2f\n", sum);
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid choice please try again");
            break;
        }
    } while (5 != 0);

    return 0;
}