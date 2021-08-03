//Wap to find all prime no between 1 to n.
#include <stdio.h>
void main()
{
	int n;
	printf("Enter the limit");
	scanf("%d",&n);
	int i,j,k;;
	for(i=2;i<=n;i++)
	{
		k=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				k=1;
				break;
			}
		}
		if(k==0)
		{
			printf("%d\n",i);
		}
	}
}