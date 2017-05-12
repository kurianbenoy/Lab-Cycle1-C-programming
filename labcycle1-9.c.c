/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *           C-program to grade of student                       				*
 *				Percentage		Grade
				=========		=====

				>=75			Distinction
				>=60&<=75		1st CLASS
				>=50&<=60	    2ND CLASS   	       																*
 *				>=45&<=50		PASS
 *		   		<=45			FAIL
		 															
 *              			                                                *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
   	float m1,m2,m3;
	float avg=0.0;
	printf("Enter marks of 3 subjects:\n");
	scanf("%f %f %f",&m1,&m2,&m3);
	avg=(m1+m2+m3)/3.0;
	if (avg>=75)
		printf("Distinction \n");
	else if((avg>=50)&(avg<=60))
		{
		printf("1st Class\n");
		}
	else if((avg>=50)&(avg<=45))
		{
		printf("Pass\n");
		}
	else if(avg<=45)
		printf("Fail\n");

	return 0;
	}

