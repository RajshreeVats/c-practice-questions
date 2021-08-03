#include <stdio.h>
int main()
{
    float p, t, r, SI;

     //Input principle, rate and time 
    printf("Enter principle:- ");
    scanf("%f", &p);
    
    printf("Enter time: ");
    scanf("%f", &t);

    printf("Enter rate: ");
    scanf("%f", &r);

    // Calculate simple interest
    SI = (p * t * r) / 100;

    // Print the resultant value of SI
    printf("Simple Interest = %f", SI);
}
