#include <stdio.h>


int main()
{
    char a[100];
    int n=0,st ;
    scanf("%s" , a);
    st = strlen(a);
    for(int i = 0 ; i <  st  ; i++ ) {
        if(a[i] =='c' && (a[i+1] == '=' || a[i+1] == '-')) {
            n++;
            i++;
        }
        else if(a[i] == 'd') {
            if(a[i+1] == '-') {
                n++;
                i++;
            } else if(a[i +1] == 'z'   && a[i+2] == '=' ) {
                n++;
                i+=2;
            } else {
                n++;
            }
        }
        else if(a[i] == 'l' && a[i + 1] == 'j') {
            n++;
            i++;
        }
        else if(a[i] == 's'  && a[i + 1] == '=') {
            n++;
            i++;
        }
        else if(a[i] == 'z' && a[i + 1] == '=') {
            n++;
            i++;
        }
        else if(a[i] == 'n' && a[i +1] == 'j' ) {
            n++;
            i++;
        } else {
            n++;
        }
    }
    printf("%d" , n );
    return 0;
}
