#include <stdio.h>

int main(int argc, char *argv[])
{
	//Variable Declaration
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";
	int *p ;

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);
    
    /*Try some other printf formats */
    printf("Signed decimal integer : %i .\n", 123 );
    printf("Unsigned decimal integer : %u .\n", 456 );
    printf("Unsigned octal : %o .\n", 10 );
    printf("Unsigned hex integer and uppercase: %x , %X .\n", 10 , 10);
    printf("Decimal floating point : %4f .\n", 1.23 );
    printf("Scientific notation : %e .\n", 100.9e+2 );
    printf("Point address : %p .\n", p );
    printf("Flags : %-d      %+d      % d      %#x      %0d.\n", 5 ,5 , 5, 5 , 5);
    printf("Precison : %.*d \n", 10, 20 );
    printf("Precison : %*d \n", 10, 20 );
    printf("Empty String %s : \n"," ");

    return 0;
}
