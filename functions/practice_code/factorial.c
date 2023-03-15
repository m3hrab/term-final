#include <stdio.h>

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main()
{
    int number, factorial;
    printf("Enter a number: ");
    scanf("%d",&number);

    factorial = fact(number);
    printf("\nFactorial of %d is = %d\n",number, factorial);
}   