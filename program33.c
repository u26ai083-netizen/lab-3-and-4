#include <stdio.h>
int main()
{
    int max,min,n,i,arr[x];
    printf("enter the limit: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &arr[n]);
    }
    max=arr[0];
    min=arr[0];
    for(i=1; i<=n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("maximum number is %d", max);
    printf("minimum number is %d", min);
    
}