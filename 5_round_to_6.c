#include <stdio.h>
int main()
{
    int a, b, c, result;
    scanf("%d", &a);
    a = a / 100;
    b = a % 10;
    c = a / 10;
    if (b >= 6)
    {
        c = c + 1;
    }
    else
    {
        c = c;
    }
    result = c * 1000;
    printf("%d", result);
    return 0;
}