//Write a C program to check whether a given number is even or odd.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%2==0)
{
    printf("Even Number");
}
else{
    printf("Odd Number");
}

    return 0;
}
