#include<stdio.h>
int main()
{
    int i ,n, sum=0;
    printf("enter number\n");
    scanf("%d",&n);
    printf("the sum of  first %d even number :",n);
    for ( i = 1; i <=n; i++)

    {   

        sum=sum+2*i;
    }
printf("%d",sum);
    return 0;

}


