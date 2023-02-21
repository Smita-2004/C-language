#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age to see if you can drive or not: ");
    scanf("%d",&age);
    
    if(age<=70 && age>=18)
    {
        printf("Yes,You can drive");     
    }
    else{
        printf("No, You can't drive");
    }
    return 0;
}
