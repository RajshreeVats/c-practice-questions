

96.Write a program to sort array elements using selection sort.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of elements of array");
	scanf("%d",&n);
	int a[n],s=0;
	for(int i=0;i<n;i++)
	{
		printf("\nenter the array element");
		scanf("%d",&a[i]);
	}
    int temp;
    for(int i=0;i<n;i++)
    {
       int min=i;
    	for(int j=i+1;j<n;j++)
    	{
    		if(a[j]<a[min])
    		{
    			min=j;
			}}
			if(min!=i)
			{
				temp=a[min];
				a[min]=a[i];
				a[i]=temp;
			}
	}
	printf("the new array is ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
