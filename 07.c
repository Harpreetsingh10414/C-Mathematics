#include <stdio.h>

int fact(int);
int main()
{
    int n, r, a, b, c, x;
    float f;
    printf("Enter '1' for calculating 'Permutation' ( nPr )");
    printf("\nEnter '2' for calculating 'Combination' ( nCr )");
    printf("\n--> ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("\n( nPr ) Enter 'n' ->");
        scanf("%d", &n);
        printf("\n!!!!!!!!!!! Only Factorial of 'n' will be displayed if ( r>n ) !!!!!!!!!!!");
        printf("\nEnter 'r' ->");
        scanf("%d", &r);
        a = fact(n);
        x = n - r;
        b = fact(x);
        f = a / b;
        printf("\nResult %f ", f);
        break;

    case 2:
        printf("\n( nCr ) Enter 'n' -> ");
        scanf("%d", &n);
        printf("\n!!!!!!!!!!! Only Factorial of 'n' will be displayed if ( r>n ) !!!!!!!!!!!");
        printf("\nEnter 'r' -> ");
        scanf("%d", &r);
        a = fact(n);
        x = n - r;
        b = fact(x);
        c = fact(r);
        f = a / (b * c);
        printf("\nResult %f ", f);
        break;

    default:
        printf("\nInvalid Input");
        break;
    }
    return 0;
}
int fact(int x)
{
    int factorial = 1;
    for (int i = 1; i <= x; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}