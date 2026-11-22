#include <stdio.h>
#include <math.h>

double rad_to_deg(double rad);

int main(void)
{
    double x;
    scanf("%lf", &x);
    if (x < 0)
    {
        printf("NG");
        return 0;
    }
    printf("%.2f", rad_to_deg(atan(x)));
    return 0;
}

double rad_to_deg(double rad)
{
    return rad * 180.0 / M_PI;
}