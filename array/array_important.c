#include <stdio.h>

int main()
{
    int array_size;

    printf("Enter the array size: ");
    scanf("%d", &array_size);

    // Array Decleration 
    int numbers[array_size];

    // Add element into the numbers array_size 
    printf("\nEnter numbers: ");
    for(int i=0; i<array_size; i++)
    {
        scanf("%d", &numbers[i]);
    }


    //  Display the elements of the array 
    printf("\nnumbers: ");
    for(int i=0; i<array_size; i++)
    {
        printf("%d, ", numbers[i]);
    }


    // deletation by number
    int num, pos = -1;
    printf("\nEnter a number to delete: ");
    scanf("%d", &num);

    // find the num position in the array 
    for (int i = 0; i<array_size; i++){
        if(numbers[i] == num){
            pos = i;
            break;
        }
    } 

    if(pos == -1)
        printf("\nNumbers not found");
    else{
        for(int i=pos; i<array_size;i++)
        {
            numbers[i] = numbers[i+1];   
        }
    }

    //  Display the elements of the array 
    printf("\nnumbers: ");
    for(int i=0; i<array_size-1; i++)
    {
        printf("%d, ", numbers[i]);
    }    

    printf("\n");
    return 0;
}