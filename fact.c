#include <stdio.h>
#include <stdlib.h>
int main()
{
    int fact=1,num;
    printf("\nEnter the number : ");
    scanf("%d",&num);
    for(int i = 1; i<=num; i++)
    {
        fact=fact*i;
    }
    printf("\nThe factorial of %d is %d",num,fact);
    return 0;
}
