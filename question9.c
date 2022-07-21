#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter a number");
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        c=b%10;
        d+=c*c*c;
        b/=10;
    }
    if(d==a)
    {
        printf("%d is armstrong number",a);
    }
    else
    {
        printf("%d is not a armstrong number",a);
    }
}