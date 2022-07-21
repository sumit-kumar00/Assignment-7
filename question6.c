#include<stdio.h>
int main()
{
    int a,c,b;
     printf("prime numbers between 1 and 100 are :\n");
         for(a=0;a<=100;a++)
            {
                c=0;
                for(b=1;b<=a;b++)
                    {
                        if(a%b==0)
                        c++;
                    }
                    if(c==2)
                        printf("%d\n",a);
            }
    
       

    
}