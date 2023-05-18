#include <stdio.h>
#include <stdlib.h>
int euclid_alg(int m,int n)
{
    int r;
    while(n!=0)
    {
        r=m%n;
        m=n;
        n=r;
    }
    return(m);
}
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
int mid_school(int m,int n)
{
    int a=2,g=1;
    if(m==0)
        return n;
    if(n==0)
        return m;
    while((m>=a&&m!=0)&&(n>=a&&n!=0))
    {
        if(m%a==0)
        {
            if(n%a==0)
            {
                g=g*a;
                n=n/a;
            }
            m=m/a;
        }
        else
            a++;
    }
    return g;
}
int main()
{
    int m,n,ch,gcd;
    printf("\nEnter the first element:");
    scanf("%d",&m);
    printf("\nEnter the second number:");
    scanf("%d",&n);
    printf("\n1-GCD using Euclid's algorithm");
    printf("\n2-GCD using consecutive integers");
    printf("\n3-GCD using mid school method");
    while(1)
    {
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            gcd=euclid_alg(m,n);
            printf("GCD:%d",gcd);
            break;
        case 2:
            gcd=consecutive_int(m,n);
            printf("GCD:%d",gcd);
            break;
        case 3:
            gcd=mid_school(m,n);
            printf("GCD:%d",gcd);
            break;
        case 4:
            printf("Exit");
            exit(0);
            break;
        default:
            printf("\nInvalid choice");
        }
    }
    return 0;
}
