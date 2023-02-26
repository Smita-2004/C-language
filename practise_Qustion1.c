// Write a C program to accept two integers and check whether they are equal or not.
#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter a number: \n");
scanf("%d",&num1);
printf("Enter one more number: \n");
scanf("%d",&num2);

if(num1==num2)
{
    printf("Both the numbers you entered are equal");
}
else{
    printf("The numbers you entered are not equal");
}

    return 0;
}

