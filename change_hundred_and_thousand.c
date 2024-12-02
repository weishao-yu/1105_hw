#include <stdio.h>
int main()
{
    int a, b, c, number, result;
    scanf("%d", &number);
    a = number / 1000;
    b = (number / 100) % 10;
    c = number % 100;
    result = b * 1000 + a * 100 + c;
    printf("%d", result);
    return 0;
}