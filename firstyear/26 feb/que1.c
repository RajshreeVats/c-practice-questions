#include<stdio.h>
#include<math.h>
int armstrong(int n)
{
	int s=0,r;
	int p=n;
	int c=0;
	while(p!=0)
	{
		r=p%10;
		c++;
		p=p/10;
	}
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		s=s+pow(r,c);
	}
	return s;
}
int main()
{
int m,s1=0;
printf("Enter the number:");
scanf("%d",&m);
s1=armstrong(m);
if(s1==m)
printf("It is a armstrong no.");
else
printf("It is not a armstrong no.");
return 0;
}