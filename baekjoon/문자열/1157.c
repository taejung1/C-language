#include <stdio.h>


int main()
{
    char list[1000000];
    int list2[26]={0,},max,max2=0,a;
    scanf("%s" , list);
    for(int i = 0 ; i < 26 ; i++) {
       for(int j = 0 ; j <  strlen(list) ; j++) {
           if(list[j] == 'a' + i || list[j] == 'A' + i) {
               list2[i] += 1;
           }
       }
    }

    max = list2[0];
    for(int j = 1 ; j < 26 ; j++){
            if(max < list2[j]) {
                max = list2[j];
            }
    }
    for(int j = 0 ; j < 26 ; j++){
          if(max == list2[j]) {
              max2++;
          }
    }
    if(max2 >= 2) {
        printf("?");
    } else {
        for(int i = 0 ; i < 26 ; i++) {
            if(list2[i] == max) {
                a=i;
            }
        }
        printf("%c" , a + 'A');
    }
}