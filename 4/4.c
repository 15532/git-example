#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int m = 2147483648, l = 0, h = 4294967295;
    char s[10];
    while (1)
    {
        printf("%u\n", m);
        fflush(stdout);
        scanf("%s", s);

        switch (s[0])
        {
        case 'G':
            h = m - 1;
            break;
        case 'L':
            l = m + 1;
            break;
        case 'E':
            return 0;
        case '0':
            return 0;
        }
        m = l+ ((h - l) >> 1);
    }
    return 0;
}