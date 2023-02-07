#include<stdio.h>
int main()
{
    float r;
    printf("Enter r: ");
    scanf("%f",&r);
    printf("radius os circle is:%f \n",r);

    float pi;
    printf("Enter pi: ");
    scanf("%f",&pi);
    printf("Value of pi is: %f \n",pi);

    float area=pi*r*r;
    printf("Area of circle is :%f \n",area);


    return 0;
}
