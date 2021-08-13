#include <stdio.h>

void GCDfind(int m1, int m2){
  int gcd;
  for(int i=1; i <= m1 && i <= m2; ++i)
    {
        if(m1%i==0 && m2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", m1, m2, gcd);

}
int main()
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    GCDfind(n1, n2);
    
    return 0;
}