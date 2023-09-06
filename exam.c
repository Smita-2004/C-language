    #include  <stdio.h>
void update();
int main()
{
update();
update();
return 0;
}
void update()
{
    auto int a=1;
    static int b=1;
    a++;
    b++;
    printf("%d,%d\n",a,b);
}















































