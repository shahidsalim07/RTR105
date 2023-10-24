//let investigate data types and variables


#include <stdio.h>

int main(void)
{
char c, test_symbol;  //declaration of discrete variables
                      //this is just creation of correspondence
                      //variable name (or identificator) vs 
                      //some place and some amount of bytesi= in memory

printf("value of c variable as symbol: %c\n", c);
printf("value of c variable as integer number (dec): %d\n", c);
printf("value of c variable as integer number (oct): %#o\n", c);
printf("value of c variable as integer number (hex): %#o\n", c);


//after declaration value is not known 
//this is why it is better to use definition 
 char c_new = 85; //definition of discrete variable

printf("value of c variable as symbol: %c\n", c_new);
printf("value of c variable as integer number (dec): %d\n", c_new);
printf("value of c variable as integer number (oct): %#o\n", c_new);
printf("value of c variable as integer number (hex): %#o\n", c_new);

//the role of variable is to be varied(changed)
//when we need we can assign new value!
c = 'y';
printf("value of c variable as symbol: %c\n", c);
printf("value of c variable as integer number (dec): %d\n", c);
printf("value of c variable as integer number (oct): %#o\n", c);
printf("value of c variable as integer number (hex): %#o\n", c);

printf('\n);

return 0;
}

