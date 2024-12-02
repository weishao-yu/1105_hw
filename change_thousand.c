#include <stdio.h>
int main()
{
    int a, b, c, n, result1, result2;
    scanf("%d %d", &a, &b);
    c = a / 1000;
    n = b / 1000;
    result1 = c * 1000 + b % 1000;
    result2 = n * 1000 + a % 1000;
    printf("%d\n%d\n", result1, result2);
    return 0;
}