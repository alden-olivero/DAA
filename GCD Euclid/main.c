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
int main()
{
    int m,n,ch,gcd;
    printf("\nEnter the first element:");
    scanf("%d",&m);
    printf("\nEnter the second number:");
    scanf("%d",&n);
    gcd=euclid_alg(m,n);
    printf("GCD:%d",gcd);
    return 0;
}
