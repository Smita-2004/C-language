#include<stdio.h>
void display(int n);
int main()
{
    int n=3
    display(n);
    return 0;
}
void display(int n)
{
    if (n<1)
    {
        return 1;

    }
    else {
        printf("%d",n);
        display(n-1);
        printf("%d",n);
    }
}