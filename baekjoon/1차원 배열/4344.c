#include <stdio.h>

//도저히 못풀겠어서 검색함 ..ㅋ

int main()
{
    int c, n, cnt;
    int score[1000];
    double avg;

    scanf("%d", &c);

    for (int i = 0; i < c; ++i)
    {
        scanf("%d", &n);
        avg = 0.0;

        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &score[j]);
            avg += score[j];
        }
        avg /= n;

        cnt = 0;
        for (int j = 0; j < n; ++j)
        {
            if (score[j] > avg)
                ++cnt;
        }

        printf("%.3f%\n", 100.0 * cnt / n);
    }

    return 0;
}