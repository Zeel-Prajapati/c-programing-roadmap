// Program: Sum of 1 to N numbers

#include<stdio.h>
int main() {

    int i, no, sum = 0;

    printf("Enter value: ");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)
    {
        // printf("",i);
        sum = sum + i;
    }
    printf("%d ", sum);
    
    return 0;
}