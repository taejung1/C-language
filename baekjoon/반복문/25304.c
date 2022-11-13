#include <stdio.h>

int main()
{
    int total,fori,all;
    scanf("%d", &total);

    all = 0;

    scanf("%d", &fori);
    for(int i = 0 ; i < fori ; i++) {
        int a,b;
        scanf("%d %d" , &a , &b);
        all += a * b;
    }

    if(all == total) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}