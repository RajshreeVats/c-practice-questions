#include <stdio.h>
#include<string.h>



int main()
{
  char str[100];
  int i = 0;
  printf("Enter a string without spaces- ");
  scanf ("%s", &str);
  
  while(str[i]!='\0')
  {
    ++i;
  }
  printf ("Length is - %d", i);
  return 0;
}