#include <stdio.h>
int main()
{
    int n, m, a, b, i = 1;
    int result = 0;
    scanf("%d", &a);
    while (a > 0)
    {
        n = a % 2;
        if (n == 0)
        {
            n = 1;
        }
        else
        {
            n = 0;
        }

        m = n * i;
        result = result + m;
        i = i * 10;
        a = a / 2;
    }
    printf("%d", result);
    return 0;
}