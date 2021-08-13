#include <stdio.h>
#include <string.h>
int main() {
    char name[100],temp[1000],out[1000];
    int k=13,count=0; //k=length of my name
    printf("Enter Name: ");
    scanf("%s", name);
    l=length(str);
	for(int i=0;str[i]!='\0';i++)
	{
		str2[l-i]=str[i];
    }
    for (int i = 0, j=0; name[i]!='\0'; ++i,j+=6) {
        char ch=name[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            count++;
        temp[j]=ch;
        for(int l=1;l<=k;l++){
            temp[j+l]=' ';
            
        }
    }
    for(int i=0;temp[i]!='\0';i++)
        if(temp[i]==' ')
            out[i]='S'; 
        else
            out[i]=temp[i];
    printf("No. of vowels : %d\n",count);
    printf("Output : %s",out);
    return 0;
}