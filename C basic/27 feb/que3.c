#include<stdio.h>
int Fibo(int);
int main()
{
	int n,i=0,c;
	printf("Enter no. of terms=");
	scanf("%d",&n);
	printf("Fibonacci series\n");
	for(c=1;c<=n;c++)
	{
		printf("%d",Fibo(i));
		i++;
	}
}
int Fibo(int n)
{
	if (n==1)
	  return 1;
	else if (n==0)
	  return 0;
	else
	  return (Fibo(n-2)+Fibo(n-1));
}