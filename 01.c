#include <stdio.h>

int main()
{
    int n, h, b;
    float area = 0;
    printf("Choose Respective option to find its area ");
    printf("\n1 --> For finding area of a traingle ");
    printf("\n2 --> For finding area of a sqaure ");
    printf("\n3 --> For finding area of rectangle ");
    printf("\n4 --> For finding area of parallelogram ");
    printf("\nEnter number ( 1 / 2 / 3 / 4 )---> ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("\nEnter Height of triangle = ");
        scanf("%d", &h);
        printf("\nEnter base of the triangle = ");
        scanf("%d", &b);
        area = 0.5 * h * b;
        printf("\nArea = %f ", area);
        break;

    case 2:
        printf("\nEnter side of the Sqaure = ");
        scanf("%d", &b);
        area = b * b;
        printf("\nArea = %f ", area);
        break;

    case 3:
        printf("\nEnter length of the Rectangle = ");
        scanf("%d", &h);
        printf("\nEnter breath of the Rectangle = ");
        scanf("%d", &b);
        area = h * b;
        printf("\nArea = %f ", area);
        break;

    case 4:
        printf("\nEnter height of the parallelogram = ");
        scanf("%d", &h);
        printf("\nEnter base of the parallelogram = ");
        scanf("%d", &b);
        area = h * b;
        printf("\nArea = %f ", area);
        break;

    default:
        printf("\nInvalid Input");
    }

    return 0;
}