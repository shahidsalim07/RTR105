include<stdio.h>
#include<stdint.h>  
#include<math.h>
int main()       
{
char a;
printf("Enter a natural number: ");      
scanf("%hhd", &a);
printf("Number: 0x%X\n", a);
printf("%hhd", ((a & 0x80) >> 7));
printf("%hhd", ((a & 0x40) >> 6));
printf("%hhd", ((a & 0x20) >> 5));
printf("%hhd", ((a & 0x10) >> 4));
printf("%hhd", ((a & 0x08) >> 3));
printf("%hhd", ((a & 0x04) >> 2));
printf("%hhd", ((a & 0x02) >> 1));
printf("%hhd", ((a & 0x01) >> 0));
printf("\n");
  return 0;      
}    
