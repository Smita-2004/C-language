#include<stdio.h>
int main()
{
    int i,min,max,a[100],n;
    printf("Enter number of elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Max= %d",max);    
    printf("Min= %d",min);    

    return 0;
}