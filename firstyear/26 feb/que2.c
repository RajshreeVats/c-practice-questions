#include<stdio.h>

int ascii(char c)
{
  return c;
}
int main()
{
  char c;
  printf ("Enter a character - ");
  scanf("%c", &c);
  
  int a = ascii(c);
  printf ("ASCII Value is - %d", a);
  return 0;
}