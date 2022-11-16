#include <stdio.h>


int main()
{
    char list[1000000]; // 0000
    gets(list);
    int  all = 0,  sl = strlen(list);
    for(int i = 0 ; i < sl ; i++) {
        if(list[i] == ' ') {
            all++;
        }
    }
    all++;
    if(list[0] == ' ') {
        all--;
    }
    if(list[sl - 1] == ' ') {
        all--;
    }


    printf("%d" , all);
}