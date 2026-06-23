// Program revision: Finding largest numbers between three value

#include<stdio.h>
int main() {

    int vlu1, vlu2, vlu3;

    printf("Enter first value: ");
    scanf("%d", &vlu1);
    printf("Enter second value: ");
    scanf("%d", &vlu2);
    printf("Enter third value: ");
    scanf("%d", &vlu3);

    if (vlu1 > vlu2 && vlu1 > vlu3)
    {
        printf("Largest no is %d", vlu1);
    }
    else if (vlu2 > vlu1 && vlu2 > vlu3)
    {
        printf("Largest no is %d", vlu2);
    }
    else if (vlu3 > vlu1 && vlu3 > vlu2)
    {
        printf("Largest no is %d", vlu3);
    }
    else if (vlu1 == vlu2 == vlu3)
    {
        printf("All Number is same");
    }
    
    return 0;
}