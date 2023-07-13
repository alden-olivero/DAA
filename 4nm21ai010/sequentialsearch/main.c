#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int linearsearch(int a[ ], int search)
{
    for (int i = 0; i < MAX; i++)
        if (a[i] == search)
            return i;
    return -1; // if not found
}

int main()
{
    int pos, n, search, a[MAX];
    printf("\nSize of array: ");
    scanf("%d", &n);
    printf("\nEnter the list of integers: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter element to search: ");
    scanf("%d", &search);
    pos = linearsearch(a, search);
    if (pos != -1)
        printf("\nFound at %d\n", pos+1);
    else
        printf("\nNot found\n");

    return 0;
}
