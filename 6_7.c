#include<stdio.h>
int main()
{
    int count,number,r;
    printf("enter a number\n");
    scanf("%d",&number);
    for ( count = 0; number!=0; count++)
    {
        /* code */
        r=number%10;
        number=number/10;
    }
    printf("%d",count);
    return 0;
    
}