#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter X co-ordinates - ");
    scanf("%d", &x);
    printf("\nEnter Y co-ordinates - ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
    {
        printf("\nCo-ordinates lies in 1st quadrant");
    }
    else if (x < 0 && y > 0)
    {
        printf("\nCo-ordinates lies in 2nd quadrant");
    }
    else if (x < 0 && y < 0)
    {
        printf("\nCo-ordinates lies in 3rd quadrant");
    }
    else if (x > 0 && y < 0)
    {
        printf("\nCo-ordinates lies in 4th quadrant");
    }
    else if (x == 0 && y == 0)
    {
        printf("\nCenter");
    }
    else
    {
        printf("\nInvalid input");
    }
    return 0;
}