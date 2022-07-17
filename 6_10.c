#include<stdio.h>
int main()
{
    int number , r;
    printf("enter a number\n");
    scanf("%d",&number);
        printf("reverse of %d is :" ,number);

    while (number!=0)
    {
        r=number%10;
        printf("%d",r);
        number=number/10;
    }
    return 0;
}