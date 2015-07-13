#include <stdio.h>

int main(int argc, char argv[])
{
	/*
	int areas[] = {1,2,3,4,5};
	// Try with a character
	int int areas[] = {1,2,3,4,5};
	char name[] = "Chung";
	char full_name[] = { 'C', 'h' ,'u','n' ,'g' ,' ', 'T','r','a','n','\0'}; */
    
    /*he size of an integer is  predicated on the size of the CPU's
      registers. However, a compiler could define any length it wanted  EX: 
      #define int 4 */
      
    int i;
    int areas[5];
    char name[] = "Chung";
    char full_name[] = { 'C', 'h' ,'u','n' ,'g' ,' ', 'T','r','a','n','\0'};

    printf("Enter an element: \n");
    for(i = 0;i<5;i++)
    {
    printf("Enter element areas[%d] :\n",i);
    scanf("%d",&areas[i]);
    }

	printf("The size of an int : %ld \n",sizeof(int));
	printf("the size of areas : %ld \n",sizeof(areas));
	printf("The number of ints in areas : %ld \n",sizeof(areas)/sizeof(int));
	printf("1st: %d,  2st: %d \n",areas[0],areas[1]);

	printf("The size of an char : %ld \n",sizeof(char));
	printf("the size of name : %ld \n",sizeof(name));
	printf("The number of char in name : %ld \n",sizeof(name)/sizeof(char));

	printf("The size of full_name : %ld \n",sizeof(full_name));
	printf("The number of char in full_name : %ld \n",sizeof(full_name)/sizeof(char));
	printf("Name : %s  Fullname : %s \n",name,full_name);

	return 0;



}