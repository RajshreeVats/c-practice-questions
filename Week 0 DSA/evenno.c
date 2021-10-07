#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *n, i;

    n = (int*)malloc(sizeof(int));

    printf("Print all even numbers till: ");
    scanf("%d", n);

    printf("All the even numbers from 1 to %d are: \n", *n);

    for (i = 2; i <= *n; i+=2)
    {
        
        printf("%d\n", i);
        
    }

    free (n);

    return 0;    
}