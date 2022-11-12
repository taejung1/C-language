#include <stdio.h>

int main() {
  int list[6], list2[6] = {1, 1, 2, 2, 2 , 8};

  for (int i = 0; i < 6; i++) {
    scanf("%d", &list[i]);
  }

  for (int i = 0; i < 6; i++) {
    printf("%d ", list2[i] - list[i]);
  }

  return 0;
}
