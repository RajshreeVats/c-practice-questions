#include<stdio.h>
int findl(char a[100])
{int i=0;
 while(a[i]!='\0')
 {
 	i++;
 }
 
 return i;	
}
int conc(char a[100],char b[100],int i)
{int j=0;
while(b[j]!='\0')
{
	a[i++]=b[j++];
}
	
	return 0;
	
}
int main()
{int l;
 char str1[100],str2[100];
 printf("enter the first string-");
 gets(str1);
 printf("\nenter the second string-");
 gets(str2);
 l=findl(str1);
 conc(str1,str2,l);
 printf("\n concatinated string is-%s",str1);
 return 0;
}