/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *           C-program to print pattern                        				*
 *           0																*
 *			 1 2															*
 *			 3 4 5															*
 *           6 7 8 9		                                                *
 *              			                                                *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
   	int n,i,j,no;
	printf("Enter a Limit/ Nth term \n");
	scanf("%d",&n);
	no=0;
	for(i=0;i<n+1;++i)
	{	
		for(j=0;j<i;j++)
		{	
			printf("%3d  ",no);
			no+=1;
		}
	printf("\n");
	}
	return 0;
	}

