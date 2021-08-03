#include <stdio.h>
int fib(int ra_n)
{
    if (ra_n <= 1)
        return ra_n;
    return fib(ra_n - 1) + fib(ra_n - 2);
}

int sumarr(int *ra_arr)
{
    int ra_s = 0;
    for (int ra_i = 0; ra_i < 10; ra_i++)
    {
        ra_s += *(ra_arr);
        ra_arr++;
    }
    return ra_s;
}

int main()
{
    printf("\nEnter your roll no : ");
    long int ra_r;
    scanf("%ld", &ra_r);
    int ra_m, ra_n,ra_c = 0, ra_sm;
    int ra_ar[10];
    ra_m = (ra_r % 10) + 1;
    ra_n = (ra_r % 10) + 10;
    for (int ra_i = ra_m; ra_i <= ra_n; ra_i++)
    {
        ra_ar[ra_c++] = fib(ra_i);
    }
    printf("\n\n");
    ra_sm = sumarr(ra_ar);
    printf("sum = %d\n\n", ra_sm);
    return 0;
}