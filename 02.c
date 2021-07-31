#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter X cordinates --> ");
    scanf("%d", &x);
    printf("\nEnter Y cordinates --> ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
    {
        printf("\nThis cordinates lies in 1st quadrant");
    }
    else if (x < 0 && y > 0)
    {
        printf("\nThis cordinates lies in 2nd quadrant");
    }
    else if (x < 0 && y < 0)
    {
        printf("\nThis cordinates lies in 3rd quadrant");
    }
    else if (x > 0 && y < 0)
    {
        printf("\nThis cordinates lies in 4th quadrant");
    }
    else if (x == 0 && y == 0)
    {
        printf("\nCentre");
    }
    else
    {
        printf("\nInvalid Input");
    }
    return 0;
}