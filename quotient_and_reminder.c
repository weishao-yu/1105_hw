#include <stdio.h>
int main()
{
    int m, n, k1, k2;
    scanf("%d %d", &m, &n);
    k1 = m / n;
    k2 = m % n;
    printf("%d = %d * %d + %d", m, k1, n, k2);
    return 0;
}