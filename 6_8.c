#include<stdio.h>
int main()
{
    int number,i;
    printf("enter a number\n");
    scanf("%d",&number);
    for ( i = 2; i<number; i++)
    {
        if (number%i==0)
        {
            printf("number is not prime");
            /* code */
            break;
        }

    }
    if(i==number)
    {
        printf(" %d number is prime number",number);
    }
return 0;
    
}