#include <stdio.h>

int main()
{
    int fori;
    scanf("%d" , &fori);

    for(int i = 0 ; i < fori ; i++) {
        int A,B;
        scanf("%d %d" , &A , &B);
        printf("%d\n" , A+B);
    }
    return 0;
}