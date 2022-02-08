/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int s1 , s2 ;
  float average ;
  printf("Enter mark 1 : ");
  scanf("%d",&s1);
  printf("Enter mark 2 : ");
  scanf("%d",&s2);
  average = (s1 + s2) / 2.0 ;
  printf("Average = %.2f",average);
  
  return 0;
}

