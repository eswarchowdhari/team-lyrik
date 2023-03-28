/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int main() {
  int i, Digit, fact = 1;
  printf("Enter a number to calculate its factorial : ");
  scanf("%d", &Digit);
  for (i = 1; i <= Digit; i++)
    fact = fact * i;
    printf("Factorial of %d = %d\n", Digit, fact);
    return 0;
}