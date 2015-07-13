#include <stdio.h>
#include <string.h>

int main(int agrc, char *agrv[])
{
	int i;
	int numbers[5] = {0};
	char name[5] = { 'a' };

	printf("Numbers are : %d %d %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[3],numbers[4]);
	printf("Names are : %c %c %c %c %c\n",name[0],name[1],name[2],name[3],name[4]);
	printf("Name : %s \n",name);

    // Assign values
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	numbers[4] = 5;

	name[0] = 'C';
	name[1] = 'H';
	name[2] = 'N';
	name[3] = 'G';
	name[4] = 'U';
	

	//Extra Credit
	/*rs[0] = 'C';
	numbers[1] = 'H';
	numbers[2] = 'U';
	numbers[3] = 'N';
	numbers[4] = 'G';

	name[0] = 1;
	name[1] = 2;
	name[2] = 3;
	name[3] = 4;
	name[4] = 5;*/



	/*re-print
    printf("Print again!\n");
	printf("Numbers are : %d %d %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[3],numbers[4]);
	printf("Names are : %c %c %c %c %c\n",name[0],name[1],name[2],name[3],name[4]);
	printf("Name : %s \n",name);
    */

    //another way to use name
    char *another = "CHUNG";

    printf("Anothers : %c %c %c %c %c \n",another[0],another[1],another[2],another[3],another[4]);

    printf("Another : %s\n",another);

    /*Extra Credit
    printf("Extra Credit!!\n");
	printf("Numbers are : %d %d %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[3],numbers[4]);
	printf("Names are : %c %c %c %c %c\n",name[0],name[1],name[2],name[3],name[4]);
	printf("Name : %s \n",name); */

	printf("Another way to print this out! \n");
	//Numbers
	printf("Numbers: \n");
	for(i= 0; i<5; i++)
	{
		printf("%d ", numbers[i] );
	}
	//Name
	printf("\n Name: \n");
	for (i = 0; i < strlen(name); i++)
	{
		printf("%c ", name[i] );
	}

    

    return 0;
}