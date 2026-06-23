// Program revision: Finding largest numbers between two value

#include<stdio.h>
int main() {

    int vlu1, vlu2;

    printf("Enter first value: ");
    scanf("%d", &vlu1);
    printf("Enter second value: ");
    scanf("%d", &vlu2);

    if (vlu1 > vlu2)
    {
        printf("Largest no is %d", vlu1);
    }
    else
    {
        printf("Largest no is %d", vlu2);
    }
    
    return 0;
}