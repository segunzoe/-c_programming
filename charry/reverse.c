// #include <stdio.h>

// int reverse(int a[], int n) {

//   int temp;
//   for (int i = 0; i < n / 2; i++) {
//     temp = a[i];
//     a[i] = a[n - i - 1];
//     a[n - i - 1] = temp;
//   }
//   return 0;
// }

// void display(int *ptr, int n) {

//   for (int i = 0; i < n; i++) {

//     printf("%d ", *ptr);
//     ptr++;
//   }
//   printf("\n");
// }

// int main() {

//   int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//   display(a, 10);
//   reverse(a, 10);
//   display(a, 10);
//   return 0;
// }