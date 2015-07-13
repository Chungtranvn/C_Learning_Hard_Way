// If statements

#include <stdio.h>

int main(int agrc, char *agrv[])
{

	int i = 0 ,j =0 , k=0;

	if( agrc < 0 )
	{
		printf("You did wrong! \n");
	}
	else
	{
	if( agrc ==0 )
	{
			printf("You entered zero value! \n");
	}
	else if( agrc =! 0  && agrc >1 && agrc <4 ) 
	{
		printf(" Here are your arguments : \n");
		for(i=0;i<agrc;i++)
		{
			printf("%s \n",agrv[i]);
		}
	}
	else if( agrc == 4 || agrc ==5 )
	{
		printf("You have already entered 4 or 5 arguments ! \n");
	}
	else

	printf("You have entered too much arguments!\n");
	}

	printf("\n");

	//Use if statement to stop loops

	while(j<4)
	{
		printf("Value of j : %d\n",j);
		j++;
		if(j==3) break;
	}

	printf("\n");

	for(;k<5;k++)
	{
		printf("Value of k : %d \n",k);
		if(k==3) break;
	}

	return 0;
}