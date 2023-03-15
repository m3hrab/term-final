#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;


    int sum = *ptr1 + *ptr2;   // Assign the value of num to a new variable using the pointer ptr
    printf("%d", sum);

}