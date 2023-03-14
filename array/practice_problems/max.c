#include <stdio.h>

int main()
{
    float numbers[5], max;

    for(int i=0; i<5; i++)
    {
        scanf("%f", &numbers[i]);
    }

    max = numbers[0];

    for(int i=0; i<5; i++)
    {
        if(numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    printf("\nMaximum number: %.2f\n", max);
    return 0;
}