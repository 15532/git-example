#include <stdio.h>

int main()
{
    char m[10];
    char wd[10];
    int d, h, min, s, y;

    scanf("%s %d %d %s %d %d %d", m, &d, &y, wd, &h, &min, &s);

    printf("%.3s %.3s %.2d %.2d:%.2d:%.2d %.4d", wd, m, d, h, min, s, y);

    return 0;
}
