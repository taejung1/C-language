#include <stdio.h>

int main()
{

    int n, a[100], v, cnt = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &v);

    for (int j = 0; j < n; j++)
    {
        if (a[j] == v)
            cnt++;
    }

    printf("%d", cnt);
}
