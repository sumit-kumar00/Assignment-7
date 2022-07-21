#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("enter the boths limits ");
    scanf("%d%d",&a,&b);
    for(c=a;c<=b;c++)
    {
        d=0;
        for(e=2;e<b;e++)
        {
            if(c%e==0)
                f=f+1;
        }
         if(f==0)
            printf("\n%d",c);
        
    }
}