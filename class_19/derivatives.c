#undef __STRICT_ANSI__
#include <stdio.h>
#include <math.h>

int main()
{
    FILE *pFile;
    float a = 0., b = 2 * M_PI, x, delta_x = 1.e-2;
    pFile = fopen("bessel.dat", "w");
    fprintf(pFile, "\tx\t\tJ_0(x)\t\tJ_0\'(x)\n");
    x = a;
    while (x < b)
    {
        fprintf(pFile, "%10.2f\t%10.2f\t%10.2f\n", x, bessj0(x), (bessj0(x + delta_x) - bessj0(x)) / delta_x);
        x += delta_x;
    }
    fclose(pFile);
    return 0;
}
