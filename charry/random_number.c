// a#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {

//   int number,guess,nguess=1;
//   srand(time(0));
//   number= rand()%100+1;

//   do {
//     printf("guess a number between 1 -100\n");
//     scanf("%d",&guess);
//     if (guess > number) {
//       printf("lower number please\n");
//     }
//     else if (guess < number) {
//       printf("Higher number please\n");
//     }
//     else {
//       printf("Yeah, Your guess is correct!\n you took %d attempts",nguess);
//       nguess++;
//     }
//   } while (guess!=number);
//   return 0;
// }