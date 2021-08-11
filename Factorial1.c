#include <stdio.h>
int main() {
  long int fact=1  ,n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
      fact=fact*i;
      printf("%d ",fact);
      printf("\n");
  }
  return 0;
}
