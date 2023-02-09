#include<stdio.h>
int main()
{
    float p;
    printf("Enter p: ");
    scanf("%f",&p);

    float r;
    printf("Enter r: ");
    scanf("%f",&r);

    int t;
    printf("Enter t: ");
    scanf("%d",&t);

    float SI=(p*r*t)/100;
    printf("simple intrest is:%f",SI);
    return 0;
}
