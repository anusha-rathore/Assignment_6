#include<stdio.h>
int main()
{
    int number1,number2 ,lcm;
    printf("enter two number\n");
    scanf("%d %d", &number1,&number2);
 for ( lcm = number1>number2?number1:number2 ; lcm <=number1*number2; lcm++)

 {
    if (lcm%number1==0 && lcm%number2==0)
         break;
}
 printf("Lcm is %d", lcm);
 
    return 0;

}