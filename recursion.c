#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long unsigned int recursive(int);

int main(void) {
int numb;
printf("Enter a Number: ");
scanf("%d", &numb);
printf("\nFactorial of %d! is %lu\n", numb, recursive(numb));
return 0;
}


long unsigned int recursive(int x) {
  if(x > 0) {
    return x * recursive(x - 1);
  } else {
    return -1;
  }
}
