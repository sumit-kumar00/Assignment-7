#include<stdio.h>
int main()
{
    int a,c,b,hcf;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(c=1;c<=a||c<=b;c++)
    {
        if(a%c==0&&b%c==0)
            hcf=c;
    }
    printf("HCF is %d",hcf);
}