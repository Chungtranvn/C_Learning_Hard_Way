//Formatted Printing

#include <stdio.h>

int main()
{
  
    // Test the other % format characters 

    printf("I am %d years old.\n", 12);
    printf("I am %d inches tall.\n", 70);
    printf("Chacrater : %c \n", 'c');
    printf("Floating number %0.2f .\n",1.2345);
    printf("Blank : %5d \n",5);
    printf("Difference of digits : %d %x %o %#x \n",10,10,10,10);
    printf("String: %s \n","abcd");
    return 0;
}