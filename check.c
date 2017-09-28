#include<stdio.h>
int main()
{
	int a;
	printf("\nEnter the number : ");
	scanf("%d",&a);
	if(a==0)
		printf("\nThe number is 0");
	else if(a%2==0)
		printf("\nThe number is even");
	else
		printf("\nThe number is odd");
	return a;
}