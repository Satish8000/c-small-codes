#include <stdio.h>

int main() {

int number;
printf("Enter a positive number: ");
scanf("%d", &number);
int temp1 = 0;
int temp2 = 1;
printf("%d\n", temp1);
printf("%d\n", temp2);
for(int i = 0; i < number-2; i++) {
    int combine = temp1+temp2;
    printf("%d\n", combine);
    temp1 = temp2;
    temp2 = combine;
}

return 0;
}
