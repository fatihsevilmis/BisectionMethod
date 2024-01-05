// Bisection Method

#include <stdio.h>
#include <math.h>  

#define f(x) (4.5*(x) - 2*cos(x))      

double bisection(double a, double b)
{
	double tolarance = 10e-12;   
	int    MaxIteration = 1000;
	int    count = 0;
	
	if(f(a)  * f(b) > 0)
	{
		return 0;
	}
	
	while( (b - a) / pow(2,count) > tolarance && count < MaxIteration)
	{
		
	    double c = (a + b) / 2;
		
		if(0 == c)
		{
			return c;
		}
		
		else if(f(a) * f(c) < 0)
		{
			b = c;
		}
		
		else
		{
			a = c;
		}
		
		++count;											
	}
	printf("Number of Iterations: %d\n",count);
	return  (a+b) / 2;	
}

int main()
{
	// Initial interval [a, b]
       // The initial points vary according to the function.
    
	double a = 0.0;
	double b = 1.0; 
	double root = bisection(a, b);
	if(root)
	{	
		printf("Root of the equation: %f\n", root);
	}
	
	else
	{
		printf("No Root Found in the Specified Range\n");
	}
	
	getchar(); // Wait for a key press
}

