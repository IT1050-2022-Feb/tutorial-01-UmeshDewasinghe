/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1;
  int mark2;
  printf("Input marks for subject 1 : ");
  scanf("%d",&mark1);
  printf("Input marks for subject 2 : ");
  scanf("%d",&mark2);
  printf("\nThe average mark is %.2f ",(mark1+mark2)/2.0);
  return 0;
}

