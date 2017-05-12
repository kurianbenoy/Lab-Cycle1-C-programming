/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *           C-program to convert figures to word                           *
 *           ie.157-One Five Seven		                                    *
 *              			                                                *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
   	int n,rev=0,num=0,a;
	printf("Enter a no \n");
	scanf("%d",&n);
	while (n>0)
	{
		rev=rev*10+n%10;
		n/=10;
	}
	while (rev>0)
	{	a=rev%10;
		num=num*10+a;
		rev/=10;
		switch(a)
		{
			case 1: printf("One\n");
					break;
			case 2: printf("Two\n");
					break;
			case 3: printf("Three \n");
					break;
			case 4:printf("Four\n");
					break;
			case 5:printf("Five \n");
					break;
			case 6:printf("Six \n");
					break;
			case 7:printf("seven\n");
					 break;
			case 8:printf("Eight \n");
					break;
			case 9:printf("Nine \n");
					break;
			case 0:printf("Zero \n");
					break;
			default:printf("Wrong choice");
		}
	} 
	return 0;
}
