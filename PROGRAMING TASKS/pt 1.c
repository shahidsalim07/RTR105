#include <stdio.h>
int main()
 {   
  long long num1, num2, product;
  //  user to enter their numbers    
  printf("Enter the first number: ");
  scanf("%lld", &num1);
  printf("Enter the second number: ");
  scanf("%lld", &num2);

  product = num1 * num2; 
  printf("The product of %.lld and %.2lld is: %.2lld\n", num1, num2, product);
  return 0;
  }
