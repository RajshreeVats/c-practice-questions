#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxNum=INT_MIN;
    int minNum=INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>maxNum)
        {
            maxNum=arr[i];
        }
        if(arr[i]<minNum)
        {
            minNum=arr[i];
        }
    }

    printf("Max=%d Min=%d", maxNum, minNum);

    return 0;
}