#include <stdio.h>
#include <math.h>

int main()
{
	double principal = 0.0;
	double rate = 0.0;
	int years = 0;
	int timescompounded = 0;
	double total = 0.0;
	
	printf("compound intrest calculator\n");
	
	printf("Enter the principal (p):");
	scanf("%lf", &principal);
	
	printf("Enter the intrest rate % (r):");
	scanf("%lf", &rate);
	rate = rate/100;
	
	printf("Enter the number of years (t):");
	scanf("%d", &years);
	
	printf("Enter the number of times compounded per year (n):");
	scanf("%d", &timescompounded);
	
	total = principal * pow(1+rate/timescompounded, timescompounded*years);
	
	printf("After the %d years the total bill will be $%.2lf", years, total);
	
	
	
	
	
}
