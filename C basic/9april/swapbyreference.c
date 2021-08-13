#include<stdio.h>
swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	printf("the values of x an y are %d , %d respectively",*a,*b);
}
int main()
{
	int x,y;
	printf("enter the values of x and y");
	scanf("%d %d",&x,&y);
	swap(&x,&y);
	return 0;
}