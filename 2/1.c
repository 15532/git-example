#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c)
    {
        if (a == b && a == c)
            printf("equilateral triangle");
        else if (a * a + b * b == c * c)
            printf("right triangle");
        else if (a * a + b * b > c * c)
        {
            if (b == c || a == c || a == b)
                printf("acute isosceles triangle");
            else
                printf("acute triangle");
        }
        else
        {
            if (b == a)
                printf("obtuse isosceles triangle");
            else
                printf("obtuse triangle");
        }
    }
    else
        printf("not triangle");

    return 0;
}