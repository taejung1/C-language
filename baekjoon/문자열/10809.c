#include <stdio.h>

int main()
{
    char list[100];
    int list_2[26] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,};
    scanf("%s" , list);
    for(int i = 0 ; i < 26; i++) {
            for(int j= 0 ; j < strlen(list) ; j++){
                if(list[j] == 'a'+i) {
                    list_2[i] = j;
                    break;
                }
            }
    }
     for(int i = 0 ; i < 26 ; i++) {
        printf("%d " , list_2[i]);
    }
}