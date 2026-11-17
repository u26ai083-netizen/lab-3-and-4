#include<stdio.h>
int main()
{
    int first=0,second=1,next,n,i;
    printf("enter the no. of terms: ");
    scanf("%d", &n);
    printf("febonacciseries: ");
    for(i=1;i<=n;i++)
    {
        printf("%d", first);
        next=first+second;
        first=second;
        second=next;
    }
    return 0;
}