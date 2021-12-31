#include<stdio.h> 
#define MAX 8
void bubble_sort(int arr[]); 

int main()
{        
    int arr[MAX]; 
    for(int i = 0; i < MAX; i++)
    {
        printf("arr[%d] = ", i);    
        scanf("%d", &arr[i]);
    }

    printf("\nUnsorted date: \n");
    for(int i = 0; i < MAX; i++)
    {
        printf("%d ", arr[i]);    
    }
    bubble_sort(arr);

    printf("\n\nSorted date in a: \n");
    for(int i = 0; i < MAX; i++)
    {
        printf("%d ", arr[i]);    
    }

    return 0; 
}



void bubble_sort(int arr[])
{
    int tmp, swap; 

    for(int i = 0; i < MAX; i++)
    {    
        swap = 0;  

        for(int j = 0; j < MAX - 1 - i; j++)
        {            
            if(arr[j] > arr[j+1]) 
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
               swap = 1;               
            }     
        }        

        if (!swap)
        {
            break;
        }
    }        
}