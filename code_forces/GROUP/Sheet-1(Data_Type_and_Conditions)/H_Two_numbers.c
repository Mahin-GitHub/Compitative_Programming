#include <stdio.h>
#include <math.h>
int main()
{

    float A, B;
    scanf("%f %f", &A, &B);
    float X = A / B;

    printf("floor %.f / %.f = %.f\n", A, B, floor(X));
    printf("ceil %.f / %.f = %.f\n", A, B, ceil(X));
    printf("round %.f / %.f = %.f\n", A, B, round(X));

    return 0;
}