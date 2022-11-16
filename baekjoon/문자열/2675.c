#include <stdio.h>


int main()
{
    int n,len,m;
    char str[20];
    scanf("%d" ,  &n);
    for(int i = 0 ; i < n ; i++) {
        scanf("%d %s" ,  &m , str);
        len = strlen(str);
        for(int j = 0 ; j < len ; j++){
            for(int k = 0 ; k < m ; k++) {
                printf("%c" , str[j]);
            }
        }
        printf("\n");
    } 
}