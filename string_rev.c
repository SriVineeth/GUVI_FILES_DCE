#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char gnstring[100];
    printf("\nEnter a String : ");
    scanf("%s",&gnstring);
    printf("\nAfter reversing : %s\t",strrev(gnstring));
    return 0;
}
