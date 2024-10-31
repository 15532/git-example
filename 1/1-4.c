#include <stdio.h>

int main(void)
{
    char n[20];
    unsigned int p;
    double fr, fa;
    char m;

    scanf("%s %d %lf %lf %c", n, &p, &fr, &fa, &m);
    double i = p + fr, co = (p + fr) * fa;
    char nm = m + 'A' - 'a';

    printf("%.2s: %d (%.5f) | %10.5E %.5f %c", n, p, fr, i, co, nm);
    return 0;
}
