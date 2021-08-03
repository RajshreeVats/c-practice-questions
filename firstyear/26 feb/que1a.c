#include<stdio.h>
int findlarge(int n)
{
	int largest,j[n],i;
	printf("enter the nos");
	for(i=0;i<n;i++)
	{
		scanf("%d",&j[i]);
	}
	largest=j[0];
	for(i=1;i<n;i++)
	{
		if(j[i]>largest)
		{
			largest=j[i];
		}
	}
	return(largest);
}
int main()
{
  int a,arg;
  printf("this is the program to find the largest no");
  printf("\n enter the total no of numbers");
  scanf("%d",&arg);
  a=findlarge(arg);
  printf("the largest no is %d",a);
  return 0;
}