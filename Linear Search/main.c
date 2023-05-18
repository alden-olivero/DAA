#include <stdio.h>
int linearSearch(int *a,int n)
{
    int i,pos=-1;

    for(i=0;i< n; i++)
    {
        if(a[i]==n)
        {
            pos=i;
            break;
        }
    }
    return pos;
}
int main()
{
    int i,n,arr[200];
    int num;
    int position;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter array elements:\n");
    for(i=0;i< n;i++)
        scanf("%d",&arr[i]);
    printf("\nNow enter element to search :");
    scanf("%d",&num);
    position=linearSearch(arr,num);
    if(position==-1)
        printf("Element not found.\n");
    else
        printf("Element found @ %d position.\n",position);

    return 0;
}
