/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *          W.A.P to print all prime nos in 
			first n fibonacci terms                            *
 ****************************************************************************/

#include <stdio.h>
#include<math.h>


int main(int argc, char *argv[])
{ 
	float a,b,c;
	float desc,root1,root2;

	printf("Enter the value of x^2 : ");
	scanf("%f",&a);
	printf("Enter the value of x term");
	scanf("%f",&b);
	printf("Enter the value of constant term :");
	scanf("%f",&c);

	desc=sqrt(b*b-4*a*c);
	root1=(-b+desc/(2.0*a));
	root2=(-b-desc/(2.0*a));
	if(desc>0)
	{	
		printf("Roots are real and unequal \n");
		printf("\n First root : %f",root1);
		printf("\n SECOND root : %f",root2);
	}
	else if(desc=0)
	{	
		printf("Roots are real and equal \n");
		printf("\n root are equal : %f",root1);
	}
		
	else if(desc<0)
	{
		printf("Roots are imaginary and unequal \n");
	}	
	


	return 0;
}




}	
	
