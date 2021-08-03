#include<stdio.h>
int largesum(int *a,int *b,int n)
{int sum1=0,sum2=0,j;
 for(j=0;j<n;j++)
 {
 	sum1=sum1+a[j];
 }
 for(j=0;j<n;j++)
 {
 	sum2=sum2+b[j];
 }
 if(sum1==sum2)
 return 0;
 if(sum1<<sum2)
 return 2;
 if(sum1>>sum2)
 return 1;
 }
int main()
{
	int c[10],d[10],p,i,result;
	printf("enter the no of elemnts(max 10)\n");
	scanf("%d",&p);
	printf("enter the 1st array elements\n");
	for(i=0;i<p;i++)
	{
		scanf("%d",&c[i]);
	}
	printf("engter the 2nd array elements \n");
	for(i=0;i<p;i++)
	{
		scanf("%d",&d[i]);
	}
	result=largesum(c,d,p);
	if(result==1)
	printf("array 1's sum is larger the array 2's");
	if(result==0)
	printf("\n both the arrays sum is equal");
	if(result==2)
	printf("\n array 2's sum is larger than array 1's");
	return 0;
}