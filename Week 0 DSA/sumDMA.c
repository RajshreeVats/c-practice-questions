#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array, *n, i;

    n = (int*)malloc(sizeof(int));
    array = (int*)calloc(*n,sizeof(int));

    printf("Enter the size of the array: ");
    scanf("%d", n);

    for (i = 0; i < *n; i++)
    {
        printf("Enter the array elements: ");
        scanf("%d", &array[i]);
    }

    printf("The even numbers are: ");
    for (i = 0; i < *n; i++)
    {
        if (array[i]%2==0)
        {
            printf("%d\t",array[i]);
        }
    }

    printf("The odd numbers are: ");
    for (i = 0; i < *n; i++)
    {
        if (array[i]%2==1)
        {
            printf("%d\t",array[i]);
        }
    }
    
    free(array);

    return 0;  
    
}