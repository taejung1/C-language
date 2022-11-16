#include <stdio.h>

int main()
{
    char list_1[100];
    int n, s = 0;
    scanf("%d", &n);

    scanf("%s", list_1);
    for (int j = 0; j < n; j++)
    {
        s += (list_1[j] - '0');
    }
    printf("%d", s);
}
