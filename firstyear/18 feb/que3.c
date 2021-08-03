#include <stdio.h>

void main() {
    int i = 1, fact, sum, n, a;
    long int number;

    printf("\n Find Strong numbers between 1 to \n");
    scanf("\n%ld", &number);

    printf("\n All Strong numbers between 1 to %ld are:\n", number);

    for (int j = 1; j <= number; j++) {   
        sum = 0;

        while (j != 0) {
            a = j % 10;
            j = j / 10;
            fact = 1; 

            while (i <= a) {   
                fact = fact * a;
                a--;
            }
            sum = sum + fact;
        }
        if (j == sum)
            printf("\n%d\n", j);
    }
}