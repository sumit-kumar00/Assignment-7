#include<stdio.h>
int main()
{
    int a=0,b=1,c,num,count=0;
    printf("enter the value of num\n");
    scanf("%d",&num);
    printf("first %d fibonacci number are\n",num);
    printf("%d\n",a);
    printf("%d\n",b);
    while(count<num)
    {
        c=a+b;
        count++;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}