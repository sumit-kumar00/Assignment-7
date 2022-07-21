#include<stdio.h>
int main()
{
    int a,b,c,hcf;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(c=1;c<=a;c++)
    {
        if(a%c==0&&b%c==0)
        {
            hcf=c;
        }
    }
    if(hcf==1)
    {
        printf("\n%d and %d are co-prime",a,b);
    }
    else
    {
        printf("\n%d and %d are not co-prime numbers",a,b);
    }
}