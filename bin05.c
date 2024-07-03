#include <stdio.h>
int main() {
  int n;
  printf("Enter n: ");
  scanf("%d", &n);
  int array[n];
  printf("");
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
  printf("OUTPUT:\n");
  printf("Odd Numbers: ");
  for (int i = 0; i < n; i++) {
    if (array[i] % 2 != 0) {
      printf("%d ", array[i]);
    }
  }
  printf("\n");
  printf("Even Numbers: ");
  for (int i = 0; i < n; i++) {
    if (array[i] % 2 == 0) {
      printf("%d ", array[i]);
    }
  }
  printf("\n");
  return 0;
}
