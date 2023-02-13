#include<stdio.h>
int main()
{
//    char a[100]="Smita Tiwari";
// printf("%s",a);

    char a[25];
    printf("Enter name: ");
    // scanf("%s",&a);
    scanf("%[^\n]%*c",a);
    printf("%s",a);
   
    return 0;
}