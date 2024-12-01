#include <stdio.h>
int main()
{
    int n, m, a, b, i = 1;
    int result = 0;
    int position = 0;
    scanf("%d", &a);
    if (a == 0)
    {
        printf("1");
        return 0;
    }

    while (a > 0)
    {
        n = a % 2;
        if (position % 2 == 0)
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
        position++;
    }
    printf("%d", result);
    return 0;
}