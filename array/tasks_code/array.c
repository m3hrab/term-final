#include <stdio.h>

int main()
{
    // Array Declaration with initialization 
    int numbers[5] = {1,2,3,4,5};
    
    // Accessing arrays elements
    int first_value = numbers[0];
    int third_value = numbers[2];

    printf("First item: %d\n", first_value);
    printf("Third item: %d\n", third_value);

    // Update the last element of numbers array
    printf("\nBefore update:");
    printf("\nnumbers: ");

    for(int i=0; i<5; i++)
    {
        printf("%d, ", numbers[i]);
    }

    // update the last elements of numbers array 
    numbers[4] = 8;
    printf("\n\nUpdate the last item to 8");
    printf("\nAfter update:");
    printf("\nnumbers: ");

    for(int i=0; i<5; i++)
    {
        printf("%d, ", numbers[i]);
    }


    //  delete the 3rd element from the numbers array

    printf("Enter the position of the element to be deleted: ");
    int pos;
    scanf("%d", &pos);

    if(pos >= 5+1 || pos < 1)
    {
        printf("Invalid Position");
    }    

    else{
        for(int i=pos-1; i<5; i++){
            numbers[i] = numbers[i+1];
        }

        printf("\nAfter deletation:");
        printf("\nnumbers: ");

        for(int i=0; i<4; i++)
        {
            printf("%d, ", numbers[i]);
        }

    }
    printf("\n\n");
    return 0;

    
}