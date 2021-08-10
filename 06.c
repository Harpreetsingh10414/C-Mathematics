#include <stdio.h>
#include <math.h>

int main()
{
    int i, t, n, power;
    float f, r, x, px, y;
    printf("\n\tCOMPOUND INTEREST");
    printf("Terms --\n--> Do not enter Initial amount in decimal\n--> Enter time in years");
    printf("\nEnter annual interest rate - ");
    scanf("%f", &r);
    printf("\nEnter initial amount - ");
    scanf("%d", &i);
    printf("\nNumber of times interest applied per time period - ");
    scanf("%d", &n);
    printf("\nNumber of time period elapsed - ");
    scanf("%d", &t);

    power = n * t;
    x = (1 + (r / n));
    px = pow(x, power);
    y = i * px;
    printf("\nCompound Interest %f ", y);
    return 0;
}