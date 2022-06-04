#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *greater than 5 or less than 6
 *Return: 0
 */

int main(void)

{  
int n;
int lastdigit;

 srand(time(0)); 
n = rand() - RAND_MAX /2;

lastdigit = n % 10;
printf("Last digit of %i is %i and is ", n, lastdigit);
if(lastdigit > 5)
  printf("greather than 5\n");
else if(lastdigit == 0)
   printf("0\n");
else
   printf("less than 6 and not\n");
return(0);
}
