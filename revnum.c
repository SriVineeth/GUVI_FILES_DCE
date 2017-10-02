#include <stdio.h>
int main()
{
    int num,rev=0,i=0;
    printf("\nEnter any number : ");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
     rev = rev*10 + num%10;
        num = num/10;
    }
        printf("Reverse of no. is %d", rev);
    getchar();
    return 0;
}
