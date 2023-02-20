#include<stdio.h>
void sum()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
      printf("The  number you enterded is : %d\n",a);

    int b;
    printf("Enter one more number: ");
    scanf("%d",&b);
    printf("The second  number you entered is: %d\n",b);

    int sum=a+b;
    printf("sum of first and second number is : %d\n",sum);
    // return 0;
    
}
// Calling a function
int main()
{
    sum();
    sum();
    sum();
    sum();
   
    return 0;
}

