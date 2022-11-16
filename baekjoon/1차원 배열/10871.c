#include <stdio.h>

int main()
{
    int n, m, input;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);

        if (m > input)
            printf("%d ", input);
    }
}