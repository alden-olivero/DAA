#include <stdio.h>
#include <stdlib.h>

int large(int a[100], int n)
{
    int lar =a[0];
    for(int i=1; i<=n-1; i++)
    {
        if(a[i]>lar)
            lar=a[i];
    }
    printf("Largest element is %d", lar);
}
int main()
{
    int n, a[100],i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter elements of array");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    large(a,n);
}
