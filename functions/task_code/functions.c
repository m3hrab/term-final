#include <stdio.h>

int add(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

int main()
{
    int sum = add(4,5);
    printf("%d", sum);
}