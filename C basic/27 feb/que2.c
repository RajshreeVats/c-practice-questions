#include<stdio.h>

int fact(int *x)
{
	int i,fact=1;
	for(i=*x;i>0;i--)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int x,res;
	printf("Enter a number=");
	scanf("%d",&x);
	
	res=fact(&x);
	printf("Factorial of %d is %d.",x,res);
}