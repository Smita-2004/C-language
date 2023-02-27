// Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Yes,you can cast your vote.");
    }
    else{
        printf("Nope,You can't cast your vote.");
    }
    return 0;
}
