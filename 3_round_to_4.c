#include <stdio.h>
int main()
{
    float a, result;
    int b, c;
    scanf("%f", &a);
    a = a * 1000;
    b = (int)a % 10;
    c = (int)a / 10;
    if (b >= 4)
    {
        c = c + 1;
    }
    else
    {
        c = c;
    }
    result = (float)c / 100;
    printf("%.2f", result);
    return 0;
}