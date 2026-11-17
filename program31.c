#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number till where the sum is needed: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("the sum till %d is %d", n,sum);

}