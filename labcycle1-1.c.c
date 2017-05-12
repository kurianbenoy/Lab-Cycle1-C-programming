/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int main(int argc, char *argv[])
{
    /* TODO: Enter code here */
	float a,b,res=0;
	int n;
	printf("Enter 2 nos \n");
	scanf("%f %f",&a,&b);
	printf("Enter your Choice\n1.Addition\n2.Subtraction \n3.Multiplication \n4.Division \n ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:res=a+b;
			printf("Resultant of 2 nos is %f",res);
			break;
		case 2:res=a-b;
			printf("Resultant of 2 nos is %f",res);
			break;
		case 3:res=a*b;
			printf("Resultant of 2 nos is %f",res);
			break;
		case 4:res=a/b;
			printf("Resultant of 2 nos is %f",res);
			break;
		default:printf("Enter wrong choice");
	}  
  	return 0;
	
}
