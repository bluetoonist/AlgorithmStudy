// 옆에 있는 값과 비교해서 더 작은 값을 앞으로 보내면 어떨까?

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, j, temp;

  int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 9; j++) {

      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }

  for (i = 0; i < 10; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}
