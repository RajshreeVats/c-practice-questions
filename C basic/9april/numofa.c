#include<stdio.h>
int main()
{
	char *p[5];int count=0;
	char a[50]="bheem",b[50]="yudhistir",c[50]="arjun",d[50]="nakula",e[50]="sahadev";
	p[0]=a;
	p[1]=b;
	p[2]=c;
	p[3]=d;
	p[4]=e;
	for(int i=0;i<5;i++)
	{
		for(int j=0;p[i][j];j++)
		{
		
		 if(p[i][j]=='a')
		 count++;
     	}
		 
	}
	printf("the no of a's in the string is %d",count);
	return 0;
}