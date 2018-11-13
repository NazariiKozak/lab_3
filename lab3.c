#include <stdio.h>
#include <math.h>

int main()
{

    double min, max, step;
    printf("Choose min value: ");
    scanf("%lf", &min);
    printf("Choose max value: ");
    scanf("%lf", &max);
    printf("Choose step value: ");
    scanf("%lf", &step);

    printf("enter the miss: ");
    double d;
    scanf("%lf", &d);

    double x, k, func, sum;
    x = min;
    k = 1.0;
    sum = 0;

    do
    {
        func = (pow(-1, k)*pow(x, 2*k + 3))/((2*k + 1)*(2*k + 3));
        if (fabs(func) <= d + d / 2)
        {
            printf("x = %.1lf, sum = %lf\n", x, sum);
            x += step;
            k -= 1.0;
        }
        else
        {
            sum += func;
        }
        k = k + 1.0;
    } while (x <= max + step / 2);

return 0;
}
