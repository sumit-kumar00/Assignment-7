#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("enter a number");
    scanf("%d",&a);
    for(b=0;b<=a;b++)
    {
        c=c+b;
    }
    printf("\n%d",c);
}