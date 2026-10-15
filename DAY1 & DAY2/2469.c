
#include <stdio.h>

int main()
{
    double celsius, kelvin, fahrenheit;

    scanf("%lf", &celsius);

    kelvin = celsius + 273.15;
    fahrenheit = celsius * 1.8 + 32;

    printf("[%.5f, %.5f]", kelvin, fahrenheit);

    return 0;
}
