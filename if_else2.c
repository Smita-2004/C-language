#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("yay!!! You can vote :)");
    }
    else{
        printf("Sorry!!! you can't vote :(");
    }
    return 0;
}
