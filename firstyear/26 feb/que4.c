#include<stdio.h>

void upper(char c)
{
  printf ("Upper case - %c", c-32);
}

void lower(char c)
{
  printf ("Lower case - %c", c+32);
}

int main()
{
  char c;
  printf ("Enter a character - ");
  scanf ("%c", &c);
  
  if((c>='A')&&(c<='Z'))
  {
    printf ("Upper case character\n");
    lower(c);
  }
  else
  {
    printf ("Lower case character\n");
    upper(c);
    }
  return 0;
}