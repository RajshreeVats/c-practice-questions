#include <stdio.h>


#include <stdlib.h>
int main()

{
	
	int *arr,n,i,j,temp;

	printf("Enter size of array:");
	scanf("%d",&n);

	arr=calloc(sizeof(int),n);
	printf("Enter %d Elements:",n);
	for(i=0;i<n;i++)

	{

		scanf("%d",arr+i);

	}

	
		
	for(i=0,j=n-1;i<j;i++,j--)
	
	{

		temp=*(arr+i);
		*(arr+i)=*(arr+j);
		*(arr+j)=temp;
	}

	printf("After reversing the array:\n");
	for(i=0;i<n;i++)

	{

		printf("%d\n",*(arr+i));

	}

	
	return 0;

}