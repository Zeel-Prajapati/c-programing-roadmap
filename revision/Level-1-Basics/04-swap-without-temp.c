// Program Revision: Swap number without temp

#include<stdio.h>
int main() {

    int vlu1, vlu2;

    printf("Enter first value: ");
    scanf("%d", &vlu1);
    printf("Enter second value: ");
    scanf("%d", &vlu2);

    vlu1 = vlu1 + vlu2;
    vlu2 = vlu1 - vlu2;
    vlu1 = vlu1 - vlu2;

    printf("After swap: %d %d", vlu1, vlu2);

    return 0;
}