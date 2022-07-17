#include<stdio.h>
int main()
{
    int i,Number, fact=1;
    printf("enter a number\n");
    scanf("%d",&Number);
    for ( i = 1; Number >=i; Number--)
    {
        /* code */fact= fact*Number;
    }
    printf(" factorial is : %d",fact);
    return 0;

}