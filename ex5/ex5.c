//Header file - Import the contents of one file into this code
#include <stdio.h>

//The main function with 2 parameters 
//int argc is argument counter
//char *argv[] is an array of char* strings for argument
//ex ./program a b c then argc is 4 include the file and argv is {"./program","b","a","c"}
int main(int argc, char *argv[])
{
	//Variable declaration and assignment at the same time
	int distance = 100;
	//Use printf function 
	printf("You are %d miles away. \n",distance);
    //Exit program if the program returns zero then the code has been excecuted without errors 
	return 0;
}

