
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "program.h"

#ifdef RADIUS
	#define CIRCUMFERENCE(x) (x) * (2) * (3.145);
#endif
#ifndef RADIUS
	#define CIRCUMFERENCE(x) (x) * (3.145)
#endif


// Don't alter the main function.  Modify the 'modify_me' function
int main(int argc, char *argv[])
{
    return modify_me(validate_input(argc, argv));
}

float modify_me(float x)
{
     // Add your code here
	float circumference = CIRCUMFERENCE(x);

	#ifndef RADIUS
	printf("The circumference based on a diameter of %.2f feet has a circumference of %.2f feet.\n",x,circumference);
	#endif

	#ifdef RADIUS
	printf("The circumference based on a radius of %.2f feet has a circumference of %.2f feet.\n",x,circumference);
	#endif

     return x;
}




