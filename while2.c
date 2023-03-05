#include<stdio.h>
int main()
{
    int number,n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    while(number!=0)
    {
        n=number%10;
        sum=sum+n;
        number=number/10;

    }
    printf("%d",sum);

    return 0;
}
