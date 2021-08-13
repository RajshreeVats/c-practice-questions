
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
    
    int* ptr;
    int n, i, sum=0;
 
   
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
 
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));
 
    
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
 
        
        printf("Memory successfully allocated using malloc.\n");
 
        
        for (i = 0; i < n; ++i) {
            scanf("%d", ptr + i);
              sum += *(ptr + i);
        }

        
        printf("Sum = %d", sum);
        
 
        
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }
 
    return 0;
}