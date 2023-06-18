#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("number is even = %d",n);
	}
	else
	{
		printf("Number is odd = %d",n);
	}
	return 0;
}
