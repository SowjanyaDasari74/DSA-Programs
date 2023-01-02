#include <stdio.h>
int main()
{
    int a[10], i, item,n;
    printf("Enter number of elements of an array:");
    scanf("%d",&n);
    printf("Enter elements: ");
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter item to search: ");
    scanf("%d", &item);
    for (i=0; i<=9; i++)
        if (item == a[i])
        {
            printf("Item found at location %d", i+1);
            break;
        }
    if (i > 9)
        printf("Item does not exist.");
    return 0;
}
                                                                                                                   0,1           All


