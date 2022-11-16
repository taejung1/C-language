#include <stdio.h>

int d(int n)
{
    int result = n;
    while (n > 0)
    {
        result += n % 10;
        n = n / 10;
    }
    return result;
}

int main()
{
    int list[10001] = {0}, result = 0;
    for (int i = 0; i < 10001; i++)
    {
        result = d(i);
        if (result < 10001)
            list[result] = 1;
    }
    for (int j = 0; j < 10001; j++)
    {
        if (list[j] != 1)
            printf("%d\n", j);
    }
}