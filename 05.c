#include <stdio.h>

int main()
{
    float r, f;
    int i, t;
    printf("\n\tSIMPLE INTEREST");
    printf("Terms --\n--> Do not enter Initial amount in decimal\n--> Enter time in years");
    printf("\nEnter annual interest rate - ");
    scanf("%f", &r);
    printf("\nEnter initial amount - ");
    scanf("%d", &i);
    printf("\nEnter time in years - ");
    scanf("%d", &t);

    f = i * (1 + (r * t));
    printf("\nSimple Interest - %f", f);
    return 0;
}