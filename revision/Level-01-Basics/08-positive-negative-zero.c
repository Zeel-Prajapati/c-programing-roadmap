// Program revision: Check the number is positive, negative or zero.

#include<stdio.h>
int main() {

    int no;

    printf("Enter number: ");
    scanf("%d", &no);

    if (no > 0)
    {
        printf("%d is Positive.", no);
    }
    else if (no < 0)
    {
        printf("%d is Negative.", no);
    }
    else
    {
        printf("Number is zero.");
    }
    
    return 0;
}