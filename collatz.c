#include <stdio.h>

int collatz(int n);

int main(void) {
  int n = 7;

  printf("Processing the collatz sequence for: %i\n", n);
  printf("Total steps to 1: %i\n", collatz(n));
  return 0;
}

int collatz(int n) {
  printf("n is currently %i\n", n);

  if (n == 1)
    return 0;
  else if (n % 2 == 0)
    return 1 + collatz(n / 2);
  else 
    return 1 + collatz((3 * n) + 1);
}