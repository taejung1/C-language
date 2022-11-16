#include <stdio.h>

int main()
{
    int list[30] = {0, }, i, temp;

    for(i = 0; i < 28; i++)
    {
        scanf("%d", &temp);
        list[temp - 1] = temp;
    }

    for(i = 0; i < 30; i++)
    {
        if(list[i] == 0) 
        {
            printf("%d\n", i + 1);
        }
    }
}