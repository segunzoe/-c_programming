#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp) {
  if (you == comp) {
    return 0;
  } else if ((you == 'w' && comp == 'g') || (you == 'g' && comp == 's') ||
             (you == 's' && comp == 'w')) {
    return 1;
  } else {
    return -1;
  }
}

int main() {

  char you, comp;
  srand(time(0));
  int number = rand() % 100 + 1;

  if (number < 33) {
    comp = 's';
  } else if (number < 66) {
    comp = 'w';
  } else {
    comp = 'g';
  }
  printf("enter 's' for snake, enter 'w' for water and 'g' for gun\n");
  scanf("%c", &you);

  int result = snakeWaterGun(you, comp);
  if (result == 0) {
    printf("game drown\n");
  } else if (result == 1) {
    printf("You won\n");
  } else {
    printf("You lose\n");
  }

  printf("You choose %c and computer chose %c\n", you, comp);
  return 0;
}