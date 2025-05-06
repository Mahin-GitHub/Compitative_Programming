#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int m1, m2, d;
    int m3, needDays, fewerDays;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);
        m3 = m1 + m2;
        needDays = (m1 * d) / m3;
        fewerDays = d - needDays;

        printf("%d\n", fewerDays);
    }
    

    return 0;
}