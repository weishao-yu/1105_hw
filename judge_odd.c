#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, i = 0;
    scanf("%d %d %d %d", &m1, &m2, &m3, &m4);
    if (m1 % 2 != 0)
        i++;
    if (m2 % 2 != 0)
        i++;
    if (m3 % 2 != 0)
        i++;
    if (m4 % 2 != 0)
        i++;
    if (i == 3 || i == 4)
    {
        printf("There are %d  are odd number", i);
    }
    else
    {
        printf("There aren't 3 or 4 odd number");
    }
    return 0;
}