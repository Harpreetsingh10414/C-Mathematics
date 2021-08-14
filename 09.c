#include <stdio.h>

int fact(int);
int main()
{
    int n;
    float s = 0;
    printf("To print the sum of series 1 + 1/2 + 1/3 + 1/4 +....+ 1/N");
    printf("\nEnter 'N' -> ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        s += (float)1 / fact(i);
    }
    printf("\nSum of series = %f ", s);
    return 0;
}
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f = f * i;
    }
    return f;
}