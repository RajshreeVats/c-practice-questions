#include<stdio.h>

int main()
{
	//1
	int first,second;
	
	//2
	int *firstAddress, *secondAddress;
	
	//3
	int sum;

	//4
	printf("Enter the first and second number : \n");

	//5
	scanf("%d %d",&first,&second);

	//6
	firstAddress = &first;
	secondAddress = &second;

	//7
	sum = *firstAddress + *secondAddress;

	//8
	printf("The sum of %d and %d is %d \n",first,second,sum);
    return 0;
}