#include<stdio.h>

int fact(int x)
{
	int fac=1; int a;
	for(a=1;a<=x;a++)
	{
		fac=fac*a;
	}
	return fac;
}

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int b=fact(n);
	printf("\nThe factorial of the entered number is: %d",b);
	return 0;
}