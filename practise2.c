#include<stdio.h>
int main()
{
    int physics, chemistry,maths;
    printf("Enter your physics marks:\n");
    scanf("%d",&physics);
    printf("Enter your chemistry marks: \n");
    scanf("%d",&chemistry);
    printf("Enter your maths marks: \n");
    scanf("%d",&maths);
    float total_percent=((physics+chemistry+maths)/3);

    if((total_percent==40)|| physics<33 || chemistry<33 || maths<33)
    {
        printf("Your percent is %f and you are fail",total_percent);
    }
    else{
        printf("Your percent is %fand you are pass",total_percent);
    }
    return 0;
}
