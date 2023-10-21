#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

char input[100], rev[100];
int k = 0, i;

printf("Enter a string: ");
scanf("%s", input);

for(i = 0; i < strlen(input); i++) {
      if(ispunct(input[i])) {
         continue;
      } else {
         input[i] += tolower(input[i]);
      }
}

for(i = strlen(input)-1; i >= 0; i--) {
    rev[k] = input[i];
    k += 1;
}

if(strcmp(input, rev)) {
       printf("Not a Palimdrome\n\n");
} else {
       printf("Palimdrome\n\n");
}
printf("%s %s\n", input, rev);
return 0;
}
