#include <stdio.h>
int main()
{
    float R, Area;
    scanf("%f", &R);
    Area = 3.141592653 * R * R;
    printf("%.9f\n", Area);
    return 0;
}