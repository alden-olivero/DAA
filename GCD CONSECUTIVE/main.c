#include <stdio.h>
#include <stdlib.h>
int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int consecutive_int(int m,int n)
{
    int t;
    if(m==0)
        return n;
    if(n==0)
        return m;
    t=min(m,n);
    while(t!=0)
    {
        if(m%t==0)
        {
            if(n%t==0)
            {
                return(t);
            }
        }
        t--;
    }
    return(-1);
}
int main()
{
    int m,n,ch,gcd;
    printf("\nEnter the first element:");
    scanf("%d",&m);
    printf("\nEnter the second number:");
    scanf("%d",&n);
    gcd=consecutive_int(m,n);
    printf("GCD:%d",gcd);
    return 0;
}
