#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int val;
   char str[20];
    printf("\n Enter a string : ");
    scanf("%s",str);
     val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);
   return(0);
}
