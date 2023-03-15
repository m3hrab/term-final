#include <stdio.h>

int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];

    int i, j;

    printf("Enter 1st array elements: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n\nEnter 2nd array elements: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            arr3[i][j] = arr1[i][j]*arr2[i][j];
        }
    }
    
    printf("\n\nArray: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", arr3);
        }
        printf("\n");
    }
    
}